/**
 * Copyright 2011-2013 - Reliable Bits Software by Blommers IT. All Rights Reserved.
 * Author Rick Blommers
 */

#pragma once

#include <QFile>
#include <QHash>
#include <QMainWindow>
#include <QPoint>

class QComboBox;
class QFileSystemModel;
class QModelIndex;
class QTreeView;

class Application;
class FileTreeSideWidget;
class Project;


namespace edbee {
class TextEditorWidget;
class TextEditorDocument;
}

/// A main editor window
/// We probably need to clean this stuff and split it over multiple separte classes
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    int tabCount() const;
    QString tabFilename( int idx = -1 ) const;
    edbee::TextEditorWidget* tabEditor(int index=-1 ) const;
    int activeTabIndex() const;
    void setActiveTabIndex(int idx);

    FileTreeSideWidget* fileTreeSideWidget() const;

    void giveProject( Project* project );
    Project* project() const;

public slots:
    void openDirOrFile( const QString& path );
    void openDir( const QString& path );
    void openFile( const QString& file );
    void openFile();
    void newFile();
    void addEditorTab( edbee::TextEditorWidget* editor, const QString& fileName );
    void closeFileWithTabIndex( int idx=-1 );
    bool saveFile();
    bool saveFileAs();
    bool openProject( const QString& file );
    bool openProject();
    bool saveProject();
    bool saveProjectAs();

    void windowNew();
    void windowClose();

    void updatePersistedState();
    void updateTabName( int tabIndex=-1 );

    void activeTabChanged();
    void gotoNextTab();
    void gotoPrevTab();
    void gotoFile( const QString& file );

    void encodingChanged();
    void lineEndingChanged();
    void grammarChanged();

    void editorActionTrigged();
    void updateStateEditorActions();

protected slots:

    void showGotoEntryPopup();
    void showFindWidget();

    void updateActions();

//    void onPaste();
//    void onCopy();
//    void onCut();

protected:

    virtual void dropEvent(QDropEvent* event);
    virtual void dragEnterEvent( QDragEnterEvent* event );

    virtual void closeEvent( QCloseEvent* event );

signals:

    void windowClosed();


private:

    edbee::TextEditorWidget* createEditorWidget();

    QAction* action( const QString& name );
    void createEditorAction(const QString& id, const char* text);
    void createAction( const QString& id, const QString& text, const QKeySequence& keySequence, QObject* object, const char* slot );
    void constructActions();

    void constructUI();
    QComboBox* constructGrammarCombo();
    QComboBox* constructLineEndingCombo();
    QComboBox* constructEncodingCombo();
    void constructMenu();

    void connectSignals();

private:
    FileTreeSideWidget* fileTreeSideWidgetRef_;     ///< The side tree widget
    QTabWidget* tabWidgetRef_;                      ///< A reference to the tab widget
    QStatusBar* statusBarRef_;                      ///< The statusbar
    QComboBox* grammarComboRef_;                    ///< The grammar combobox
    QComboBox* lineEndingComboRef_;                 ///< The line-ending combobox
    QComboBox* encodingComboRef_;                   ///< The encodign combobox
    QHash<QString,QAction*> actionMap_;             ///< The actionmap with all actions for this window
    Project* project_;                              ///< The project that's coupled to this window
};

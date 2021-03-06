## Upcoming Release

edbee.app:

- add #105, Improved workspace support so multiple workspaces can be open at one time
- add #104, Add reveal in finder/explorer functionality
- add #63, Add duplicate file to the sidebar
- add #90, Add a config setting to to enable/disable the rendering of whitespaces
- add #89, Implement smarter backspace for the start of the line
- add #87, Add setting auto-reveal to keep the file tree-view in sync with active tab
- add #83, Pressing Enter in the filemenu should open the file in the editor
- add #64, Closing an active tab, puts the keyboard focus on the sidebar. Focus should stay in the editor
- add #82, Add remove item option to sidebar file tree
- add #81, Add new folder option to sidebar file tree
- add #62, Add create new file option to the tree view sidebar
- add #80, Add rename file support to the tree view
- add #57, Show active file and icon in the titlebar 
- add #27, Added file-changed check support when closing the window/application
- add #42, #88, Reveal in sidebar support added to context menu
- add #34, Switching tabs now can be done with a keyboard press
- add #47, Recent workspace list for quick workspace switching
- add #49, When closing the application the current workspace is saved w
- add #46, #51, #29, Added workspace save/load support
- add #19, added support for platform specific config files
- add #17, added a test-project to make the edbee app testable
- add #13, json configuration support
- add #44, clear history to file-root combobox in sidebar
- fix #102, Mousewheel shouldn't switch edit window when used on tab bar
- fix #54, Sort the grammar combobx alphabetically
- fix #26, Support multiple windows, with the help of a window manager
- fix #15, It now is possible to change to the font of the editor
- fix #14, Changing the language now automaticly updates the editor 


edbee.lib:

- add #108, #111, Added a DynamicTextRangeSet, a change aware rangeset, that automatically gets adjusted when the document changes.
- add #107, Implemented scoped/unscoped environment variable support
- add #33, Toggle comment line and comment block support using the TM_COMMENT_* environment variable structure.
- add #41, Duplicate Line support (Cmd+Shift+D)
- add #96, Multiple Cut line operations should append the lines together and grow the clipboard
- add #95, Command Delete should delete everything to the end of the current line
- add #93, Control Delete should delete the current 'word'
- add #94, Command Backspace should delete everything to the start of the current line
- add #91, Control Backspace should delete the current word
- add #85, Added scroll-past-end feature
- add #78, Added language independent smart tab support (enabled by default)
- add #79, Double clicking a selection with the control key again should remove the given selection and caret
- add #74, Added coalescing support for indenting / inserting tabs
- add #58, Pressing shift-delete now deletes the selected text
- add #43, Added right-click context-menu support to edbee. With default operations, cut, copy, paste and select all.
- add #36, Pressing shift-enter now inserts a newline
- add #31, Textsearching now also works with other ranges then textselection ranges
- fix #103, Renamed the *TextChange related classes. So it's more clear what the changes represent
- fix #73, Complete rewrite of coalescing (change-merging) algorithm, so all textchanges are mergable. (Fixes #98,#97,#95,#41,#99,#100,#101)
- fix #86, Pressing left or right when a selection is active shouldn't move the caret (current behavior is not-standard)
- fix #68, Adding a selection with Cmd+Mouse Double click shouldn't expand existing word selections
- fix #77, Pressing end of line on the last line, sometimes goes to the wrong location
- fix #76, Pressing enter doesn't scroll the horizontal window back to the first column
- fix #75, Goto pathname in treemenu doesn't display extension
- fix #72, TextDocument replaceRanges should calculate the ranges in stead of the TextChange event.
- fix #69, Plain Text was included twice by the grammar manager
- fix #57, Tab behaviour didn't work as expected when using space in stead of tab characters
- fix #48, Improved paste support with multiple lines, making it possible to copy/paste text per caret
- fix #61, Indent shouldn't indent the line after the text 
- fix #66, Grammar type detection (by filename) detected the wrong grammars. (it forgot to check the '.' )
- fix #40, text now is by default case insensitive
- fix #30, #32, Searching selection via the findcommand now result in soft undoable changes
- fix #20, Changing TextEditorConfig now automaticly updates the state of edbee.
- fix #21, Improved fallback pallette when a theme cannot be loaded. (fixes complete black screen)
- fix #16, linespacing issue, the space always was at least 1 pixel
- fix #2, made it possible to configure TextEditorConfig. (was hardcoded)


## v0.1.0 Initial Release

The initial release on Github. 

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Close;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Print;
    QAction *action_Exit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Delete;
    QAction *action_SelectAll;
    QAction *action_Find;
    QAction *action_Replace;
    QAction *action_FindNext;
    QAction *action_FindPrev;
    QAction *action_ZoomIn;
    QAction *action_ZoomOut;
    QAction *action_ZoomReset;
    QAction *action_FullScreen;
    QAction *action_About;
    QAction *action_AboutQt;
    QAction *action_Bold;
    QAction *action_Italic;
    QAction *action_Underline;
    QAction *action_StrikeThrough;
    QAction *action_AlignLeft;
    QAction *action_AlignCenter;
    QAction *action_AlignRight;
    QAction *action_AlignJustify;
    QAction *action_FontColor;
    QAction *action_Highlight;
    QAction *action_InsertImage;
    QAction *action_InsertLink;
    QAction *action_InsertTable;
    QAction *action_InsertBulletList;
    QAction *action_InsertNumberedList;
    QAction *action_InsertCode;
    QAction *action_InsertDateTime;
    QAction *action_SpellCheck;
    QAction *action_WordCount;
    QAction *action_SortLines;
    QAction *action_ConvertUppercase;
    QAction *action_ConvertLowercase;
    QAction *action_ConvertTitleCase;
    QAction *action_GoToLine;
    QAction *action_AddBookmark;
    QAction *action_PrevBookmark;
    QAction *action_NextBookmark;
    QAction *action_ClearBookmarks;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_Search;
    QMenu *menu_View;
    QMenu *menu_Help;
    QMenu *menu_Format;
    QMenu *menu_Insert;
    QMenu *menu_Tools;
    QMenu *menu_Navigation;
    QStatusBar *statusbar;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QToolBar *searchToolBar;
    QToolBar *viewToolBar;
    QToolBar *formatToolBar;
    QToolBar *insertToolBar;
    QToolBar *toolsToolBar;
    QToolBar *navigationToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_New = new QAction(MainWindow);
        action_New->setObjectName("action_New");
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName("action_Close");
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName("action_SaveAs");
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName("action_Print");
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName("action_Exit");
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName("action_Undo");
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName("action_Redo");
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName("action_Cut");
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName("action_Copy");
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName("action_Paste");
        action_Delete = new QAction(MainWindow);
        action_Delete->setObjectName("action_Delete");
        action_SelectAll = new QAction(MainWindow);
        action_SelectAll->setObjectName("action_SelectAll");
        action_Find = new QAction(MainWindow);
        action_Find->setObjectName("action_Find");
        action_Replace = new QAction(MainWindow);
        action_Replace->setObjectName("action_Replace");
        action_FindNext = new QAction(MainWindow);
        action_FindNext->setObjectName("action_FindNext");
        action_FindPrev = new QAction(MainWindow);
        action_FindPrev->setObjectName("action_FindPrev");
        action_ZoomIn = new QAction(MainWindow);
        action_ZoomIn->setObjectName("action_ZoomIn");
        action_ZoomOut = new QAction(MainWindow);
        action_ZoomOut->setObjectName("action_ZoomOut");
        action_ZoomReset = new QAction(MainWindow);
        action_ZoomReset->setObjectName("action_ZoomReset");
        action_FullScreen = new QAction(MainWindow);
        action_FullScreen->setObjectName("action_FullScreen");
        action_About = new QAction(MainWindow);
        action_About->setObjectName("action_About");
        action_AboutQt = new QAction(MainWindow);
        action_AboutQt->setObjectName("action_AboutQt");
        action_Bold = new QAction(MainWindow);
        action_Bold->setObjectName("action_Bold");
        action_Italic = new QAction(MainWindow);
        action_Italic->setObjectName("action_Italic");
        action_Underline = new QAction(MainWindow);
        action_Underline->setObjectName("action_Underline");
        action_StrikeThrough = new QAction(MainWindow);
        action_StrikeThrough->setObjectName("action_StrikeThrough");
        action_AlignLeft = new QAction(MainWindow);
        action_AlignLeft->setObjectName("action_AlignLeft");
        action_AlignCenter = new QAction(MainWindow);
        action_AlignCenter->setObjectName("action_AlignCenter");
        action_AlignRight = new QAction(MainWindow);
        action_AlignRight->setObjectName("action_AlignRight");
        action_AlignJustify = new QAction(MainWindow);
        action_AlignJustify->setObjectName("action_AlignJustify");
        action_FontColor = new QAction(MainWindow);
        action_FontColor->setObjectName("action_FontColor");
        action_Highlight = new QAction(MainWindow);
        action_Highlight->setObjectName("action_Highlight");
        action_InsertImage = new QAction(MainWindow);
        action_InsertImage->setObjectName("action_InsertImage");
        action_InsertLink = new QAction(MainWindow);
        action_InsertLink->setObjectName("action_InsertLink");
        action_InsertTable = new QAction(MainWindow);
        action_InsertTable->setObjectName("action_InsertTable");
        action_InsertBulletList = new QAction(MainWindow);
        action_InsertBulletList->setObjectName("action_InsertBulletList");
        action_InsertNumberedList = new QAction(MainWindow);
        action_InsertNumberedList->setObjectName("action_InsertNumberedList");
        action_InsertCode = new QAction(MainWindow);
        action_InsertCode->setObjectName("action_InsertCode");
        action_InsertDateTime = new QAction(MainWindow);
        action_InsertDateTime->setObjectName("action_InsertDateTime");
        action_SpellCheck = new QAction(MainWindow);
        action_SpellCheck->setObjectName("action_SpellCheck");
        action_WordCount = new QAction(MainWindow);
        action_WordCount->setObjectName("action_WordCount");
        action_SortLines = new QAction(MainWindow);
        action_SortLines->setObjectName("action_SortLines");
        action_ConvertUppercase = new QAction(MainWindow);
        action_ConvertUppercase->setObjectName("action_ConvertUppercase");
        action_ConvertLowercase = new QAction(MainWindow);
        action_ConvertLowercase->setObjectName("action_ConvertLowercase");
        action_ConvertTitleCase = new QAction(MainWindow);
        action_ConvertTitleCase->setObjectName("action_ConvertTitleCase");
        action_GoToLine = new QAction(MainWindow);
        action_GoToLine->setObjectName("action_GoToLine");
        action_AddBookmark = new QAction(MainWindow);
        action_AddBookmark->setObjectName("action_AddBookmark");
        action_PrevBookmark = new QAction(MainWindow);
        action_PrevBookmark->setObjectName("action_PrevBookmark");
        action_NextBookmark = new QAction(MainWindow);
        action_NextBookmark->setObjectName("action_NextBookmark");
        action_ClearBookmarks = new QAction(MainWindow);
        action_ClearBookmarks->setObjectName("action_ClearBookmarks");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_Search = new QMenu(menubar);
        menu_Search->setObjectName("menu_Search");
        menu_View = new QMenu(menubar);
        menu_View->setObjectName("menu_View");
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName("menu_Help");
        menu_Format = new QMenu(menubar);
        menu_Format->setObjectName("menu_Format");
        menu_Insert = new QMenu(menubar);
        menu_Insert->setObjectName("menu_Insert");
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName("menu_Tools");
        menu_Navigation = new QMenu(menubar);
        menu_Navigation->setObjectName("menu_Navigation");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName("fileToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, fileToolBar);
        editToolBar = new QToolBar(MainWindow);
        editToolBar->setObjectName("editToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, editToolBar);
        searchToolBar = new QToolBar(MainWindow);
        searchToolBar->setObjectName("searchToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, searchToolBar);
        viewToolBar = new QToolBar(MainWindow);
        viewToolBar->setObjectName("viewToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, viewToolBar);
        formatToolBar = new QToolBar(MainWindow);
        formatToolBar->setObjectName("formatToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, formatToolBar);
        insertToolBar = new QToolBar(MainWindow);
        insertToolBar->setObjectName("insertToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, insertToolBar);
        toolsToolBar = new QToolBar(MainWindow);
        toolsToolBar->setObjectName("toolsToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolsToolBar);
        navigationToolBar = new QToolBar(MainWindow);
        navigationToolBar->setObjectName("navigationToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, navigationToolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_Format->menuAction());
        menubar->addAction(menu_Insert->menuAction());
        menubar->addAction(menu_Search->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menubar->addAction(menu_Navigation->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_F->addAction(action_New);
        menu_F->addAction(action_Open);
        menu_F->addAction(action_Close);
        menu_F->addSeparator();
        menu_F->addAction(action_Save);
        menu_F->addAction(action_SaveAs);
        menu_F->addSeparator();
        menu_F->addAction(action_Print);
        menu_F->addSeparator();
        menu_F->addAction(action_Exit);
        menu_E->addAction(action_Undo);
        menu_E->addAction(action_Redo);
        menu_E->addSeparator();
        menu_E->addAction(action_Cut);
        menu_E->addAction(action_Copy);
        menu_E->addAction(action_Paste);
        menu_E->addAction(action_Delete);
        menu_E->addSeparator();
        menu_E->addAction(action_SelectAll);
        menu_Search->addAction(action_Find);
        menu_Search->addAction(action_Replace);
        menu_Search->addAction(action_FindNext);
        menu_Search->addAction(action_FindPrev);
        menu_View->addAction(action_ZoomIn);
        menu_View->addAction(action_ZoomOut);
        menu_View->addAction(action_ZoomReset);
        menu_View->addSeparator();
        menu_View->addAction(action_FullScreen);
        menu_Help->addAction(action_About);
        menu_Help->addAction(action_AboutQt);
        menu_Format->addAction(action_Bold);
        menu_Format->addAction(action_Italic);
        menu_Format->addAction(action_Underline);
        menu_Format->addAction(action_StrikeThrough);
        menu_Format->addSeparator();
        menu_Format->addAction(action_AlignLeft);
        menu_Format->addAction(action_AlignCenter);
        menu_Format->addAction(action_AlignRight);
        menu_Format->addAction(action_AlignJustify);
        menu_Format->addSeparator();
        menu_Format->addAction(action_FontColor);
        menu_Format->addAction(action_Highlight);
        menu_Insert->addAction(action_InsertImage);
        menu_Insert->addAction(action_InsertLink);
        menu_Insert->addAction(action_InsertTable);
        menu_Insert->addSeparator();
        menu_Insert->addAction(action_InsertBulletList);
        menu_Insert->addAction(action_InsertNumberedList);
        menu_Insert->addSeparator();
        menu_Insert->addAction(action_InsertCode);
        menu_Insert->addAction(action_InsertDateTime);
        menu_Tools->addAction(action_SpellCheck);
        menu_Tools->addAction(action_WordCount);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_SortLines);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_ConvertUppercase);
        menu_Tools->addAction(action_ConvertLowercase);
        menu_Tools->addAction(action_ConvertTitleCase);
        menu_Navigation->addAction(action_GoToLine);
        menu_Navigation->addSeparator();
        menu_Navigation->addAction(action_AddBookmark);
        menu_Navigation->addAction(action_PrevBookmark);
        menu_Navigation->addAction(action_NextBookmark);
        menu_Navigation->addAction(action_ClearBookmarks);
        fileToolBar->addAction(action_New);
        fileToolBar->addAction(action_Open);
        fileToolBar->addAction(action_Save);
        fileToolBar->addAction(action_SaveAs);
        fileToolBar->addSeparator();
        fileToolBar->addAction(action_Print);
        editToolBar->addAction(action_Undo);
        editToolBar->addAction(action_Redo);
        editToolBar->addSeparator();
        editToolBar->addAction(action_Cut);
        editToolBar->addAction(action_Copy);
        editToolBar->addAction(action_Paste);
        editToolBar->addAction(action_Delete);
        searchToolBar->addAction(action_Find);
        searchToolBar->addAction(action_Replace);
        viewToolBar->addAction(action_ZoomIn);
        viewToolBar->addAction(action_ZoomOut);
        viewToolBar->addAction(action_ZoomReset);
        formatToolBar->addAction(action_Bold);
        formatToolBar->addAction(action_Italic);
        formatToolBar->addAction(action_Underline);
        formatToolBar->addAction(action_StrikeThrough);
        formatToolBar->addSeparator();
        formatToolBar->addAction(action_AlignLeft);
        formatToolBar->addAction(action_AlignCenter);
        formatToolBar->addAction(action_AlignRight);
        formatToolBar->addAction(action_AlignJustify);
        formatToolBar->addSeparator();
        formatToolBar->addAction(action_FontColor);
        formatToolBar->addAction(action_Highlight);
        insertToolBar->addAction(action_InsertImage);
        insertToolBar->addAction(action_InsertLink);
        insertToolBar->addAction(action_InsertTable);
        insertToolBar->addSeparator();
        insertToolBar->addAction(action_InsertBulletList);
        insertToolBar->addAction(action_InsertNumberedList);
        insertToolBar->addSeparator();
        insertToolBar->addAction(action_InsertCode);
        insertToolBar->addAction(action_InsertDateTime);
        toolsToolBar->addAction(action_SpellCheck);
        toolsToolBar->addAction(action_WordCount);
        toolsToolBar->addAction(action_SortLines);
        toolsToolBar->addSeparator();
        toolsToolBar->addAction(action_ConvertUppercase);
        toolsToolBar->addAction(action_ConvertLowercase);
        toolsToolBar->addAction(action_ConvertTitleCase);
        navigationToolBar->addAction(action_GoToLine);
        navigationToolBar->addSeparator();
        navigationToolBar->addAction(action_AddBookmark);
        navigationToolBar->addAction(action_PrevBookmark);
        navigationToolBar->addAction(action_NextBookmark);
        navigationToolBar->addAction(action_ClearBookmarks);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_New->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236(&N)", nullptr));
#if QT_CONFIG(tooltip)
        action_New->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\346\252\224\346\241\210", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237(&O)", nullptr));
#if QT_CONFIG(tooltip)
        action_Open->setToolTip(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237\346\252\224\346\241\210", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Close->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(&C)", nullptr));
#if QT_CONFIG(tooltip)
        action_Close->setToolTip(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211\346\252\224\346\241\210", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Close->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(&S)", nullptr));
#if QT_CONFIG(tooltip)
        action_Save->setToolTip(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230\346\252\224\346\241\210", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\260\346\252\224(&A)", nullptr));
#if QT_CONFIG(tooltip)
        action_SaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\260\346\252\224", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_SaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Print->setText(QCoreApplication::translate("MainWindow", "\345\210\227\345\215\260(&P)", nullptr));
#if QT_CONFIG(tooltip)
        action_Print->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\227\345\215\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Print->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#if QT_CONFIG(tooltip)
        action_Exit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Exit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Undo->setText(QCoreApplication::translate("MainWindow", "\345\276\251\345\216\237(&U)", nullptr));
#if QT_CONFIG(tooltip)
        action_Undo->setToolTip(QCoreApplication::translate("MainWindow", "\345\276\251\345\216\237\344\270\212\344\270\200\346\255\245\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Redo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232(&R)", nullptr));
#if QT_CONFIG(tooltip)
        action_Redo->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232\344\270\212\344\270\200\346\255\245\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\344\270\213(&T)", nullptr));
#if QT_CONFIG(tooltip)
        action_Cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\344\270\213\351\201\270\345\217\226\345\205\247\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("MainWindow", "\350\244\207\350\243\275(&C)", nullptr));
#if QT_CONFIG(tooltip)
        action_Copy->setToolTip(QCoreApplication::translate("MainWindow", "\350\244\207\350\243\275\351\201\270\345\217\226\345\205\247\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("MainWindow", "\350\262\274\344\270\212(&P)", nullptr));
#if QT_CONFIG(tooltip)
        action_Paste->setToolTip(QCoreApplication::translate("MainWindow", "\350\262\274\344\270\212\345\211\252\350\262\274\347\260\277\345\205\247\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Delete->setText(QCoreApplication::translate("MainWindow", "\345\210\252\351\231\244(&D)", nullptr));
#if QT_CONFIG(tooltip)
        action_Delete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\252\351\231\244\351\201\270\345\217\226\345\205\247\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Delete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SelectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\201\270(&A)", nullptr));
#if QT_CONFIG(tooltip)
        action_SelectAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\201\270\345\205\247\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_SelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Find->setText(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276(&F)", nullptr));
#if QT_CONFIG(tooltip)
        action_Find->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Find->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Replace->setText(QCoreApplication::translate("MainWindow", "\345\217\226\344\273\243(&R)", nullptr));
#if QT_CONFIG(tooltip)
        action_Replace->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276\344\270\246\345\217\226\344\273\243\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Replace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        action_FindNext->setText(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276\344\270\213\344\270\200\345\200\213(&N)", nullptr));
#if QT_CONFIG(tooltip)
        action_FindNext->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276\344\270\213\344\270\200\345\200\213\347\254\246\345\220\210\351\240\205\347\233\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_FindNext->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_FindPrev->setText(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276\344\270\212\344\270\200\345\200\213(&P)", nullptr));
#if QT_CONFIG(tooltip)
        action_FindPrev->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\213\346\211\276\344\270\212\344\270\200\345\200\213\347\254\246\345\220\210\351\240\205\347\233\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_FindPrev->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247(&I)", nullptr));
#if QT_CONFIG(tooltip)
        action_ZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247\351\241\257\347\244\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\270\256\345\260\217(&O)", nullptr));
#if QT_CONFIG(tooltip)
        action_ZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\270\256\345\260\217\351\241\257\347\244\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ZoomReset->setText(QCoreApplication::translate("MainWindow", "\351\207\215\350\250\255\347\270\256\346\224\276(&R)", nullptr));
#if QT_CONFIG(tooltip)
        action_ZoomReset->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\350\250\255\347\202\272\351\240\220\350\250\255\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ZoomReset->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        action_FullScreen->setText(QCoreApplication::translate("MainWindow", "\345\205\250\350\236\242\345\271\225(&F)", nullptr));
#if QT_CONFIG(tooltip)
        action_FullScreen->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\207\346\217\233\345\205\250\350\236\242\345\271\225\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_FullScreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "\351\227\234\346\226\274(&A)", nullptr));
#if QT_CONFIG(tooltip)
        action_About->setToolTip(QCoreApplication::translate("MainWindow", "\351\227\234\346\226\274\346\255\244\347\250\213\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_AboutQt->setText(QCoreApplication::translate("MainWindow", "\351\227\234\346\226\274 Qt(&Q)", nullptr));
#if QT_CONFIG(tooltip)
        action_AboutQt->setToolTip(QCoreApplication::translate("MainWindow", "\351\227\234\346\226\274 Qt \346\241\206\346\236\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\351\253\224(&B)", nullptr));
#if QT_CONFIG(tooltip)
        action_Bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\351\253\224\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Bold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\351\253\224(&I)", nullptr));
#if QT_CONFIG(tooltip)
        action_Italic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\351\253\224\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Italic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Underline->setText(QCoreApplication::translate("MainWindow", "\345\272\225\347\267\232(&U)", nullptr));
#if QT_CONFIG(tooltip)
        action_Underline->setToolTip(QCoreApplication::translate("MainWindow", "\345\272\225\347\267\232\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Underline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        action_StrikeThrough->setText(QCoreApplication::translate("MainWindow", "\345\210\252\351\231\244\347\267\232(&K)", nullptr));
#if QT_CONFIG(tooltip)
        action_StrikeThrough->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\252\351\231\244\347\267\232\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        action_AlignLeft->setText(QCoreApplication::translate("MainWindow", "\351\235\240\345\267\246\345\260\215\351\275\212(&L)", nullptr));
#if QT_CONFIG(tooltip)
        action_AlignLeft->setToolTip(QCoreApplication::translate("MainWindow", "\351\235\240\345\267\246\345\260\215\351\275\212", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_AlignLeft->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        action_AlignCenter->setText(QCoreApplication::translate("MainWindow", "\347\275\256\344\270\255(&C)", nullptr));
#if QT_CONFIG(tooltip)
        action_AlignCenter->setToolTip(QCoreApplication::translate("MainWindow", "\347\275\256\344\270\255\345\260\215\351\275\212", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_AlignCenter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        action_AlignRight->setText(QCoreApplication::translate("MainWindow", "\351\235\240\345\217\263\345\260\215\351\275\212(&R)", nullptr));
#if QT_CONFIG(tooltip)
        action_AlignRight->setToolTip(QCoreApplication::translate("MainWindow", "\351\235\240\345\217\263\345\260\215\351\275\212", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_AlignRight->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        action_AlignJustify->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\217\263\345\260\215\351\275\212(&J)", nullptr));
#if QT_CONFIG(tooltip)
        action_AlignJustify->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\345\217\263\345\260\215\351\275\212", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_AlignJustify->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        action_FontColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\345\236\213\351\241\217\350\211\262(&F)", nullptr));
#if QT_CONFIG(tooltip)
        action_FontColor->setToolTip(QCoreApplication::translate("MainWindow", "\350\250\255\345\256\232\345\255\227\345\236\213\351\241\217\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Highlight->setText(QCoreApplication::translate("MainWindow", "\350\236\242\345\205\211\346\250\231\347\244\272(&H)", nullptr));
#if QT_CONFIG(tooltip)
        action_Highlight->setToolTip(QCoreApplication::translate("MainWindow", "\350\236\242\345\205\211\346\250\231\347\244\272\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        action_InsertImage->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\345\234\226\347\211\207(&I)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertImage->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\345\234\226\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_InsertLink->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\200\243\347\265\220(&L)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertLink->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\266\205\351\200\243\347\265\220", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_InsertLink->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        action_InsertTable->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\250\346\240\274(&T)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertTable->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\250\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        action_InsertBulletList->setText(QCoreApplication::translate("MainWindow", "\351\240\205\347\233\256\347\254\246\350\231\237\346\270\205\345\226\256(&B)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertBulletList->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\240\205\347\233\256\347\254\246\350\231\237\346\270\205\345\226\256", nullptr));
#endif // QT_CONFIG(tooltip)
        action_InsertNumberedList->setText(QCoreApplication::translate("MainWindow", "\347\267\250\350\231\237\346\270\205\345\226\256(&N)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertNumberedList->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\347\267\250\350\231\237\346\270\205\345\226\256", nullptr));
#endif // QT_CONFIG(tooltip)
        action_InsertCode->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\347\250\213\345\274\217\347\242\274(&C)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertCode->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\347\250\213\345\274\217\347\242\274\345\215\200\345\241\212", nullptr));
#endif // QT_CONFIG(tooltip)
        action_InsertDateTime->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\346\227\245\346\234\237\346\231\202\351\226\223(&D)", nullptr));
#if QT_CONFIG(tooltip)
        action_InsertDateTime->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\347\233\256\345\211\215\346\227\245\346\234\237\345\222\214\346\231\202\351\226\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_InsertDateTime->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SpellCheck->setText(QCoreApplication::translate("MainWindow", "\346\213\274\345\255\227\346\252\242\346\237\245(&S)", nullptr));
#if QT_CONFIG(tooltip)
        action_SpellCheck->setToolTip(QCoreApplication::translate("MainWindow", "\345\237\267\350\241\214\346\213\274\345\255\227\346\252\242\346\237\245", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_SpellCheck->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        action_WordCount->setText(QCoreApplication::translate("MainWindow", "\345\255\227\346\225\270\347\265\261\350\250\210(&W)", nullptr));
#if QT_CONFIG(tooltip)
        action_WordCount->setToolTip(QCoreApplication::translate("MainWindow", "\351\241\257\347\244\272\345\255\227\346\225\270\347\265\261\350\250\210", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SortLines->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\350\241\214(&O)", nullptr));
#if QT_CONFIG(tooltip)
        action_SortLines->setToolTip(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\351\201\270\345\217\226\347\232\204\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ConvertUppercase->setText(QCoreApplication::translate("MainWindow", "\350\275\211\346\217\233\347\202\272\345\244\247\345\257\253(&U)", nullptr));
#if QT_CONFIG(tooltip)
        action_ConvertUppercase->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\207\351\201\270\345\217\226\346\226\207\345\255\227\350\275\211\346\217\233\347\202\272\345\244\247\345\257\253", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ConvertUppercase->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+U", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ConvertLowercase->setText(QCoreApplication::translate("MainWindow", "\350\275\211\346\217\233\347\202\272\345\260\217\345\257\253(&L)", nullptr));
#if QT_CONFIG(tooltip)
        action_ConvertLowercase->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\207\351\201\270\345\217\226\346\226\207\345\255\227\350\275\211\346\217\233\347\202\272\345\260\217\345\257\253", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ConvertLowercase->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ConvertTitleCase->setText(QCoreApplication::translate("MainWindow", "\350\275\211\346\217\233\347\202\272\346\250\231\351\241\214\345\244\247\345\260\217\345\257\253(&T)", nullptr));
#if QT_CONFIG(tooltip)
        action_ConvertTitleCase->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\207\351\201\270\345\217\226\346\226\207\345\255\227\350\275\211\346\217\233\347\202\272\346\250\231\351\241\214\345\244\247\345\260\217\345\257\253", nullptr));
#endif // QT_CONFIG(tooltip)
        action_GoToLine->setText(QCoreApplication::translate("MainWindow", "\345\211\215\345\276\200\350\241\214(&G)", nullptr));
#if QT_CONFIG(tooltip)
        action_GoToLine->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\345\276\200\346\214\207\345\256\232\350\241\214\350\231\237", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_GoToLine->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        action_AddBookmark->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\346\233\270\347\261\244(&A)", nullptr));
#if QT_CONFIG(tooltip)
        action_AddBookmark->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\250\347\233\256\345\211\215\344\275\215\347\275\256\346\226\260\345\242\236\346\233\270\347\261\244", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_AddBookmark->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        action_PrevBookmark->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\345\200\213\346\233\270\347\261\244(&P)", nullptr));
#if QT_CONFIG(tooltip)
        action_PrevBookmark->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\345\276\200\344\270\212\344\270\200\345\200\213\346\233\270\347\261\244", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_PrevBookmark->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        action_NextBookmark->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\345\200\213\346\233\270\347\261\244(&N)", nullptr));
#if QT_CONFIG(tooltip)
        action_NextBookmark->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\345\276\200\344\270\213\344\270\200\345\200\213\346\233\270\347\261\244", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_NextBookmark->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+.", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ClearBookmarks->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\211\200\346\234\211\346\233\270\347\261\244(&C)", nullptr));
#if QT_CONFIG(tooltip)
        action_ClearBookmarks->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\211\200\346\234\211\346\233\270\347\261\244", nullptr));
#endif // QT_CONFIG(tooltip)
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257(&E)", nullptr));
        menu_Search->setTitle(QCoreApplication::translate("MainWindow", "\346\220\234\345\260\213(&S)", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "\346\252\242\350\246\226(&V)", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "\350\252\252\346\230\216(&H)", nullptr));
        menu_Format->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        menu_Insert->setTitle(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245(&I)", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267(&T)", nullptr));
        menu_Navigation->setTitle(QCoreApplication::translate("MainWindow", "\345\260\216\350\246\275(&N)", nullptr));
        fileToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210\345\267\245\345\205\267\345\210\227", nullptr));
        editToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257\345\267\245\345\205\267\345\210\227", nullptr));
        searchToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\220\234\345\260\213\345\267\245\345\205\267\345\210\227", nullptr));
        viewToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\252\242\350\246\226\345\267\245\345\205\267\345\210\227", nullptr));
        formatToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217\345\267\245\345\205\267\345\210\227", nullptr));
        insertToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\345\267\245\345\205\267\345\210\227", nullptr));
        toolsToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\345\267\245\345\205\267\345\210\227", nullptr));
        navigationToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\260\216\350\246\275\345\267\245\345\205\267\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

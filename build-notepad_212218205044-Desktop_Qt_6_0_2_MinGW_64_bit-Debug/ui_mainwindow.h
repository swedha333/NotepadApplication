/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionQuit;
    QAction *actionPrint;
    QAction *actionAbout_Qt;
    QAction *actionSelect_Font;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderlined;
    QAction *actionFont_Color;
    QAction *actionFont_Background;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout_Qt;
    QMenu *menuFont;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icons/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/icons/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon9);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon10);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/icons/aboutqt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon11);
        actionSelect_Font = new QAction(MainWindow);
        actionSelect_Font->setObjectName(QString::fromUtf8("actionSelect_Font"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/icons/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_Font->setIcon(icon12);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon13);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/icons/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon14);
        actionUnderlined = new QAction(MainWindow);
        actionUnderlined->setObjectName(QString::fromUtf8("actionUnderlined"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/img/icons/underlined.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderlined->setIcon(icon15);
        actionFont_Color = new QAction(MainWindow);
        actionFont_Color->setObjectName(QString::fromUtf8("actionFont_Color"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/img/icons/fontcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_Color->setIcon(icon16);
        actionFont_Background = new QAction(MainWindow);
        actionFont_Background->setObjectName(QString::fromUtf8("actionFont_Background"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/img/icons/fontbg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_Background->setIcon(icon17);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout_Qt = new QMenu(menubar);
        menuAbout_Qt->setObjectName(QString::fromUtf8("menuAbout_Qt"));
        menuFont = new QMenu(menubar);
        menuFont->setObjectName(QString::fromUtf8("menuFont"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout_Qt->menuAction());
        menubar->addAction(menuFont->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionQuit);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPrint);
        menuAbout_Qt->addAction(actionAbout_Qt);
        menuFont->addAction(actionSelect_Font);
        menuFont->addAction(actionBold);
        menuFont->addAction(actionItalic);
        menuFont->addAction(actionUnderlined);
        menuFont->addAction(actionFont_Color);
        menuFont->addAction(actionFont_Background);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionQuit);
        toolBar->addSeparator();
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionAbout_Qt);
        toolBar->addAction(actionSelect_Font);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderlined);
        toolBar->addSeparator();
        toolBar->addAction(actionFont_Color);
        toolBar->addAction(actionFont_Background);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionSelect_Font->setText(QCoreApplication::translate("MainWindow", "Select Font", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
        actionUnderlined->setText(QCoreApplication::translate("MainWindow", "Underlined", nullptr));
        actionFont_Color->setText(QCoreApplication::translate("MainWindow", "Font Color", nullptr));
        actionFont_Background->setText(QCoreApplication::translate("MainWindow", "Font Background", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout_Qt->setTitle(QCoreApplication::translate("MainWindow", "About ", nullptr));
        menuFont->setTitle(QCoreApplication::translate("MainWindow", "Font", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

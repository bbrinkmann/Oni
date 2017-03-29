/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionExit;
    QAction *actionSmallLayout;
    QAction *actionNormalLayout;
    QAction *actionLargeLayout;
    QAction *actionFullScreen;
    QAction *actionTinyLayout;
    QAction *actionAboutOni;
    QAction *actionAboutQt;
    QAction *actionSaveAs;
    QAction *actionHideNotation;
    QAction *actionFlipOnce;
    QAction *actionFlipEveryMove;
    QAction *actionSetupPosition;
    QAction *actionResign;
    QAction *actionAxisLabeling;
    QAction *actionRedEasy;
    QAction *actionBlueEasy;
    QAction *actionBlueMedium;
    QAction *actionBlueHard;
    QAction *actionRedMedium;
    QAction *actionRedHard;
    QAction *actionPreviousMove;
    QAction *actionNextMove;
    QAction *actionStartingPosition;
    QAction *actionLastMove;
    QWidget *centralWidget;
    QGraphicsView *view;
    QListWidget *notation;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QMenu *menuLayout;
    QMenu *menuAbout;
    QMenu *menuSettings;
    QMenu *menuFlipBoard;
    QMenu *menuMatch;
    QMenu *menuGo_to;
    QMenu *menuEngine;
    QMenu *menuPlayRed;
    QMenu *menuPlayBlue;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(984, 522);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSmallLayout = new QAction(MainWindow);
        actionSmallLayout->setObjectName(QStringLiteral("actionSmallLayout"));
        actionSmallLayout->setCheckable(true);
        actionNormalLayout = new QAction(MainWindow);
        actionNormalLayout->setObjectName(QStringLiteral("actionNormalLayout"));
        actionNormalLayout->setCheckable(true);
        actionNormalLayout->setChecked(true);
        actionLargeLayout = new QAction(MainWindow);
        actionLargeLayout->setObjectName(QStringLiteral("actionLargeLayout"));
        actionLargeLayout->setCheckable(true);
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QStringLiteral("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        actionTinyLayout = new QAction(MainWindow);
        actionTinyLayout->setObjectName(QStringLiteral("actionTinyLayout"));
        actionTinyLayout->setCheckable(true);
        actionAboutOni = new QAction(MainWindow);
        actionAboutOni->setObjectName(QStringLiteral("actionAboutOni"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionHideNotation = new QAction(MainWindow);
        actionHideNotation->setObjectName(QStringLiteral("actionHideNotation"));
        actionHideNotation->setCheckable(true);
        actionFlipOnce = new QAction(MainWindow);
        actionFlipOnce->setObjectName(QStringLiteral("actionFlipOnce"));
        actionFlipEveryMove = new QAction(MainWindow);
        actionFlipEveryMove->setObjectName(QStringLiteral("actionFlipEveryMove"));
        actionFlipEveryMove->setCheckable(true);
        actionSetupPosition = new QAction(MainWindow);
        actionSetupPosition->setObjectName(QStringLiteral("actionSetupPosition"));
        actionResign = new QAction(MainWindow);
        actionResign->setObjectName(QStringLiteral("actionResign"));
        actionAxisLabeling = new QAction(MainWindow);
        actionAxisLabeling->setObjectName(QStringLiteral("actionAxisLabeling"));
        actionAxisLabeling->setCheckable(true);
        actionAxisLabeling->setChecked(true);
        actionRedEasy = new QAction(MainWindow);
        actionRedEasy->setObjectName(QStringLiteral("actionRedEasy"));
        actionRedEasy->setCheckable(true);
        actionBlueEasy = new QAction(MainWindow);
        actionBlueEasy->setObjectName(QStringLiteral("actionBlueEasy"));
        actionBlueEasy->setCheckable(true);
        actionBlueMedium = new QAction(MainWindow);
        actionBlueMedium->setObjectName(QStringLiteral("actionBlueMedium"));
        actionBlueMedium->setCheckable(true);
        actionBlueMedium->setChecked(true);
        actionBlueHard = new QAction(MainWindow);
        actionBlueHard->setObjectName(QStringLiteral("actionBlueHard"));
        actionBlueHard->setCheckable(true);
        actionRedMedium = new QAction(MainWindow);
        actionRedMedium->setObjectName(QStringLiteral("actionRedMedium"));
        actionRedMedium->setCheckable(true);
        actionRedMedium->setChecked(false);
        actionRedHard = new QAction(MainWindow);
        actionRedHard->setObjectName(QStringLiteral("actionRedHard"));
        actionRedHard->setCheckable(true);
        actionPreviousMove = new QAction(MainWindow);
        actionPreviousMove->setObjectName(QStringLiteral("actionPreviousMove"));
        actionNextMove = new QAction(MainWindow);
        actionNextMove->setObjectName(QStringLiteral("actionNextMove"));
        actionStartingPosition = new QAction(MainWindow);
        actionStartingPosition->setObjectName(QStringLiteral("actionStartingPosition"));
        actionLastMove = new QAction(MainWindow);
        actionLastMove->setObjectName(QStringLiteral("actionLastMove"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        view = new QGraphicsView(centralWidget);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(0, 0, 256, 192));
        notation = new QListWidget(centralWidget);
        notation->setObjectName(QStringLiteral("notation"));
        notation->setGeometry(QRect(270, 0, 191, 161));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 984, 21));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QStringLiteral("menuGame"));
        menuLayout = new QMenu(menuBar);
        menuLayout->setObjectName(QStringLiteral("menuLayout"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuAbout->setLocale(QLocale(QLocale::English, QLocale::Germany));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuFlipBoard = new QMenu(menuSettings);
        menuFlipBoard->setObjectName(QStringLiteral("menuFlipBoard"));
        menuMatch = new QMenu(menuBar);
        menuMatch->setObjectName(QStringLiteral("menuMatch"));
        menuGo_to = new QMenu(menuMatch);
        menuGo_to->setObjectName(QStringLiteral("menuGo_to"));
        menuEngine = new QMenu(menuBar);
        menuEngine->setObjectName(QStringLiteral("menuEngine"));
        menuPlayRed = new QMenu(menuEngine);
        menuPlayRed->setObjectName(QStringLiteral("menuPlayRed"));
        menuPlayBlue = new QMenu(menuEngine);
        menuPlayBlue->setObjectName(QStringLiteral("menuPlayBlue"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuGame->menuAction());
        menuBar->addAction(menuMatch->menuAction());
        menuBar->addAction(menuEngine->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuLayout->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuGame->addAction(actionNew);
        menuGame->addAction(actionSetupPosition);
        menuGame->addSeparator();
        menuGame->addAction(actionLoad);
        menuGame->addAction(actionSave);
        menuGame->addAction(actionSaveAs);
        menuGame->addSeparator();
        menuGame->addAction(actionExit);
        menuLayout->addAction(actionTinyLayout);
        menuLayout->addAction(actionSmallLayout);
        menuLayout->addAction(actionNormalLayout);
        menuLayout->addAction(actionLargeLayout);
        menuLayout->addSeparator();
        menuLayout->addAction(actionFullScreen);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAboutOni);
        menuAbout->addAction(actionAboutQt);
        menuSettings->addAction(menuFlipBoard->menuAction());
        menuSettings->addAction(actionHideNotation);
        menuSettings->addAction(actionAxisLabeling);
        menuFlipBoard->addAction(actionFlipOnce);
        menuFlipBoard->addAction(actionFlipEveryMove);
        menuMatch->addAction(menuGo_to->menuAction());
        menuMatch->addAction(actionResign);
        menuGo_to->addAction(actionStartingPosition);
        menuGo_to->addAction(actionPreviousMove);
        menuGo_to->addAction(actionNextMove);
        menuGo_to->addAction(actionLastMove);
        menuEngine->addAction(menuPlayRed->menuAction());
        menuEngine->addAction(menuPlayBlue->menuAction());
        menuPlayRed->addAction(actionRedEasy);
        menuPlayRed->addAction(actionRedMedium);
        menuPlayRed->addAction(actionRedHard);
        menuPlayBlue->addAction(actionBlueEasy);
        menuPlayBlue->addAction(actionBlueMedium);
        menuPlayBlue->addAction(actionBlueHard);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "&New", Q_NULLPTR));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionLoad->setText(QApplication::translate("MainWindow", "&Load", Q_NULLPTR));
        actionLoad->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        actionSmallLayout->setText(QApplication::translate("MainWindow", "&Small", Q_NULLPTR));
        actionSmallLayout->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+S", Q_NULLPTR));
        actionNormalLayout->setText(QApplication::translate("MainWindow", "&Normal", Q_NULLPTR));
        actionNormalLayout->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+N", Q_NULLPTR));
        actionLargeLayout->setText(QApplication::translate("MainWindow", "&Large", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLargeLayout->setToolTip(QApplication::translate("MainWindow", "Large", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLargeLayout->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+L", Q_NULLPTR));
        actionFullScreen->setText(QApplication::translate("MainWindow", "&FullScreen", Q_NULLPTR));
        actionFullScreen->setShortcut(QApplication::translate("MainWindow", "Alt+Return", Q_NULLPTR));
        actionTinyLayout->setText(QApplication::translate("MainWindow", "&Tiny", Q_NULLPTR));
        actionTinyLayout->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+T", Q_NULLPTR));
        actionAboutOni->setText(QApplication::translate("MainWindow", "&About Oni", Q_NULLPTR));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About &Qt", Q_NULLPTR));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As", Q_NULLPTR));
        actionSaveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
        actionHideNotation->setText(QApplication::translate("MainWindow", "Hide &notation", Q_NULLPTR));
        actionHideNotation->setShortcut(QApplication::translate("MainWindow", "F2", Q_NULLPTR));
        actionFlipOnce->setText(QApplication::translate("MainWindow", "&Once", Q_NULLPTR));
        actionFlipOnce->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
        actionFlipEveryMove->setText(QApplication::translate("MainWindow", "&Every move", Q_NULLPTR));
        actionFlipEveryMove->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+F", Q_NULLPTR));
        actionSetupPosition->setText(QApplication::translate("MainWindow", "Setup &position", Q_NULLPTR));
        actionSetupPosition->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
        actionResign->setText(QApplication::translate("MainWindow", "&Resign", Q_NULLPTR));
        actionResign->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        actionAxisLabeling->setText(QApplication::translate("MainWindow", "&Axis labeling", Q_NULLPTR));
        actionAxisLabeling->setShortcut(QApplication::translate("MainWindow", "F3", Q_NULLPTR));
        actionRedEasy->setText(QApplication::translate("MainWindow", "&Easy", Q_NULLPTR));
        actionRedEasy->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+1", Q_NULLPTR));
        actionBlueEasy->setText(QApplication::translate("MainWindow", "&Easy", Q_NULLPTR));
        actionBlueEasy->setShortcut(QApplication::translate("MainWindow", "Ctrl+1", Q_NULLPTR));
        actionBlueMedium->setText(QApplication::translate("MainWindow", "&Medium", Q_NULLPTR));
        actionBlueMedium->setShortcut(QApplication::translate("MainWindow", "Ctrl+2", Q_NULLPTR));
        actionBlueHard->setText(QApplication::translate("MainWindow", "&Hard", Q_NULLPTR));
        actionBlueHard->setShortcut(QApplication::translate("MainWindow", "Ctrl+3", Q_NULLPTR));
        actionRedMedium->setText(QApplication::translate("MainWindow", "&Medium", Q_NULLPTR));
        actionRedMedium->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+2", Q_NULLPTR));
        actionRedHard->setText(QApplication::translate("MainWindow", "&Hard", Q_NULLPTR));
        actionRedHard->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+3", Q_NULLPTR));
        actionPreviousMove->setText(QApplication::translate("MainWindow", "&Previous move", Q_NULLPTR));
        actionPreviousMove->setShortcut(QApplication::translate("MainWindow", "Left", Q_NULLPTR));
        actionNextMove->setText(QApplication::translate("MainWindow", "&Next move", Q_NULLPTR));
        actionNextMove->setShortcut(QApplication::translate("MainWindow", "Right", Q_NULLPTR));
        actionStartingPosition->setText(QApplication::translate("MainWindow", "&Starting position", Q_NULLPTR));
        actionStartingPosition->setShortcut(QApplication::translate("MainWindow", "Up", Q_NULLPTR));
        actionLastMove->setText(QApplication::translate("MainWindow", "&Last move", Q_NULLPTR));
        actionLastMove->setShortcut(QApplication::translate("MainWindow", "Down", Q_NULLPTR));
        menuGame->setTitle(QApplication::translate("MainWindow", "&Game", Q_NULLPTR));
        menuLayout->setTitle(QApplication::translate("MainWindow", "&Layout", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        menuFlipBoard->setTitle(QApplication::translate("MainWindow", "&Flip board", Q_NULLPTR));
        menuMatch->setTitle(QApplication::translate("MainWindow", "Match", Q_NULLPTR));
        menuGo_to->setTitle(QApplication::translate("MainWindow", "Go to", Q_NULLPTR));
        menuEngine->setTitle(QApplication::translate("MainWindow", "&Engine", Q_NULLPTR));
        menuPlayRed->setTitle(QApplication::translate("MainWindow", "Play &red", Q_NULLPTR));
        menuPlayBlue->setTitle(QApplication::translate("MainWindow", "Play &blue", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionReplay;
    QAction *actionStop;
    QAction *actionLookupState;
    QAction *actionShowThumbnails;
    QAction *actionTrim;
    QAction *actionToggleCalls;
    QAction *actionEnableAllCalls;
    QAction *actionOptions;
    QAction *actionNew;
    QAction *actionFind;
    QAction *actionGo;
    QAction *actionGoFrameStart;
    QAction *actionGoFrameEnd;
    QAction *actionShowErrorsDock;
    QAction *actionShowProfileDialog;
    QAction *actionProfile;
    QAction *actionLeakTrace;
    QAction *actionRecentLaunches;
    QWidget *centralwidget;
    QVBoxLayout *centralLayout;
    QTreeView *callView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menu_Trace;
    QMenu *menuView;
    QStatusBar *statusbar;
    QDockWidget *detailsDock;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *detailsWebView;
    QDockWidget *stateDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *stateTabWidget;
    QWidget *parametersTab;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *nonDefaultsCB;
    QTreeWidget *stateTreeWidget;
    QWidget *shadersTab;
    QWidget *surfacesTab;
    QGridLayout *gridLayout;
    QCheckBox *surfacesOpaqueCB;
    QCheckBox *surfacesAlphaCB;
    QCheckBox *surfacesResolveMSAA;
    QTreeWidget *surfacesTreeWidget;
    QWidget *uniformsTab;
    QVBoxLayout *verticalLayout_6;
    QTreeWidget *uniformsTreeWidget;
    QWidget *buffersTab;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *buffersTreeWidget;
    QWidget *ssbTab;
    QVBoxLayout *verticalLayout_8;
    QTreeWidget *ssbsTreeWidget;
    QDockWidget *vertexDataDock;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *vertexTypeCB;
    QLabel *label_2;
    QSpinBox *vertexStrideSB;
    QLabel *label_4;
    QSpinBox *vertexComponentsSB;
    QLabel *label_3;
    QSpinBox *startingOffsetSB;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *vertexInterpretButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bufferExportButton;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *vertexDataListWidget;
    QDockWidget *errorsDock;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *errorsTreeWidget;
    QDockWidget *backtraceDock;
    QWidget *dockWidgetContents_5;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *backtraceBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(787, 756);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/document-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionQuit->setShortcutContext(Qt::ApplicationShortcut);
        actionQuit->setMenuRole(QAction::QuitRole);
        actionReplay = new QAction(MainWindow);
        actionReplay->setObjectName(QString::fromUtf8("actionReplay"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplay->setIcon(icon3);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/media-playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionLookupState = new QAction(MainWindow);
        actionLookupState->setObjectName(QString::fromUtf8("actionLookupState"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/media-record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLookupState->setIcon(icon5);
        actionShowThumbnails = new QAction(MainWindow);
        actionShowThumbnails->setObjectName(QString::fromUtf8("actionShowThumbnails"));
        actionTrim = new QAction(MainWindow);
        actionTrim->setObjectName(QString::fromUtf8("actionTrim"));
        actionToggleCalls = new QAction(MainWindow);
        actionToggleCalls->setObjectName(QString::fromUtf8("actionToggleCalls"));
        actionEnableAllCalls = new QAction(MainWindow);
        actionEnableAllCalls->setObjectName(QString::fromUtf8("actionEnableAllCalls"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon6);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon7);
        actionGo = new QAction(MainWindow);
        actionGo->setObjectName(QString::fromUtf8("actionGo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/go-jump.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo->setIcon(icon8);
        actionGoFrameStart = new QAction(MainWindow);
        actionGoFrameStart->setObjectName(QString::fromUtf8("actionGoFrameStart"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/go-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGoFrameStart->setIcon(icon9);
        actionGoFrameEnd = new QAction(MainWindow);
        actionGoFrameEnd->setObjectName(QString::fromUtf8("actionGoFrameEnd"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/go-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGoFrameEnd->setIcon(icon10);
        actionShowErrorsDock = new QAction(MainWindow);
        actionShowErrorsDock->setObjectName(QString::fromUtf8("actionShowErrorsDock"));
        actionShowErrorsDock->setCheckable(true);
        actionShowErrorsDock->setEnabled(false);
        actionShowProfileDialog = new QAction(MainWindow);
        actionShowProfileDialog->setObjectName(QString::fromUtf8("actionShowProfileDialog"));
        actionShowProfileDialog->setEnabled(false);
        actionProfile = new QAction(MainWindow);
        actionProfile->setObjectName(QString::fromUtf8("actionProfile"));
        actionLeakTrace = new QAction(MainWindow);
        actionLeakTrace->setObjectName(QString::fromUtf8("actionLeakTrace"));
        actionRecentLaunches = new QAction(MainWindow);
        actionRecentLaunches->setObjectName(QString::fromUtf8("actionRecentLaunches"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralLayout = new QVBoxLayout(centralwidget);
        centralLayout->setObjectName(QString::fromUtf8("centralLayout"));
        callView = new QTreeView(centralwidget);
        callView->setObjectName(QString::fromUtf8("callView"));
        callView->setAlternatingRowColors(true);
        callView->setTextElideMode(Qt::ElideMiddle);
        callView->setUniformRowHeights(true);

        centralLayout->addWidget(callView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 787, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menu_Trace = new QMenu(menubar);
        menu_Trace->setObjectName(QString::fromUtf8("menu_Trace"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        detailsDock = new QDockWidget(MainWindow);
        detailsDock->setObjectName(QString::fromUtf8("detailsDock"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(detailsDock->sizePolicy().hasHeightForWidth());
        detailsDock->setSizePolicy(sizePolicy);
        detailsDock->setMinimumSize(QSize(85, 100));
        detailsDock->setFloating(false);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        detailsWebView = new QTextBrowser(dockWidgetContents);
        detailsWebView->setObjectName(QString::fromUtf8("detailsWebView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(detailsWebView->sizePolicy().hasHeightForWidth());
        detailsWebView->setSizePolicy(sizePolicy1);
        detailsWebView->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(detailsWebView);

        detailsDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, detailsDock);
        stateDock = new QDockWidget(MainWindow);
        stateDock->setObjectName(QString::fromUtf8("stateDock"));
        stateDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stateTabWidget = new QTabWidget(dockWidgetContents_2);
        stateTabWidget->setObjectName(QString::fromUtf8("stateTabWidget"));
        parametersTab = new QWidget();
        parametersTab->setObjectName(QString::fromUtf8("parametersTab"));
        verticalLayout_3 = new QVBoxLayout(parametersTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        nonDefaultsCB = new QCheckBox(parametersTab);
        nonDefaultsCB->setObjectName(QString::fromUtf8("nonDefaultsCB"));

        verticalLayout_3->addWidget(nonDefaultsCB);

        stateTreeWidget = new QTreeWidget(parametersTab);
        stateTreeWidget->setObjectName(QString::fromUtf8("stateTreeWidget"));
        stateTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stateTreeWidget->setAlternatingRowColors(true);
        stateTreeWidget->setSortingEnabled(true);
        stateTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_3->addWidget(stateTreeWidget);

        stateTabWidget->addTab(parametersTab, QString());
        shadersTab = new QWidget();
        shadersTab->setObjectName(QString::fromUtf8("shadersTab"));
        stateTabWidget->addTab(shadersTab, QString());
        surfacesTab = new QWidget();
        surfacesTab->setObjectName(QString::fromUtf8("surfacesTab"));
        gridLayout = new QGridLayout(surfacesTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        surfacesOpaqueCB = new QCheckBox(surfacesTab);
        surfacesOpaqueCB->setObjectName(QString::fromUtf8("surfacesOpaqueCB"));

        gridLayout->addWidget(surfacesOpaqueCB, 1, 0, 1, 1);

        surfacesAlphaCB = new QCheckBox(surfacesTab);
        surfacesAlphaCB->setObjectName(QString::fromUtf8("surfacesAlphaCB"));

        gridLayout->addWidget(surfacesAlphaCB, 1, 1, 1, 1);

        surfacesResolveMSAA = new QCheckBox(surfacesTab);
        surfacesResolveMSAA->setObjectName(QString::fromUtf8("surfacesResolveMSAA"));
        surfacesResolveMSAA->setChecked(true);

        gridLayout->addWidget(surfacesResolveMSAA, 1, 2, 1, 1);

        surfacesTreeWidget = new QTreeWidget(surfacesTab);
        surfacesTreeWidget->setObjectName(QString::fromUtf8("surfacesTreeWidget"));

        gridLayout->addWidget(surfacesTreeWidget, 0, 0, 1, 3);

        stateTabWidget->addTab(surfacesTab, QString());
        uniformsTab = new QWidget();
        uniformsTab->setObjectName(QString::fromUtf8("uniformsTab"));
        verticalLayout_6 = new QVBoxLayout(uniformsTab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        uniformsTreeWidget = new QTreeWidget(uniformsTab);
        uniformsTreeWidget->setObjectName(QString::fromUtf8("uniformsTreeWidget"));
        uniformsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        uniformsTreeWidget->setAlternatingRowColors(true);
        uniformsTreeWidget->setSortingEnabled(true);
        uniformsTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_6->addWidget(uniformsTreeWidget);

        stateTabWidget->addTab(uniformsTab, QString());
        buffersTab = new QWidget();
        buffersTab->setObjectName(QString::fromUtf8("buffersTab"));
        verticalLayout_7 = new QVBoxLayout(buffersTab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        buffersTreeWidget = new QTreeWidget(buffersTab);
        buffersTreeWidget->setObjectName(QString::fromUtf8("buffersTreeWidget"));
        buffersTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        buffersTreeWidget->setAlternatingRowColors(true);
        buffersTreeWidget->setSortingEnabled(false);
        buffersTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_7->addWidget(buffersTreeWidget);

        stateTabWidget->addTab(buffersTab, QString());
        ssbTab = new QWidget();
        ssbTab->setObjectName(QString::fromUtf8("ssbTab"));
        verticalLayout_8 = new QVBoxLayout(ssbTab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        ssbsTreeWidget = new QTreeWidget(ssbTab);
        ssbsTreeWidget->setObjectName(QString::fromUtf8("ssbsTreeWidget"));
        ssbsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ssbsTreeWidget->setAlternatingRowColors(true);
        ssbsTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_8->addWidget(ssbsTreeWidget);

        stateTabWidget->addTab(ssbTab, QString());

        verticalLayout->addWidget(stateTabWidget);

        stateDock->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, stateDock);
        vertexDataDock = new QDockWidget(MainWindow);
        vertexDataDock->setObjectName(QString::fromUtf8("vertexDataDock"));
        vertexDataDock->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        vertexTypeCB = new QComboBox(dockWidgetContents_3);
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->setObjectName(QString::fromUtf8("vertexTypeCB"));

        formLayout->setWidget(0, QFormLayout::FieldRole, vertexTypeCB);

        label_2 = new QLabel(dockWidgetContents_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        vertexStrideSB = new QSpinBox(dockWidgetContents_3);
        vertexStrideSB->setObjectName(QString::fromUtf8("vertexStrideSB"));
        vertexStrideSB->setMaximum(1000);
        vertexStrideSB->setValue(8);

        formLayout->setWidget(1, QFormLayout::FieldRole, vertexStrideSB);

        label_4 = new QLabel(dockWidgetContents_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        vertexComponentsSB = new QSpinBox(dockWidgetContents_3);
        vertexComponentsSB->setObjectName(QString::fromUtf8("vertexComponentsSB"));
        vertexComponentsSB->setMinimum(1);
        vertexComponentsSB->setMaximum(256);
        vertexComponentsSB->setValue(4);

        formLayout->setWidget(2, QFormLayout::FieldRole, vertexComponentsSB);

        label_3 = new QLabel(dockWidgetContents_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        startingOffsetSB = new QSpinBox(dockWidgetContents_3);
        startingOffsetSB->setObjectName(QString::fromUtf8("startingOffsetSB"));
        startingOffsetSB->setMaximum(1024);

        formLayout->setWidget(3, QFormLayout::FieldRole, startingOffsetSB);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        vertexInterpretButton = new QPushButton(dockWidgetContents_3);
        vertexInterpretButton->setObjectName(QString::fromUtf8("vertexInterpretButton"));

        horizontalLayout_3->addWidget(vertexInterpretButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        bufferExportButton = new QPushButton(dockWidgetContents_3);
        bufferExportButton->setObjectName(QString::fromUtf8("bufferExportButton"));

        horizontalLayout_3->addWidget(bufferExportButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        vertexDataListWidget = new QListWidget(dockWidgetContents_3);
        vertexDataListWidget->setObjectName(QString::fromUtf8("vertexDataListWidget"));

        verticalLayout_2->addWidget(vertexDataListWidget);

        vertexDataDock->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, vertexDataDock);
        errorsDock = new QDockWidget(MainWindow);
        errorsDock->setObjectName(QString::fromUtf8("errorsDock"));
        errorsDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        errorsTreeWidget = new QTreeWidget(dockWidgetContents_4);
        errorsTreeWidget->setObjectName(QString::fromUtf8("errorsTreeWidget"));
        errorsTreeWidget->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_4->addWidget(errorsTreeWidget);

        errorsDock->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, errorsDock);
        backtraceDock = new QDockWidget(MainWindow);
        backtraceDock->setObjectName(QString::fromUtf8("backtraceDock"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backtraceBrowser = new QTextBrowser(dockWidgetContents_5);
        backtraceBrowser->setObjectName(QString::fromUtf8("backtraceBrowser"));

        horizontalLayout->addWidget(backtraceBrowser);

        backtraceDock->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, backtraceDock);
        stateDock->raise();
        vertexDataDock->raise();
        errorsDock->raise();
        backtraceDock->raise();

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menu_Trace->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionRecentLaunches);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionGo);
        menuEdit->addAction(actionGoFrameStart);
        menuEdit->addAction(actionGoFrameEnd);
        menu_Trace->addAction(actionReplay);
        menu_Trace->addAction(actionProfile);
        menu_Trace->addAction(actionStop);
        menu_Trace->addAction(actionLookupState);
        menu_Trace->addAction(actionShowThumbnails);
        menu_Trace->addAction(actionTrim);
        menu_Trace->addAction(actionToggleCalls);
        menu_Trace->addAction(actionEnableAllCalls);
        menu_Trace->addAction(actionLeakTrace);
        menu_Trace->addSeparator();
        menu_Trace->addAction(actionOptions);
        menuView->addAction(actionShowErrorsDock);
        menuView->addAction(actionShowProfileDialog);

        retranslateUi(MainWindow);

        stateTabWidget->setCurrentIndex(0);
        vertexTypeCB->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ApiTrace", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionExit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save As...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReplay->setText(QCoreApplication::translate("MainWindow", "&Replay", nullptr));
#if QT_CONFIG(shortcut)
        actionReplay->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop->setText(QCoreApplication::translate("MainWindow", "&Stop", nullptr));
        actionLookupState->setText(QCoreApplication::translate("MainWindow", "Lookup State", nullptr));
#if QT_CONFIG(shortcut)
        actionLookupState->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowThumbnails->setText(QCoreApplication::translate("MainWindow", "Show &Thumbnails", nullptr));
#if QT_CONFIG(shortcut)
        actionShowThumbnails->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTrim->setText(QCoreApplication::translate("MainWindow", "Tr&im", nullptr));
#if QT_CONFIG(shortcut)
        actionTrim->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleCalls->setText(QCoreApplication::translate("MainWindow", "Toggle Calls", nullptr));
#if QT_CONFIG(shortcut)
        actionToggleCalls->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+/", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableAllCalls->setText(QCoreApplication::translate("MainWindow", "Enable All Calls", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New...", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "&Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo->setText(QCoreApplication::translate("MainWindow", "Go to Call", nullptr));
#if QT_CONFIG(shortcut)
        actionGo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoFrameStart->setText(QCoreApplication::translate("MainWindow", "Go to Frame Start", nullptr));
#if QT_CONFIG(shortcut)
        actionGoFrameStart->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoFrameEnd->setText(QCoreApplication::translate("MainWindow", "Go to Frame End", nullptr));
#if QT_CONFIG(shortcut)
        actionGoFrameEnd->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowErrorsDock->setText(QCoreApplication::translate("MainWindow", "Show &Errors Dock", nullptr));
        actionShowProfileDialog->setText(QCoreApplication::translate("MainWindow", "Show &Profile Results", nullptr));
        actionProfile->setText(QCoreApplication::translate("MainWindow", "&Profile", nullptr));
#if QT_CONFIG(shortcut)
        actionProfile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLeakTrace->setText(QCoreApplication::translate("MainWindow", "&LeakTrace", nullptr));
#if QT_CONFIG(tooltip)
        actionLeakTrace->setToolTip(QCoreApplication::translate("MainWindow", "trace opengl object leaks", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRecentLaunches->setText(QCoreApplication::translate("MainWindow", "Recent launches...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menu_Trace->setTitle(QCoreApplication::translate("MainWindow", "&Trace", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        detailsDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Call Details", nullptr));
        stateDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Current State", nullptr));
        nonDefaultsCB->setText(QCoreApplication::translate("MainWindow", "Only show non-defaults", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = stateTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Variable", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(parametersTab), QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(shadersTab), QCoreApplication::translate("MainWindow", "Shaders", nullptr));
        surfacesOpaqueCB->setText(QCoreApplication::translate("MainWindow", "Opaque", nullptr));
        surfacesAlphaCB->setText(QCoreApplication::translate("MainWindow", "Alpha", nullptr));
        surfacesResolveMSAA->setText(QCoreApplication::translate("MainWindow", "Resolve (MSAA)", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = surfacesTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "Description", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Thumbnail", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(surfacesTab), QCoreApplication::translate("MainWindow", "Surfaces", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = uniformsTreeWidget->headerItem();
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(uniformsTab), QCoreApplication::translate("MainWindow", "Uniforms", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = buffersTreeWidget->headerItem();
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(buffersTab), QCoreApplication::translate("MainWindow", "Buffers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ssbsTreeWidget->headerItem();
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(ssbTab), QCoreApplication::translate("MainWindow", "SSBBs", nullptr));
#if QT_CONFIG(tooltip)
        stateTabWidget->setTabToolTip(stateTabWidget->indexOf(ssbTab), QCoreApplication::translate("MainWindow", "Shader Storage Buffer Blocks", nullptr));
#endif // QT_CONFIG(tooltip)
        vertexDataDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Vertex Data", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        vertexTypeCB->setItemText(0, QCoreApplication::translate("MainWindow", "GL_BYTE", nullptr));
        vertexTypeCB->setItemText(1, QCoreApplication::translate("MainWindow", "GL_UNSIGNED_BYTE", nullptr));
        vertexTypeCB->setItemText(2, QCoreApplication::translate("MainWindow", "GL_SHORT", nullptr));
        vertexTypeCB->setItemText(3, QCoreApplication::translate("MainWindow", "GL_UNSIGNED_SHORT", nullptr));
        vertexTypeCB->setItemText(4, QCoreApplication::translate("MainWindow", "GL_INT", nullptr));
        vertexTypeCB->setItemText(5, QCoreApplication::translate("MainWindow", "GL_UNSIGNED_INT", nullptr));
        vertexTypeCB->setItemText(6, QCoreApplication::translate("MainWindow", "GL_FLOAT", nullptr));
        vertexTypeCB->setItemText(7, QCoreApplication::translate("MainWindow", "GL_DOUBLE", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Stride", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Components", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Starting Offset", nullptr));
        vertexInterpretButton->setText(QCoreApplication::translate("MainWindow", "Interpret", nullptr));
        bufferExportButton->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        errorsDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Errors", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = errorsTreeWidget->headerItem();
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("MainWindow", "Error", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("MainWindow", "Type", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "Index", nullptr));
        backtraceDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Backtrace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

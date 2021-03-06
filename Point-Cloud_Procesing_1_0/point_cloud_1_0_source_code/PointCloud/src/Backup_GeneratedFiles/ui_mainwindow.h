/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Oct 4 15:39:24 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QAction *actionImport_Ply;
    QAction *actionSave_Ply;
    QAction *actionShow_Samples;
    QAction *actionShow_Original;
    QAction *actionShow_Neighborhood_Ball;
    QAction *actionCull_Points;
    QAction *actionSample_Color;
    QAction *actionOriginal_Color;
    QAction *actionBackground_Color;
    QAction *actionAmbient_Color;
    QAction *actionDiffuse_Color;
    QAction *actionSpecular_Color;
    QAction *actionLight_On_Off;
    QAction *actionInitial_Sampling;
    QAction *actionNormalize;
    QAction *actionDownSample;
    QAction *actionSubSample;
    QAction *actionSnapShot;
    QAction *actionShow_Normals;
    QAction *actionFeature_Color;
    QAction *actionNormal_Color;
    QAction *actionWLOP_2;
    QAction *actionRun_Wlop;
    QAction *actionWLOP_Setting;
    QAction *actionRun_PCA;
    QAction *actionNormal_Setting;
    QAction *actionReorientate;
    QAction *actionShow_Sample_Quads;
    QAction *actionShow_Sample_Dot;
    QAction *actionShow_Sample_Circle;
    QAction *actionShow_Original_Quad;
    QAction *actionShow_Original_Dot;
    QAction *actionShow_Original_Circle;
    QAction *actionInitial_Sampling_2;
    QAction *actionAuto_Play;
    QAction *actionStop;
    QAction *actionStep;
    QAction *actionJump;
    QAction *actionSkeleton_Setting;
    QAction *actionUpsample_Setting;
    QAction *actionClear_Data;
    QAction *actionImport_Image;
    QAction *actionShow_Individual_Color;
    QAction *actionRecompute_Quad;
    QAction *actionShow_Normal_Color;
    QAction *actionSave_View;
    QAction *actionSnap_Each_Iteration;
    QAction *actionNo_Snap_Radius;
    QAction *actionShow_Radius_Line;
    QAction *actionShow_All_Raidus;
    QAction *actionSave_Skel;
    QAction *actionErase_Pick;
    QAction *actionShow_Sample_Sphere;
    QAction *actionShow_Original_Sphere;
    QAction *actionShow_Skeleton;
    QAction *actionShow_colorful_branches;
    QAction *actionQianSample;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAlgorithom;
    QMenu *menuWLOP;
    QMenu *menuNormal;
    QMenu *menuSkeleton;
    QMenu *menuEAR;
    QMenu *menuRender;
    QMenu *menuColor;
    QMenu *menuSample_Render;
    QMenu *menuOriginal_Render;
    QMenu *menuSnap_Shot;
    QMenu *menuShow_Neighbor_Size;
    QMenu *menuPick_Point;
    QMenu *menuSkeleton_Render;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QString::fromUtf8("mainwindowClass"));
        mainwindowClass->resize(1275, 573);
        mainwindowClass->setMinimumSize(QSize(55, 55));
        mainwindowClass->setSizeIncrement(QSize(5, 5));
        mainwindowClass->setBaseSize(QSize(1, 1));
        mainwindowClass->setAcceptDrops(true);
        actionImport_Ply = new QAction(mainwindowClass);
        actionImport_Ply->setObjectName(QString::fromUtf8("actionImport_Ply"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainwindow/Icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport_Ply->setIcon(icon);
        actionSave_Ply = new QAction(mainwindowClass);
        actionSave_Ply->setObjectName(QString::fromUtf8("actionSave_Ply"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/mainwindow/Icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Ply->setIcon(icon1);
        actionShow_Samples = new QAction(mainwindowClass);
        actionShow_Samples->setObjectName(QString::fromUtf8("actionShow_Samples"));
        actionShow_Samples->setCheckable(true);
        actionShow_Original = new QAction(mainwindowClass);
        actionShow_Original->setObjectName(QString::fromUtf8("actionShow_Original"));
        actionShow_Original->setCheckable(true);
        actionShow_Neighborhood_Ball = new QAction(mainwindowClass);
        actionShow_Neighborhood_Ball->setObjectName(QString::fromUtf8("actionShow_Neighborhood_Ball"));
        actionShow_Neighborhood_Ball->setCheckable(true);
        actionCull_Points = new QAction(mainwindowClass);
        actionCull_Points->setObjectName(QString::fromUtf8("actionCull_Points"));
        actionCull_Points->setCheckable(true);
        actionSample_Color = new QAction(mainwindowClass);
        actionSample_Color->setObjectName(QString::fromUtf8("actionSample_Color"));
        actionOriginal_Color = new QAction(mainwindowClass);
        actionOriginal_Color->setObjectName(QString::fromUtf8("actionOriginal_Color"));
        actionBackground_Color = new QAction(mainwindowClass);
        actionBackground_Color->setObjectName(QString::fromUtf8("actionBackground_Color"));
        actionAmbient_Color = new QAction(mainwindowClass);
        actionAmbient_Color->setObjectName(QString::fromUtf8("actionAmbient_Color"));
        actionDiffuse_Color = new QAction(mainwindowClass);
        actionDiffuse_Color->setObjectName(QString::fromUtf8("actionDiffuse_Color"));
        actionSpecular_Color = new QAction(mainwindowClass);
        actionSpecular_Color->setObjectName(QString::fromUtf8("actionSpecular_Color"));
        actionLight_On_Off = new QAction(mainwindowClass);
        actionLight_On_Off->setObjectName(QString::fromUtf8("actionLight_On_Off"));
        actionLight_On_Off->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/mainwindow/Icons/lighton.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLight_On_Off->setIcon(icon2);
        actionInitial_Sampling = new QAction(mainwindowClass);
        actionInitial_Sampling->setObjectName(QString::fromUtf8("actionInitial_Sampling"));
        actionNormalize = new QAction(mainwindowClass);
        actionNormalize->setObjectName(QString::fromUtf8("actionNormalize"));
        actionDownSample = new QAction(mainwindowClass);
        actionDownSample->setObjectName(QString::fromUtf8("actionDownSample"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/mainwindow/Icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDownSample->setIcon(icon3);
        actionSubSample = new QAction(mainwindowClass);
        actionSubSample->setObjectName(QString::fromUtf8("actionSubSample"));
        actionSnapShot = new QAction(mainwindowClass);
        actionSnapShot->setObjectName(QString::fromUtf8("actionSnapShot"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/mainwindow/Icons/125.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnapShot->setIcon(icon4);
        actionShow_Normals = new QAction(mainwindowClass);
        actionShow_Normals->setObjectName(QString::fromUtf8("actionShow_Normals"));
        actionShow_Normals->setCheckable(true);
        actionFeature_Color = new QAction(mainwindowClass);
        actionFeature_Color->setObjectName(QString::fromUtf8("actionFeature_Color"));
        actionNormal_Color = new QAction(mainwindowClass);
        actionNormal_Color->setObjectName(QString::fromUtf8("actionNormal_Color"));
        actionWLOP_2 = new QAction(mainwindowClass);
        actionWLOP_2->setObjectName(QString::fromUtf8("actionWLOP_2"));
        actionRun_Wlop = new QAction(mainwindowClass);
        actionRun_Wlop->setObjectName(QString::fromUtf8("actionRun_Wlop"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/mainwindow/Icons/gowalla_128x128-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun_Wlop->setIcon(icon5);
        actionWLOP_Setting = new QAction(mainwindowClass);
        actionWLOP_Setting->setObjectName(QString::fromUtf8("actionWLOP_Setting"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/mainwindow/Icons/gameboid_128x128-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWLOP_Setting->setIcon(icon6);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        actionWLOP_Setting->setFont(font);
        actionRun_PCA = new QAction(mainwindowClass);
        actionRun_PCA->setObjectName(QString::fromUtf8("actionRun_PCA"));
        actionNormal_Setting = new QAction(mainwindowClass);
        actionNormal_Setting->setObjectName(QString::fromUtf8("actionNormal_Setting"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/mainwindow/Icons/sleepbot_128x128-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal_Setting->setIcon(icon7);
        actionReorientate = new QAction(mainwindowClass);
        actionReorientate->setObjectName(QString::fromUtf8("actionReorientate"));
        actionReorientate->setFont(font);
        actionShow_Sample_Quads = new QAction(mainwindowClass);
        actionShow_Sample_Quads->setObjectName(QString::fromUtf8("actionShow_Sample_Quads"));
        actionShow_Sample_Quads->setCheckable(true);
        actionShow_Sample_Dot = new QAction(mainwindowClass);
        actionShow_Sample_Dot->setObjectName(QString::fromUtf8("actionShow_Sample_Dot"));
        actionShow_Sample_Dot->setCheckable(true);
        actionShow_Sample_Circle = new QAction(mainwindowClass);
        actionShow_Sample_Circle->setObjectName(QString::fromUtf8("actionShow_Sample_Circle"));
        actionShow_Sample_Circle->setCheckable(true);
        actionShow_Original_Quad = new QAction(mainwindowClass);
        actionShow_Original_Quad->setObjectName(QString::fromUtf8("actionShow_Original_Quad"));
        actionShow_Original_Quad->setCheckable(true);
        actionShow_Original_Dot = new QAction(mainwindowClass);
        actionShow_Original_Dot->setObjectName(QString::fromUtf8("actionShow_Original_Dot"));
        actionShow_Original_Dot->setCheckable(true);
        actionShow_Original_Circle = new QAction(mainwindowClass);
        actionShow_Original_Circle->setObjectName(QString::fromUtf8("actionShow_Original_Circle"));
        actionShow_Original_Circle->setCheckable(true);
        actionInitial_Sampling_2 = new QAction(mainwindowClass);
        actionInitial_Sampling_2->setObjectName(QString::fromUtf8("actionInitial_Sampling_2"));
        actionAuto_Play = new QAction(mainwindowClass);
        actionAuto_Play->setObjectName(QString::fromUtf8("actionAuto_Play"));
        actionStop = new QAction(mainwindowClass);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionStep = new QAction(mainwindowClass);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        actionJump = new QAction(mainwindowClass);
        actionJump->setObjectName(QString::fromUtf8("actionJump"));
        actionSkeleton_Setting = new QAction(mainwindowClass);
        actionSkeleton_Setting->setObjectName(QString::fromUtf8("actionSkeleton_Setting"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/mainwindow/Icons/heyzap_128x128-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSkeleton_Setting->setIcon(icon8);
        actionSkeleton_Setting->setFont(font);
        actionUpsample_Setting = new QAction(mainwindowClass);
        actionUpsample_Setting->setObjectName(QString::fromUtf8("actionUpsample_Setting"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/mainwindow/Icons/upsample-xw.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpsample_Setting->setIcon(icon9);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        actionUpsample_Setting->setFont(font1);
        actionClear_Data = new QAction(mainwindowClass);
        actionClear_Data->setObjectName(QString::fromUtf8("actionClear_Data"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/mainwindow/Icons/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_Data->setIcon(icon10);
        actionImport_Image = new QAction(mainwindowClass);
        actionImport_Image->setObjectName(QString::fromUtf8("actionImport_Image"));
        actionImport_Image->setVisible(false);
        actionShow_Individual_Color = new QAction(mainwindowClass);
        actionShow_Individual_Color->setObjectName(QString::fromUtf8("actionShow_Individual_Color"));
        actionShow_Individual_Color->setCheckable(true);
        actionRecompute_Quad = new QAction(mainwindowClass);
        actionRecompute_Quad->setObjectName(QString::fromUtf8("actionRecompute_Quad"));
        actionShow_Normal_Color = new QAction(mainwindowClass);
        actionShow_Normal_Color->setObjectName(QString::fromUtf8("actionShow_Normal_Color"));
        actionShow_Normal_Color->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/mainwindow/Icons/rgbt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Normal_Color->setIcon(icon11);
        actionSave_View = new QAction(mainwindowClass);
        actionSave_View->setObjectName(QString::fromUtf8("actionSave_View"));
        actionSnap_Each_Iteration = new QAction(mainwindowClass);
        actionSnap_Each_Iteration->setObjectName(QString::fromUtf8("actionSnap_Each_Iteration"));
        actionSnap_Each_Iteration->setCheckable(true);
        actionNo_Snap_Radius = new QAction(mainwindowClass);
        actionNo_Snap_Radius->setObjectName(QString::fromUtf8("actionNo_Snap_Radius"));
        actionNo_Snap_Radius->setCheckable(true);
        actionShow_Radius_Line = new QAction(mainwindowClass);
        actionShow_Radius_Line->setObjectName(QString::fromUtf8("actionShow_Radius_Line"));
        actionShow_All_Raidus = new QAction(mainwindowClass);
        actionShow_All_Raidus->setObjectName(QString::fromUtf8("actionShow_All_Raidus"));
        actionShow_All_Raidus->setCheckable(true);
        actionSave_Skel = new QAction(mainwindowClass);
        actionSave_Skel->setObjectName(QString::fromUtf8("actionSave_Skel"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/mainwindow/Icons/folder_128x128-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Skel->setIcon(icon12);
        actionErase_Pick = new QAction(mainwindowClass);
        actionErase_Pick->setObjectName(QString::fromUtf8("actionErase_Pick"));
        actionShow_Sample_Sphere = new QAction(mainwindowClass);
        actionShow_Sample_Sphere->setObjectName(QString::fromUtf8("actionShow_Sample_Sphere"));
        actionShow_Sample_Sphere->setCheckable(true);
        actionShow_Original_Sphere = new QAction(mainwindowClass);
        actionShow_Original_Sphere->setObjectName(QString::fromUtf8("actionShow_Original_Sphere"));
        actionShow_Original_Sphere->setCheckable(true);
        actionShow_Skeleton = new QAction(mainwindowClass);
        actionShow_Skeleton->setObjectName(QString::fromUtf8("actionShow_Skeleton"));
        actionShow_Skeleton->setCheckable(true);
        actionShow_colorful_branches = new QAction(mainwindowClass);
        actionShow_colorful_branches->setObjectName(QString::fromUtf8("actionShow_colorful_branches"));
        actionShow_colorful_branches->setCheckable(true);
        actionQianSample = new QAction(mainwindowClass);
        actionQianSample->setObjectName(QString::fromUtf8("actionQianSample"));
        actionQianSample->setVisible(false);
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1275, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAlgorithom = new QMenu(menuBar);
        menuAlgorithom->setObjectName(QString::fromUtf8("menuAlgorithom"));
        menuWLOP = new QMenu(menuAlgorithom);
        menuWLOP->setObjectName(QString::fromUtf8("menuWLOP"));
        menuNormal = new QMenu(menuAlgorithom);
        menuNormal->setObjectName(QString::fromUtf8("menuNormal"));
        menuSkeleton = new QMenu(menuAlgorithom);
        menuSkeleton->setObjectName(QString::fromUtf8("menuSkeleton"));
        menuEAR = new QMenu(menuAlgorithom);
        menuEAR->setObjectName(QString::fromUtf8("menuEAR"));
        menuRender = new QMenu(menuBar);
        menuRender->setObjectName(QString::fromUtf8("menuRender"));
        menuColor = new QMenu(menuRender);
        menuColor->setObjectName(QString::fromUtf8("menuColor"));
        menuSample_Render = new QMenu(menuRender);
        menuSample_Render->setObjectName(QString::fromUtf8("menuSample_Render"));
        menuOriginal_Render = new QMenu(menuRender);
        menuOriginal_Render->setObjectName(QString::fromUtf8("menuOriginal_Render"));
        menuSnap_Shot = new QMenu(menuRender);
        menuSnap_Shot->setObjectName(QString::fromUtf8("menuSnap_Shot"));
        menuShow_Neighbor_Size = new QMenu(menuRender);
        menuShow_Neighbor_Size->setObjectName(QString::fromUtf8("menuShow_Neighbor_Size"));
        menuPick_Point = new QMenu(menuRender);
        menuPick_Point->setObjectName(QString::fromUtf8("menuPick_Point"));
        menuSkeleton_Render = new QMenu(menuRender);
        menuSkeleton_Render->setObjectName(QString::fromUtf8("menuSkeleton_Render"));
        mainwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setBaseSize(QSize(11, 11));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mainwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mainwindowClass->setStatusBar(statusBar);
        toolBar = new QToolBar(mainwindowClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        mainwindowClass->addToolBar(Qt::TopToolBarArea, toolBar);
        mainwindowClass->insertToolBarBreak(toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAlgorithom->menuAction());
        menuBar->addAction(menuRender->menuAction());
        menuFile->addAction(actionImport_Ply);
        menuFile->addAction(actionSave_Ply);
        menuFile->addAction(actionSave_Skel);
        menuFile->addAction(actionNormalize);
        menuFile->addAction(actionDownSample);
        menuFile->addAction(actionSubSample);
        menuFile->addAction(actionQianSample);
        menuFile->addAction(actionClear_Data);
        menuFile->addAction(actionImport_Image);
        menuFile->addAction(actionSave_View);
        menuAlgorithom->addAction(menuWLOP->menuAction());
        menuAlgorithom->addAction(menuNormal->menuAction());
        menuAlgorithom->addAction(menuSkeleton->menuAction());
        menuAlgorithom->addAction(menuEAR->menuAction());
        menuWLOP->addAction(actionRun_Wlop);
        menuWLOP->addAction(actionWLOP_Setting);
        menuNormal->addAction(actionRun_PCA);
        menuNormal->addAction(actionNormal_Setting);
        menuNormal->addAction(actionReorientate);
        menuSkeleton->addSeparator();
        menuSkeleton->addAction(actionSkeleton_Setting);
        menuEAR->addAction(actionUpsample_Setting);
        menuRender->addAction(menuColor->menuAction());
        menuRender->addSeparator();
        menuRender->addAction(menuSample_Render->menuAction());
        menuRender->addAction(menuOriginal_Render->menuAction());
        menuRender->addAction(menuSkeleton_Render->menuAction());
        menuRender->addAction(actionShow_Normals);
        menuRender->addAction(actionCull_Points);
        menuRender->addAction(actionRecompute_Quad);
        menuRender->addAction(actionShow_Normal_Color);
        menuRender->addAction(menuSnap_Shot->menuAction());
        menuRender->addAction(menuShow_Neighbor_Size->menuAction());
        menuRender->addAction(menuPick_Point->menuAction());
        menuColor->addAction(actionLight_On_Off);
        menuColor->addAction(actionSample_Color);
        menuColor->addAction(actionOriginal_Color);
        menuColor->addAction(actionBackground_Color);
        menuColor->addAction(actionFeature_Color);
        menuColor->addAction(actionNormal_Color);
        menuColor->addSeparator();
        menuColor->addAction(actionAmbient_Color);
        menuColor->addAction(actionDiffuse_Color);
        menuColor->addAction(actionSpecular_Color);
        menuColor->addAction(actionShow_Individual_Color);
        menuSample_Render->addAction(actionShow_Samples);
        menuSample_Render->addSeparator();
        menuSample_Render->addAction(actionShow_Sample_Dot);
        menuSample_Render->addAction(actionShow_Sample_Quads);
        menuSample_Render->addAction(actionShow_Sample_Circle);
        menuSample_Render->addAction(actionShow_Sample_Sphere);
        menuOriginal_Render->addAction(actionShow_Original);
        menuOriginal_Render->addSeparator();
        menuOriginal_Render->addAction(actionShow_Original_Dot);
        menuOriginal_Render->addAction(actionShow_Original_Quad);
        menuOriginal_Render->addAction(actionShow_Original_Circle);
        menuOriginal_Render->addAction(actionShow_Original_Sphere);
        menuSnap_Shot->addAction(actionSnapShot);
        menuSnap_Shot->addAction(actionSnap_Each_Iteration);
        menuSnap_Shot->addAction(actionNo_Snap_Radius);
        menuShow_Neighbor_Size->addAction(actionShow_Neighborhood_Ball);
        menuShow_Neighbor_Size->addAction(actionShow_Radius_Line);
        menuShow_Neighbor_Size->addAction(actionShow_All_Raidus);
        menuPick_Point->addAction(actionErase_Pick);
        menuSkeleton_Render->addAction(actionShow_Skeleton);
        menuSkeleton_Render->addAction(actionShow_colorful_branches);
        mainToolBar->addAction(actionImport_Ply);
        mainToolBar->addAction(actionSave_Ply);
        mainToolBar->addAction(actionSave_Skel);
        mainToolBar->addAction(actionSnapShot);
        mainToolBar->addAction(actionClear_Data);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDownSample);
        mainToolBar->addAction(actionSkeleton_Setting);
        mainToolBar->addAction(actionUpsample_Setting);
        mainToolBar->addAction(actionWLOP_Setting);
        mainToolBar->addAction(actionNormal_Setting);
        mainToolBar->addSeparator();
        toolBar->addAction(actionLight_On_Off);
        toolBar->addAction(actionShow_Normal_Color);
        toolBar->addSeparator();
        toolBar->addAction(actionShow_Original);
        toolBar->addAction(actionShow_Samples);
        toolBar->addAction(actionShow_Skeleton);
        toolBar->addSeparator();
        toolBar->addAction(actionShow_Neighborhood_Ball);
        toolBar->addAction(actionShow_Normals);
        toolBar->addAction(actionCull_Points);
        toolBar->addSeparator();

        retranslateUi(mainwindowClass);

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QApplication::translate("mainwindowClass", "Point Cloud", 0, QApplication::UnicodeUTF8));
        actionImport_Ply->setText(QApplication::translate("mainwindowClass", "Import Ply", 0, QApplication::UnicodeUTF8));
        actionSave_Ply->setText(QApplication::translate("mainwindowClass", "Save Ply", 0, QApplication::UnicodeUTF8));
        actionShow_Samples->setText(QApplication::translate("mainwindowClass", "Show Samples", 0, QApplication::UnicodeUTF8));
        actionShow_Original->setText(QApplication::translate("mainwindowClass", "Show Original", 0, QApplication::UnicodeUTF8));
        actionShow_Neighborhood_Ball->setText(QApplication::translate("mainwindowClass", "Show Raidus", 0, QApplication::UnicodeUTF8));
        actionShow_Neighborhood_Ball->setShortcut(QApplication::translate("mainwindowClass", "Alt+R", 0, QApplication::UnicodeUTF8));
        actionCull_Points->setText(QApplication::translate("mainwindowClass", "Cull Points", 0, QApplication::UnicodeUTF8));
        actionCull_Points->setShortcut(QApplication::translate("mainwindowClass", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionSample_Color->setText(QApplication::translate("mainwindowClass", "Sample Color", 0, QApplication::UnicodeUTF8));
        actionOriginal_Color->setText(QApplication::translate("mainwindowClass", "Original Color", 0, QApplication::UnicodeUTF8));
        actionBackground_Color->setText(QApplication::translate("mainwindowClass", "Background Color", 0, QApplication::UnicodeUTF8));
        actionAmbient_Color->setText(QApplication::translate("mainwindowClass", "Ambient Color", 0, QApplication::UnicodeUTF8));
        actionDiffuse_Color->setText(QApplication::translate("mainwindowClass", "Diffuse Color", 0, QApplication::UnicodeUTF8));
        actionSpecular_Color->setText(QApplication::translate("mainwindowClass", "Specular Color", 0, QApplication::UnicodeUTF8));
        actionLight_On_Off->setText(QApplication::translate("mainwindowClass", "Light On/Off", 0, QApplication::UnicodeUTF8));
        actionInitial_Sampling->setText(QApplication::translate("mainwindowClass", "Initial Sampling", 0, QApplication::UnicodeUTF8));
        actionNormalize->setText(QApplication::translate("mainwindowClass", "Normalize", 0, QApplication::UnicodeUTF8));
        actionDownSample->setText(QApplication::translate("mainwindowClass", "Down Sample", 0, QApplication::UnicodeUTF8));
        actionSubSample->setText(QApplication::translate("mainwindowClass", "SubSample", 0, QApplication::UnicodeUTF8));
        actionSnapShot->setText(QApplication::translate("mainwindowClass", "SnapShot", 0, QApplication::UnicodeUTF8));
        actionShow_Normals->setText(QApplication::translate("mainwindowClass", "Show Normals", 0, QApplication::UnicodeUTF8));
        actionShow_Normals->setShortcut(QApplication::translate("mainwindowClass", "Alt+N", 0, QApplication::UnicodeUTF8));
        actionFeature_Color->setText(QApplication::translate("mainwindowClass", "Feature Color", 0, QApplication::UnicodeUTF8));
        actionNormal_Color->setText(QApplication::translate("mainwindowClass", "Normal Color", 0, QApplication::UnicodeUTF8));
        actionWLOP_2->setText(QApplication::translate("mainwindowClass", "Skeletonization", 0, QApplication::UnicodeUTF8));
        actionRun_Wlop->setText(QApplication::translate("mainwindowClass", "Run WLOP", 0, QApplication::UnicodeUTF8));
        actionWLOP_Setting->setText(QApplication::translate("mainwindowClass", "WLOP", 0, QApplication::UnicodeUTF8));
        actionRun_PCA->setText(QApplication::translate("mainwindowClass", "Run PCA", 0, QApplication::UnicodeUTF8));
        actionNormal_Setting->setText(QApplication::translate("mainwindowClass", "Normal", 0, QApplication::UnicodeUTF8));
        actionReorientate->setText(QApplication::translate("mainwindowClass", "Reorientate", 0, QApplication::UnicodeUTF8));
        actionShow_Sample_Quads->setText(QApplication::translate("mainwindowClass", "Quad", 0, QApplication::UnicodeUTF8));
        actionShow_Sample_Dot->setText(QApplication::translate("mainwindowClass", "Dot", 0, QApplication::UnicodeUTF8));
        actionShow_Sample_Circle->setText(QApplication::translate("mainwindowClass", "Circle", 0, QApplication::UnicodeUTF8));
        actionShow_Original_Quad->setText(QApplication::translate("mainwindowClass", "Quad", 0, QApplication::UnicodeUTF8));
        actionShow_Original_Dot->setText(QApplication::translate("mainwindowClass", "Dot", 0, QApplication::UnicodeUTF8));
        actionShow_Original_Circle->setText(QApplication::translate("mainwindowClass", "Circle", 0, QApplication::UnicodeUTF8));
        actionInitial_Sampling_2->setText(QApplication::translate("mainwindowClass", "Initialization", 0, QApplication::UnicodeUTF8));
        actionAuto_Play->setText(QApplication::translate("mainwindowClass", "Auto Play", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("mainwindowClass", "Stop", 0, QApplication::UnicodeUTF8));
        actionStep->setText(QApplication::translate("mainwindowClass", "Step", 0, QApplication::UnicodeUTF8));
        actionJump->setText(QApplication::translate("mainwindowClass", "Jump", 0, QApplication::UnicodeUTF8));
        actionSkeleton_Setting->setText(QApplication::translate("mainwindowClass", "Skeleton", 0, QApplication::UnicodeUTF8));
        actionUpsample_Setting->setText(QApplication::translate("mainwindowClass", "EAR", 0, QApplication::UnicodeUTF8));
        actionClear_Data->setText(QApplication::translate("mainwindowClass", "Clear", 0, QApplication::UnicodeUTF8));
        actionImport_Image->setText(QApplication::translate("mainwindowClass", "Import Image", 0, QApplication::UnicodeUTF8));
        actionShow_Individual_Color->setText(QApplication::translate("mainwindowClass", "Show Individual Color", 0, QApplication::UnicodeUTF8));
        actionRecompute_Quad->setText(QApplication::translate("mainwindowClass", "Recompute Quad", 0, QApplication::UnicodeUTF8));
        actionShow_Normal_Color->setText(QApplication::translate("mainwindowClass", "Normal Map Color", 0, QApplication::UnicodeUTF8));
        actionSave_View->setText(QApplication::translate("mainwindowClass", "Save View", 0, QApplication::UnicodeUTF8));
        actionSnap_Each_Iteration->setText(QApplication::translate("mainwindowClass", "Snap Each Iteration", 0, QApplication::UnicodeUTF8));
        actionNo_Snap_Radius->setText(QApplication::translate("mainwindowClass", "Not Snap Radius", 0, QApplication::UnicodeUTF8));
        actionShow_Radius_Line->setText(QApplication::translate("mainwindowClass", "Show Radius Line", 0, QApplication::UnicodeUTF8));
        actionShow_All_Raidus->setText(QApplication::translate("mainwindowClass", "Show All Raidus", 0, QApplication::UnicodeUTF8));
        actionSave_Skel->setText(QApplication::translate("mainwindowClass", "Save Skel", 0, QApplication::UnicodeUTF8));
        actionErase_Pick->setText(QApplication::translate("mainwindowClass", "Erase Pick", 0, QApplication::UnicodeUTF8));
        actionErase_Pick->setShortcut(QApplication::translate("mainwindowClass", "Alt+E", 0, QApplication::UnicodeUTF8));
        actionShow_Sample_Sphere->setText(QApplication::translate("mainwindowClass", "Sphere", 0, QApplication::UnicodeUTF8));
        actionShow_Original_Sphere->setText(QApplication::translate("mainwindowClass", "Sphere", 0, QApplication::UnicodeUTF8));
        actionShow_Skeleton->setText(QApplication::translate("mainwindowClass", "Show Skeleton", 0, QApplication::UnicodeUTF8));
        actionShow_colorful_branches->setText(QApplication::translate("mainwindowClass", "Show colorful branches", 0, QApplication::UnicodeUTF8));
        actionQianSample->setText(QApplication::translate("mainwindowClass", "Fixed Sample(no random)", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("mainwindowClass", "File", 0, QApplication::UnicodeUTF8));
        menuAlgorithom->setTitle(QApplication::translate("mainwindowClass", "Algorithom", 0, QApplication::UnicodeUTF8));
        menuWLOP->setTitle(QApplication::translate("mainwindowClass", "WLOP", 0, QApplication::UnicodeUTF8));
        menuNormal->setTitle(QApplication::translate("mainwindowClass", "Normal", 0, QApplication::UnicodeUTF8));
        menuSkeleton->setTitle(QApplication::translate("mainwindowClass", "Skeleton", 0, QApplication::UnicodeUTF8));
        menuEAR->setTitle(QApplication::translate("mainwindowClass", "EAR", 0, QApplication::UnicodeUTF8));
        menuRender->setTitle(QApplication::translate("mainwindowClass", "Render", 0, QApplication::UnicodeUTF8));
        menuColor->setTitle(QApplication::translate("mainwindowClass", "Color", 0, QApplication::UnicodeUTF8));
        menuSample_Render->setTitle(QApplication::translate("mainwindowClass", "Sample Render", 0, QApplication::UnicodeUTF8));
        menuOriginal_Render->setTitle(QApplication::translate("mainwindowClass", "Original Render", 0, QApplication::UnicodeUTF8));
        menuSnap_Shot->setTitle(QApplication::translate("mainwindowClass", "Snap Shot", 0, QApplication::UnicodeUTF8));
        menuShow_Neighbor_Size->setTitle(QApplication::translate("mainwindowClass", "Show Neighbor Size", 0, QApplication::UnicodeUTF8));
        menuPick_Point->setTitle(QApplication::translate("mainwindowClass", "Pick Point", 0, QApplication::UnicodeUTF8));
        menuSkeleton_Render->setTitle(QApplication::translate("mainwindowClass", "Skeleton Render", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("mainwindowClass", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

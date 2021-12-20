/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    my_label *frame;
    QLabel *mouse_movement;
    QLabel *label_3;
    QLabel *mouse_pressed;
    QLabel *label_5;
    QFrame *x_axis;
    QFrame *y_axis;
    QCheckBox *show_axes;
    QPushButton *Draw;
    QRadioButton *draw_line;
    QPushButton *set_point1;
    QPushButton *set_point2;
    QPushButton *pushButton;
    QSpinBox *gridsize;
    QLabel *label;
    QPushButton *showgrid;
    QLabel *label_2;
    QPushButton *dda;
    QPushButton *bress;
    QPushButton *bresscirc;
    QSpinBox *radius;
    QPushButton *midpointcirc;
    QLabel *label_4;
    QFrame *line;
    QPushButton *polarcirc;
    QFrame *line_2;
    QSpinBox *Xradius;
    QSpinBox *Yradius;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *midpointEllipse;
    QPushButton *polarEllipse;
    QFrame *line_3;
    QRadioButton *pointFill4;
    QRadioButton *pointFill8;
    QPushButton *boundaryFill;
    QPushButton *floodFill;
    QPushButton *setVertex;
    QPushButton *clearVertex;
    QPushButton *scanlinefill;
    QSpinBox *xtranslate;
    QLabel *label_8;
    QSpinBox *ytranslate;
    QLabel *label_9;
    QPushButton *translation;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *scale;
    QDoubleSpinBox *xscale;
    QDoubleSpinBox *yscale;
    QPushButton *shearing;
    QSpinBox *xshear;
    QSpinBox *yshear;
    QLabel *label_12;
    QLabel *label_13;
    QSpinBox *anglespinbox;
    QLabel *label_14;
    QPushButton *rotation;
    QCheckBox *reflectionaxis;
    QCheckBox *reflectxaxis;
    QCheckBox *reflectorigin;
    QPushButton *reflection;
    QCheckBox *reflectyaxis;
    QPushButton *setCorner1;
    QPushButton *setCorner2;
    QPushButton *lineclipping;
    QPushButton *drawDDALineByStoringPoints;
    QPushButton *polygonclipping;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1277, 942);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new my_label(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 700, 700));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setLineWidth(1);
        mouse_movement = new QLabel(centralWidget);
        mouse_movement->setObjectName(QStringLiteral("mouse_movement"));
        mouse_movement->setGeometry(QRect(720, 60, 111, 31));
        mouse_movement->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(720, 40, 111, 20));
        mouse_pressed = new QLabel(centralWidget);
        mouse_pressed->setObjectName(QStringLiteral("mouse_pressed"));
        mouse_pressed->setGeometry(QRect(720, 130, 111, 31));
        mouse_pressed->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(730, 110, 81, 20));
        x_axis = new QFrame(centralWidget);
        x_axis->setObjectName(QStringLiteral("x_axis"));
        x_axis->setGeometry(QRect(0, 0, 700, 1));
        x_axis->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 255);"));
        x_axis->setFrameShape(QFrame::HLine);
        x_axis->setFrameShadow(QFrame::Sunken);
        y_axis = new QFrame(centralWidget);
        y_axis->setObjectName(QStringLiteral("y_axis"));
        y_axis->setGeometry(QRect(225, 0, 1, 700));
        y_axis->setStyleSheet(QLatin1String("\n"
"background-color: rgb(85, 255, 255);"));
        y_axis->setFrameShape(QFrame::VLine);
        y_axis->setFrameShadow(QFrame::Sunken);
        show_axes = new QCheckBox(centralWidget);
        show_axes->setObjectName(QStringLiteral("show_axes"));
        show_axes->setGeometry(QRect(720, 0, 91, 21));
        Draw = new QPushButton(centralWidget);
        Draw->setObjectName(QStringLiteral("Draw"));
        Draw->setGeometry(QRect(710, 280, 101, 41));
        draw_line = new QRadioButton(centralWidget);
        draw_line->setObjectName(QStringLiteral("draw_line"));
        draw_line->setGeometry(QRect(710, 230, 77, 17));
        set_point1 = new QPushButton(centralWidget);
        set_point1->setObjectName(QStringLiteral("set_point1"));
        set_point1->setGeometry(QRect(790, 230, 81, 23));
        set_point2 = new QPushButton(centralWidget);
        set_point2->setObjectName(QStringLiteral("set_point2"));
        set_point2->setGeometry(QRect(880, 230, 81, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 330, 101, 41));
        gridsize = new QSpinBox(centralWidget);
        gridsize->setObjectName(QStringLiteral("gridsize"));
        gridsize->setGeometry(QRect(900, 0, 61, 21));
        gridsize->setMinimum(1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(850, 0, 46, 13));
        showgrid = new QPushButton(centralWidget);
        showgrid->setObjectName(QStringLiteral("showgrid"));
        showgrid->setGeometry(QRect(890, 60, 81, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(710, 380, 121, 16));
        dda = new QPushButton(centralWidget);
        dda->setObjectName(QStringLiteral("dda"));
        dda->setGeometry(QRect(710, 410, 75, 31));
        bress = new QPushButton(centralWidget);
        bress->setObjectName(QStringLiteral("bress"));
        bress->setGeometry(QRect(800, 410, 81, 31));
        bresscirc = new QPushButton(centralWidget);
        bresscirc->setObjectName(QStringLiteral("bresscirc"));
        bresscirc->setGeometry(QRect(730, 540, 75, 23));
        radius = new QSpinBox(centralWidget);
        radius->setObjectName(QStringLiteral("radius"));
        radius->setGeometry(QRect(830, 500, 71, 22));
        midpointcirc = new QPushButton(centralWidget);
        midpointcirc->setObjectName(QStringLiteral("midpointcirc"));
        midpointcirc->setGeometry(QRect(820, 540, 75, 23));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(720, 500, 101, 20));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(710, 460, 311, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        polarcirc = new QPushButton(centralWidget);
        polarcirc->setObjectName(QStringLiteral("polarcirc"));
        polarcirc->setGeometry(QRect(920, 540, 75, 23));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(730, 570, 291, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Xradius = new QSpinBox(centralWidget);
        Xradius->setObjectName(QStringLiteral("Xradius"));
        Xradius->setGeometry(QRect(760, 600, 51, 22));
        Yradius = new QSpinBox(centralWidget);
        Yradius->setObjectName(QStringLiteral("Yradius"));
        Yradius->setGeometry(QRect(850, 600, 61, 22));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(760, 630, 41, 12));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(850, 630, 41, 12));
        midpointEllipse = new QPushButton(centralWidget);
        midpointEllipse->setObjectName(QStringLiteral("midpointEllipse"));
        midpointEllipse->setGeometry(QRect(740, 660, 91, 23));
        polarEllipse = new QPushButton(centralWidget);
        polarEllipse->setObjectName(QStringLiteral("polarEllipse"));
        polarEllipse->setGeometry(QRect(850, 660, 91, 23));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(1010, 230, 20, 491));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pointFill4 = new QRadioButton(centralWidget);
        pointFill4->setObjectName(QStringLiteral("pointFill4"));
        pointFill4->setGeometry(QRect(1040, 270, 78, 21));
        pointFill8 = new QRadioButton(centralWidget);
        pointFill8->setObjectName(QStringLiteral("pointFill8"));
        pointFill8->setGeometry(QRect(1040, 300, 78, 21));
        boundaryFill = new QPushButton(centralWidget);
        boundaryFill->setObjectName(QStringLiteral("boundaryFill"));
        boundaryFill->setGeometry(QRect(1050, 350, 75, 23));
        floodFill = new QPushButton(centralWidget);
        floodFill->setObjectName(QStringLiteral("floodFill"));
        floodFill->setGeometry(QRect(1150, 350, 75, 23));
        setVertex = new QPushButton(centralWidget);
        setVertex->setObjectName(QStringLiteral("setVertex"));
        setVertex->setGeometry(QRect(1050, 400, 75, 23));
        clearVertex = new QPushButton(centralWidget);
        clearVertex->setObjectName(QStringLiteral("clearVertex"));
        clearVertex->setGeometry(QRect(1140, 400, 75, 23));
        scanlinefill = new QPushButton(centralWidget);
        scanlinefill->setObjectName(QStringLiteral("scanlinefill"));
        scanlinefill->setGeometry(QRect(1100, 450, 75, 23));
        xtranslate = new QSpinBox(centralWidget);
        xtranslate->setObjectName(QStringLiteral("xtranslate"));
        xtranslate->setGeometry(QRect(1030, 490, 61, 22));
        xtranslate->setMinimum(-99);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1030, 510, 61, 21));
        ytranslate = new QSpinBox(centralWidget);
        ytranslate->setObjectName(QStringLiteral("ytranslate"));
        ytranslate->setGeometry(QRect(1090, 490, 61, 22));
        ytranslate->setMinimum(-99);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1090, 510, 51, 20));
        translation = new QPushButton(centralWidget);
        translation->setObjectName(QStringLiteral("translation"));
        translation->setGeometry(QRect(1150, 490, 75, 23));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1030, 550, 41, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1090, 550, 41, 21));
        scale = new QPushButton(centralWidget);
        scale->setObjectName(QStringLiteral("scale"));
        scale->setGeometry(QRect(1140, 530, 75, 23));
        xscale = new QDoubleSpinBox(centralWidget);
        xscale->setObjectName(QStringLiteral("xscale"));
        xscale->setGeometry(QRect(1030, 530, 62, 22));
        yscale = new QDoubleSpinBox(centralWidget);
        yscale->setObjectName(QStringLiteral("yscale"));
        yscale->setGeometry(QRect(1090, 530, 62, 22));
        shearing = new QPushButton(centralWidget);
        shearing->setObjectName(QStringLiteral("shearing"));
        shearing->setGeometry(QRect(1150, 570, 75, 23));
        xshear = new QSpinBox(centralWidget);
        xshear->setObjectName(QStringLiteral("xshear"));
        xshear->setGeometry(QRect(1030, 570, 61, 22));
        yshear = new QSpinBox(centralWidget);
        yshear->setObjectName(QStringLiteral("yshear"));
        yshear->setGeometry(QRect(1090, 570, 61, 22));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(1040, 590, 41, 21));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(1090, 590, 41, 16));
        anglespinbox = new QSpinBox(centralWidget);
        anglespinbox->setObjectName(QStringLiteral("anglespinbox"));
        anglespinbox->setGeometry(QRect(1040, 620, 61, 22));
        anglespinbox->setMaximum(359);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(1040, 640, 51, 16));
        rotation = new QPushButton(centralWidget);
        rotation->setObjectName(QStringLiteral("rotation"));
        rotation->setGeometry(QRect(1100, 620, 75, 23));
        reflectionaxis = new QCheckBox(centralWidget);
        reflectionaxis->setObjectName(QStringLiteral("reflectionaxis"));
        reflectionaxis->setGeometry(QRect(1030, 660, 81, 16));
        reflectxaxis = new QCheckBox(centralWidget);
        reflectxaxis->setObjectName(QStringLiteral("reflectxaxis"));
        reflectxaxis->setGeometry(QRect(1130, 660, 91, 16));
        reflectorigin = new QCheckBox(centralWidget);
        reflectorigin->setObjectName(QStringLiteral("reflectorigin"));
        reflectorigin->setGeometry(QRect(1140, 690, 91, 16));
        reflection = new QPushButton(centralWidget);
        reflection->setObjectName(QStringLiteral("reflection"));
        reflection->setGeometry(QRect(1060, 710, 75, 23));
        reflectyaxis = new QCheckBox(centralWidget);
        reflectyaxis->setObjectName(QStringLiteral("reflectyaxis"));
        reflectyaxis->setGeometry(QRect(1030, 690, 91, 16));
        setCorner1 = new QPushButton(centralWidget);
        setCorner1->setObjectName(QStringLiteral("setCorner1"));
        setCorner1->setGeometry(QRect(1030, 110, 75, 23));
        setCorner2 = new QPushButton(centralWidget);
        setCorner2->setObjectName(QStringLiteral("setCorner2"));
        setCorner2->setGeometry(QRect(1130, 110, 75, 23));
        lineclipping = new QPushButton(centralWidget);
        lineclipping->setObjectName(QStringLiteral("lineclipping"));
        lineclipping->setGeometry(QRect(1040, 140, 75, 23));
        drawDDALineByStoringPoints = new QPushButton(centralWidget);
        drawDDALineByStoringPoints->setObjectName(QStringLiteral("drawDDALineByStoringPoints"));
        drawDDALineByStoringPoints->setGeometry(QRect(1120, 150, 141, 23));
        polygonclipping = new QPushButton(centralWidget);
        polygonclipping->setObjectName(QStringLiteral("polygonclipping"));
        polygonclipping->setGeometry(QRect(1050, 190, 121, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1277, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        frame->setText(QString());
        mouse_movement->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "    Mouse Movement", 0));
        mouse_pressed->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Mouse Pressed", 0));
        show_axes->setText(QApplication::translate("MainWindow", "Show Axes", 0));
        Draw->setText(QApplication::translate("MainWindow", "Draw", 0));
        draw_line->setText(QApplication::translate("MainWindow", "Draw Line", 0));
        set_point1->setText(QApplication::translate("MainWindow", "Set point 1", 0));
        set_point2->setText(QApplication::translate("MainWindow", "Set point 2", 0));
        pushButton->setText(QApplication::translate("MainWindow", "RESET", 0));
        label->setText(QApplication::translate("MainWindow", "Grid Size", 0));
        showgrid->setText(QApplication::translate("MainWindow", "Show Grid", 0));
        label_2->setText(QApplication::translate("MainWindow", "Line Drawing Algorithm", 0));
        dda->setText(QApplication::translate("MainWindow", "DDA", 0));
        bress->setText(QApplication::translate("MainWindow", "bress", 0));
        bresscirc->setText(QApplication::translate("MainWindow", "bresscircle", 0));
        midpointcirc->setText(QApplication::translate("MainWindow", "mid point circ", 0));
        label_4->setText(QApplication::translate("MainWindow", "RADIUS OF CIRCLE", 0));
        polarcirc->setText(QApplication::translate("MainWindow", "polar circ", 0));
        label_6->setText(QApplication::translate("MainWindow", "x_radius", 0));
        label_7->setText(QApplication::translate("MainWindow", "y_radius", 0));
        midpointEllipse->setText(QApplication::translate("MainWindow", "mid point ellipse", 0));
        polarEllipse->setText(QApplication::translate("MainWindow", "polar ellipse", 0));
        pointFill4->setText(QApplication::translate("MainWindow", "4 point fill", 0));
        pointFill8->setText(QApplication::translate("MainWindow", "8 point fill", 0));
        boundaryFill->setText(QApplication::translate("MainWindow", "boundary fill", 0));
        floodFill->setText(QApplication::translate("MainWindow", "flood fill", 0));
        setVertex->setText(QApplication::translate("MainWindow", "set vertex", 0));
        clearVertex->setText(QApplication::translate("MainWindow", "clear vertex", 0));
        scanlinefill->setText(QApplication::translate("MainWindow", "scanline fill", 0));
        label_8->setText(QApplication::translate("MainWindow", "x translate", 0));
        label_9->setText(QApplication::translate("MainWindow", "y translate", 0));
        translation->setText(QApplication::translate("MainWindow", "Translate", 0));
        label_10->setText(QApplication::translate("MainWindow", "x scale", 0));
        label_11->setText(QApplication::translate("MainWindow", "y scale", 0));
        scale->setText(QApplication::translate("MainWindow", "Scale", 0));
        shearing->setText(QApplication::translate("MainWindow", "shearing", 0));
        label_12->setText(QApplication::translate("MainWindow", "x shear", 0));
        label_13->setText(QApplication::translate("MainWindow", "y shear", 0));
        label_14->setText(QApplication::translate("MainWindow", "angle spin", 0));
        rotation->setText(QApplication::translate("MainWindow", "rotation", 0));
        reflectionaxis->setText(QApplication::translate("MainWindow", "Reflection axis", 0));
        reflectxaxis->setText(QApplication::translate("MainWindow", "Reflection x axis", 0));
        reflectorigin->setText(QApplication::translate("MainWindow", "Reflection origin", 0));
        reflection->setText(QApplication::translate("MainWindow", "Reflection", 0));
        reflectyaxis->setText(QApplication::translate("MainWindow", "Reflection y axis", 0));
        setCorner1->setText(QApplication::translate("MainWindow", "set corner 1", 0));
        setCorner2->setText(QApplication::translate("MainWindow", "set corner 2", 0));
        lineclipping->setText(QApplication::translate("MainWindow", "line clipping", 0));
        drawDDALineByStoringPoints->setText(QApplication::translate("MainWindow", "draw DDA by storing points", 0));
        polygonclipping->setText(QApplication::translate("MainWindow", "POLYGON CLIPPING", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

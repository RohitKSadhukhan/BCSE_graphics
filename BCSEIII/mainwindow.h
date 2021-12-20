#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <vector>
#include <algorithm>
#define maxVer 50
#define maxHt 1000
#define maxWd 800

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void Mouse_Pressed();
    void showMousePosition(QPoint& pos);

private:
    Ui::MainWindow *ui;
    QPoint p1,p2,cp1,cp2;
    int x_max,x_min,y_max,y_min;
    QTimer *timer;


    void point(int x,int y,int r=255,int g=255,int b=0);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_show_axes_clicked();

    void on_Draw_clicked();

    void on_set_point1_clicked();

    void on_set_point2_clicked();

    void on_pushButton_clicked();

    int changeX(int x);

    int changeY(int y);

    void on_showgrid_clicked();

    void on_dda_clicked();

    void drawDDALine (int r, int g, int b);

    void on_bress_clicked();

    void delay(int n);

    void on_bresscirc_clicked();

    void on_midpointcirc_clicked();

    void on_polarcirc_clicked();
    void on_midpointEllipse_clicked();
    void on_polarEllipse_clicked();

    void boundaryfillUtility4point (int x, int y, QRgb edgecolor, int r, int g, int b);

    void boundaryfillUtility8point (int x, int y, QRgb edgecolor, int r, int g, int b);

    void on_boundaryFill_clicked();

    void on_floodFill_clicked();

    void floodfillUtility4point (int x, int y, int r, int g, int b);

    void floodfillUtility8point (int x, int y, int r, int g, int b);


    void on_setVertex_clicked();


    void on_clearVertex_clicked();


    void initEdgeTable ();


    void storeEdgeInTable (int, int, int, int);


    void on_scanlinefill_clicked();

    void poly_draw(std::vector<std::pair<int,int> > vlist, int r, int g, int b);
    void on_translation_clicked();

    void on_scale_clicked();
    void on_shearing_clicked();
    void on_rotation_clicked();
    void on_reflection_clicked();

    void drawDDALineByStoringPoints (int r, int g, int b);
    void on_setCorner1_clicked();
    void on_setCorner2_clicked();
    void draw_Window();
    void on_lineclipping_clicked();
    void on_drawDDALineByStoringPoints_clicked();
    int computeCode(int xa, int ya);
    void cohenSutherlandClip(int x1, int y1,int x2, int y2);
    int x_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4);
    int y_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4);
    void clip(int x1, int y1, int x2, int y2);
    void suthHodgClip();
    void on_polygonclipping_clicked();

};

#endif // MAINWINDOW_H

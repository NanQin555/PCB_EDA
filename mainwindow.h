#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QAction>
#include <QMenuBar>
#include <QDebug>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "Rectangle.hpp"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void InitToolBar();
    void showToolBar(QToolBar*);

    void InitGraph();

private:
    // QMenuBar* menuBar;
    QMenu* menuToolBar;
    QMenu* menuTest_put;
    QMenu* menuTest_file;

    QToolBar* toolBar;
    QToolBar* toolBar_put;
    QToolBar* toolBar_file;

    QAction* actionTest;
    QAction* actionTest_put;
    QAction* actionTest_file;
    QAction* put;
    QAction* file;

    QGraphicsScene* scene;
    QGraphicsView* view;
private slots:
    void on_put_triggered();
    void on_file_triggered();
};
#endif // MAINWINDOW_H

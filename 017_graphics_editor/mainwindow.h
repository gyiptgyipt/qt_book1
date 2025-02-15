#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QtSvg/QSvgGenerator>
#include <QFileDialog>
#include <QPainterPath>
#include <QtSvg/QSvgGenerator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void paintEvent(QPaintEvent *event);
    void paintAll(QSvgGenerator *generator = 0);

private slots:
    void on_actionsave_svg_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vaihdatiliawindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void SetUserName(QString);
    void IsCredit(bool);
    ~MainWindow();

private slots:
    void saldoButton_handler();
    void vaihdaTiliButton_handler();
    void lopetaButton_handler();
    void lahjoitaButton_handler();
    void nostaRahaaButton_handler();
    void tilitapahtumatButton_handler();
    void recieveIsCredit(bool);

private:
    Ui::MainWindow *ui;
    VaihdaTiliaWindow * pVaihdaTilia;
};
#endif // MAINWINDOW_H

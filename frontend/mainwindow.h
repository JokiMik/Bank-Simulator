#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "saldowindow.h"
#include "tilitapahtumawindow.h"
#include "vaihdatiliawindow.h"
#include "lahjoitarahaawindow.h"
#include "valitsesummawindow.h"
#include "naytatapahtumawindow.h"
#include "manualsummawindow.h"

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
    void disableVaihdaBtn();
    ~MainWindow();

private slots:
    void saldoButton_handler();
    void vaihdaTiliButton_handler();
    void lopetaButton_handler();
    void lahjoitaButton_handler();
    void nostaRahaaButton_handler();
    void tilitapahtumatButton_handler();

    void receiveIsCredit(bool);
    void receiveCharity(QString);
    void receiveCharitySumma(QString);
    void receiveNostoSumma(QString);

    void openManualCharitySumma();
    void openManualNostoSumma();
private:
    Ui::MainWindow *ui;
    VaihdaTiliaWindow * pVaihdaTilia;
    LahjoitaRahaaWindow * pLahjoitaRahaa;
    ValitseSummaWindow * pValitseSumma;
    NaytaTapahtumaWindow * pNaytaTapahtuma;
    ManualSummaWindow * pManualSumma;
    saldoWindow * pSaldo;
    TiliTapahtumaWindow * pTiliTapahtuma;



};
#endif // MAINWINDOW_H

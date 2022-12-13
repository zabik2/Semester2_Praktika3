#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QListWidgetItem>
#include <QTableWidgetItem>
#include "travelagency.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionEinlesen_triggered();

    void on_actionAusw_hlen_triggered();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionJson_triggered();


    void on_actionSearch_Kunde_triggered();

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_tableWidget_Buchungen_itemDoubleClicked(QTableWidgetItem *item);

    void on_StartD_Output_editingFinished();

    void on_StartDatum_Hotel_Output_editingFinished();

    void on_ID_Output_editingFinished();

    void on_EndD_Output_editingFinished();

    void on_StartFlugH_Output_editingFinished();

    void on_ZielflugH_Output_editingFinished();

    void on_Fluggesellschaft_Output_editingFinished();

    void on_Preis_Output_editingFinished();

    void on_ID_Car_Output_editingFinished();

    void on_StartDatum_Car_output_editingFinished();

    void on_EndDatum_Car_Output_editingFinished();

    void on_AbholOrt_Car_Output_editingFinished();

    void on_ZielOrt_Car_Output_editingFinished();

    void on_Firma_Car_Output_editingFinished();

    void on_Preis_Car_Output_editingFinished();

    void on_ID_Hotel_Output_editingFinished();

    void on_EndDatum_Hotel_Output_editingFinished();

    void on_HotelName_Output_editingFinished();

    void on_HotelStadt_Output_editingFinished();

    void on_Preis_Hotel_Output_editingFinished();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

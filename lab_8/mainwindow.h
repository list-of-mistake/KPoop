#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <qtableviewmodel.h>
#include <QMainWindow>
#include <patients.h>
#include <drugs.h>
#include <dispensing.h>
#include <qstandarditemmodel.h>
#include <calcfacade.h>
#include<observer.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void reshow1();
    void reshow2();
    void reshow3();
private slots:
    void on_add_patient_clicked();

    void on_add_drug_clicked();

    void on_add_disp_clicked();

    void on_show_patients_clicked();

    void on_show_drugs_clicked();

    void on_show_dispensing_clicked();

    void on_delete_patient_clicked();

    void on_delete_drug_clicked();

    void on_delete_dispens_clicked();

    void on_find_FNS_clicked();

    void on_find_diagnosis_clicked();

    void on_find_address_clicked();

    void on_find_years_clicked();

    void on_find_tel_clicked();

    void on_find_title_clicked();

    void on_find_code_clicked();

    void on_find_count_clicked();

    void on_find_date_clicked();

    void on_find_tel_disp_clicked();

    void on_find_code_disp_clicked();

    void on_find_date_disp_clicked();

    void on_find_cost_clicked();

private:
    Ui::MainWindow *ui;
    patients p;
    drugs dru;
    dispensing di;
    CalcFacade C;
    observer O;
};

#endif // MAINWINDOW_H

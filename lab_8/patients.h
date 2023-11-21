#ifndef PATIENTS_H
#define PATIENTS_H
#include <QVector>
#include<string>

class patient
{
    QString FNS;
    QString diagnosis;
    QString address;
    QString tel_num;
    QString years;
    QString department;
public:
    QString get_tel()const;
    QString get_FNS()const;
    QString get_diagnosis()const;
    QString get_address()const;
    QString get_years()const;
    QString get_department()const;
    patient(QString f,QString d,QString a,QString t,QString y,QString c);
    patient();
};
class patients:public QVector<patient>
{
public:
    patients();
    void delete_patient (QString tel);
    bool find_by_tel_num(QString tel);
    patients find(QString what,int n);
    patient pat_by_tel(QString tel);
};

#endif // PATIENTS_H

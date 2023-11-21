#ifndef DISPENSING_H
#define DISPENSING_H
#include <QVector>
#include <string>


class dispens
{
    QString n;
    QString tel_num;
    QString code_of_drug;
    QString date;
    QString cost;
public:
    dispens(QString n,QString t,QString cd,QString date,QString cost);
    dispens();
    QString get_n()const;
    QString get_tel()const;
    QString get_code_drug()const;
    QString get_date()const;
    QString get_cost()const;
};

class dispensing:public QVector<dispens>
{
public:
    bool find_by_code_drug(QString code);
    bool find_by_tel(QString tel);
    bool delete_dispens(QString tel,QString code,QString date);
    dispensing();
    dispensing find(QString what,int n);
};
#endif // DISPENSING_H

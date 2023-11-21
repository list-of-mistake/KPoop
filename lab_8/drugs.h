#ifndef DRUGS_H
#define DRUGS_H
#include <string>
#include <QVector>


class drug
{
    QString title;
    QString code_of_drug;
    QString count;
    QString date;
    QString cost;
public:
    QString get_code_drug()const;
    QString get_title()const;
    QString get_date()const;
    QString get_count()const;
    QString get_cost()const;
    drug(QString t,QString cd,QString c,QString d,QString cos);
    drug();
    void change_count(int t);
    bool check_count();
};

class drugs:public QVector<drug>
{

public:
    bool find_by_code_drug(QString code);
    void add_count_by_cd(QString cd,int t);
    bool check_count(QString cd);
    void delete_drug(QString cd);
    drugs();
    drugs find(QString what,int n);
    drug drug_by_code(QString code);
};
#endif // DRUGS_H

#ifndef CALC_H
#define CALC_H

#include <QObject>
#include <patients.h>

class Calc : public QObject
{
    Q_OBJECT
public:
     virtual int getCost(patient value)=0;
     virtual ~Calc(){}
};

class ZHKT : public Calc
{
    Q_OBJECT
public:
    int getCost(patient value);
};

class injury : public Calc
{
    Q_OBJECT
public:
    int getCost(patient value);
};

class surgery : public Calc
{
    Q_OBJECT
public:
    int getCost(patient value);
};

class psychiatry : public Calc
{
    Q_OBJECT
public:
    int getCost(patient value);
};

class kardio : public Calc
{
    Q_OBJECT
public:
    int getCost(patient value);
};
#endif // CALC_H

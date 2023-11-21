#ifndef CALCFACADE_H
#define CALCFACADE_H
#include <calc.h>
#include <QObject>

class CalcFacade : public QObject
{
    Q_OBJECT
public:
    explicit CalcFacade(QObject *parent = 0);
    int getCost(patient value);
private:
    surgery s;
    psychiatry p;
    injury i;
    ZHKT zh;
    kardio k;
};

#endif // CALCFACADE_H

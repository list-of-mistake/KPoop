#ifndef OBSERVER_H
#define OBSERVER_H
#include <patients.h>
#include<drugs.h>
#include<dispensing.h>
#include <QObject>

class observer : public QObject
{
    Q_OBJECT

public:
    void update(int i);
    explicit observer(QObject *parent = 0);
    patients pat;
    drugs d;
    dispensing disp;
signals:
void notifyObservers1();
void notifyObservers2();
void notifyObservers3();
public slots:
};

#endif // OBSERVER_H

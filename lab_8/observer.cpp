#include "observer.h"

observer::observer(QObject *parent) : QObject(parent)
{
}

void observer::update(int i){
    if(i==1){
        emit notifyObservers1();
    }
    else if(i==2){
        emit notifyObservers2();
    }else{
        emit notifyObservers3();
    }
}

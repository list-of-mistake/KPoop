#include "calcfacade.h"

CalcFacade::CalcFacade(QObject *parent) : QObject(parent)
{

}

int CalcFacade::getCost(patient value)
{
    int cost;
    int c;
    if(value.get_department()=="ЖКТ"){
        c=0;
    }else if(value.get_department()=="Травмы"){
        c=1;
    }else if(value.get_department()=="Психиатрия"){
    c=2;
    }else if(value.get_department()=="Хирургия"){
    c=3;
    }else if(value.get_department()=="Кардио-центр"){
    c=4;
    }
    switch (c) {
        case 0:
        cost = zh.getCost(value);
        break;
        case 1:
        cost = i.getCost(value);
        break;
        case 2:
        cost = p.getCost(value);
        break;
        case 3:
        cost = s.getCost(value);
        break;
        case 4:
        cost=k.getCost(value);
        break;
        default:
        cost = -1;
        break;
    }
    return cost;
}

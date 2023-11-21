#include "calc.h"

int ZHKT::getCost(patient value)
{
    int cost=0;
    int ye=value.get_years().toInt();
    if((ye<18)||(ye>59)){
        cost=(5000+ye*300)*0.95;
    }else{
        cost=(5000+ye*100);
    }
    return cost;
}

int injury::getCost(patient value)
{
    int cost=0;
    int ye=value.get_years().toInt();
    if((ye<18)||(ye>59)){
        cost=(3000+ye*500)*0.9;
    }else{
        cost=(3000+ye*400);
    }
    return cost;
}

int surgery::getCost(patient value)
{
    int cost=0;
    int ye=value.get_years().toInt();
    if((ye<18)||(ye>59)){
        cost=(15000+ye*50)*0.9;
    }else{
        cost=(15000+ye*40);
    }
    return cost;
}

int psychiatry::getCost(patient value)
{
    int cost=0;
    int ye=value.get_years().toInt();
    if(ye<18){
        cost=(10000+ye*500);
    }else if(ye>59){
        cost=15000;
    }else{
        cost=15000+ye*10;
    }
    return cost;
}

int kardio::getCost(patient value)
{
    int cost=0;
    int ye=value.get_years().toInt();
    if((ye<18)||(ye>59)){
        cost=(25000+ye*50)*0.9;
    }else{
        cost=(15000+ye*40);
    }
    return cost;
}

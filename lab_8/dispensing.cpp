#include "dispensing.h"

dispens::dispens(QString n, QString t,QString cd,QString date,QString cost)
{
    this->n=n;
    this->tel_num=t;
    this->code_of_drug=cd;
    this->date=date;
    this->cost=cost;
}
dispens::dispens(){

}
dispensing::dispensing(){

}

QString dispens::get_n()const{
    return this->n;
}

QString dispens::get_tel()const{
    return this->tel_num;
}

QString dispens::get_code_drug()const{
    return this->code_of_drug;
}

QString dispens::get_date()const{
    return this->date;
}

QString dispens::get_cost()const{
    return this->cost;
}

bool dispensing::delete_dispens(QString tel,QString code,QString date){
    for(int i=0;i<this->size();++i){
        if((this->at(i).get_code_drug()==code)&&(this->at(i).get_tel()==tel)&&(this->at(i).get_date()==date)){
            this->erase(this->begin()+i);
            return true;
        }
    }
    return false;
}

bool dispensing::find_by_code_drug(QString code){
    for(int i=0;i<this->size();++i){
        if(this->at(i).get_code_drug()==code){
            return true;
        }
    }
    return false;
}

bool dispensing::find_by_tel(QString tel){
    for(int i=0;i<this->size();++i){
        if(this->at(i).get_tel()==tel){
            return true;
        }
    }
    return false;
}

dispensing dispensing::find(QString what,int n){
    dispensing p;
    for(int i=0;i<this->size();++i){
        switch (n) {
        case 1:
            if(this->at(i).get_tel()==what){
                p.push_back(this->at(i));
            }
            break;
        case 2:
            if(this->at(i).get_code_drug()==what){
                p.push_back(this->at(i));
            }
            break;
        case 3:
            if(this->at(i).get_date()==what){
                p.push_back(this->at(i));
            }
            break;
        default:
            break;
        }
    }
    return p;
}


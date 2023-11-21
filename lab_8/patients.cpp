#include "patients.h"

patient::patient(QString f,QString d,QString a,QString t,QString y,QString c)
{
    this->address=a;
    this->years=y;
    this->diagnosis=d;
    this->FNS=f;
    this->tel_num=t;
    this->department=c;
}
patient::patient()
{
}

patients::patients()
{
}

QString patient::get_tel()const{
    return this->tel_num;
}

QString patient::get_FNS()const{
    return this->FNS;
}

QString patient::get_diagnosis()const{
    return this->diagnosis;
}

QString patient::get_address()const{
    return this->address;
}

QString patient::get_years()const{
    return this->years;
}

QString patient::get_department()const{
    return this->department;
}

void patients::delete_patient (QString tel){
    for(int i=0;i<this->size();++i){
        if(tel==this->at(i).get_tel()){
            this->erase(this->begin()+i);
        }
    }
}

bool patients::find_by_tel_num(QString tel){
    for(QVector::iterator i=this->begin();i<this->end();++i){
        if(i->get_tel()==tel){
            return true;
        }
    }
    return false;
}

patients patients::find(QString what,int n){
    patients p;
    for(int i=0;i<this->size();++i){
        switch (n) {
        case 1:
            if(this->at(i).get_FNS()==what){
                p.push_back(this->at(i));
            }
            break;
        case 2:
            if(this->at(i).get_diagnosis()==what){
                p.push_back(this->at(i));
            }
            break;
        case 3:
            if(this->at(i).get_address()==what){
                p.push_back(this->at(i));
            }
            break;
        case 4:
            if(this->at(i).get_tel()==what){
                p.push_back(this->at(i));
            }
            break;
        case 5:
            if(this->at(i).get_years()==what){
                p.push_back(this->at(i));
            }
            break;
        case 6:
            if(this->at(i).get_department()==what){
                p.push_back(this->at(i));
            }
            break;
        default:
            break;
        }
    }
    return p;
}

patient patients::pat_by_tel(QString tel){
    for(int i=0;i<this->size();++i){
        if(this->at(i).get_tel()==tel)
            return this->at(i);
    }
}

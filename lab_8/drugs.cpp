#include "drugs.h"



drug::drug(QString t,QString cd,QString c,QString d,QString cos)
{
    this->count=c;
    this->date=d;
    this->code_of_drug=cd;
    this->title=t;
    this->cost=cos;
}
drug::drug(){

}
void drug::change_count(int t){
    int tmp=count.toInt();
    tmp+=t;
    count=QString::number(tmp);
}
drugs::drugs(){

}

QString drug::get_code_drug()const{
    return this->code_of_drug;
}

QString drug::get_cost()const{
    return this->cost;
}

bool drug::check_count(){
    if(this->count.toInt()<=0){
        return false;
    }else{
        return true;
    }
}
void drugs::add_count_by_cd(QString cd,int t){
    for(auto i=this->begin();i<this->end();++i){
        if(i->get_code_drug()==cd){
            i->change_count(t);
        }
    }
}

bool drugs::find_by_code_drug(QString code){
    for(QVector::iterator i=this->begin();i<this->end();++i){
        if(i->get_code_drug()==code){
            return true;
        }
    }
    return false;
}

bool drugs::check_count(QString cd){
    for(QVector::iterator i=this->begin();i<this->end();++i){
        if(i->get_code_drug()==cd){
            return i->check_count();
        }
    }
    return false;
}

void drugs::delete_drug(QString cd){
    for(int i=0;i<this->size();++i){
        if(cd==this->at(i).get_code_drug()){
            this->erase(this->begin()+i);
        }
    }
}

QString drug::get_title()const{
    return this->title;
}

QString drug::get_date()const{
    return this->date;
}

QString drug::get_count()const{
    return this->count;
}

drugs drugs::find(QString what,int n){
    drugs p;
    for(int i=0;i<this->size();++i){
        switch (n) {
        case 1:
            if(this->at(i).get_title()==what){
                p.push_back(this->at(i));
            }
            break;
        case 2:
            if(this->at(i).get_code_drug()==what){
                p.push_back(this->at(i));
            }
            break;
        case 3:
            if(this->at(i).get_count()==what){
                p.push_back(this->at(i));
            }
            break;
        case 4:
            if(this->at(i).get_date()==what){
                p.push_back(this->at(i));
            }
            break;
        case 5:
            if(this->at(i).get_cost()==what){
                p.push_back(this->at(i));
            }
            break;
        default:
            break;
        }
    }
    return p;
}

drug drugs::drug_by_code(QString code){
 for(int i=0;i<this->size();++i){
     if(this->at(i).get_code_drug()==code)
         return this->at(i);
 }
}

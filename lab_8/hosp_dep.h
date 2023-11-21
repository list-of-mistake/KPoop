#ifndef HOSP_DEP_H
#define HOSP_DEP_H


class hosp_dep
{
    int n=0;
public:
    virtual int get_free_count()=0;
    virtual ~hosp_dep(){}
};

class surgery : public hosp_dep
{
    int n=10;
public:
     int get_free_count();
};

#endif // HOSP_DEP_H

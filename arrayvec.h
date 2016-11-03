#ifndef ARRAYVEC_H_INCLUDED
#define ARRAYVEC_H_INCLUDED
#include "vector.h"
class arrayvec{
private:
    int sizze;
    vec *p;
public:
    arrayvec();
    arrayvec(const vec vectors[], const int sizze);
    arrayvec(const arrayvec& pv);
    void point_f(const vec &p);
    vec *getvec();
    void inser(const int position, const vec &p);
    void remov(const int position);
    const  int getsizz();
    void clearr();
    void resizze(int x);



};


#endif // ARRAYVEC_H_INCLUDED

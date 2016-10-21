#ifndef POINTARRAY_H_INCLUDED
#define POINTARRAY_H_INCLUDED
#include "point.h"
class pointarray{
private:
    int sizze;
    point *p;
public:
    pointarray(const point points[], const int sizze);
    pointarray(const pointarray& pv);
    void point_f(const point &p);
    void inser(const int position, const point &p);
    void remov(const int position);
    int getSize();
    void clearr();



};


#endif // POINTARRAY_H_INCLUDED

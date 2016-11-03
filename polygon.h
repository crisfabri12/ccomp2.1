#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "pointarray.h"
class polygon{
public:
    pointarray p;
    int tam;
    polygon(pointarray &x);
    polygon();
    polygon(point x[],int sizze);
    double area();
    int numpol();
    int numsizz();
    const point * getpoint();
};


#endif // POLYGON_H_INCLUDED

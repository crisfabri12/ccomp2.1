#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include "polygon.h"

class triangle: public polygon{
public:
    triangle(point &a,point &b,point &c);
    double area();

};


#endif // TRIANGULO_H_INCLUDED

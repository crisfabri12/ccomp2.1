#ifndef Included_vector.h
#define Included_vector.h
#include "point.h"
class vec{
private:
    point p1;
    point p2;
public:
    vec(point &x,point &y);
    void setp1(int nx,int ny);
    void setp2(int nx,int ny);
    int getp1();
    int getp2();
    void print();
    void mod(point &x, point &p2);
};
#endif // Included_vector

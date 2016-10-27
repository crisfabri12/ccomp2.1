#include <iostream>
#include "point.h"
#include "vector.h"
#include "pointarray.h"
using namespace std;
main()
{
point r(1,2);
point t(3,4);
point y(5,4);
point p[] ={r,t};
point x[] ={r,y};
pointarray f(p,2);
pointarray v(f);
v.inser(2,y);
v.remov(1);
point h;
v.clearr();
h = v.p[1];





}

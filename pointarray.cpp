#include <iostream>
using namespace std;
#include "pointarray.h"
pointarray::pointarray(const point points[],const int siz){
sizze = siz;
p =new point[siz];
int i=0;
for (i=0;i < siz;++i)
    p[i] = points[i];
}
pointarray::pointarray(const pointarray& pv)
{
    p = new point[pv.sizze];
    sizze = pv.sizze;
    for(int i = 0; i < sizze;++i)
        p[i] = pv.p[i];

}
int pointarray::getSize(){
return sizze;
}
void pointarray::point_f(const point &x){
    int i;
    point *h = new point[sizze];
    h = p;
    p = new point[++sizze];
    for(i=0;i<sizze;i++)
        p[i] = h[i];
    p[--i] = x;
}
void pointarray::inser(const int position, const point &x){
    int i,j;
    point *h = new point[sizze];
    h = p;
    p = new point[++sizze];
    for(i=0,j=0;i<sizze;++i)
        if(i != position){
            p[i] = h[j];
            ++j;
        }else
           p[i] = x;
}

void pointarray::remov(const int position)
{
    int i,j;
    point *h = new point[sizze];
    for (i = 0;i < sizze;++i)
        h[i] = p[i];
    p = new point[--sizze];
    for (i=0;i<sizze;++i)
        if (i != position){
            p[i] = h[i];
        }else
            p[i] = h[i+1];
            ++i;
}

void pointarray::clearr()
{
    sizze = 0;
    delete [] p;
    p = new point[0];


}





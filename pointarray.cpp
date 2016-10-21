#include <iostream>
using namespace std;
#include "pointarray.h"
pointarray::pointarray(const point points[],const int siz){
sizze = siz;
*p =points[siz];
int i=0;
for (i=0;i < siz;++i)
    p[i] = points[i];
}
int pointarray::getSize(){
return sizze;
}
void pointarray::point_f(const point &x){
    int i;
    for (i=0;i<sizze;++i)
        ;
    p[i] = x;
}
void pointarray::inser(const int position, const point &x){
    int i;
    for(i=0;i<position;++i)
        ;
    p[i] = x;

}




#include "arrayvec.h"
#include <iostream>

using namespace std;
const int arrayvec::getsizz(){
    return this->sizze;
}
arrayvec::arrayvec(){
    this->p =new vec[0];
    this->sizze = 0;

}
arrayvec::arrayvec(const vec vectors[],int sizz){
    this->p = new vec[sizz];
    this->sizze = sizz;
    for (int i=0;i<sizz;++i)
        p[i] = vectors[i];
}

arrayvec::arrayvec(const arrayvec &v){
    this->p = new vec[sizze];
    this->sizze=sizze;
    for (int i=0;i<sizze;++i)
        p[i] = v.p[i];
}

void arrayvec::resizze(int x){
    this->p = new vec[x];
}

void arrayvec::point_f(const vec &x){
    int i;
    vec *h = new vec[sizze];
    h = p;
    p = new vec[++sizze];
    for(i=0;i<sizze;i++)
        p[i] = h[i];
    p[--i] = x;
}
vec * arrayvec::getvec(){
    return p;
}
void arrayvec::inser(const int position, const vec &x){
    int i,j;
    vec *h = new vec[sizze];
    h = p;
    p = new vec[++sizze];
    for(i=0,j=0;i<sizze;++i)
        if(i != position){
            p[i] = h[j];
            ++j;
        }else
           p[i] = x;
}
void arrayvec::remov(const int position)
{
    int i,j;
    vec *h = new vec[sizze];
    for (i = 0;i < sizze;++i)
        h[i] = p[i];
    p = new vec[--sizze];
    for (i=0;i<sizze;++i)
        if (i != position){
            p[i] = h[i];
        }else
            p[i] = h[i+1];
            ++i;
}

void arrayvec::clearr()
{
    sizze = 0;
    delete [] p;
    p = new vec[0];


}

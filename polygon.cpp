#include <iostream>
using namespace std;
#include "polygon.h"

polygon::polygon(){
    this->p = pointarray();
}
polygon::polygon(point points[],int sizz){
    this->p = pointarray(points,sizz);
}
polygon::polygon(pointarray& x) {
    this->p = pointarray(x);
}
int polygon::numsizz(){
    return p.getSize();

}
const point * polygon::getpoint(){
    return p.getpoint();
}
int polygon::numpol(){
    return this->tam;
}



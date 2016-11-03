#include "point.h"
point constructorPoints[4];

point *updateConstructorPoints (point &p1 ,point &p2 ,point &p3 ,point &p4 = point(0,0)){
    constructorPoints [0] = p1;
    constructorPoints [1] = p2;
    constructorPoints [2] = p3;
    constructorPoints [3] = p4;
    return constructorPoints ;
}

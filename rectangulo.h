#include "polygon.h"
class Rectangle:public polygon{
public:
    Rectangle(const point &a,const point &b);
    Rectangle(int x1,int y1, int x2,int y2);
    double area();
};

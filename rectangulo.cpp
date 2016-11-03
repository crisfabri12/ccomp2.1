#include "rectangulo.h"
#include "geometry.cpp"

Rectangle::Rectangle(const point &a,const point &b){
    point a=new point[4];
    x = a.getx();
    y = a.gety();
    x1=b.getx();
    y1=b.gety();
    a[1] =point(x,y);
    a[2] =point(x1,y);
    a[3] =point(x,y1);
    a[4] =point(x1,y1);
    pointarray x(a,4);
    p = x;
    this->tam++;

}
Rectangle::Rectangle(int x, int y, int x1, int y1){
    point a=new point[4];
    a[1] =point(x,y);
    a[2] =point(x1,y);
    a[3] =point(x,y1);
    a[4] =point(x1,y1);
    pointarray x(a,4);
    p = x;
    this->tam++;
}
double Rectangle::area(){
    double largo = ((p.getpoint(1).getx())-p.getpoint(4).getx())
    double ancho = ((p.getpoint(2).gety())-(p.getpoint(3).gety()))
    return largo *ancho;

}

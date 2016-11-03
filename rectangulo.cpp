#include "rectangulo.h"
#include "geometry.cpp"

Rectangle::Rectangle(const point &a,const point &b):polygon((updateConstructorPoints(a,point(a.getx(),b.gety()),point(b.getx(),a.gety()),b)),4){
    this->tam++;

}
Rectangle::Rectangle(int x1, int y1, int x2, int y2):polygon(updateConstructorPoints(point(x1,y1),point(x1,y2),point(x2,y2),point(x2,y1)),4) {

    this->tam++;
}
double Rectangle::area(){
    double largo = ((p.getpoint(1).getx())-p.getpoint(4).getx())
    double ancho = ((p.getpoint(2).gety())-(p.getpoint(3).gety()))
    return largo *ancho;

}

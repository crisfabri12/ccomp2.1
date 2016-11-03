#include "triangulo.h
triangle::triangle(point &a,point &b,point &c){
    point a=new point[3];
    a[1] = a;
    a[2] = b;
    a[3] = c;  
    this->p(a,3)
    this->tam++;

}

double triangle::area(){
    double lado1 = sqrt(pow(p.getpoint(1).getx()-p.getpoint(2).getx())+pow(p.getpoint(1).gety()-p.getpoint(2).gety()));
    double lado2 = sqrt(pow(p.getpoint(2).getx()-p.getpoint(3).getx())+pow(p.getpoint(2).gety()-p.getpoint(3).gety()));
    double lado3 = sqrt(pow(p.getpoint(1).getx()-p.getpoint(3).getx())+pow(p.getpoint(1).gety()-p.getpoint(3).gety()));
}

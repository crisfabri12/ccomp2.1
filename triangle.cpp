#include "triangulo.h
triangle::triangle(point &a,point &b,point &c):polygon(updateConstructorPoints(a,b,c),3){
    this->tam++;

}

double triangle::area(){
    double lado1 = sqrt(pow(p.getpoint(1).getx()-p.getpoint(2).getx())+pow(p.getpoint(1).gety()-p.getpoint(2).gety()));
    double lado2 = sqrt(pow(p.getpoint(2).getx()-p.getpoint(3).getx())+pow(p.getpoint(2).gety()-p.getpoint(3).gety()));
    double lado3 = sqrt(pow(p.getpoint(1).getx()-p.getpoint(3).getx())+pow(p.getpoint(1).gety()-p.getpoint(3).gety()));
}

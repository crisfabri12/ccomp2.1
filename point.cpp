#include <iostream>
using namespace std;
#include "point.h"
point::point()
{
    x = 0;
    y = 0;
}
point::point(int nx,int ny)
{
    x = nx;
    y = ny;
}
point::point(point &t)
{
    x = t.x;
    y = t.y;
}
void point::print() {
cout << "(" << x << "," << y << ")";
}

void point::setx(int nx){
x = nx;
}
void point::sety(int ny){
y = ny;
}
int point::getx(){
return x;
}
int point::gety(){
return y;
}
void point::mod(int nx,int ny){
x = nx;
y = ny;
}

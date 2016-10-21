#include "vector.h"
vec::vec(point &x,point &y){
    p1 = x;
    p2 = y;
    }
void vec::print() {
 p1.print();
 p2.print();
}
void vec::setp1(int nx,int ny){
    p1.setx(nx);
    p1.sety(ny);
}
void vec::setp2(int nx,int ny){
p2.setx(nx);
p2.sety(ny);
}
int vec::getp1(){
p1.getx();
p1.gety();
}
int vec::getp2(){
p2.getx();
p2.gety();
}
void vec::mod(point &x,point &y){
p1 = x;
p2 = y;
}

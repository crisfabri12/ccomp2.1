#ifndef Included_point.h
#define Included_point.h
class point {
private:
    int x, y;
public:
    point();
    point(int nx,int ny);
    point(point &t);
    void setx(int nx);
    void sety(int ny);
    int getx();
    int gety();
    void print();
    void mod(int nx, int ny);
};


#endif // point

#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
class polygon{
private:
    pointarray p;
    const int i;
public:
    polygon(pointarray &x,int sizze);
    double area();
    static int numpol();
    int numsizz();
    const point getpoint() const;
};


#endif // POLYGON_H_INCLUDED

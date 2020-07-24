#pragma once
#include "point.h"
classs rectangle{
    private:
    point point1;
    point point2;
    public:
    void setPoints(const point &,const point &);
    void getDimensions(double & , double&);
    double perimeter();
}
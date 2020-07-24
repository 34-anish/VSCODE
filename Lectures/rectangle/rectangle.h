#pragma once
#include "point.h"
class rect{
private: 
point p1,p3;
double l,w;
public:
	void setPoints(point , point);
	void getdimensions(double , double);
	double perimeter();
};
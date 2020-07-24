#pragma once
#include <iostream>
using namespace std;
class point{
	private:
	double x;
	double y;
	public:
		void get_Values(double a, double b);
		double calculate_Distance(const point &anotherpoint);
	
};

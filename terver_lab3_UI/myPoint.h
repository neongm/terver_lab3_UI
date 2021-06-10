#pragma once
#include <iostream>

class myPoint {
public:
	double x;
	double y;
	myPoint();
	myPoint(double _x, double _y);

	friend std::ostream& operator<<(std::ostream& out, const myPoint& _myPoint);
};


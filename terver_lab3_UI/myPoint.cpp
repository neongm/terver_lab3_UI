#include "myPoint.h"

myPoint::myPoint()
{
	x = 0;
	y = 0;
}

myPoint::myPoint(double _x, double _y) {
	x = _x;
	y = _y;
}

std::ostream& operator<<(std::ostream& out, const myPoint& _myPoint)
{
	out << "(" << _myPoint.x << ", " << _myPoint.y << ")";
	return out;
}

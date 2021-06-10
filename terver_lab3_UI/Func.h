#pragma once
#include <vector>
#include <cmath>

#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536

class Func
{
public:
	// parent class for any function, that takes 1 argument
	virtual double operator() (double _x) const = 0;	// outputs Y for given X
														// the only method that should be overriden
	virtual std::vector<double> calculate(const std::vector<double>& args); // outpurs arr of Ys for given array of Xs
	virtual ~Func() = default;	// don't even touch it
};

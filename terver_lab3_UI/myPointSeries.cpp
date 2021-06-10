#include "myPointSeries.h"

struct pred_bigger
{
	bool operator() (myPoint x1, myPoint x2)
	{
		return x1.x > x2.x;
	}
};


myPointSeries::myPointSeries() {}

myPointSeries::myPointSeries(std::vector<myPoint>& _vector_of_myPoints)
{
	points_array = _vector_of_myPoints;
}

myPointSeries::myPointSeries(std::vector<double>& _x_array) 
{
	// it will push values as Xs
	for (auto el : _x_array) points_array.push_back(myPoint(el, 0));
}

myPointSeries::myPointSeries(std::vector<double>& _x_array, std::vector<double>& _y_array)
{
	for (size_t i = 0; i < _x_array.size(); i++) 
	{
		points_array.push_back(myPoint(_x_array[i], _y_array[i]));
	}
}

void myPointSeries::push_back(myPoint _point)
{
	points_array.push_back(_point);
}

void myPointSeries::push_back(double _x, double _y)
{
	points_array.emplace_back(myPoint(_x, _y));
}

void myPointSeries::push_back(const std::vector<double>& y_arr, const std::vector<double>& x_arr)
{
	for (size_t i = 0; i < y_arr.size(); i++) 
	{
		push_back(y_arr[i], x_arr[i]);
	}
}

std::vector<myPoint>::iterator myPointSeries::begin()
{
	return points_array.begin();
}

std::vector<myPoint>::iterator myPointSeries::end()
{
	return points_array.end();
}

void myPointSeries::clear()
{
	points_array.resize(0);
}

std::vector<double> myPointSeries::x_values()
{
	std::vector<double> x_values;
	for (auto el : points_array) x_values.push_back(el.x);
	return x_values;
}

std::vector<double> myPointSeries::y_values()
{
	std::vector<double> y_values;
	for (auto el : points_array) y_values.push_back(el.y);
	return y_values;
}

myPoint myPointSeries::at(size_t _index)
{
	return points_array.at(_index);
}

size_t myPointSeries::size()
{
	return points_array.size();
}

size_t  myPointSeries::count_from_x1_to_x2(double _x1, double _x2)
{
	size_t counter = 0;
	for (auto el : points_array) if (el.x < _x2 && el.x > _x1) counter++;
	return counter;
}

size_t  myPointSeries::count_from_y1_to_y2(double _y1, double _y2)
{
	size_t counter = 0;
	for (auto el : points_array) if (el.y < _y2 && el.y > _y1) counter++;
	return counter;
}

double myPointSeries::min_x()
{
	double min = points_array[0].x;
	for (auto el : points_array) if (el.x < min) min = el.x;
	return min;
}

double myPointSeries::max_x()
{
	double max = points_array[0].x;
	for (auto el : points_array) if (el.x > max) max = el.x;
	return max;
}

double myPointSeries::min_y()
{
	double min = points_array[0].y;
	for (auto el : points_array) if (el.y < min) min = el.y;
	return min;
}

double myPointSeries::max_y()
{
	double max = points_array[0].y;
	for (auto el : points_array) if (el.y > max) max = el.y;
	return max;
}


void myPointSeries::sort_by_x()
{
	pred_bigger pred = pred_bigger();
	std::sort(points_array.begin(), points_array.end(), pred);
}

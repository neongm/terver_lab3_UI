#pragma once
#include <vector>
#include "myPoint.h"
#include <algorithm>

class myPointSeries
{
private:
	std::vector<myPoint> points_array;
public:
	std::vector<myPoint>::iterator begin();
	std::vector<myPoint>::iterator end();
	myPointSeries();
	myPointSeries(std::vector<myPoint>& _vector_of_myPoints);
	myPointSeries(std::vector<double>& _x_array);
	myPointSeries(std::vector<double>& _x_array, std::vector<double>& _y_array);
	void push_back(myPoint _point);
	void push_back(double _x, double _y);
	void push_back(const std::vector<double>& y_arr, const std::vector<double>& x_arr);
	void clear();
	std::vector<double> x_values();
	std::vector<double> y_values();
	myPoint at(size_t _index);
	size_t size();
	size_t count_from_x1_to_x2(double _x1, double _x2);
	size_t count_from_y1_to_y2(double _y1, double _y2);
	double min_x();
	double min_y();
	double max_x();
	double max_y();
	void sort_by_x();
};


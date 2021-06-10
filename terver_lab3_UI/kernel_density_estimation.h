#pragma once
#include "Func.h"


class kernel_density_estimation : public Func
{
public:
	double operator()(double _x) const override;
	void set_window_width(double _window_width);
	void set_array(std::vector<double> _array);
	kernel_density_estimation(std::vector<double>& _array, double _window_width);

private:
	double window_width;
	std::vector<double> array;
};

 
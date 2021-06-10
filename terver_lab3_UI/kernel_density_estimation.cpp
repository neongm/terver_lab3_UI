#include "kernel_density_estimation.h"

double g_core(const double& _x)
{
	double p1 = 1 / pow(2 * M_PI, 0.5);
	double x_sq = pow(_x, 2);
	double p2 = pow(M_E, -1 * x_sq / 2);
	return p1 * p2;
}


double kernel_density_estimation::operator()(double _x) const
{
	double kde_kernel_sum = 0;
	for (auto xi : array) kde_kernel_sum += g_core((_x - xi) / window_width);

	return (1 / (array.size() * window_width)) * kde_kernel_sum;

}

// auxilliary
void kernel_density_estimation::set_window_width(double _window_width)
{
	window_width = _window_width;
}

void kernel_density_estimation::set_array(std::vector<double> _array)
{
	array = _array;
}

kernel_density_estimation::kernel_density_estimation(std::vector<double>& _array, double _window_width)
{
	window_width = _window_width;
	array = _array;
}

#pragma once
#include <random>

#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536

class Rnd
{
public:
	static double zero_to_one();
	static double random_real(const double& min, const double& max);
	static double random_real_dependent(const double& _depends_on, const double& min, const double& max);

	static double random_norm_c(const double& _math_expectation, const double& _deviation);

	static double random_norm(const double& _math_expectation = 0, const double& _deviation = 1);
	static double random_norm_dependent(const double& _depends_on, const double& _math_expectation = 0, const double& _deviation = 1);

	static double random_exponent(const double& _max);
	static double random_exponent_dependent(const double& _depends_on, const double& _max);
};


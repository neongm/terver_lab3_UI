#include "Rnd.h"

double Rnd::zero_to_one() {
	return (double)rand() / RAND_MAX;
}

double Rnd::random_real(const double& min, const double& max)
{
	std::random_device rd; // obtaining seed;
	std::mt19937 gen(rd());  // standard engine seeded with rd()

	std::uniform_real_distribution<> distribution(min, max); // transforming int into our bounds

	return distribution(gen);
	//return (double)rand() / 1000;
}

double Rnd::random_real_dependent(const double& _depends_on, const double& min, const double& max)
{
	return _depends_on + random_real(min, max);
}


double Rnd::random_norm_c(const double& _math_expectation, const double& _deviation) 
{
	std::random_device rd; // obtaining seed;
	std::mt19937 gen(rd());  // standard engine seeded with rd()
	std::normal_distribution<double> distribution(_math_expectation, _deviation);
	return distribution(gen);
}



double Rnd::random_norm(const double& _math_expectation, const double& _deviation)
{
	double rvalue_1 = zero_to_one();
	double rvalue_2 = zero_to_one();
	// here is some fancy wtf-formulas from the book:
	double first_part = (pow(-2 * log(rvalue_1), 0.5) * cos(2 * M_PI * rvalue_2));
	return first_part * _deviation + _math_expectation;
}


double Rnd::random_norm_dependent(const double& _depends_on, const double& _math_expectation, const double& _deviation)
{
	return _depends_on + random_norm(_math_expectation, _deviation);
}


double Rnd::random_exponent(const double& _max)
{
	return -1 * (1 / _max) * log(random_real(0, 1));
}


double Rnd::random_exponent_dependent(const double& _depends_on, const double& _max)
{
	return _depends_on + random_exponent(_max);
}



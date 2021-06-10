#include "true_norm.h"

double true_norm::operator()(double _x) const
{
    double a = 5;
    double b = 1;
    
    double first_part = 1 /( b * pow(2*M_PI, 0.5) );
    return first_part * pow(M_E, -1 * (pow(_x - a, 2) / (2 * pow(b, 2))));
}

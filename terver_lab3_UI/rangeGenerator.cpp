#include "rangeGenerator.h"

std::vector<double> rangeGenerator::evenly_ranged(double _from, double _to, double _amount)
{
    std::vector<double> arr; 
    double step = (_to - _from) / _amount; 
    for (double i = _from; i <= _to; arr.push_back(i += step)); 
    return arr; 
}

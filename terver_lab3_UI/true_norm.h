#pragma once
#include "Func.h"

class true_norm : public Func
{
public: 
	double operator()(double _x) const override;
};


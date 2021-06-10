#pragma once
#include "myPointSeries.h"


class histogramify
{
public:
	static myPointSeries do_hist(myPointSeries& _array, size_t _bars_amount, size_t _range_start, size_t _range_end);
};


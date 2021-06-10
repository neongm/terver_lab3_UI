#include "histogramify.h"

myPointSeries histogramify::do_hist(myPointSeries& _array, size_t _bars_amount,
	size_t _range_start, size_t _range_end)
{
	size_t range = _range_end - _range_start;
	double step = (double)range / (_bars_amount - 1);
	size_t amount;

	myPointSeries histogram_points = myPointSeries();

	for (double i=step; i<=_range_end; i+=step) 
	{
		// x are offetted a bit, so:
		double x = i - (step / 2);
		// and y equals the number of point on the corresponding range:
		double y = _array.count_from_x1_to_x2(i-step, i)/(double)_array.size()* ((double)_bars_amount/10);
		histogram_points.push_back(x, y);
	}

	return histogram_points;
}

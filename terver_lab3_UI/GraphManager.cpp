#include "GraphManager.h"


void GraphManager::draw(
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name, // name of the series it will draw on
	myPointSeries& points_array
)
{
	// updating the chart
	_chart->Series[_series_name]->Points->Clear();

	for (auto point : points_array)
	{
		_chart->Series[_series_name]->Points->AddXY(point.x, point.y);
	}
}

void GraphManager::draw_bounded(
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name, // name of the series it will draw on
	myPointSeries& points_array, double x_min, double x_max, double y_min, double y_max, bool squared
)
{
	// updating the chart
	_chart->Series[_series_name]->Points->Clear();

	// bounding

	if (squared) {
		double wideness = (x_max - x_min);
		double height = (y_max - y_min);
		double size = (wideness > height) ? wideness : height;
		x_max = x_min + (int)size + 1;
		y_max = y_min + (int)size + 1;

		_chart->ChartAreas[0]->AxisX->Maximum = (int)x_max;
		_chart->ChartAreas[0]->AxisX->RoundAxisValues();
		_chart->ChartAreas[0]->AxisX->Minimum = (int)x_min;
		_chart->ChartAreas[0]->AxisY->Maximum = (int)y_max;
		_chart->ChartAreas[0]->AxisY->RoundAxisValues();
		_chart->ChartAreas[0]->AxisY->Minimum = (int)y_min;
	}


	for (auto point : points_array)
	{
		_chart->Series[_series_name]->Points->AddXY(point.x, point.y);
	}
}

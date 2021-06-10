#pragma once
// for my stuff:
#include "myPointSeries.h"
#include "MyForm.h"
#include <windows.h>

using namespace System::Windows::Forms::DataVisualization::Charting;
class GraphManager
{
public:
	static void draw(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, myPointSeries& points_array);
	static void draw_bounded(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, myPointSeries& points_array, double x_min, double x_max, double y_min, double y_max, bool squared = false);
};


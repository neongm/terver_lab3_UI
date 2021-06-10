#include "MyForm.h"
#include <windows.h>
#include <vector>

// my stuff:
#include "kernel_density_estimation.h"
#include "myPointSeries.h"
#include "GraphManager.h"
#include "conv.h"
#include "Rnd.h"
#include "histogramify.h"
#include "rangeGenerator.h"
#include "debug_handler.h"
#include "true_norm.h"


using namespace terverlab3UI;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

myPointSeries initial_array = myPointSeries();
debug_handler DH = debug_handler();

System::Void terverlab3UI::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	// ONLOAD
	DH.set_new_target_listbox(listbox_DEBUG);
	DH.set_autoclear_limit(22);
	update_checkboxes_info();
}


System::Void terverlab3UI::MyForm::trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	DH.msg("$trackbar value changed:" + conv::s(trackBar1->Value));
	if (checkbox_live_graph->Checked) 
	{
		//           selec  hist   kde   tfunc
		if(initial_array.size()) update_graph(false, false, true, false);
		else update_graph(true, true, true, true);
	}

	return System::Void();
}


System::Void terverlab3UI::MyForm::trackBar1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	DH.msg("#trackbar new value: " + conv::s((double)trackBar1->Value/100));
	return System::Void();
}


System::Void terverlab3UI::MyForm::update_checkboxes_info()
{
	DH.set_autoclear(checkbox_limit->Checked);
	DH.debug(checkbox_debug->Checked);
	DH.prefixes(checkbox_prefixes->Checked);
}

System::Void terverlab3UI::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	DH.clear();
}


System::Void terverlab3UI::MyForm::btn_draw_Click(System::Object^ sender, System::EventArgs^ e)
{
			//   selec hist  kde   tfunc
	update_graph(true, true, true, true);
}

System::Void terverlab3UI::MyForm::update_graph(bool _selection, bool _histogram, bool _estimation, bool _true_func)
{
	if (_selection)
	{
		size_t points_count = conv::dec_to_int(numeric_points_count->Value);
		label_points->Text = conv::cs(conv::s(points_count));
		initial_array.clear();
		for (size_t i = 0; i < points_count; i++) initial_array.push_back(Rnd::random_norm_c(5, 1), 0);
	}
	if (_histogram)
	{
		size_t hist_bars = conv::dec_to_int(numeric_histogram_bars_count->Value);
		label_hist_bars->Text = conv::cs(conv::s(hist_bars));
		auto histogram_points = histogramify::do_hist(initial_array, hist_bars, 0, 10);
		GraphManager::draw(chart1, "Histogram", histogram_points);
	}
	if (_estimation)
	{
		label_kde_window->Text = conv::cs((double)trackBar1->Value / 100)->TrimEnd('0');
		kernel_density_estimation KDE = kernel_density_estimation(initial_array.x_values(), ((double)trackBar1->Value)/100);
		auto estimated_function = myPointSeries(rangeGenerator::evenly_ranged(0, 10, 1000),
			KDE.calculate(rangeGenerator::evenly_ranged(0, 10, 1000)));
		GraphManager::draw(chart1, "EstimatedFunc", estimated_function);
	}
	if (_true_func) 
	{
		true_norm TN = true_norm();
		auto true_function = myPointSeries(rangeGenerator::evenly_ranged(0, 10, 1000),
			TN.calculate(rangeGenerator::evenly_ranged(0, 10, 1000)));
		GraphManager::draw(chart1, "ActualFunc", true_function);
	}
}

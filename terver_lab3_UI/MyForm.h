#pragma once

namespace terverlab3UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_kde_window;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::CheckBox^ checkbox_info;
	private: System::Windows::Forms::CheckBox^ checkbox_limit;
	private: System::Windows::Forms::CheckBox^ checkbox_debug;
	private: System::Windows::Forms::CheckBox^ checkbox_prefixes;
	private: System::Windows::Forms::ListBox^ listbox_DEBUG;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkbox_live_graph;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numeric_points_count;
	private: System::Windows::Forms::Button^ btn_draw;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numeric_histogram_bars_count;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label_hist_bars;
	private: System::Windows::Forms::Label^ label_points;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;


	protected:

























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_kde_window = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkbox_info = (gcnew System::Windows::Forms::CheckBox());
			this->checkbox_limit = (gcnew System::Windows::Forms::CheckBox());
			this->checkbox_debug = (gcnew System::Windows::Forms::CheckBox());
			this->checkbox_prefixes = (gcnew System::Windows::Forms::CheckBox());
			this->listbox_DEBUG = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkbox_live_graph = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numeric_points_count = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_draw = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numeric_histogram_bars_count = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label_hist_bars = (gcnew System::Windows::Forms::Label());
			this->label_points = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_points_count))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_histogram_bars_count))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Histogram";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"ActualFunc";
			series3->BorderWidth = 4;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"EstimatedFunc";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(675, 475);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(544, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"kde window:";
			// 
			// label_kde_window
			// 
			this->label_kde_window->AutoSize = true;
			this->label_kde_window->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_kde_window->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_kde_window->Location = System::Drawing::Point(543, 101);
			this->label_kde_window->Name = L"label_kde_window";
			this->label_kde_window->Size = System::Drawing::Size(14, 20);
			this->label_kde_window->TabIndex = 2;
			this->label_kde_window->Text = L"-";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->checkbox_info);
			this->panel3->Controls->Add(this->checkbox_limit);
			this->panel3->Controls->Add(this->checkbox_debug);
			this->panel3->Controls->Add(this->checkbox_prefixes);
			this->panel3->Controls->Add(this->listbox_DEBUG);
			this->panel3->Location = System::Drawing::Point(12, 134);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(386, 362);
			this->panel3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(302, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 39);
			this->button1->TabIndex = 9;
			this->button1->Text = L"clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkbox_info
			// 
			this->checkbox_info->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkbox_info->AutoSize = true;
			this->checkbox_info->Checked = true;
			this->checkbox_info->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkbox_info->Location = System::Drawing::Point(83, 337);
			this->checkbox_info->Name = L"checkbox_info";
			this->checkbox_info->Size = System::Drawing::Size(43, 17);
			this->checkbox_info->TabIndex = 8;
			this->checkbox_info->Text = L"info";
			this->checkbox_info->UseVisualStyleBackColor = true;
			this->checkbox_info->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbox_info_CheckedChanged);
			// 
			// checkbox_limit
			// 
			this->checkbox_limit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkbox_limit->AutoSize = true;
			this->checkbox_limit->Checked = true;
			this->checkbox_limit->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkbox_limit->Location = System::Drawing::Point(83, 315);
			this->checkbox_limit->Name = L"checkbox_limit";
			this->checkbox_limit->Size = System::Drawing::Size(43, 17);
			this->checkbox_limit->TabIndex = 7;
			this->checkbox_limit->Text = L"limit";
			this->checkbox_limit->UseVisualStyleBackColor = true;
			this->checkbox_limit->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbox_limit_CheckedChanged);
			// 
			// checkbox_debug
			// 
			this->checkbox_debug->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkbox_debug->AutoSize = true;
			this->checkbox_debug->Location = System::Drawing::Point(8, 337);
			this->checkbox_debug->Name = L"checkbox_debug";
			this->checkbox_debug->Size = System::Drawing::Size(56, 17);
			this->checkbox_debug->TabIndex = 6;
			this->checkbox_debug->Text = L"debug";
			this->checkbox_debug->UseVisualStyleBackColor = true;
			this->checkbox_debug->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbox_debug_CheckedChanged);
			// 
			// checkbox_prefixes
			// 
			this->checkbox_prefixes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkbox_prefixes->AutoSize = true;
			this->checkbox_prefixes->Checked = true;
			this->checkbox_prefixes->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkbox_prefixes->Location = System::Drawing::Point(8, 315);
			this->checkbox_prefixes->Name = L"checkbox_prefixes";
			this->checkbox_prefixes->Size = System::Drawing::Size(62, 17);
			this->checkbox_prefixes->TabIndex = 5;
			this->checkbox_prefixes->Text = L"prefixes";
			this->checkbox_prefixes->UseVisualStyleBackColor = true;
			this->checkbox_prefixes->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbox_prefixes_CheckedChanged);
			// 
			// listbox_DEBUG
			// 
			this->listbox_DEBUG->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listbox_DEBUG->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->listbox_DEBUG->ForeColor = System::Drawing::SystemColors::Window;
			this->listbox_DEBUG->FormattingEnabled = true;
			this->listbox_DEBUG->Location = System::Drawing::Point(3, 3);
			this->listbox_DEBUG->Name = L"listbox_DEBUG";
			this->listbox_DEBUG->Size = System::Drawing::Size(378, 290);
			this->listbox_DEBUG->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->checkbox_live_graph);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->numeric_points_count);
			this->panel1->Controls->Add(this->btn_draw);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->numeric_histogram_bars_count);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(386, 116);
			this->panel1->TabIndex = 2;
			// 
			// checkbox_live_graph
			// 
			this->checkbox_live_graph->AutoSize = true;
			this->checkbox_live_graph->BackColor = System::Drawing::SystemColors::Control;
			this->checkbox_live_graph->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkbox_live_graph->Location = System::Drawing::Point(152, 65);
			this->checkbox_live_graph->Name = L"checkbox_live_graph";
			this->checkbox_live_graph->Size = System::Drawing::Size(79, 19);
			this->checkbox_live_graph->TabIndex = 9;
			this->checkbox_live_graph->Text = L"live graph";
			this->checkbox_live_graph->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(353, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"1.00";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"0.01";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(7, 36);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(374, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 50;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar1_ValueChanged);
			this->trackBar1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::trackBar1_MouseUp);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"points:";
			// 
			// numeric_points_count
			// 
			this->numeric_points_count->Location = System::Drawing::Point(83, 3);
			this->numeric_points_count->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numeric_points_count->Name = L"numeric_points_count";
			this->numeric_points_count->Size = System::Drawing::Size(79, 20);
			this->numeric_points_count->TabIndex = 3;
			this->numeric_points_count->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// btn_draw
			// 
			this->btn_draw->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_draw->Location = System::Drawing::Point(3, 87);
			this->btn_draw->Name = L"btn_draw";
			this->btn_draw->Size = System::Drawing::Size(378, 24);
			this->btn_draw->TabIndex = 1;
			this->btn_draw->Text = L"DRAW!";
			this->btn_draw->UseVisualStyleBackColor = true;
			this->btn_draw->Click += gcnew System::EventHandler(this, &MyForm::btn_draw_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(218, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"histogram bars:";
			// 
			// numeric_histogram_bars_count
			// 
			this->numeric_histogram_bars_count->Location = System::Drawing::Point(302, 3);
			this->numeric_histogram_bars_count->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numeric_histogram_bars_count->Name = L"numeric_histogram_bars_count";
			this->numeric_histogram_bars_count->Size = System::Drawing::Size(79, 20);
			this->numeric_histogram_bars_count->TabIndex = 1;
			this->numeric_histogram_bars_count->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label_hist_bars);
			this->panel4->Controls->Add(this->label_points);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label_kde_window);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->chart1);
			this->panel4->Location = System::Drawing::Point(408, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(683, 484);
			this->panel4->TabIndex = 6;
			// 
			// label_hist_bars
			// 
			this->label_hist_bars->AutoSize = true;
			this->label_hist_bars->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_hist_bars->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_hist_bars->Location = System::Drawing::Point(543, 167);
			this->label_hist_bars->Name = L"label_hist_bars";
			this->label_hist_bars->Size = System::Drawing::Size(18, 20);
			this->label_hist_bars->TabIndex = 6;
			this->label_hist_bars->Text = L"0";
			// 
			// label_points
			// 
			this->label_points->AutoSize = true;
			this->label_points->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_points->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_points->Location = System::Drawing::Point(543, 134);
			this->label_points->Name = L"label_points";
			this->label_points->Size = System::Drawing::Size(18, 20);
			this->label_points->TabIndex = 5;
			this->label_points->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(544, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"hist bars:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(544, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"points";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1103, 510);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_points_count))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_histogram_bars_count))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_draw_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

		   // this shit is just for trackbar testing
	private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void trackBar1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

		   // settings/estimation
			 System::Void update_graph(bool _selection, bool _histogram, bool _estimation, bool _true_func);
		     System::Void update_checkboxes_info(); // here will be all the stuff
	private: System::Void checkbox_prefixes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { update_checkboxes_info(); }
	private: System::Void checkbox_debug_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { update_checkboxes_info(); }
	private: System::Void checkbox_limit_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { update_checkboxes_info(); }
	private: System::Void checkbox_info_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { update_checkboxes_info(); }
		   // DH cleaner
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}

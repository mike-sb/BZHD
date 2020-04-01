#pragma once

namespace WindowsFormsApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Graph
	/// </summary>
	public ref class Graph : public System::Windows::Forms::Form
	{

	public:
		array <double>^ Lw = gcnew array <double>(8);

		Graph(array <double>^ Lw)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			this->Lw = Lw;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Graph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1398, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Graph::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(47, 38);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Normal";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Results";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1247, 867);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1548, 917);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Name = L"Graph";
			this->Text = L"Graph";
			this->Load += gcnew System::EventHandler(this, &Graph::Graph_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void Graph_Load(System::Object^  sender, System::EventArgs^  e) {
		chart1->ChartAreas[0]->AxisX->ScaleView->Zoom(0, 8000);
		chart1->ChartAreas[0]->CursorX->IsUserEnabled = true;
		chart1->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true;
		chart1->ChartAreas[0]->AxisX->ScaleView->Zoomable = true;
		chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;


		chart1->ChartAreas[0]->AxisY->ScaleView->Zoom(0, 90);
		chart1->ChartAreas[0]->CursorY->IsUserEnabled = true;
		chart1->ChartAreas[0]->CursorY->IsUserSelectionEnabled = true;
		chart1->ChartAreas[0]->AxisY->ScaleView->Zoomable = true;
		chart1->ChartAreas[0]->AxisY->ScrollBar->IsPositionedInside = true;




		chart1->Series[1]->Points->AddXY(63, Lw[0]);

		int j = 125;

		for (int i = 1; i < 8; i++)
		{
			chart1->Series[1]->Points->AddXY(j, Lw[i]);

			j *= 2;
		}


		chart1->Series[0]->Points->AddXY(63, 71);

		chart1->Series[0]->Points->AddXY(125, 61);

		chart1->Series[0]->Points->AddXY(250, 54);

		chart1->Series[0]->Points->AddXY(500, 49);

		chart1->Series[0]->Points->AddXY(1000, 45);

		chart1->Series[0]->Points->AddXY(2000, 42);


		chart1->Series[0]->Points->AddXY(4000, 40);

		chart1->Series[0]->Points->AddXY(8000, 38);


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		


		/*	g = CreateGraphics();
			Pen^ p = gcnew Pen(Color::Black);
			SolidBrush^ b = gcnew SolidBrush(Color::Black);

			g->DrawLine(p, 20, 10, 20, this->Height - 2);
			g->DrawLine(p, 19, 10, 19, this->Height-2);
			g->DrawLine(p, 0, this->Height- 100, this->Width-10, this->Height - 100);
			g->DrawLine(p, 0, this->Height - 99, this->Width - 10, this->Height - 99);
			System::Drawing::Font ^fn = gcnew System::Drawing::Font("Times New Roman", 8);
			int x = 5;

			int y = 15;
			int xmin = x;
			int ymin = y;
		for (int i = 90; i >=30; i-=10)
			{
				g->DrawString(Convert::ToString(i), fn, b, x,y-15);
				g->DrawLine(p, x, y, this->Width - 10, y);
				y += 100;

			}

		int ymax = y;
		y = this->Height - 100;
		x = 20;
		g->DrawString(Convert::ToString(63), fn, b, x, y);


		g->DrawLine(p, x, 10, 20, y);

		x = 120;
		for (int i = 125; i <=8000; i *= 2)
		{
			g->DrawString(Convert::ToString(i), fn, b, x, y);

			g->DrawLine(p, x, 10, x, y);
			x += 100;

		}
		int xmax = x;
		p->Color = Color::Red;
		x = 20;
		for (int i = 0; i < 7; i++)
		{
			g->DrawLine(p, x, this->Height - (Lw[i] * 8) + 40,x+100, this->Height - (Lw[i+1] * 8) + 40);
			x += 100;
		}

	*/
	//1,14
	}
	};
}

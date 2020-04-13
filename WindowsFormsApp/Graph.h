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
		double type;
		array <double>^ Lw = gcnew array <double>(8);

		Graph(array <double>^ Lw, double type)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			this->Lw = Lw;
			this->type = type;
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

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1378, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lw1 = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1378, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Lw2 = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1378, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Lw3 = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1378, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Lw4 = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1378, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Lw5 = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1378, 231);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Lw6 = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1378, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Lw7 =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1379, 291);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Lw8 = ";
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1548, 917);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Name = L"Graph";
			this->Text = L"Graph";
			this->Load += gcnew System::EventHandler(this, &Graph::Graph_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void Graph_Load(System::Object^  sender, System::EventArgs^  e) {

		array <double>^ Ln = gcnew array <double>(8);

		array <double>^ Ln1 = gcnew array <double>(8) { 71, 61, 54, 49, 45, 42, 40, 38 };
		array <double>^ Ln2 = gcnew array <double>(8) {79,	70,68,58,55,52,52,49};
		array <double>^ Ln3 = gcnew array <double>(8) {	83,	74,	68,63,60,57,55,	54};
		array <double>^ Ln4 = gcnew array <double>(8) {91,83,77,73,70,	68,66,64};

		label1->Text += Lw[0];
		label2->Text += Lw[1];
		label3->Text += Lw[2];
		label4->Text += Lw[3];
		label5->Text += Lw[4];
		label6->Text += Lw[5];
		label7->Text += Lw[6];
		label8->Text += Lw[7];

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


		if (type == 20)
		{
			Ln = Ln1;
		}
		else if (type == 10)
		{
			Ln = Ln2;
		}

		else if (type == 6)
		{
			Ln = Ln3;
		}
		else
		{
			Ln = Ln4;
		}


		chart1->Series[0]->Points->AddXY(63, Ln[0]);

		chart1->Series[0]->Points->AddXY(125, Ln[1]);

		chart1->Series[0]->Points->AddXY(250, Ln[2]);

		chart1->Series[0]->Points->AddXY(500, Ln[3]);

		chart1->Series[0]->Points->AddXY(1000, Ln[4]);

		chart1->Series[0]->Points->AddXY(2000, Ln[5]);


		chart1->Series[0]->Points->AddXY(4000, Ln[6]);

		chart1->Series[0]->Points->AddXY(8000, Ln[7]);


	}
			 //	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

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
			 //	}
	};
}

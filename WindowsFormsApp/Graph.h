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
	

	public:









	










			 double type;	
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Panel^  panel1;




































			 array <double>^ Lw = gcnew array <double>(8);

	public:
		Graph()
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










	protected:

	protected:

	public: 
		void set_arr(array <double>^ Lw)
		{
			this->Lw = Lw;
		}
		void set_type(double type)
		{
	
			this->type = type;
		}


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(994, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Lw2 = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(994, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Lw3 = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(994, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lw1 = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(994, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Lw4 = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(56, 646);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Normals";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(994, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Lw5 = ";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16
			});
			this->dataGridView2->Location = System::Drawing::Point(120, 646);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(850, 53);
			this->dataGridView2->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"B63";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"B125";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"B250";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"B500";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"B1000";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"B2000";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"B4000";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"B8000";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(994, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Lw6 = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(72, 717);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Results";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(994, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Lw7 =";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			this->dataGridView1->Location = System::Drawing::Point(120, 717);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(850, 53);
			this->dataGridView1->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"B63";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"B125";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"B250";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"B500";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"B1000";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"B2000";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"B4000";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"B8000";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(995, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Lw8 = ";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(8, 17);
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
			this->chart1->Size = System::Drawing::Size(962, 608);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->chart1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(4, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1238, 777);
			this->panel1->TabIndex = 15;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Graph::panel1_Paint);
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1363, 852);
			this->Controls->Add(this->panel1);
			this->Name = L"Graph";
			this->Text = L"Graph";
			this->Load += gcnew System::EventHandler(this, &Graph::Graph_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		ScrollBar ^vScrollBar1 = gcnew VScrollBar();
		
	private: System::Void Graph_Load(System::Object^  sender, System::EventArgs^  e) {
	
		vScrollBar1->Dock = DockStyle::Right;

		panel1->VerticalScroll->Enabled = true;
		panel1->Controls->Add(vScrollBar1);


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

		for (int i = 0; i < 8; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Value = Ln[i];
			dataGridView1->Rows[0]->Cells[i]->Value = Lw[i];
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
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void vScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {

	panel1->VerticalScroll->Value = vScrollBar1->Value;
}
};
}

#pragma once
#include "Formula1.h"



namespace WindowsFormsApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	public:



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;

	public:

	public:

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>

		array<String^> ^strTemp;
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(139, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->comboBox1->Location = System::Drawing::Point(93, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"�������";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 119);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		value struct Var {
			int scheme;
			int variant;
			double formula1;
			double formula2;
			double formula3;
			int R1, R2, R3;
			array <int>^ Lp1, ^ Lp2, ^ Lp3;

			int V;
			double znamenatel;

			void constructor(int s, int var, double formula1, double formula2, double formula3, int R1, int R2, int R3, array <int>^ l1, array <int>^ l2, array <int>^l3, int V, double znam)
			{
				this->scheme = s;
				this->variant = var;
				this->formula1 = formula1;
				this->formula2 = formula2;
				this->formula3 = formula3;
				this->R1 = R1;
				this->R2 = R2;
				this->R3 = R3;
				this->Lp1 = l1;
				this->Lp2 = l2;
				this->Lp3 = l3;
				this->V = V;
				this->znamenatel = znam;
			}
		};


		Var v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25;
		array  <Var> ^vars = gcnew array<Var>(25);

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

		array <int>^ L1 = gcnew array<int> {84, 82, 84, 91, 94, 94, 91, 91};
		array <int>^ L2 = gcnew array<int> {80, 84, 83, 87, 84, 82, 94, 96};
		array <int>^ L3 = gcnew array<int> {81, 82, 83, 84, 83, 81, 80, 77};
		array <int>^ L4 = gcnew array<int> {72, 72, 68, 68, 68, 68, 71, 70};
		array <int>^ L5 = gcnew array<int> {78, 81, 83, 85, 85, 86, 89, 85};
		array <int>^ L6 = gcnew array<int> {83, 87, 85, 85, 85, 82, 83, 83};
		array <int>^ L7 = gcnew array<int> {68, 70, 73, 79, 81, 82, 80, 73};
		array <int>^ L8 = gcnew array<int> {101, 102, 100, 101, 99, 99, 97, 95};
		array <int>^ L9 = gcnew array<int> {90, 91, 98, 99, 97, 93, 91, 86};
		array <int>^ L10 = gcnew array<int> {90, 91, 98, 99, 97, 93, 91, 86};

		v1.constructor(1, 1, 4 * Math::PI, 0.5 * Math::PI, 0.5 * Math::PI, 7, 7, 7, L1, L2, L3, 1000, 10);
		v2.constructor(2, 2, 4 * Math::PI, Math::PI, Math::PI, 10, 14, 3, L3, L2, L1, 1800, 1.5);
		v3.constructor(1, 3, 2 * Math::PI, 0.5* Math::PI, 0.5 * Math::PI, 15, 15, 15, L3, L7, L10, 3000, 10);
		v4.constructor(2, 4, 2 * Math::PI, 2 * Math::PI, 0.5 *  Math::PI, 12, 13, 8, L9, L4, L1, 1800, 20);
		v5.constructor(1, 5, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 5, 5, 5, L4, L5, L6, 1000, 6);
		v6.constructor(2, 6, 2 * Math::PI, 2 * Math::PI, Math::PI, 7, 11, 9, L6, L7, L2, 1800, 6);
		v7.constructor(1, 7, 2 * Math::PI, 0.5 * Math::PI, Math::PI, 14, 14, 8, L8, L3, L5, 3000, 1.5);
		v8.constructor(2, 8, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 10, 10, 7, L7, L5, L1, 1800, 6);
		v9.constructor(1, 9, 2 * Math::PI, 0.5 * Math::PI, Math::PI, 2, 8, 8, L7, L8, L9, 1000, 20);
		v10.constructor(2, 10, 4 * Math::PI, Math::PI, 0.5 * Math::PI, 9, 9, 9, L3, L10, L1, 1800, 10);
		v11.constructor(1, 11, 2 * Math::PI, Math::PI, Math::PI*0.5, 10, 13, 10, L9, L8, L4, 3000, 1.5);//10
		v12.constructor(2, 12, 4 * Math::PI, Math::PI, 0.5 * Math::PI, 2, 7, 10, L2, L6, L5, 1800, 1.5);
		v13.constructor(1, 13, 2 * Math::PI, 0.5 * Math::PI, 0.5 * Math::PI, 8, 4, 7, L10, L1, L2, 1000, 10);
		v14.constructor(2, 14, 2 * Math::PI, 2 * Math::PI, 0.5 * Math::PI, 5, 10, 10, L9, L1, L8, 1800, 20);
		v15.constructor(1, 15, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 9, 12, 10, L10, L6, L3, 3000, 6);
		v16.constructor(2, 16, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 3, 7, 8, L2, L4, L7, 750, 6);
		v17.constructor(1, 17, 4 * Math::PI, Math::PI, 0.5 * Math::PI, 8, 17, 8, L3, L4, L5, 3000, 1.5);
		v18.constructor(2, 18, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 5, 5, 4, L6, L2, L3, 750, 6);
		v19.constructor(1, 19, 4 * Math::PI, 0.5 * Math::PI, Math::PI, 10, 15, 8, L7, L4, L5, 3000, 20);
		v20.constructor(2, 20, 4 * Math::PI, Math::PI, 0.5 * Math::PI, 7, 7, 7, L4, L5, L6, 1000, 10);
		v21.constructor(1, 21, 4 * Math::PI, 0.5 * Math::PI, Math::PI, 10, 14, 3, L6, L7, L2, 1800, 10);
		v22.constructor(2, 22, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 15, 15, 15, L8, L3, L5, 3000, 1.5);
		v23.constructor(1, 23, 2 * Math::PI, Math::PI, 0.5 * Math::PI, 12, 13, 8, L7, L5, L1, 1800, 10);
		v24.constructor(2, 24, 2 * Math::PI, 2 * Math::PI, 0.5* Math::PI, 5, 5, 5, L7, L8, L9, 1000, 20);
		v25.constructor(1, 25, 2 * Math::PI, Math::PI, Math::PI, 7, 11, 9, L3, L10, L1, 1800, 10);


		vars[0] = v1;
		vars[1] = v2;
		vars[2] = v3;
		vars[3] = (v4);
		vars[4] = v5;
		vars[5] = (v6);
		vars[6] = (v7);
		vars[7] = (v8);
		vars[8] = (v9);
		vars[9] = (v10);
		vars[10] = (v11);
		vars[11] = (v12);
		vars[12] = (v13);
		vars[13] = (v14);
		vars[14] = (v15);
		vars[15] = (v16);
		vars[16] = (v17);
		vars[17] = (v18);
		vars[18] = (v19);
		vars[19] = (v20);
		vars[20] = (v21);
		vars[21] = (v22);
		vars[22] = (v23);
		vars[23] = (v24);
		vars[24] = (v25);

	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int var = Convert::ToInt32(comboBox1->SelectedIndex+1);

		for (int i = 0; i < 25; i++)
		{
			if (var==vars[i].variant)
			{
				int scheme;
				int variant;
				double formula1;
				double formula2;
				double formula3;
				int R1, R2, R3;
				array <int>^ Lp1, ^ Lp2, ^ Lp3;

				int V;
				int znamenatel;

				Formula^ f = gcnew Formula(vars[i].scheme, vars[i].variant, vars[i].formula1, vars[i].formula2, vars[i].formula3, vars[i].R1, vars[i].R2, vars[i].R3, vars[i].Lp1, vars[i].Lp2, vars[i].Lp3, vars[i].V, vars[i].znamenatel);
				f->ShowDialog();
			}
		}
	}
	};
}

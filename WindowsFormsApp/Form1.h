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
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;


















	public:

	public:

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(93, 318);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Далее";
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
			this->comboBox1->Location = System::Drawing::Point(93, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Выберите вариант для гурппы ЮР2-61";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Рабочее место(знаменатель для B1000)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"R1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"R2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"R3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 205);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 241);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 276);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"V";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 353);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Новиков М. Д. ЮР2-51";
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
			vars[i].znamenatel = Convert::ToDouble(textBox1->Text);

				vars[i].R1 = Convert::ToInt32(textBox2->Text);
				vars[i].R2 = Convert::ToInt32(textBox3->Text);
				vars[i].R3= Convert::ToInt32(textBox4->Text);

				vars[i].V = Convert::ToInt32(textBox5->Text);

				Formula^ f = gcnew Formula(vars[i].scheme, vars[i].variant, vars[i].formula1, vars[i].formula2, vars[i].formula3, vars[i].R1, vars[i].R2, vars[i].R3, vars[i].Lp1, vars[i].Lp2, vars[i].Lp3, vars[i].V, vars[i].znamenatel);
				f->ShowDialog();
			}
		}
	}
	};
}


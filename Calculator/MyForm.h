#pragma once
#include <cstdlib>
#include <Windows.h>


namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm 
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;

	private: System::Windows::Forms::DataGridView^  dataGridView3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 483);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 59);
			this->button2->TabIndex = 4;
			this->button2->Text = L"создать матрицу А";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 430);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"столбцы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 430);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"строки";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(68, 455);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 650, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(49, 22);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(12, 455);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 650, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(50, 22);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(561, 380);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->Location = System::Drawing::Point(623, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 44;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(561, 380);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellEndEdit);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->Location = System::Drawing::Point(333, 455);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(561, 370);
			this->dataGridView3->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(579, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(579, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 35);
			this->button3->TabIndex = 6;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(579, 255);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 38);
			this->button4->TabIndex = 7;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(1066, 455);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 650, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(54, 22);
			this->numericUpDown3->TabIndex = 8;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(1130, 455);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 650, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(54, 22);
			this->numericUpDown4->TabIndex = 9;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1120, 430);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"столбцы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1067, 430);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"строки";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1067, 483);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 59);
			this->button5->TabIndex = 12;
			this->button5->Text = L"создать матрицу В";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(330, 427);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Полученная матрица";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(15, 670);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(172, 52);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Возведение матрицы А в степень n";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(15, 728);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(172, 52);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Определитель матрицы А";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(227, 686);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(52, 22);
			this->numericUpDown5->TabIndex = 16;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 624);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(305, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Отдельные вычисления для одной матрицы;";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 641);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"используется матрица А:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(193, 688);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"n =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Матрица А";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1105, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 17);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Матрица В";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(135, 483);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(114, 59);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Зарандомить матрицу А";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(917, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(182, 23);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Очистить матрицу В";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(97, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(186, 23);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Очистить матрицу А";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(944, 483);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(117, 59);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Зарандомить матрицу В";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(479, 418);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(190, 31);
			this->button12->TabIndex = 25;
			this->button12->Text = L"Очистить получ-ую матр.";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(614, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 21);
			this->radioButton1->TabIndex = 26;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"да";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(656, 3);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 21);
			this->radioButton2->TabIndex = 27;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"нет";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(389, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(215, 17);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Выравнивать столбцы матриц\?";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(705, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(24, 24);
			this->button13->TabIndex = 29;
			this->button13->Text = L"\?";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(12, 548);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(237, 34);
			this->button14->TabIndex = 30;
			this->button14->Text = L"Удалить матрицу А";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(944, 548);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(240, 34);
			this->button15->TabIndex = 31;
			this->button15->Text = L"Удалить матрицу В";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(675, 418);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(219, 31);
			this->button16->TabIndex = 32;
			this->button16->Text = L"Удалить получ-ую матрицу";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 848);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->numericUpDown1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матричный калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//функция создания матрицы
		double **CreateMatrix(const int N, const int M)
		{
			double **matrix = new double *[N];
			if (matrix == NULL)
			{
				MemoryError();
			}
			for (int i = 0;i< N;i++)
			{
				matrix[i] = new double[M];
				if (matrix[i] == NULL)
				{
					MemoryError();
				}
			}

			return matrix;
		}

		//Функция для вывода ошибки, в случаи нехватки памяти
		void MemoryError()
		{					
			MessageBox::Show("Нехватка памяти", "Ошибка");
			exit(1);		
		}
		//функция удаления матрицы
		void Del(double **A, int N)
		{

			for (int i = 0;i < N;i++)
			{
				delete[]A[i];
			}
			delete[]A;
		}
//кнопка создания матрицы А
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int n = Convert::ToInt32(numericUpDown1->Value);
		int m = Convert::ToInt32(numericUpDown2->Value);
		if (radioButton2->Checked)      //Если выбранно не выравнивать столбцы
		{
			//если Гридвью не пуст
			if (dataGridView1->Rows->Count != 0 && dataGridView1->Columns->Count != 0)
			{
				while (dataGridView1->Rows->Count != 0)
				{
					dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);    //удаляем строки пока не 0
				}
				while (dataGridView1->Columns->Count != 0)
				{
					dataGridView1->Columns->Remove(dataGridView1->Columns[dataGridView1->Columns->Count - 1]);   //удаляем стобцы пока не 0
				}
			}
			//создаем таблицу  Н на М
			dataGridView1->RowCount = n;
			dataGridView1->ColumnCount = m;

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);            //нумеруем строки и столбцы
					dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

				}
			}
		}
		//если выбрано выравнивать
		if (radioButton1->Checked)
		{
			if (dataGridView1->Rows->Count != 0 && dataGridView1->Columns->Count != 0)
			{
				while (dataGridView1->Rows->Count != 0)
				{
					dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
				}
				while (dataGridView1->Columns->Count != 0)
				{
					dataGridView1->Columns->Remove(dataGridView1->Columns[dataGridView1->Columns->Count - 1]);
				}
			}

			dataGridView1->RowCount = n;
			dataGridView1->ColumnCount = m;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
					dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

				}
			}
			dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);  //выравниваем
			dataGridView1->AutoResizeColumns();
		}
	
	}
// матрица В все тоже самое
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	int n = Convert::ToInt32(numericUpDown3->Value);
	int m = Convert::ToInt32(numericUpDown4->Value);
	if (radioButton2->Checked) 
	{

		if (dataGridView2->Rows->Count != 0 && dataGridView2->Columns->Count != 0)
		{
			while (dataGridView2->Rows->Count != 0)
			{
				dataGridView2->Rows->Remove(dataGridView2->Rows[dataGridView2->Rows->Count - 1]);
			}
			while (dataGridView2->Columns->Count != 0)
			{
				dataGridView2->Columns->Remove(dataGridView2->Columns[dataGridView2->Columns->Count - 1]);
			}
		}
		dataGridView2->RowCount = n;
		dataGridView2->ColumnCount = m;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			}
		}
	}
		if (radioButton1->Checked)
		{			
			if (dataGridView2->Rows->Count != 0 && dataGridView2->Columns->Count != 0)
			{
				while (dataGridView2->Rows->Count != 0)
				{
					dataGridView2->Rows->Remove(dataGridView2->Rows[dataGridView2->Rows->Count - 1]);
				}
				while (dataGridView2->Columns->Count != 0)
				{
					dataGridView2->Columns->Remove(dataGridView2->Columns[dataGridView2->Columns->Count - 1]);
				}
			}

			dataGridView2->RowCount = n;
			dataGridView2->ColumnCount = m;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
					dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

				}
			}
			dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
			dataGridView2->AutoResizeColumns();
		}
	
}
		 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)    //кнопка суммы
{
	//получаем значения строк и столбцов из нужных ячеек
	int n = Convert::ToInt32(numericUpDown1->Value);                     
	int m = Convert::ToInt32(numericUpDown2->Value);
	int n1 = Convert::ToInt32(numericUpDown3->Value);
	int m1 = Convert::ToInt32(numericUpDown4->Value);
	if (n != n1 || m != m1)
	{
		MessageBox::Show("при сложении матрицы должны быть одинаковые по размерам", "Ошибка");
		
	}
	else if (n == n1 || m == m1)
	{
		
		double **a = CreateMatrix(n, m);
		double **b = CreateMatrix(n, m);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				try                                 //трай и кетч на случаи попытки нажать на кнопу суммы, не создав при этом матрицы
				{
					a[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value); //присваиваем нашим матрицы значения, соответсвующие значениям в таблицах гридвью
					b[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
				catch (ArgumentOutOfRangeException^ e)
				{
					MessageBox::Show("Возможно, вы забыли заново создать матрицу после изменения кол-ва строк/столбцов или вовсе не создали ее", "Ошибка");
					goto error;
				}
				
				
					dataGridView3->RowCount = n;              //создаем 3ю таблицу и заполняем ее значениями суммы соответсвующих элементов матриц А и В
					dataGridView3->ColumnCount = m;
					dataGridView3->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
					dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
					dataGridView3->Rows[i]->Cells[j]->Value = a[i][j] + b[i][j];
				

			}
		}
		error:
		Del(a, n);               //удаляем матрицы
		Del(b, n1);
	}
}
		
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)       //Кнопка вычитания(все также как и в сумме)
{
	int n = Convert::ToInt32(numericUpDown1->Value);
	int m = Convert::ToInt32(numericUpDown2->Value);
	int n1 = Convert::ToInt32(numericUpDown3->Value);
	int m1 = Convert::ToInt32(numericUpDown4->Value);
	if (n != n1 || m != m1)
	{
		MessageBox::Show("при вычитании матрицы должны быть одинаковые по размерам", "Ошибка");

	}
	else if (n == n1 || m == m1)
	{
		
		double **a = CreateMatrix(n, m);
		double **b = CreateMatrix(n, m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				try
				{
					a[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					b[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
				catch (ArgumentOutOfRangeException^ e)
				{
					MessageBox::Show("Возможно, вы забыли заново создать матрицу после изменения кол-ва строк/столбцов или вовсе не создали ее", "Ошибка");
					goto error;
				}
				
				
					dataGridView3->RowCount = n;
					dataGridView3->ColumnCount = m;
					dataGridView3->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
					dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
					dataGridView3->Rows[i]->Cells[j]->Value = a[i][j] - b[i][j];
				
			}

		}
		error:
		Del(a, n);
		Del(b, n1);
	}
}
		 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)   //кнопка умножения
{

	int n1 = Convert::ToInt32(numericUpDown1->Value);
	int m1 = Convert::ToInt32(numericUpDown2->Value);
	int n2 = Convert::ToInt32(numericUpDown3->Value);
	int m2 = Convert::ToInt32(numericUpDown4->Value);
	if (m1 != n2)
	{
		MessageBox::Show("При умножении столбцы 1ой матрицы должны равняться строкам 2ой матрицы ", "Ошибка");
	}
	else if (m1 == n2)
	{
		double **a = CreateMatrix(n1, m1);
		double **b = CreateMatrix(n2, m2);
		double **c = CreateMatrix(n1, m2);

		try {
			for (int i = 0; i < n1; i++)
			{
				for (int j = 0; j < m1; j++)
				{
					a[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}
			for (int i = 0; i < n2; i++)
			{
				for (int j = 0; j < m2; j++)
				{
					b[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}
		}
		catch (ArgumentOutOfRangeException^ e)
		{
			MessageBox::Show("Возможно, вы забыли заново создать матрицу после изменения кол-ва строк/столбцов или вовсе не создали ее", "Ошибка");
			goto error;
		}
		dataGridView3->RowCount = n1;
		dataGridView3->ColumnCount = m2;

		for (int i = 0; i < n1; i++) {                   //умножаем матрицы по правилу умножения матриц
			for (int j = 0; j < m2; j++) {
				c[i][j] = 0;
				for (int k = 0; k < n2; k++) {
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < m2; j++) {
				dataGridView3->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				dataGridView3->Rows[i]->Cells[j]->Value = c[i][j];
			}

		}
		error:
		Del(a, n1);
		Del(b, n2);
		Del(c, n1);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)  // кнопка возведения в степень
{
	
	int n = Convert::ToInt32(numericUpDown1->Value);
	int m = Convert::ToInt32(numericUpDown2->Value);
	int stepen = Convert::ToInt32(numericUpDown5->Value);    //получаем значение степени из соответсвующей ячейки
	if (n != m)
	{
		MessageBox::Show("Возводить в степень можно только квадратные матрицы", "Ошибка");
	}
	else if (n == m)
	{
		double **a = CreateMatrix(n, m);
		double **b = CreateMatrix(n, m);
		double **c = CreateMatrix(n, m);

		try {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					a[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}
		}
		catch (ArgumentOutOfRangeException^ e)
		{
			MessageBox::Show("Возможно, вы забыли заново создать матрицу после изменения кол-ва строк/столбцов или вовсе не создали ее", "Ошибка");
			goto error;
		}
		
			dataGridView3->RowCount = n;
			dataGridView3->ColumnCount = m;

			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++)
					b[i][j] = a[i][j];
			int k = 0;

			while (k < stepen - 1)          //цикл повторяется на заданное колво степени(-1 т.к первое перемножение это уже матрица в квадрате)
			{                                  //то есть чтобы возвести в 3ю степень цикл должен пройти 2 раза
				for (int i = 0; i < n; i++)   
				{
					for (int j = 0; j < m; j++)
					{
						c[i][j] = 0;
						for (int l = 0; l < m; l++)
						{

							c[i][j] += b[i][l] * a[l][j];
						}
					}
				}
				for (int i = 0; i < n; i++)
					for (int j = 0; j < m; j++)
						b[i][j] = c[i][j];

				k++;
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					dataGridView3->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
					dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
					dataGridView3->Rows[i]->Cells[j]->Value = c[i][j];
				}

			}
		error:
			Del(a, n);
			Del(b, n);
			Del(c, n);
		
	}
   
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)    //кнопка определителя
{
	
	int n = Convert::ToInt32(numericUpDown1->Value);
	int m = Convert::ToInt32(numericUpDown2->Value);
	if (n != m)
	{
		MessageBox::Show("Определитель можно найти только у квадратной матрицы", "Ошибка");
	}
	else if (n == m)
	{

		double **a = CreateMatrix(n, m);

		try {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					a[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}
		}
		catch (ArgumentOutOfRangeException^ e)
		{
			MessageBox::Show("Возможно, вы забыли заново создать матрицу после изменения кол-ва строк/столбцов или вовсе не создали ее", "Ошибка");
			goto error;
		}

			double Opr;
			if (n == 1)     //отдельный случай для еденичной матрицы
			{
				Opr = a[0][0];

				MessageBox::Show(Convert::ToString(Opr), "определитель");
			}
			else if (n == 2)  //отдельный случай для матрицы 2х2
			{
				Opr = a[0][0] * a[1][1] - a[0][1] * a[1][0];
				MessageBox::Show(Convert::ToString(Opr), "определитель");
			}
			else if (n > 2)      //случаи для матриц больше чем 2х2
			{
				int iOperation = 0;
				for (int i = 0; i < n - 1; i++)   //считаем определитель методом гаусса, с помощью элементарных преобразований
				{
					if (a[i][i] == 0)
					{
						for (int k = i; k < n; k++)
						{
							if (a[k][i] != 0)
							{
								for (int j = 0; j < n; j++)
								{
									double temp = a[i][j];
									a[i][j] = a[k][j];
									a[k][j] = temp;
								}
								k = n;
							}
						}
						iOperation++;     //счетчик на то, сколько раз были свапнуты строки
					}

					if (a[i][i] != 0)
					{
						for (int k = i + 1; k < n; k++)
						{
							double nod = -1 * a[k][i] / a[i][i];    
							for (int j = i; j < n; j++)
							{
								a[k][j] = a[k][j] + (nod * a[i][j]);    
							}
						}
					}
				}
				Opr = 1;

				for (int i = 0; i < n; i++)
				{
					Opr *= a[i][i];     
				}
				if (iOperation % 2 == 0)   //если строки были свапнут нечетное колво раз, то определитель меняет знак
				{
					MessageBox::Show(Convert::ToString(Opr), "определитель");
				}
				else
				{
					MessageBox::Show(Convert::ToString(-1 * Opr), "определитель");
				}
			}
		error:
		Del(a, n);
	}

}
		 //защита от ввода символов и букв для 1ого гридвью
private: System::Void dataGridView1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	int q;
	if (!Int32::TryParse(Convert::ToString(dataGridView1->CurrentCell->Value), q)) 
	{
		MessageBox::Show("Введены недопустимые элементы(допускаются только цифры и без пробелов)", "Ошибка");
		dataGridView1->CurrentCell->Value = "0";
	}
}
		 //защита от ввода символов и букв для 2ого гридвью
private: System::Void dataGridView2_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
{
	Int64 q;
	if (!Int64::TryParse(Convert::ToString(dataGridView2->CurrentCell->Value), q))
	{
		MessageBox::Show("Введены недопустимые элементы(допускаются только цифры и без пробелов)", "Ошибка");
		dataGridView2->CurrentCell->Value = "0";
	}
}
		 //Кнопки рандома для матриц А и В
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
		for (int j = 0; j < dataGridView1->Columns->Count; j++)
			dataGridView1->Rows[i]->Cells[j]->Value = rand() % 100 - 50;
}
		 private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			 for (int i = 0; i < dataGridView2->Rows->Count; i++)
				 for (int j = 0; j < dataGridView2->Columns->Count; j++)
					 dataGridView2->Rows[i]->Cells[j]->Value = rand()%100 - 50;
				 
			 
		 }
				  //Кнопки очистки для матриц(все значения приводим к нулю)
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	
		for (int i = 0; i < dataGridView2->Rows->Count; i++)
			for (int j = 0; j < dataGridView2->Columns->Count; j++)
				dataGridView2->Rows[i]->Cells[j]->Value = "0";

}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
{

	for (int i = 0; i < dataGridView1->Rows->Count; i++)
		for (int j = 0; j < dataGridView1->Columns->Count; j++)
			dataGridView1->Rows[i]->Cells[j]->Value = "0";
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
{
	for (int i = 0; i < dataGridView3->Rows->Count; i++)
		for (int j = 0; j < dataGridView3->Columns->Count; j++)
			dataGridView3->Rows[i]->Cells[j]->Value = "0";
	
}
		 //кнопки удаления для матриц(полностью удаляет таблицу гридвью)
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) 
{
	while (dataGridView1->Rows->Count != 0)
	{
		dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
	}
	while (dataGridView1->Columns->Count != 0)
	{
		dataGridView1->Columns->Remove(dataGridView1->Columns[dataGridView1->Columns->Count - 1]);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e)
{
	while (dataGridView2->Rows->Count != 0)
	{
		dataGridView2->Rows->Remove(dataGridView2->Rows[dataGridView2->Rows->Count - 1]);
	}
	while (dataGridView2->Columns->Count != 0)
	{
		dataGridView2->Columns->Remove(dataGridView2->Columns[dataGridView2->Columns->Count - 1]);
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("Фукция выравнивает столбцы, делая матрицы более компактными и удобными. ВНИМАНИЕ: эта фукция очень замедляет программу, не используйте ее при работе с матрицами более чем 100х100");
}


private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e)
{
	while (dataGridView3->Rows->Count != 0)
	{
		dataGridView3->Rows->Remove(dataGridView3->Rows[dataGridView3->Rows->Count - 1]);
	}
	while (dataGridView3->Columns->Count != 0)
	{
		dataGridView3->Columns->Remove(dataGridView3->Columns[dataGridView3->Columns->Count - 1]);
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
	
}

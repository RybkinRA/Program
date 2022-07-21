#pragma once
#include <math.h>
#include "CH.cpp"
#include "windows.h"
#include "string"
#include <iostream>
#include <fstream>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;




	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label10;








	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox8;








	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;

private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::ProgressBar^ progressBar1;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label31;





















































	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(1247, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->GraphPane->Title->Text = "Изменение силы тока с течением времени";
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "Время";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "Сила тока";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(1247, 514);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->GraphPane->Title->Text = "Изменение потенциала с течением времени";
			this->zedGraphControl2->GraphPane->XAxis->Title->Text = "Время";
			this->zedGraphControl2->GraphPane->YAxis->Title->Text = "Потенциал";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl2->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column6, this->Column2, this->Column3, this->Column5, this->Column7, this->Column4, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(2, 222);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(675, 672);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"шаг";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"t";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"φ";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"I";
			this->Column5->Name = L"Column5";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Баланс";
			this->Column7->Name = L"Column7";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Погрешность φ";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 120;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"погрешность I";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 120;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(204, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,1";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(204, 56);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1000";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(204, 82);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(136, 30);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(79, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"10";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(145, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(297, 204);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры метода";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(6, 114);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(180, 16);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Контроль выхода на 0 по φ";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(204, 111);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(76, 20);
			this->textBox17->TabIndex = 15;
			this->textBox17->Text = L"0,001";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(12, 171);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(136, 20);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Переменный шаг";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(12, 147);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(132, 20);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->Text = L"Постоянный шаг";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(161, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Контроль погрешности:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(158, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Max количество шагов:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Начальный шаг:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(448, 126);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(229, 90);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Начальные условия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"t";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(136, 58);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(79, 22);
			this->textBox8->TabIndex = 16;
			this->textBox8->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(9, 33);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 16);
			this->label10->TabIndex = 15;
			this->label10->Text = L"φ";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(448, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(229, 84);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры цепи";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(137, 51);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(78, 22);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"0,00002";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(137, 22);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(78, 22);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"20000000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"С";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"R";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->textBox11);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->textBox10);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->textBox9);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(1247, 354);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(241, 84);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Масштаб 1 графика";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(155, 53);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(76, 20);
			this->textBox12->TabIndex = 7;
			this->textBox12->Text = L"1";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(48, 53);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(76, 20);
			this->textBox11->TabIndex = 6;
			this->textBox11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(130, 56);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"до";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 56);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Y от:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(155, 27);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(76, 20);
			this->textBox10->TabIndex = 3;
			this->textBox10->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(130, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"до";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(48, 27);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"X от:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox13);
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->textBox15);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->textBox16);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Location = System::Drawing::Point(1503, 354);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(245, 84);
			this->groupBox5->TabIndex = 27;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Масштаб 2 графика";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(155, 53);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(76, 20);
			this->textBox13->TabIndex = 7;
			this->textBox13->Text = L"1";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(48, 53);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(76, 20);
			this->textBox14->TabIndex = 6;
			this->textBox14->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(130, 56);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"до";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Y от:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(155, 27);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(76, 20);
			this->textBox15->TabIndex = 3;
			this->textBox15->Text = L"1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(130, 30);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"до";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(48, 27);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(76, 20);
			this->textBox16->TabIndex = 1;
			this->textBox16->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"X от:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1247, 445);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Масштабировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1367, 444);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 23);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Очистить график";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1503, 445);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 23);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Масштабировать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1636, 444);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 23);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Очистить график";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(713, 45);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(165, 16);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Постоянная контура RC";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(966, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 33;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(713, 12);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(128, 16);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Количество шагов";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(713, 28);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(185, 16);
			this->label21->TabIndex = 35;
			this->label21->Text = L"Конечный момент времени";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(966, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 37;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(966, 30);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 38;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(713, 61);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(240, 16);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Отношение I(0) к I(RC) числ решение";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(966, 63);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 13);
			this->label24->TabIndex = 40;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(713, 77);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(232, 16);
			this->label25->TabIndex = 41;
			this->label25->Text = L"Отношение I(0) к I(RC) точ решение";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(966, 79);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 42;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 83);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(123, 23);
			this->progressBar1->TabIndex = 43;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(702, 196);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(305, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 44;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1057, 196);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(163, 99);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 45;
			this->pictureBox2->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(699, 455);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(473, 162);
			this->label27->TabIndex = 46;
			this->label27->Text = resources->GetString(L"label27.Text");
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1057, 331);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(163, 79);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 47;
			this->pictureBox3->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(1117, 287);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 20);
			this->label28->TabIndex = 48;
			this->label28->Text = L"(1.1)";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(1117, 414);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 20);
			this->label29->TabIndex = 49;
			this->label29->Text = L"(1.2)";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(698, 155);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(85, 20);
			this->label31->TabIndex = 51;
			this->label31->Text = L"Справка:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1770, 906);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->zedGraphControl2);
			this->Name = L"MyForm";
			this->Text = L"Разряд ёмкости через сопротивление";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel1 = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		

		PointPairList^ f1 = gcnew ZedGraph::PointPairList();
		PointPairList^ f2 = gcnew ZedGraph::PointPairList();
		PointPairList^ f3 = gcnew ZedGraph::PointPairList();
		PointPairList^ f4 = gcnew ZedGraph::PointPairList();
		
		double h = Convert::ToDouble(textBox1->Text);
		double C = Convert::ToDouble(textBox7->Text);
		double R = Convert::ToDouble(textBox6->Text);
		//double E = Convert::ToDouble(textBox4->Text);
		double border = Convert::ToDouble(textBox17->Text);
		double control = Convert::ToDouble(textBox3->Text);
		double t0 = Convert::ToDouble(textBox8->Text);
		int n = Convert::ToInt32(textBox2->Text);
		double maxx=0;
		double minx=0;
		double maxy=0;
		double miny = 1000000000;
		double maxyi = -10000000;
		double minyi=100000000;
		double RC=R*C;
		double RCdiv = 0.0;
		double RCdivt = 0.0;

		std::vector<DataPoints> volt;
		DataPoints p0;

		
		p0.xn = Convert::ToDouble(textBox8->Text);
		p0.vn = Convert::ToDouble(textBox5->Text);
		p0.un = p0.vn;
		p0.h = h;
		
		if(radioButton2->Checked==true)
			volt = StartMethodU(n, p0, control, R, C,t0,border);
		else
			volt = StartU(n, p0,R, C,t0,border);
		dataGridView1->Rows->Clear();
		progressBar1->Minimum = 0;
		progressBar1->Maximum = volt.size();
		progressBar1->Value = 1;
		progressBar1->Step = 1;
		for (int j = 0; j < volt.size(); j++)
		{
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = volt[j].num;
			dataGridView1->Rows[j]->Cells[1]->Value = volt[j].h;
			dataGridView1->Rows[j]->Cells[2]->Value = volt[j].xn;
			dataGridView1->Rows[j]->Cells[3]->Value = volt[j].vn;
			dataGridView1->Rows[j]->Cells[4]->Value = F_I(volt[j].xn, volt[j].vn, R, C);
			dataGridView1->Rows[j]->Cells[5]->Value = R * F_I(volt[j].xn, volt[j].vn, R, C) + volt[j].vn;
			dataGridView1->Rows[j]->Cells[6]->Value = volt[j].er;
			dataGridView1->Rows[j]->Cells[7]->Value = F_I(volt[j].xn, volt[j].vn, R, C) - F_I(volt[j].xn, volt[j].un, R, C);
			progressBar1->PerformStep();
		}
		for (int j = 0; j < volt.size(); j++)
			if (volt[j].xn >= RC)
			{
				if (volt[j].xn == RC)
				{
					RCdiv = F_I(volt[0].xn, volt[0].vn, R, C)/F_I(volt[j].xn, volt[j].vn, R, C);
					RCdivt = F_I(volt[0].xn, volt[0].un, R, C)/F_I(volt[j].xn, volt[j].un, R, C);
				}
				if (abs(volt[j - 1].xn - RC) < volt[j + 1].xn - RC)
				{
					RCdiv = F_I(volt[0].xn, volt[0].vn, R, C) / F_I(volt[j - 1].xn, volt[j - 1].vn, R, C);
					RCdivt = F_I(volt[0].xn, volt[0].un, R, C) / F_I(volt[j - 1].xn, volt[j - 1].un, R, C);
				}
				else
				{
					RCdiv = F_I(volt[0].xn, volt[0].vn, R, C) / F_I(volt[j+1].xn, volt[j + 1].vn, R, C);
					RCdivt = F_I(volt[0].xn, volt[0].un, R, C) / F_I(volt[j + 1].xn, volt[j + 1].un, R, C);
				}
				break;
			}
		for (auto& i : volt)
		{
			f1->Add(i.xn, i.vn);
			f2->Add(i.xn, i.un);
			f3->Add(i.xn, F_I(i.xn, i.vn, R, C));
			f4->Add(i.xn, F_I(i.xn, i.un, R, C));
			if (i.vn < miny)
				miny = i.vn;
			if (i.vn > maxy)
				maxy = i.vn;
			if (F_I(i.xn, i.vn, R, C) > maxyi)
				maxyi = F_I(i.xn, i.vn, R, C);
			if(F_I(i.xn, i.vn, R, C) < minyi)
				minyi = F_I(i.xn, i.vn, R, C);
		}

		//Заполнение справки
		label19->Text = Convert::ToString(RC);
		label9->Text = Convert::ToString(volt[volt.size()-1].num);
		label22->Text = Convert::ToString(volt[volt.size() - 1].xn);
		label24->Text = Convert::ToString(RCdiv);
		label26->Text = Convert::ToString(RCdivt);


		//
		minx = volt[0].xn;
		maxx = volt[volt.size() - 1].xn;
		//работа с графиками
		LineItem Curve1 = panel1->AddCurve("Численное решение", f3, Color::Green, SymbolType::Plus);
		LineItem Curve2 = panel1->AddCurve("Точное решение", f4, Color::Red, SymbolType::Plus);
		LineItem Curve3 = panel2->AddCurve("Численное решение", f1, Color::Green, SymbolType::Plus);
		LineItem Curve4 = panel2->AddCurve("Точное решение", f2, Color::Red, SymbolType::Plus);
		
		panel1->XAxis->Scale->Min = minx;
		panel1->XAxis->Scale->Max = maxx;
		panel1->YAxis->Scale->Min = minyi;
		panel1->YAxis->Scale->Max = maxyi;

		panel2->XAxis->Scale->Min = minx;
		panel2->XAxis->Scale->Max = maxx;
		panel2->YAxis->Scale->Min = miny;
		panel2->YAxis->Scale->Max = maxy;
		
		zedGraphControl1->AxisChange();
		zedGraphControl2->AxisChange();

		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
		//	
	}

	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	System::Windows::Forms::MessageBox::Show("Я пришел сюда, чтобы показать вам как это делается","Справка");
}

private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double xmin = Convert::ToDouble(textBox9->Text);
	double xmax = Convert::ToDouble(textBox10->Text);
	double ymin = Convert::ToDouble(textBox11->Text);
	double ymax = Convert::ToDouble(textBox12->Text);
	zedGraphControl1->GraphPane->XAxis->Scale->Min = xmin;
	zedGraphControl1->GraphPane->XAxis->Scale->Max = xmax;
	zedGraphControl1->GraphPane->YAxis->Scale->Min = ymin;
	zedGraphControl1->GraphPane->YAxis->Scale->Max = ymax;
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double xmin = Convert::ToDouble(textBox16->Text);
	double xmax = Convert::ToDouble(textBox15->Text);
	double ymin = Convert::ToDouble(textBox14->Text);
	double ymax = Convert::ToDouble(textBox13->Text);
	zedGraphControl2->GraphPane->XAxis->Scale->Min = xmin;
	zedGraphControl2->GraphPane->XAxis->Scale->Max = xmax;
	zedGraphControl2->GraphPane->YAxis->Scale->Min = ymin;
	zedGraphControl2->GraphPane->YAxis->Scale->Max = ymax;
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
private: System::Void Button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	zedGraphControl2->GraphPane->CurveList->Clear();
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}



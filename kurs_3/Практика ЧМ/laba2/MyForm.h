#pragma once
#include <math.h>
#include "CH.cpp"
#include <vector>
#include <cmath>
#include <stdlib.h>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
		using namespace std;

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
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	//private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VV;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;

































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
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->zedGraphControl1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zedGraphControl1.BackgroundImage")));
			this->zedGraphControl1->Location = System::Drawing::Point(712, 411);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->GraphPane->Title->Text = "Зависимость v1(x)";
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "v1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(498, 394);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(1237, 411);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->GraphPane->Title->Text = "Зависимость v2(x)";
			this->zedGraphControl2->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl2->GraphPane->YAxis->Title->Text = "v2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(498, 394);
			this->zedGraphControl2->TabIndex = 0;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(1237, 13);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->GraphPane->Title->Text = "Фазовый портрет";
			this->zedGraphControl3->GraphPane->XAxis->Title->Text = "v1";
			this->zedGraphControl3->GraphPane->YAxis->Title->Text = "v2";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(498, 309);
			this->zedGraphControl3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->num, this->h,
					this->X, this->V1, this->V2, this->V21, this->V22, this->S, this->E, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(18, 311);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(653, 600);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView1_CellContentClick);
			// 
			// num
			// 
			this->num->HeaderText = L"num";
			this->num->MinimumWidth = 6;
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			this->num->Width = 50;
			// 
			// h
			// 
			this->h->HeaderText = L"h";
			this->h->MinimumWidth = 6;
			this->h->Name = L"h";
			this->h->ReadOnly = true;
			this->h->Width = 70;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// V1
			// 
			this->V1->HeaderText = L"V1";
			this->V1->MinimumWidth = 6;
			this->V1->Name = L"V1";
			this->V1->ReadOnly = true;
			this->V1->Width = 125;
			// 
			// V2
			// 
			this->V2->HeaderText = L"V2";
			this->V2->MinimumWidth = 6;
			this->V2->Name = L"V2";
			this->V2->ReadOnly = true;
			this->V2->Width = 125;
			// 
			// V21
			// 
			this->V21->HeaderText = L"V21";
			this->V21->MinimumWidth = 6;
			this->V21->Name = L"V21";
			this->V21->ReadOnly = true;
			this->V21->Width = 125;
			// 
			// V22
			// 
			this->V22->HeaderText = L"V22";
			this->V22->MinimumWidth = 6;
			this->V22->Name = L"V22";
			this->V22->ReadOnly = true;
			this->V22->Width = 125;
			// 
			// S
			// 
			this->S->HeaderText = L"S";
			this->S->MinimumWidth = 6;
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Width = 125;
			// 
			// E
			// 
			this->E->HeaderText = L"ОЛП";
			this->E->MinimumWidth = 6;
			this->E->Name = L"E";
			this->E->ReadOnly = true;
			this->E->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Длина";
			this->Column1->Name = L"Column1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Х";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"U1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(221, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Справка";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(221, 48);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"2500";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Max количество шагов";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(221, 79);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 19);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0,0001";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Параметр контроля погрешности";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(50, 26);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"1";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(50, 63);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 25);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"p";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 70);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(9, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"l";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::Label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(667, 13);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 24);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Справка";
			this->label8->UseMnemonic = false;
			this->label8->UseWaitCursor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(602, 49);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Минимальный шаг:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(706, 63);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(597, 63);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Максимальный шаг:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(706, 49);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(566, 76);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(142, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Количество делений шага:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(706, 76);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 25;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(550, 92);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(158, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Количество увеличений шага:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(706, 92);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 27;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(212, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(319, 151);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры метода";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(221, 109);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(76, 20);
			this->textBox13->TabIndex = 15;
			this->textBox13->Text = L"0,001";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(18, 112);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(153, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Контроль выхода на границу";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Location = System::Drawing::Point(712, 812);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(284, 65);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Масштаб";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox2_Enter);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(107, 30);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(25, 20);
			this->textBox9->TabIndex = 3;
			this->textBox9->Text = L"1";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(245, 30);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(25, 20);
			this->textBox11->TabIndex = 6;
			this->textBox11->Text = L"1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(220, 33);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 13);
			this->label20->TabIndex = 5;
			this->label20->Text = L"до";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(188, 30);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(26, 20);
			this->textBox10->TabIndex = 4;
			this->textBox10->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(153, 33);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 13);
			this->label19->TabIndex = 3;
			this->label19->Text = L"у: от";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(82, 33);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"до";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(50, 30);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(26, 20);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(15, 33);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"x: от";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 28);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Очистить графики";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(212, 170);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(177, 100);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Начальные условия";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(18, 74);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 13);
			this->label21->TabIndex = 34;
			this->label21->Text = L"U2";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(88, 71);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(76, 20);
			this->textBox12->TabIndex = 33;
			this->textBox12->Text = L"0";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Location = System::Drawing::Point(395, 170);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(136, 100);
			this->groupBox4->TabIndex = 32;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Параметры системы";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(604, 107);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(103, 13);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Количество шагов:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(709, 107);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 35;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(638, 122);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(68, 13);
			this->label26->TabIndex = 36;
			this->label26->Text = L"Конечный х:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(709, 122);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 13);
			this->label27->TabIndex = 37;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(637, 137);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(69, 13);
			this->label28->TabIndex = 38;
			this->label28->Text = L"Коечный v1:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(631, 151);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 13);
			this->label29->TabIndex = 39;
			this->label29->Text = L"Конечный v2:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(709, 137);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 13);
			this->label30->TabIndex = 40;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(709, 151);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 13);
			this->label31->TabIndex = 41;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Controls->Add(this->textBox15);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->textBox16);
			this->groupBox5->Controls->Add(this->label32);
			this->groupBox5->Controls->Add(this->label33);
			this->groupBox5->Controls->Add(this->textBox17);
			this->groupBox5->Controls->Add(this->label34);
			this->groupBox5->Location = System::Drawing::Point(1237, 812);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(284, 65);
			this->groupBox5->TabIndex = 42;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Масштаб";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(107, 30);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(25, 20);
			this->textBox14->TabIndex = 3;
			this->textBox14->Text = L"1";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(245, 30);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(25, 20);
			this->textBox15->TabIndex = 6;
			this->textBox15->Text = L"1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(220, 33);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 13);
			this->label22->TabIndex = 5;
			this->label22->Text = L"до";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(188, 30);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(26, 20);
			this->textBox16->TabIndex = 4;
			this->textBox16->Text = L"0";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(153, 33);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(29, 13);
			this->label32->TabIndex = 3;
			this->label32->Text = L"у: от";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(82, 37);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(19, 13);
			this->label33->TabIndex = 2;
			this->label33->Text = L"до";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(50, 30);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(26, 20);
			this->textBox17->TabIndex = 1;
			this->textBox17->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(15, 33);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(29, 13);
			this->label34->TabIndex = 0;
			this->label34->Text = L"x: от";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox7->Controls->Add(this->textBox22);
			this->groupBox7->Controls->Add(this->textBox23);
			this->groupBox7->Controls->Add(this->label39);
			this->groupBox7->Controls->Add(this->textBox24);
			this->groupBox7->Controls->Add(this->label40);
			this->groupBox7->Controls->Add(this->label41);
			this->groupBox7->Controls->Add(this->textBox25);
			this->groupBox7->Controls->Add(this->label42);
			this->groupBox7->Location = System::Drawing::Point(1237, 328);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(284, 65);
			this->groupBox7->TabIndex = 43;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Масштаб";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(107, 30);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(25, 20);
			this->textBox22->TabIndex = 3;
			this->textBox22->Text = L"1";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(245, 30);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(25, 20);
			this->textBox23->TabIndex = 6;
			this->textBox23->Text = L"1";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(220, 33);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(19, 13);
			this->label39->TabIndex = 5;
			this->label39->Text = L"до";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(188, 30);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(26, 20);
			this->textBox24->TabIndex = 4;
			this->textBox24->Text = L"0";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(153, 33);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(29, 13);
			this->label40->TabIndex = 3;
			this->label40->Text = L"у: от";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(82, 33);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(19, 13);
			this->label41->TabIndex = 2;
			this->label41->Text = L"до";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(50, 30);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(26, 20);
			this->textBox25->TabIndex = 1;
			this->textBox25->Text = L"0";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(15, 33);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(29, 13);
			this->label42->TabIndex = 0;
			this->label42->Text = L"x: от";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1527, 328);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 23);
			this->button4->TabIndex = 44;
			this->button4->Text = L"Масштабировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1527, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 23);
			this->button5->TabIndex = 45;
			this->button5->Text = L"Очистить график";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1002, 812);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 23);
			this->button6->TabIndex = 46;
			this->button6->Text = L"Масштабировать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1002, 845);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 23);
			this->button7->TabIndex = 47;
			this->button7->Text = L"Очистить график";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1527, 811);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(113, 23);
			this->button8->TabIndex = 48;
			this->button8->Text = L"Масштабировать";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1527, 845);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 23);
			this->button9->TabIndex = 49;
			this->button9->Text = L"Очистить график";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(649, 170);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(57, 13);
			this->label35->TabIndex = 50;
			this->label35->Text = L"Max ОЛП:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(709, 170);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(0, 13);
			this->label36->TabIndex = 51;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(831, 170);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(48, 13);
			this->label37->TabIndex = 52;
			this->label37->Text = L" при х = ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(876, 170);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 13);
			this->label38->TabIndex = 53;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1747, 935);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->zedGraphControl3);
			this->Name = L"MyForm";
			this->Text = L"Задача Коши";
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
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;
		PointPairList^ f1 = gcnew ZedGraph::PointPairList();
		PointPairList^ f2 = gcnew ZedGraph::PointPairList();
		PointPairList^ f3 = gcnew ZedGraph::PointPairList();
		//PointPairList^ f12 = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double h = Convert::ToDouble(textBox3->Text);

		// Список точек
		std::vector<PPaint> graph;
		PPaint p0;
		p0.xn = Convert::ToDouble(textBox1->Text);
		p0.v1 = Convert::ToDouble(textBox2->Text);
		p0.v2 = Convert::ToDouble(textBox12->Text);
		p0.h = h;
		double control = Convert::ToDouble(textBox5->Text);
		int n = Convert::ToInt32(textBox4->Text);
		double a = Convert::ToDouble(textBox6->Text);
		double l = Convert::ToDouble(textBox7->Text);
		double border = Convert::ToDouble(textBox13->Text);

		graph = StartMethodBasic(n, p0,a,l,border,control);
		
		dataGridView1->Rows->Clear();
		for (int j = 0; j < graph.size(); j++)
		{
			f1->Add(graph[j].xn, graph[j].v1);
			f2->Add(graph[j].xn, graph[j].v2);
			f3->Add(graph[j].v1, graph[j].v2);
		}
		for (int j=0;j<graph.size();j++)
		{
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = graph[j].num;
			dataGridView1->Rows[j]->Cells[1]->Value = graph[j].h;
			dataGridView1->Rows[j]->Cells[2]->Value = graph[j].xn;
			dataGridView1->Rows[j]->Cells[3]->Value = graph[j].v1;
			dataGridView1->Rows[j]->Cells[4]->Value = graph[j].v2;
			dataGridView1->Rows[j]->Cells[5]->Value = graph[j].v21;
			dataGridView1->Rows[j]->Cells[6]->Value = graph[j].v22;
			dataGridView1->Rows[j]->Cells[7]->Value = graph[j].S;
			dataGridView1->Rows[j]->Cells[8]->Value = fabs(graph[j].S)*16.0;
			dataGridView1->Rows[j]->Cells[9]->Value = graph[j].le;
		}
		LineItem Curve1 = panel->AddCurve("Численное решение", f1, Color::Red);
		LineItem Curve2 = panel2->AddCurve("Численное решение", f2, Color::Black);
		LineItem Curve3 = panel3->AddCurve("Численное решение", f3, Color::Indigo);
		
		/*Curve1.Line->SmoothTension = true;
		Curve2.Line->SmoothTension = true;*/
		// Заполнение справки
		int sub=0;
		int mov = 0;
		double maxh=0;
		double minh = 0;

		maxh = graph[0].h;
		minh = graph[0].h;
		
		for (auto& point : graph)
		{
			if (maxh < point.h)
				maxh = point.h;
			if (minh > point.h)
				minh = point.h;
		}
		double olp=0;
		double xolp;
		for (int i = 1; i < graph.size() - 2; i++)
		{
			if (graph[i].h == graph[i + 1].h)
				continue;
			if (graph[i + 1].h < graph[i].h)
				sub++;
			else
				mov++;
			if (graph[i].S * 16.0 > olp)
			{
				olp = graph[i].S * 16.0;
				xolp = graph[i].xn;
			}
		}

		this->label10->Text = Convert::ToString(maxh);
		this->label12->Text = Convert::ToString(minh);
		this->label14->Text = Convert::ToString(sub);
		this->label16->Text = Convert::ToString(mov);
		this->label25->Text = Convert::ToString(graph.size()-1);
		this->label27->Text = Convert::ToString(graph[graph.size()-1].xn);
		this->label30->Text = Convert::ToString(graph[graph.size() - 1].v1);
		this->label31->Text = Convert::ToString(graph[graph.size() - 1].v2);
		this->label36->Text = Convert::ToString(olp);
		this->label38->Text = Convert::ToString(xolp);





		panel->XAxis->Scale->Min = 0;
		panel->XAxis->Scale->Max = 1;

		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = 0;
		panel->YAxis->Scale->Max = 1;
		
		
			// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
			// В противном случае на рисунке будет показана только часть графика, 
			// которая умещается в интервалы по осям, установленные по умолчанию
			zedGraphControl1->AxisChange();
			zedGraphControl2->AxisChange();
			zedGraphControl3->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
		zedGraphControl3->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Windows::Forms::MessageBox::Show("Консоль, то есть горизонтально размещенный брус длины L с постоянным поперечны сечением и жестко заделанным краем, находится под действием сосредоточенной поперечной силы P, распределенной поперечной нагрузки q(x) и(или) сосредоточенного(M) или распределенного(m(x)) момента. Вертикальный изгиб консоли в точке x, возникающий вследствие приложенных воздействий, описывается функцией u(x), которую называют изгибной линией. Для изгибной линии справедливо дифференциальное уравнение Кривизна u(x) = M(x) / EI(x) где M(x) – изгибный момент, EI(x) – жесткость и по определению Кривизна u(x) = u''[1 + (u')2 ] -3/2 Условию жестко заделанного левого края(x = 0) соответствуют условия u(0) = 0; u'(0) = 0. Так как правый край свободен, граничные условия справа(x = L) не ставятся. Пусть к правому краю консоли (x = L) приложена сосредоточенная направленная вверх сила P и жесткость EI(x) постоянна. Тогда уравнение изгибной линии приобретает вид u''[1 + (u')2 ] -3/2 = (L-1 – x L-2 ) PL2 [ EI ] -1.", "Справка");
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GroupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl2->GraphPane->CurveList->Clear();
	zedGraphControl3->GraphPane->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl2->AxisChange();
	zedGraphControl3->AxisChange();
	zedGraphControl1->Invalidate();
	zedGraphControl2->Invalidate();
	zedGraphControl3->Invalidate();
}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {

	
	GraphPane^ panel3 = zedGraphControl3->GraphPane;
	double xmin = Convert::ToDouble(textBox25->Text);
	double xmax = Convert::ToDouble(textBox22->Text);
	double ymin = Convert::ToDouble(textBox24->Text);
	double ymax = Convert::ToDouble(textBox23->Text);
	// Устанавливаем интересующий нас интервал по оси X

	panel3->XAxis->Scale->Min = xmin;
	panel3->XAxis->Scale->Max = xmax;

	panel3->YAxis->Scale->Min = ymin;
	panel3->YAxis->Scale->Max = ymax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl3->AxisChange();
	// Обновляем график
	
	zedGraphControl3->Invalidate();
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {

	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox8->Text);
	double xmax = Convert::ToDouble(textBox9->Text);
	double ymin = Convert::ToDouble(textBox10->Text);
	double ymax = Convert::ToDouble(textBox11->Text);
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;


	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();

	// Обновляем график
	zedGraphControl1->Invalidate();
	
}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {

	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	double xmin = Convert::ToDouble(textBox17->Text);
	double xmax = Convert::ToDouble(textBox14->Text);
	double ymin = Convert::ToDouble(textBox16->Text);
	double ymax = Convert::ToDouble(textBox15->Text);
	// Устанавливаем интересующий нас интервал по оси X

	panel2->XAxis->Scale->Min = xmin;
	panel2->XAxis->Scale->Max = xmax;

	panel2->YAxis->Scale->Min = ymin;
	panel2->YAxis->Scale->Max = ymax;

	

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	
	zedGraphControl2->AxisChange();
	
	// Обновляем график
	
	zedGraphControl2->Invalidate();
	
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	zedGraphControl3->GraphPane->CurveList->Clear();
	zedGraphControl3->AxisChange();
	zedGraphControl3->Invalidate();
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	
	zedGraphControl2->GraphPane->CurveList->Clear();
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
};
}

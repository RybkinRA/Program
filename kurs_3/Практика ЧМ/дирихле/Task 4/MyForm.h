#pragma once
#include "mZeidel.h"

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









			 //столбцы первой таблицы



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::Label^  label19;


	private: System::Windows::Forms::Label^  label21;


	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::DataGridView^  dataGridView2;








	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;













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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1528, 803);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Метод Зейделя";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 503);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Общая погрешность:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(127, 500);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(99, 20);
			this->textBox6->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(127, 465);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(99, 20);
			this->textBox5->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 468);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Невязка:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 427);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 20);
			this->textBox4->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 427);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 26);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Достигнутая \r\nточность метода:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 392);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Число итераций:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(127, 389);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 20);
			this->textBox3->TabIndex = 24;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"U/_test(x, y) = 1 - x^2 - y^2";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Controls->Add(this->textBox2);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->textBox1);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox5->Location = System::Drawing::Point(5, 37);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(221, 145);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Параметры";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(144, 43);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(56, 20);
			this->textBox10->TabIndex = 35;
			this->textBox10->Text = L"1";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(144, 18);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(56, 20);
			this->textBox9->TabIndex = 34;
			this->textBox9->Text = L"1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(40, 44);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(61, 20);
			this->textBox8->TabIndex = 33;
			this->textBox8->Text = L"-1";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(40, 18);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 20);
			this->textBox7->TabIndex = 32;
			this->textBox7->Text = L"-1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(83, 20);
			this->textBox2->TabIndex = 26;
			this->textBox2->Text = L"500";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Ограничение шагов:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(83, 20);
			this->textBox1->TabIndex = 24;
			this->textBox1->Text = L"1e-008";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Точность метода:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 21);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"a = ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(113, 21);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"b = ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(9, 46);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 13);
			this->label21->TabIndex = 12;
			this->label21->Text = L"c = ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(113, 46);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(25, 13);
			this->label22->TabIndex = 3;
			this->label22->Text = L"d = ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(7, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 29);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Вычислить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox7->Controls->Add(this->label12);
			this->groupBox7->Controls->Add(this->textBox19);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Controls->Add(this->textBox20);
			this->groupBox7->Location = System::Drawing::Point(7, 199);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2);
			this->groupBox7->Size = System::Drawing::Size(124, 76);
			this->groupBox7->TabIndex = 18;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Число разбиений";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 54);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 18;
			this->label12->Text = L"По у:";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(57, 51);
			this->textBox19->Margin = System::Windows::Forms::Padding(2);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(42, 20);
			this->textBox19->TabIndex = 17;
			this->textBox19->Text = L"3";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 24);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"По х:";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(57, 21);
			this->textBox20->Margin = System::Windows::Forms::Padding(2);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(42, 20);
			this->textBox20->TabIndex = 15;
			this->textBox20->Text = L"3";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(231, 27);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1273, 754);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1536, 829);
			this->tabControl1->TabIndex = 14;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TabControl1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1538, 831);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Задача Дирихле для уравнения Пуассона";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl4_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void TabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double a = Convert::ToDouble(textBox7->Text);
	double b = Convert::ToDouble(textBox9->Text);
	double c = Convert::ToDouble(textBox8->Text);
	double d = Convert::ToDouble(textBox10->Text);
	double n = Convert::ToDouble(textBox19->Text);
	double m = Convert::ToDouble(textBox20->Text);
	double eps = Convert::ToDouble(textBox1->Text);
	double countStep = Convert::ToDouble(textBox2->Text);
	double h = static_cast<double>(b - a) / static_cast<double>(n);
	double k = static_cast<double>(d - c) / static_cast<double>(m);
	std::vector<double> ans;
	auto v = solveDifferenceScheme(f, mu, a, b, c, d, n, m, eps, countStep, ans);
	dataGridView2->Rows->Clear();
	dataGridView2->ColumnCount = n + 3;
	for (int i = 0; i <= m + 2; i++) {
		dataGridView2->Rows->Add();
	}
	dataGridView2->Rows[0]->Cells[1]->Value = "i";
	dataGridView2->Rows[0]->Cells[1]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
	dataGridView2->Rows[1]->Cells[0]->Value = "j";
	dataGridView2->Rows[1]->Cells[0]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
	dataGridView2->Rows[1]->Cells[1]->Value = "Y\\X";
	dataGridView2->Rows[1]->Cells[1]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
	for (int i = 2; i <= n + 2; i++) {
		dataGridView2->Rows[0]->Cells[i]->Value = i - 2;
		dataGridView2->Rows[0]->Cells[i]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
		dataGridView2->Rows[1]->Cells[i]->Value = a + h * (i - 2);
		dataGridView2->Rows[1]->Cells[i]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
	}
	for (int i = n + 2; i > 1; i--) {
		dataGridView2->Rows[i]->Cells[1]->Value = c + k * (n - i + 2);
		dataGridView2->Rows[i]->Cells[1]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
		dataGridView2->Rows[i]->Cells[0]->Value = n - i + 2;
		dataGridView2->Rows[i]->Cells[0]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
	}
	for (int i = 2; i < v.size() + 2; i ++)
	{
		for (int j = 2; j < v[i - 2].size() + 2; j++)
		{
			//Печать в таблицу
			dataGridView2->Rows[v[i - 2].size() - j + 3]->Cells[i]->Value = v[i - 2][j - 2].ToString("e");
		}
	}
	textBox3->Text = ans[0].ToString();
	textBox4->Text = ans[1].ToString("e");
	textBox5->Text = ans[2].ToString("e");
	textBox6->Text = ans[3].ToString("e");

}

private: System::Void ZedGraphControl5_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

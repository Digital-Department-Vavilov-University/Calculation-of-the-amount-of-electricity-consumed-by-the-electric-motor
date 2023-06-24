#pragma once
#include <cmath>
//using namespace std;
namespace Energy {

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
	private: System::Windows::Forms::Label^ label_U;
	protected:

	private: System::Windows::Forms::TextBox^ textBox_U;
	private: System::Windows::Forms::TextBox^ textBox_I;
	private: System::Windows::Forms::Label^ label_I;
	protected:






	private: System::Windows::Forms::Button^ button_calc;
	private: System::Windows::Forms::Label^ label_E;




	private: System::Windows::Forms::Label^ label_count;
	private: System::Windows::Forms::Label^ label_h;



	private: System::Windows::Forms::TextBox^ textBox_h;

	private: System::Windows::Forms::Label^ label_KPD;
	private: System::Windows::Forms::Label^ label_cos;
	private: System::Windows::Forms::TextBox^ textBox_KPD;
	private: System::Windows::Forms::TextBox^ textBox_cos;
	

























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_U = (gcnew System::Windows::Forms::Label());
			this->textBox_U = (gcnew System::Windows::Forms::TextBox());
			this->textBox_I = (gcnew System::Windows::Forms::TextBox());
			this->label_I = (gcnew System::Windows::Forms::Label());
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->label_E = (gcnew System::Windows::Forms::Label());
			this->label_count = (gcnew System::Windows::Forms::Label());
			this->label_h = (gcnew System::Windows::Forms::Label());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->label_KPD = (gcnew System::Windows::Forms::Label());
			this->label_cos = (gcnew System::Windows::Forms::Label());
			this->textBox_KPD = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cos = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_U
			// 
			this->label_U->AutoSize = true;
			this->label_U->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_U->Location = System::Drawing::Point(17, 23);
			this->label_U->Name = L"label_U";
			this->label_U->Size = System::Drawing::Size(227, 15);
			this->label_U->TabIndex = 0;
			this->label_U->Text = L"Введите значение напряжения в \"кВ\":";
			this->label_U->Click += gcnew System::EventHandler(this, &MyForm::label_U_Click);
			// 
			// textBox_U
			// 
			this->textBox_U->Location = System::Drawing::Point(17, 41);
			this->textBox_U->Name = L"textBox_U";
			this->textBox_U->Size = System::Drawing::Size(227, 20);
			this->textBox_U->TabIndex = 1;
			this->textBox_U->Text = L"0";
			this->textBox_U->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_U_TextChanged);
			this->textBox_U->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_U_KeyPress);
			// 
			// textBox_I
			// 
			this->textBox_I->Location = System::Drawing::Point(17, 95);
			this->textBox_I->Name = L"textBox_I";
			this->textBox_I->Size = System::Drawing::Size(207, 20);
			this->textBox_I->TabIndex = 3;
			this->textBox_I->Text = L"0";
			this->textBox_I->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_I_TextChanged);
			this->textBox_I->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_I_KeyPress);
			// 
			// label_I
			// 
			this->label_I->AutoSize = true;
			this->label_I->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_I->Location = System::Drawing::Point(17, 77);
			this->label_I->Name = L"label_I";
			this->label_I->Size = System::Drawing::Size(207, 15);
			this->label_I->TabIndex = 2;
			this->label_I->Text = L"Введите значение силы тока в \"А\":";
			this->label_I->Click += gcnew System::EventHandler(this, &MyForm::label_I_Click);
			// 
			// button_calc
			// 
			this->button_calc->BackColor = System::Drawing::SystemColors::Control;
			this->button_calc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_calc->Location = System::Drawing::Point(414, 183);
			this->button_calc->Margin = System::Windows::Forms::Padding(4);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(75, 23);
			this->button_calc->TabIndex = 4;
			this->button_calc->Text = L"Расчет";
			this->button_calc->UseVisualStyleBackColor = false;
			this->button_calc->Click += gcnew System::EventHandler(this, &MyForm::button_calc_Click);
			// 
			// label_E
			// 
			this->label_E->AutoSize = true;
			this->label_E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_E->Location = System::Drawing::Point(312, 55);
			this->label_E->Name = L"label_E";
			this->label_E->Size = System::Drawing::Size(293, 60);
			this->label_E->TabIndex = 5;
			this->label_E->Text = L"Количество потребляемой \r\nэлектроэнергии электродвигателем\r\nза определенное колич"
				L"ество часов";
			// 
			// label_count
			// 
			this->label_count->AutoSize = true;
			this->label_count->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_count->Location = System::Drawing::Point(435, 135);
			this->label_count->Name = L"label_count";
			this->label_count->Size = System::Drawing::Size(35, 37);
			this->label_count->TabIndex = 7;
			this->label_count->Text = L"0";
			// 
			// label_h
			// 
			this->label_h->AutoSize = true;
			this->label_h->BackColor = System::Drawing::SystemColors::Control;
			this->label_h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_h->Location = System::Drawing::Point(17, 135);
			this->label_h->Name = L"label_h";
			this->label_h->Size = System::Drawing::Size(230, 45);
			this->label_h->TabIndex = 8;
			this->label_h->Text = L"Введите количество времени,\r\nза которое двигатель будет работать\r\n(единица времен"
				L"и - часы):";
			this->label_h->Click += gcnew System::EventHandler(this, &MyForm::label_h_Click);
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(17, 183);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(230, 20);
			this->textBox_h->TabIndex = 9;
			this->textBox_h->Text = L"0";
			this->textBox_h->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_h_TextChanged);
			this->textBox_h->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_h_KeyPress);
			// 
			// label_KPD
			// 
			this->label_KPD->AutoSize = true;
			this->label_KPD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_KPD->Location = System::Drawing::Point(17, 217);
			this->label_KPD->Name = L"label_KPD";
			this->label_KPD->Size = System::Drawing::Size(146, 15);
			this->label_KPD->TabIndex = 10;
			this->label_KPD->Text = L"Введите значение КПД:";
			this->label_KPD->TextChanged += gcnew System::EventHandler(this, &MyForm::Text_);
			this->label_KPD->Click += gcnew System::EventHandler(this, &MyForm::label_KPD_Click);
			// 
			// label_cos
			// 
			this->label_cos->AutoSize = true;
			this->label_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cos->Location = System::Drawing::Point(17, 272);
			this->label_cos->Name = L"label_cos";
			this->label_cos->Size = System::Drawing::Size(210, 15);
			this->label_cos->TabIndex = 11;
			this->label_cos->Text = L"Введите значение cosφ (от 0 до 1):";
			this->label_cos->Click += gcnew System::EventHandler(this, &MyForm::label_cos_Click);
			// 
			// textBox_KPD
			// 
			this->textBox_KPD->Location = System::Drawing::Point(17, 235);
			this->textBox_KPD->Name = L"textBox_KPD";
			this->textBox_KPD->Size = System::Drawing::Size(146, 20);
			this->textBox_KPD->TabIndex = 12;
			this->textBox_KPD->Text = L"0";
			this->textBox_KPD->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_KPD_TextChanged);
			this->textBox_KPD->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KPD_KeyPress);
			// 
			// textBox_cos
			// 
			this->textBox_cos->Location = System::Drawing::Point(17, 290);
			this->textBox_cos->Name = L"textBox_cos";
			this->textBox_cos->Size = System::Drawing::Size(210, 20);
			this->textBox_cos->TabIndex = 13;
			this->textBox_cos->Text = L"0";
			this->textBox_cos->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_cos_TextChanged);
			this->textBox_cos->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_cos_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(632, 322);
			this->Controls->Add(this->textBox_cos);
			this->Controls->Add(this->textBox_KPD);
			this->Controls->Add(this->label_cos);
			this->Controls->Add(this->label_KPD);
			this->Controls->Add(this->textBox_h);
			this->Controls->Add(this->label_h);
			this->Controls->Add(this->label_count);
			this->Controls->Add(this->label_E);
			this->Controls->Add(this->button_calc);
			this->Controls->Add(this->textBox_I);
			this->Controls->Add(this->label_I);
			this->Controls->Add(this->textBox_U);
			this->Controls->Add(this->label_U);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Р.К.П.Э.Э. (Расчет количества потребляемой электроэнергии электродвигателем)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button_calc_Click(System::Object^ sender, System::EventArgs^ e) {
		float U = System::Convert::ToSingle(textBox_U->Text),// добаввляем сюда входные переменные думаем над типом данных
			I = System::Convert::ToSingle(textBox_I->Text),
			h = System::Convert::ToSingle(textBox_h->Text),
			KPD = System::Convert::ToSingle(textBox_KPD->Text),
			cos = System::Convert::ToSingle(textBox_cos->Text);
		float P = U*I*cos*(KPD/100); // 1 формула
		float E = P*h; // 2 формула
		float rezult = ceilf(E);
		label_count->Text = rezult.ToString();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
}
	private: System::Void textBox_U_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{

		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{

			e->Handled = true;
		}

	};
	private: System::Void textBox_I_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{

		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{

			e->Handled = true;
		}
	};
	private: System::Void textBox_h_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{

		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{

			e->Handled = true;
		}
	};
		private: System::Void textBox_KPD_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{

			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
			{

				e->Handled = true;
			}
		};
		private: System::Void textBox_cos_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{

			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b') {

				e->Handled = true;
			}
		}
		private: System::Void label_U_Click(System::Object^ sender, System::EventArgs^ e) {
		}
private: System::Void label_I_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_h_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_KPD_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_cos_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Text_(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_U_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_I_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_h_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_KPD_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_cos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_E_ClicK(System::Object^ sender, System::EventArgs^ e) {
}
};
		};

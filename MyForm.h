#pragma once

namespace app1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button_7;
	protected:
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_znak;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_wynik;
	private: System::Windows::Forms::Button^ button_dziel;
	private: System::Windows::Forms::Button^ button_mnoz;
	private: System::Windows::Forms::Button^ button_odejmij;
	private: System::Windows::Forms::Button^ button_dodaj;
	private: System::Windows::Forms::Button^ button_C;
	private: System::Windows::Forms::TextBox^ result;





















	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_znak = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_wynik = (gcnew System::Windows::Forms::Button());
			this->button_dziel = (gcnew System::Windows::Forms::Button());
			this->button_mnoz = (gcnew System::Windows::Forms::Button());
			this->button_odejmij = (gcnew System::Windows::Forms::Button());
			this->button_dodaj = (gcnew System::Windows::Forms::Button());
			this->button_C = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_7->Location = System::Drawing::Point(7, 73);
			this->button_7->MaximumSize = System::Drawing::Size(100, 100);
			this->button_7->MinimumSize = System::Drawing::Size(100, 100);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(100, 100);
			this->button_7->TabIndex = 7;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_8->Location = System::Drawing::Point(113, 73);
			this->button_8->MaximumSize = System::Drawing::Size(100, 100);
			this->button_8->MinimumSize = System::Drawing::Size(100, 100);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(100, 100);
			this->button_8->TabIndex = 8;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_9->Location = System::Drawing::Point(219, 73);
			this->button_9->MaximumSize = System::Drawing::Size(100, 100);
			this->button_9->MinimumSize = System::Drawing::Size(100, 100);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(100, 100);
			this->button_9->TabIndex = 9;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_4->Location = System::Drawing::Point(7, 179);
			this->button_4->MaximumSize = System::Drawing::Size(100, 100);
			this->button_4->MinimumSize = System::Drawing::Size(100, 100);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(100, 100);
			this->button_4->TabIndex = 4;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_5->Location = System::Drawing::Point(113, 179);
			this->button_5->MaximumSize = System::Drawing::Size(100, 100);
			this->button_5->MinimumSize = System::Drawing::Size(100, 100);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(100, 100);
			this->button_5->TabIndex = 5;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_6->Location = System::Drawing::Point(219, 179);
			this->button_6->MaximumSize = System::Drawing::Size(100, 100);
			this->button_6->MinimumSize = System::Drawing::Size(100, 100);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(100, 100);
			this->button_6->TabIndex = 6;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_1->Location = System::Drawing::Point(7, 285);
			this->button_1->MaximumSize = System::Drawing::Size(100, 100);
			this->button_1->MinimumSize = System::Drawing::Size(100, 100);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(100, 100);
			this->button_1->TabIndex = 1;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_2->Location = System::Drawing::Point(113, 285);
			this->button_2->MaximumSize = System::Drawing::Size(100, 100);
			this->button_2->MinimumSize = System::Drawing::Size(100, 100);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(100, 100);
			this->button_2->TabIndex = 2;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_3->Location = System::Drawing::Point(219, 285);
			this->button_3->MaximumSize = System::Drawing::Size(100, 100);
			this->button_3->MinimumSize = System::Drawing::Size(100, 100);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(100, 100);
			this->button_3->TabIndex = 3;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
			// 
			// button_znak
			// 
			this->button_znak->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_znak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_znak->Location = System::Drawing::Point(7, 391);
			this->button_znak->MaximumSize = System::Drawing::Size(100, 100);
			this->button_znak->MinimumSize = System::Drawing::Size(100, 100);
			this->button_znak->Name = L"button_znak";
			this->button_znak->Size = System::Drawing::Size(100, 100);
			this->button_znak->TabIndex = 10;
			this->button_znak->Text = L"+/-";
			this->button_znak->UseVisualStyleBackColor = false;
			this->button_znak->Click += gcnew System::EventHandler(this, &MyForm::button_znak_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_0->Location = System::Drawing::Point(113, 391);
			this->button_0->MaximumSize = System::Drawing::Size(100, 100);
			this->button_0->MinimumSize = System::Drawing::Size(100, 100);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(100, 100);
			this->button_0->TabIndex = 0;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
			// 
			// button_wynik
			// 
			this->button_wynik->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_wynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_wynik->Location = System::Drawing::Point(219, 391);
			this->button_wynik->MaximumSize = System::Drawing::Size(100, 100);
			this->button_wynik->MinimumSize = System::Drawing::Size(100, 100);
			this->button_wynik->Name = L"button_wynik";
			this->button_wynik->Size = System::Drawing::Size(100, 100);
			this->button_wynik->TabIndex = 11;
			this->button_wynik->Text = L"=";
			this->button_wynik->UseVisualStyleBackColor = false;
			this->button_wynik->Click += gcnew System::EventHandler(this, &MyForm::button_wynik_Click);
			// 
			// button_dziel
			// 
			this->button_dziel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_dziel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_dziel->Location = System::Drawing::Point(325, 73);
			this->button_dziel->MaximumSize = System::Drawing::Size(100, 100);
			this->button_dziel->MinimumSize = System::Drawing::Size(100, 100);
			this->button_dziel->Name = L"button_dziel";
			this->button_dziel->Size = System::Drawing::Size(100, 100);
			this->button_dziel->TabIndex = 15;
			this->button_dziel->Text = L"/";
			this->button_dziel->UseVisualStyleBackColor = false;
			this->button_dziel->Click += gcnew System::EventHandler(this, &MyForm::button_dziel_Click);
			// 
			// button_mnoz
			// 
			this->button_mnoz->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_mnoz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_mnoz->Location = System::Drawing::Point(325, 179);
			this->button_mnoz->MaximumSize = System::Drawing::Size(100, 100);
			this->button_mnoz->MinimumSize = System::Drawing::Size(100, 100);
			this->button_mnoz->Name = L"button_mnoz";
			this->button_mnoz->Size = System::Drawing::Size(100, 100);
			this->button_mnoz->TabIndex = 14;
			this->button_mnoz->Text = L"*";
			this->button_mnoz->UseVisualStyleBackColor = false;
			this->button_mnoz->Click += gcnew System::EventHandler(this, &MyForm::button_mnoz_Click);
			// 
			// button_odejmij
			// 
			this->button_odejmij->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_odejmij->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_odejmij->Location = System::Drawing::Point(325, 285);
			this->button_odejmij->MaximumSize = System::Drawing::Size(100, 100);
			this->button_odejmij->MinimumSize = System::Drawing::Size(100, 100);
			this->button_odejmij->Name = L"button_odejmij";
			this->button_odejmij->Size = System::Drawing::Size(100, 100);
			this->button_odejmij->TabIndex = 13;
			this->button_odejmij->Text = L"-";
			this->button_odejmij->UseVisualStyleBackColor = false;
			this->button_odejmij->Click += gcnew System::EventHandler(this, &MyForm::button_odejmij_Click);
			// 
			// button_dodaj
			// 
			this->button_dodaj->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_dodaj->Location = System::Drawing::Point(325, 391);
			this->button_dodaj->MaximumSize = System::Drawing::Size(100, 100);
			this->button_dodaj->MinimumSize = System::Drawing::Size(100, 100);
			this->button_dodaj->Name = L"button_dodaj";
			this->button_dodaj->Size = System::Drawing::Size(100, 100);
			this->button_dodaj->TabIndex = 12;
			this->button_dodaj->Text = L"+";
			this->button_dodaj->UseVisualStyleBackColor = false;
			this->button_dodaj->Click += gcnew System::EventHandler(this, &MyForm::button_dodaj_Click);
			// 
			// button_C
			// 
			this->button_C->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button_C->Location = System::Drawing::Point(325, 12);
			this->button_C->MaximumSize = System::Drawing::Size(100, 55);
			this->button_C->MinimumSize = System::Drawing::Size(100, 55);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(100, 55);
			this->button_C->TabIndex = 16;
			this->button_C->Text = L"C";
			this->button_C->UseVisualStyleBackColor = false;
			this->button_C->Click += gcnew System::EventHandler(this, &MyForm::button_C_Click);
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->result->Location = System::Drawing::Point(13, 12);
			this->result->MaximumSize = System::Drawing::Size(306, 53);
			this->result->MinimumSize = System::Drawing::Size(306, 53);
			this->result->Name = L"result";
			this->result->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->result->Size = System::Drawing::Size(306, 53);
			this->result->TabIndex = 17;
			this->result->Text = L"0";
			this->result->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(429, 495);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button_C);
			this->Controls->Add(this->button_dodaj);
			this->Controls->Add(this->button_odejmij);
			this->Controls->Add(this->button_mnoz);
			this->Controls->Add(this->button_dziel);
			this->Controls->Add(this->button_wynik);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_znak);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->MaximumSize = System::Drawing::Size(447, 542);
			this->MinimumSize = System::Drawing::Size(447, 542);
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
			System::Void button_1_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_2_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_3_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_4_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_5_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_6_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_7_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_8_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_9_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_0_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_znak_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_dziel_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_mnoz_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_odejmij_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_dodaj_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_wynik_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button_C_Click(System::Object^ sender, System::EventArgs^ e);

			System::String^ a_str = "";
			int wynik = 0;
			char znak = '0';
			bool pierwszy = true;

			int  str_to_int(System::String^ str);
			void res();
};
}
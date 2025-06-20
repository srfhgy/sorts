#pragma once

namespace sfg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		char k;
		double a, b, s;

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(102, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(183, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(102, 93);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(184, 93);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(21, 135);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(103, 134);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(185, 134);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(21, 165);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(103, 165);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(185, 164);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(21, 195);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 13;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(103, 194);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 14;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::OperationButton_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(185, 194);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 15;
			this->button15->Text = L".";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::DecimalButton_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(21, 226);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 16;
			this->button16->Text = L"C";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(183, 226);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 17;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void NumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		if (textBox1->Text == "0") {
			textBox1->Text = button->Text;
		}
		else {
			textBox1->Text += button->Text;
		}
	}

	private: System::Void OperationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		k = Convert::ToChar(button->Text);
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		k = '-';
		button17->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (k)
		{
		case'+':
			b = Convert::ToDouble(textBox1->Text);
			s = a + b;
			textBox1->Text = Convert::ToString(s);
			break;
		case'-':
			b = Convert::ToDouble(textBox1->Text);
			s = a - b;
			textBox1->Text = Convert::ToString(s);
			break;
		case '*':
			b = Convert::ToDouble(textBox1->Text);
			s = a * b;
			textBox1->Text = Convert::ToString(s);
			break;
		case'/':
			b = Convert::ToDouble(textBox1->Text);
			if (b == 0)
			{
				textBox1->Text = "������� �� 0!";
			}
			else
			{
				textBox1->Clear();
				s = a / b;
				textBox1->Text = Convert::ToString(s);
			}
			break;
		}
	}

	private: System::Void DecimalButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textBox1->Text->Contains(".")) {
			textBox1->Text += ".";
		}
	}

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "0";
		a = 0;
		b = 0;
		s = 0;
		k = '\0';
	}
	};
}


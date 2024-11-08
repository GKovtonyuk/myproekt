#pragma once

namespace myproekt {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(312, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button2->Location = System::Drawing::Point(329, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 76);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вивести зображення";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(228, 98);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(358, 305);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(979, 615);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Моя форма";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


		this->Text = "Ласкаво просимо до моєї програми!";
	}




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ random = gcnew Random();

		this->BackColor = System::Drawing::Color::FromArgb(random->Next(256), random->Next(256), random->Next(256));

		int newWidth = random->Next(300, 800);
		int newHeight = random->Next(300, 600);
		this->Size = System::Drawing::Size(newWidth, newHeight);

		array<String^>^ messages = {
		"Вітаю! Кнопка натиснута.",
		"Класна зміна кольору!",
		"Що далі станеться?",
		"Цікаво, так?",
		"Спробуй ще раз!"
		"Ура"
		};
		String^ randomMessage = messages[random->Next(messages->Length)];

		MessageBox::Show(randomMessage);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Drawing::Image^ image = System::Drawing::Image::FromFile("vin.jpg");

		pictureBox1->Image = image;


		MessageBox::Show("Я люблю своє місто");



	}

};
}

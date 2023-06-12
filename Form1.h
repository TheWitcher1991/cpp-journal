#pragma once

namespace Journal {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ext_bth;
	private: System::Windows::Forms::Button^ create_bth;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->create_bth = (gcnew System::Windows::Forms::Button());
			this->ext_bth = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->create_bth);
			this->panel1->Controls->Add(this->ext_bth);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(865, 61);
			this->panel1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(272, 18);
			this->textBox1->Margin = System::Windows::Forms::Padding(6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(375, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Введит текст...";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ежедневник";
			// 
			// create_bth
			// 
			this->create_bth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_bth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_bth->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_bth->ForeColor = System::Drawing::Color::White;
			this->create_bth->Location = System::Drawing::Point(667, 12);
			this->create_bth->Name = L"create_bth";
			this->create_bth->Size = System::Drawing::Size(85, 30);
			this->create_bth->TabIndex = 1;
			this->create_bth->Text = L"Добавить";
			this->create_bth->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->create_bth->UseVisualStyleBackColor = true;
			this->create_bth->Click += gcnew System::EventHandler(this, &Form1::create_bth_Click);
			// 
			// ext_bth
			// 
			this->ext_bth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ext_bth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ext_bth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ext_bth->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ext_bth->ForeColor = System::Drawing::Color::White;
			this->ext_bth->Location = System::Drawing::Point(768, 12);
			this->ext_bth->Name = L"ext_bth";
			this->ext_bth->Size = System::Drawing::Size(85, 30);
			this->ext_bth->TabIndex = 0;
			this->ext_bth->Text = L"Выход";
			this->ext_bth->UseVisualStyleBackColor = true;
			this->ext_bth->Click += gcnew System::EventHandler(this, &Form1::ext_bth_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 67);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(865, 561);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(865, 640);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ежедневник";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: 
			System::Void ext_bth_Click(System::Object^ sender, System::EventArgs^ e) {
				Application::Exit();
			}


			System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
			
				this->flowLayoutPanel1->Controls->Remove(((Button^)sender)->Parent);
			
			}

			System::Void create_bth_Click(System::Object^ sender, System::EventArgs^ e) {
				DateTime now = DateTime::Now;
				String^ dateString = now.ToString("dd MMMM в H:m");

				if (this->textBox1->Text->Trim() == "") {
					MessageBox::Show("Введите текст!");
				} else {

					// Создаём новый блок
					System::Windows::Forms::Panel^ panel2 = gcnew System::Windows::Forms::Panel();
					panel2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					panel2->Location = System::Drawing::Point(12, 0);
					panel2->Size = System::Drawing::Size(840, 70);
					panel2->BackColor = System::Drawing::Color::White;
					panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					panel2->TabIndex = 0;

					// Создаём Label с текстом
					System::Windows::Forms::Label^ text = gcnew System::Windows::Forms::Label();
					text->Font = (gcnew System::Drawing::Font(L"Tahoma", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					text->Location = System::Drawing::Point(10, 15);
					text->Size = System::Drawing::Size(396, 19);
					text->TabIndex = 0;
					text->Text = this->textBox1->Text;

					// Создаём Label с датой
					System::Windows::Forms::Label^ date = gcnew System::Windows::Forms::Label();
					date->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					date->AutoSize = true;
					date->BackColor = System::Drawing::Color::Transparent;
					date->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
					date->Location = System::Drawing::Point(10, 40);
					date->Size = System::Drawing::Size(88, 13);
					date->TabIndex = 1;
					date->Text = dateString;

					// Создаем кнопку для удаления
					System::Windows::Forms::Button^ bth = gcnew System::Windows::Forms::Button();
					bth->BackColor = System::Drawing::Color::Red;
					bth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					bth->Cursor = System::Windows::Forms::Cursors::Hand;
					bth->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					bth->ForeColor = System::Drawing::Color::White;
					bth->Location = System::Drawing::Point(745, 10);
					bth->Size = System::Drawing::Size(81, 29);
					bth->TabIndex = 2;
					bth->Name = L"button1";
					bth->Text = L"Удалить";
					bth->UseVisualStyleBackColor = false;
				
					// Добавляем в Todo-блок
					panel2->Controls->Add(text);
					panel2->Controls->Add(date);
					panel2->Controls->Add(bth);

					// Добавляем в основной блок
					this->flowLayoutPanel1->Controls->Add(panel2);

					bth->Click += gcnew System::EventHandler(this, &Form1::button_Click);

				}
			}
};
}

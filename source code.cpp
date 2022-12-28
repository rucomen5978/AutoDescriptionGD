 #pragma once
#include <fstream>
#include <Windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
namespace autodescription {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл¤ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Ќазвание”ровн¤;
	protected:

	private: System::Windows::Forms::TextBox^ NAMEBOX;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ —оздатель”ровн¤;

	private: System::Windows::Forms::TextBox^ CREATORBOX;
	private: System::Windows::Forms::Label^ ID”ровн¤;


	private: System::Windows::Forms::TextBox^ IDBOX;
	private: System::Windows::Forms::Label^ —сылкаЌаѕесню”ровн¤;


	private: System::Windows::Forms::TextBox^ LINKTOTHESONGBOX;
	private: System::Windows::Forms::Label^ »нструментыƒл¤—оздание¬идео;


	private: System::Windows::Forms::TextBox^ TOOLBOX;
	private: System::Windows::Forms::Label^  ачество¬идео;


	private: System::Windows::Forms::TextBox^ QUALITYBOX;
	private: System::Windows::Forms::Label^ FPS¬идео;


	private: System::Windows::Forms::TextBox^ FPSBOX;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ FPSƒл¤”ровн¤;

	private: System::Windows::Forms::TextBox^ FPSLVLBOX;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// ќб¤зательна¤ переменна¤ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл¤ поддержки конструктора Ч не измен¤йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ќазвание”ровн¤ = (gcnew System::Windows::Forms::Label());
			this->NAMEBOX = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->—оздатель”ровн¤ = (gcnew System::Windows::Forms::Label());
			this->CREATORBOX = (gcnew System::Windows::Forms::TextBox());
			this->ID”ровн¤ = (gcnew System::Windows::Forms::Label());
			this->IDBOX = (gcnew System::Windows::Forms::TextBox());
			this->—сылкаЌаѕесню”ровн¤ = (gcnew System::Windows::Forms::Label());
			this->LINKTOTHESONGBOX = (gcnew System::Windows::Forms::TextBox());
			this->»нструментыƒл¤—оздание¬идео = (gcnew System::Windows::Forms::Label());
			this->TOOLBOX = (gcnew System::Windows::Forms::TextBox());
			this-> ачество¬идео = (gcnew System::Windows::Forms::Label());
			this->QUALITYBOX = (gcnew System::Windows::Forms::TextBox());
			this->FPS¬идео = (gcnew System::Windows::Forms::Label());
			this->FPSBOX = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->FPSƒл¤”ровн¤ = (gcnew System::Windows::Forms::Label());
			this->FPSLVLBOX = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Ќазвание”ровн¤
			// 
			this->Ќазвание”ровн¤->AutoSize = true;
			this->Ќазвание”ровн¤->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ќазвание”ровн¤->Location = System::Drawing::Point(14, 30);
			this->Ќазвание”ровн¤->Name = L"Ќазвание”ровн¤";
			this->Ќазвание”ровн¤->Size = System::Drawing::Size(206, 25);
			this->Ќазвание”ровн¤->TabIndex = 0;
			this->Ќазвание”ровн¤->Text = L"Ќазвание уровн¤:";
			// 
			// NAMEBOX
			// 
			this->NAMEBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NAMEBOX->Location = System::Drawing::Point(219, 35);
			this->NAMEBOX->Name = L"NAMEBOX";
			this->NAMEBOX->Size = System::Drawing::Size(520, 20);
			this->NAMEBOX->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"AUTO DESCRIPTION BY RUCOMEN";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// —оздатель”ровн¤
			// 
			this->—оздатель”ровн¤->AutoSize = true;
			this->—оздатель”ровн¤->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->—оздатель”ровн¤->Location = System::Drawing::Point(14, 64);
			this->—оздатель”ровн¤->Name = L"—оздатель”ровн¤";
			this->—оздатель”ровн¤->Size = System::Drawing::Size(217, 25);
			this->—оздатель”ровн¤->TabIndex = 3;
			this->—оздатель”ровн¤->Text = L"—оздатель уровн¤:";
			// 
			// CREATORBOX
			// 
			this->CREATORBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CREATORBOX->Location = System::Drawing::Point(230, 69);
			this->CREATORBOX->Name = L"CREATORBOX";
			this->CREATORBOX->Size = System::Drawing::Size(509, 20);
			this->CREATORBOX->TabIndex = 4;
			// 
			// ID”ровн¤
			// 
			this->ID”ровн¤->AutoSize = true;
			this->ID”ровн¤->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ID”ровн¤->Location = System::Drawing::Point(14, 98);
			this->ID”ровн¤->Name = L"ID”ровн¤";
			this->ID”ровн¤->Size = System::Drawing::Size(123, 25);
			this->ID”ровн¤->TabIndex = 5;
			this->ID”ровн¤->Text = L"ID уровн¤:";
			// 
			// IDBOX
			// 
			this->IDBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IDBOX->Location = System::Drawing::Point(143, 103);
			this->IDBOX->Name = L"IDBOX";
			this->IDBOX->Size = System::Drawing::Size(596, 20);
			this->IDBOX->TabIndex = 6;
			// 
			// —сылкаЌаѕесню”ровн¤
			// 
			this->—сылкаЌаѕесню”ровн¤->AutoSize = true;
			this->—сылкаЌаѕесню”ровн¤->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->—сылкаЌаѕесню”ровн¤->Location = System::Drawing::Point(14, 169);
			this->—сылкаЌаѕесню”ровн¤->Name = L"—сылкаЌаѕесню”ровн¤";
			this->—сылкаЌаѕесню”ровн¤->Size = System::Drawing::Size(291, 25);
			this->—сылкаЌаѕесню”ровн¤->TabIndex = 7;
			this->—сылкаЌаѕесню”ровн¤->Text = L"—сылка на песню уровн¤:";
			// 
			// LINKTOTHESONGBOX
			// 
			this->LINKTOTHESONGBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LINKTOTHESONGBOX->Location = System::Drawing::Point(311, 175);
			this->LINKTOTHESONGBOX->Name = L"LINKTOTHESONGBOX";
			this->LINKTOTHESONGBOX->Size = System::Drawing::Size(428, 20);
			this->LINKTOTHESONGBOX->TabIndex = 8;
			// 
			// »нструментыƒл¤—оздание¬идео
			// 
			this->»нструментыƒл¤—оздание¬идео->AutoSize = true;
			this->»нструментыƒл¤—оздание¬идео->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->»нструментыƒл¤—оздание¬идео->Location = System::Drawing::Point(14, 207);
			this->»нструментыƒл¤—оздание¬идео->Name = L"»нструментыƒл¤—оздание¬идео";
			this->»нструментыƒл¤—оздание¬идео->Size = System::Drawing::Size(390, 25);
			this->»нструментыƒл¤—оздание¬идео->TabIndex = 9;
			this->»нструментыƒл¤—оздание¬идео->Text = L"»нструменты дл¤ создание видео:";
			// 
			// TOOLBOX
			// 
			this->TOOLBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TOOLBOX->Location = System::Drawing::Point(410, 212);
			this->TOOLBOX->Name = L"TOOLBOX";
			this->TOOLBOX->Size = System::Drawing::Size(329, 20);
			this->TOOLBOX->TabIndex = 10;
			// 
			//  ачество¬идео
			// 
			this-> ачество¬идео->AutoSize = true;
			this-> ачество¬идео->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this-> ачество¬идео->Location = System::Drawing::Point(14, 242);
			this-> ачество¬идео->Name = L" ачество¬идео";
			this-> ачество¬идео->Size = System::Drawing::Size(191, 25);
			this-> ачество¬идео->TabIndex = 11;
			this-> ачество¬идео->Text = L" ачество видео:";
			// 
			// QUALITYBOX
			// 
			this->QUALITYBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->QUALITYBOX->Location = System::Drawing::Point(211, 247);
			this->QUALITYBOX->Name = L"QUALITYBOX";
			this->QUALITYBOX->Size = System::Drawing::Size(528, 20);
			this->QUALITYBOX->TabIndex = 12;
			// 
			// FPS¬идео
			// 
			this->FPS¬идео->AutoSize = true;
			this->FPS¬идео->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FPS¬идео->Location = System::Drawing::Point(14, 276);
			this->FPS¬идео->Name = L"FPS¬идео";
			this->FPS¬идео->Size = System::Drawing::Size(134, 25);
			this->FPS¬идео->TabIndex = 13;
			this->FPS¬идео->Text = L"FPS видео:";
			// 
			// FPSBOX
			// 
			this->FPSBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FPSBOX->Location = System::Drawing::Point(154, 282);
			this->FPSBOX->Name = L"FPSBOX";
			this->FPSBOX->Size = System::Drawing::Size(585, 20);
			this->FPSBOX->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(143, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(476, 69);
			this->button1->TabIndex = 15;
			this->button1->Text = L"ƒалее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// FPSƒл¤”ровн¤
			// 
			this->FPSƒл¤”ровн¤->AutoSize = true;
			this->FPSƒл¤”ровн¤->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FPSƒл¤”ровн¤->Location = System::Drawing::Point(14, 135);
			this->FPSƒл¤”ровн¤->Name = L"FPSƒл¤”ровн¤";
			this->FPSƒл¤”ровн¤->Size = System::Drawing::Size(190, 25);
			this->FPSƒл¤”ровн¤->TabIndex = 16;
			this->FPSƒл¤”ровн¤->Text = L"FPS дл¤ уровн¤:";
			// 
			// FPSLVLBOX
			// 
			this->FPSLVLBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FPSLVLBOX->Location = System::Drawing::Point(219, 135);
			this->FPSLVLBOX->Name = L"FPSLVLBOX";
			this->FPSLVLBOX->Size = System::Drawing::Size(520, 20);
			this->FPSLVLBOX->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(7, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 25);
			this->button2->TabIndex = 18;
			this->button2->Text = L"RU VERSION";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(7, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 25);
			this->button3->TabIndex = 19;
			this->button3->Text = L"EN VERSION";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(761, 404);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->FPSLVLBOX);
			this->Controls->Add(this->FPSƒл¤”ровн¤);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->FPSBOX);
			this->Controls->Add(this->FPS¬идео);
			this->Controls->Add(this->QUALITYBOX);
			this->Controls->Add(this-> ачество¬идео);
			this->Controls->Add(this->TOOLBOX);
			this->Controls->Add(this->»нструментыƒл¤—оздание¬идео);
			this->Controls->Add(this->LINKTOTHESONGBOX);
			this->Controls->Add(this->—сылкаЌаѕесню”ровн¤);
			this->Controls->Add(this->IDBOX);
			this->Controls->Add(this->ID”ровн¤);
			this->Controls->Add(this->CREATORBOX);
			this->Controls->Add(this->—оздатель”ровн¤);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NAMEBOX);
			this->Controls->Add(this->Ќазвание”ровн¤);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"AUTO DESCRIPTION";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string Names = msclr::interop::marshal_as<std::string>(NAMEBOX->Text);
		std::string Creators = msclr::interop::marshal_as<std::string>(CREATORBOX->Text);
		std::string ID = msclr::interop::marshal_as<std::string>(IDBOX->Text);
		std::string FPSFORLEVEL = msclr::interop::marshal_as<std::string>(FPSLVLBOX->Text);
		std::string LinkSong = msclr::interop::marshal_as<std::string>(LINKTOTHESONGBOX->Text);
		std::string Tools = msclr::interop::marshal_as<std::string>(TOOLBOX->Text);
		std::string Quality = msclr::interop::marshal_as<std::string>(QUALITYBOX->Text);
		std::string FPS = msclr::interop::marshal_as<std::string>(FPSBOX->Text);

		std::ofstream description("description.txt");
		description << "NAME:       " + Names;
		description << "\n";
		description << "Creators:   " + Creators;
		description << "\n";
		description << "ID:         " + ID;
		description << "\n";
		description << "FPS:        " + FPSFORLEVEL;
		description << "\n";
		description << "Song:       " + LinkSong;
		description << "\n";
		description << "Tools Used: " + Tools;
		description << "\n";
		description << "Quality:    " + Quality + FPS;

		description.close();
		system("description.txt");





	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//–усска¤ верси¤
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Ќазвание”ровн¤->Text = "Ќазвание уровн¤: ";
		this->NAMEBOX->Location = System::Drawing::Point(219, 35);
		this->NAMEBOX->Size = System::Drawing::Size(520, 20);
		this->CREATORBOX->Location = System::Drawing::Point(230, 69);
		this->CREATORBOX->Size = System::Drawing::Size(509, 20);
		this->IDBOX->Location = System::Drawing::Point(143, 103);
		this->IDBOX->Size = System::Drawing::Size(596, 20);
		this->LINKTOTHESONGBOX->Location = System::Drawing::Point(311, 175);
		this->LINKTOTHESONGBOX->Size = System::Drawing::Size(428, 20);
		this->TOOLBOX->Location = System::Drawing::Point(410, 212);
		this->TOOLBOX->Size = System::Drawing::Size(329, 20);
		this->QUALITYBOX->Location = System::Drawing::Point(211, 247);
		this->QUALITYBOX->Size = System::Drawing::Size(528, 20);
		this->FPSBOX->Location = System::Drawing::Point(154, 282);
		this->FPSBOX->Size = System::Drawing::Size(585, 20);
		this->FPSLVLBOX->Location = System::Drawing::Point(219, 135);
		this->FPSLVLBOX->Size = System::Drawing::Size(520, 20);
		—оздатель”ровн¤->Text = "—оздатель уровн¤: ";
		ID”ровн¤->Text = "ID уровн¤: ";
		FPSƒл¤”ровн¤->Text = "FPS дл¤ уровн¤: ";
		—сылкаЌаѕесню”ровн¤->Text = "—сылка на песню уровн¤: ";
		»нструментыƒл¤—оздание¬идео->Text = "»нструменты дл¤ создание видео: ";
		 ачество¬идео->Text = " ачество видео: ";
		FPS¬идео->Text = "FPS видео: ";
	}
	//јнглийска¤ верси¤
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->NAMEBOX->Location = System::Drawing::Point(154, 35);
		this->NAMEBOX->Size = System::Drawing::Size(585, 20);
		this->CREATORBOX->Location = System::Drawing::Point(166, 69);
		this->CREATORBOX->Size = System::Drawing::Size(573, 20);
		this->IDBOX->Location = System::Drawing::Point(118, 103);
		this->IDBOX->Size = System::Drawing::Size(621, 20);
		this->LINKTOTHESONGBOX->Location = System::Drawing::Point(245, 175);
		this->LINKTOTHESONGBOX->Size = System::Drawing::Size(494, 20);
		this->TOOLBOX->Location = System::Drawing::Point(300, 212);
		this->TOOLBOX->Size = System::Drawing::Size(439, 20);
		this->QUALITYBOX->Location = System::Drawing::Point(175, 247);
		this->QUALITYBOX->Size = System::Drawing::Size(564, 20);
		this->FPS¬идео->Location = System::Drawing::Point(14, 276);
		this->FPS¬идео->Size = System::Drawing::Size(127, 25);
		this->FPSBOX->Location = System::Drawing::Point(143, 282);
		this->FPSBOX->Size = System::Drawing::Size(596, 20);
		this->FPSLVLBOX->Location = System::Drawing::Point(175, 135);
		this->FPSLVLBOX->Size = System::Drawing::Size(564, 20);
		Ќазвание”ровн¤->Text = "Name level: ";
		—оздатель”ровн¤->Text = "Creator level: ";
		ID”ровн¤->Text = "ID level: ";
		FPSƒл¤”ровн¤->Text = "FPS for level: ";
		—сылкаЌаѕесню”ровн¤->Text = "Link to a level song: ";
		»нструментыƒл¤—оздание¬идео->Text = "Tools for creating videos: ";
		 ачество¬идео->Text = "Video quality: ";
		FPS¬идео->Text = "FPS video: ";
	}
	};
}

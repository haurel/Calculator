#pragma once
#include <list>
#include "secondFORM.h"
#include "Evaluare.h"
#include "Convertire.h"
#include "constante.h"

namespace Proiect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; // pentru citire din fisier

	/// <summary>
	/// Summary for mainFORM
	/// </summary>
	public ref class mainFORM : public System::Windows::Forms::Form
	{
	private: static String^ show1 = "Calculator de expresii matematice!\n";
	private: static String^ show2 = "Pentru calcularea de sinus, tangenta si cosinus\n";
	private: static String^ show3 = "se va folosit \"s\", \"t\", \"c\".\n";
	private: static String^ show4 = "Pentru calculul unei puterii se va folosit: \"^\"\n";
	public: static ArrayList^ arrText = gcnew ArrayList();
	public: static 	secondFORM^ sf = gcnew secondFORM();
	public:
		mainFORM(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			sf->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainFORM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCalculare;
	private: System::Windows::Forms::Button^  btnResetare;
	private: System::Windows::Forms::TextBox^  introducereBox;
	private: System::Windows::Forms::TextBox^  rezultatBox;
	private: System::Windows::Forms::Button^  btnOpenTxt;
	private: System::Windows::Forms::Button^  btnOpenText;
	private: System::Windows::Forms::Button^  btnInfo;
	private: System::Windows::Forms::RichTextBox^ salvareTextRich;


	protected:
		/// <summary>
		/// Required designer variable.
		secondFORM f;
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainFORM::typeid));
			this->btnCalculare = (gcnew System::Windows::Forms::Button());
			this->btnResetare = (gcnew System::Windows::Forms::Button());
			this->introducereBox = (gcnew System::Windows::Forms::TextBox());
			this->rezultatBox = (gcnew System::Windows::Forms::TextBox());
			this->btnOpenTxt = (gcnew System::Windows::Forms::Button());
			this->btnOpenText = (gcnew System::Windows::Forms::Button());
			this->btnInfo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnCalculare
			// 
			this->btnCalculare->Location = System::Drawing::Point(13, 93);
			this->btnCalculare->Name = L"btnCalculare";
			this->btnCalculare->Size = System::Drawing::Size(75, 23);
			this->btnCalculare->TabIndex = 0;
			this->btnCalculare->Text = L"Calculare";
			this->btnCalculare->UseVisualStyleBackColor = true;
			this->btnCalculare->Click += gcnew System::EventHandler(this, &mainFORM::btnCalculare_Click);
			// 
			// btnResetare
			// 
			this->btnResetare->Location = System::Drawing::Point(94, 94);
			this->btnResetare->Name = L"btnResetare";
			this->btnResetare->Size = System::Drawing::Size(72, 23);
			this->btnResetare->TabIndex = 1;
			this->btnResetare->Text = L"Resetare";
			this->btnResetare->UseVisualStyleBackColor = true;
			this->btnResetare->Click += gcnew System::EventHandler(this, &mainFORM::btnResetare_Click);
			// 
			// introducereBox
			// 
			this->introducereBox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->introducereBox->Location = System::Drawing::Point(13, 41);
			this->introducereBox->MaxLength = 27;
			this->introducereBox->Name = L"introducereBox";
			this->introducereBox->Size = System::Drawing::Size(192, 21);
			this->introducereBox->TabIndex = 2;
			this->introducereBox->Text = L"Introdu o expresie, ex: (2+3)/(-10)";
			this->introducereBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &mainFORM::introducereBox_MouseClick);
			this->introducereBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainFORM::introducereBox_KeyDown);
			// 
			// rezultatBox
			// 
			this->rezultatBox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rezultatBox->Location = System::Drawing::Point(13, 67);
			this->rezultatBox->Name = L"rezultatBox";
			this->rezultatBox->ReadOnly = true;
			this->rezultatBox->Size = System::Drawing::Size(192, 21);
			this->rezultatBox->TabIndex = 3;
			this->rezultatBox->Text = L"Rezultat";
			this->rezultatBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainFORM::introducereBox_KeyDown);
			// 
			// btnOpenTxt
			// 
			this->btnOpenTxt->BackColor = System::Drawing::Color::Transparent;
			this->btnOpenTxt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpenTxt.Image")));
			this->btnOpenTxt->Location = System::Drawing::Point(13, 12);
			this->btnOpenTxt->Name = L"btnOpenTxt";
			this->btnOpenTxt->Size = System::Drawing::Size(28, 23);
			this->btnOpenTxt->TabIndex = 4;
			this->btnOpenTxt->UseVisualStyleBackColor = false;
			this->btnOpenTxt->Click += gcnew System::EventHandler(this, &mainFORM::btnOpenTxt_Click);
			// 
			// btnOpenText
			// 
			this->btnOpenText->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpenText.Image")));
			this->btnOpenText->Location = System::Drawing::Point(47, 12);
			this->btnOpenText->Name = L"btnOpenText";
			this->btnOpenText->Size = System::Drawing::Size(28, 23);
			this->btnOpenText->TabIndex = 5;
			this->btnOpenText->UseVisualStyleBackColor = true;
			this->btnOpenText->Click += gcnew System::EventHandler(this, &mainFORM::btnOpenText_Click);
			// 
			// btnInfo
			// 
			this->btnInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInfo.Image")));
			this->btnInfo->Location = System::Drawing::Point(81, 12);
			this->btnInfo->Name = L"btnInfo";
			this->btnInfo->Size = System::Drawing::Size(28, 23);
			this->btnInfo->TabIndex = 6;
			this->btnInfo->UseVisualStyleBackColor = true;
			this->btnInfo->Click += gcnew System::EventHandler(this, &mainFORM::btnInfo_Click);
			// 
			// mainFORM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(218, 128);
			this->Controls->Add(this->btnInfo);
			this->Controls->Add(this->btnOpenText);
			this->Controls->Add(this->btnOpenTxt);
			this->Controls->Add(this->rezultatBox);
			this->Controls->Add(this->introducereBox);
			this->Controls->Add(this->btnResetare);
			this->Controls->Add(this->btnCalculare);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(234, 167);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(234, 167);
			this->Name = L"mainFORM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &mainFORM::mainFORM_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Butonul calculare cu toate apelurile.
	private: System::Void btnCalculare_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (introducereBox->TextLength != 0)
		{
			if (sf->savingTextBox->Lines->Length < 16)
			{
				//Convertire din String^ in std::string
				String^ t = introducereBox->Text;
				introducereBox->Clear();
				string text = msclr::interop::marshal_as<string>(t);
				Convertire convertire(text);
				Evaluare eval(convertire.get_textReturnat());

				//Afisarea rezultatului
				//double rezultat;
				rezultat = eval.get_result();

				// Schimbare font rezultat
				rezultatBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));

				// Transmiterea rezultatului in textbox
				rezultatBox->Text = t + " = " + Convert::ToString(rezultat);
				//_txt2 = msclr::interop::marshal_as<string>(rezultatBox->Text);

				sf->savingTextBox->AppendText(rezultatBox->Text + Environment::NewLine);
			}
			else
			{
				if (MessageBox::Show("Istoric plin, stergem?\nATENTIE!!Expresia introdusa nu a fost calculata!", "Eroare",
					MessageBoxButtons::YesNo, MessageBoxIcon::Information) == ::System::Windows::Forms::DialogResult::Yes)
				{
					sf->savingTextBox->Clear();
				}
				else sf->ShowDialog();
			}
		}
		// Afisare mesaj in caz ca nu se afla nimic in textbox
		else if (introducereBox->TextLength == 0 && rezultatBox->TextLength == 0)
		{
			MessageBox::Show("Eroare, nu ai introdus nici o expresie!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		/*
		// Afisare mesaj in caz ca se gresete adaugarea in text box
		else if (rezultatBox->TextLength != 0 && introducereBox->TextLength == 0)
		{
			MessageBox::Show("Ai introdus in casuta gresita", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		*/

	}

			 // Butonul pentru resetare
	private: System::Void btnResetare_Click(System::Object^  sender, System::EventArgs^  e)
	{
		introducereBox->Clear();
		rezultatBox->Clear();
	}
			 // Localizare fisie txt si citire din el
	private: System::Void btnOpenTxt_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ Open = gcnew OpenFileDialog;
		// Deschiderea folderului special Desktop.
		Open->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::Desktop);
		//"C:\\Users\\%USERPROFILE%\\Desktop";
		Open->Filter = "text files (*.txt) | *.txt";
		Open->FilterIndex = 2;
		Open->RestoreDirectory = true;
		Open->Multiselect = false;
		if (Open->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ __text;
			StreamReader^ sr = File::OpenText(Open->FileName);
			//StreamReader^ sr = gcnew StreamReader(Open->FileName);
			//introducereBox->Text = sr->ReadLine();
			__text = sr->ReadLine();
			_txt2 = msclr::interop::marshal_as<string>(__text);

			Convertire convertire(_txt2);
			Evaluare eval(convertire.get_textReturnat());

			//Afisarea rezultatului
			//double rezultat;
			rezultat = eval.get_result();

			// Schimbare font rezultat
			rezultatBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			// Transmiterea rezultatului in textbox
			rezultatBox->Text = __text + " = " + Convert::ToString(rezultat);
			//_txt2 = msclr::interop::marshal_as<string>(rezultatBox->Text);

			sf->savingTextBox->AppendText(rezultatBox->Text + Environment::NewLine);
		}
	}

			 // Calculare prin apasarea butonului enter
	private: System::Void introducereBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter)
		{
			if (introducereBox->TextLength != 0)
			{
				btnCalculare_Click(sender, e);
			}
			else MessageBox::Show("Eroare, nu ai introdus nici o expresie! \n Sau ai introdus in casuta gresita!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}


	private: System::Void btnOpenText_Click(System::Object^  sender, System::EventArgs^  e) {
		sf->ShowDialog();
	}
	private: System::Void btnInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(show1 + show2 + show3 + show4,
			"Informatii", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	private: System::Void introducereBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		introducereBox->Clear();
		introducereBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}


	private: System::Void mainFORM_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		String^ mesaj = "Doriti sa inchideti aplicatia?";
		String^ cap = "Confirmare";
		MessageBoxButtons butoane = MessageBoxButtons::YesNo;
		MessageBoxIcon icon = MessageBoxIcon::Question;

		if (MessageBox::Show(mesaj, cap, butoane, icon) == System::Windows::Forms::DialogResult::Yes)
		{	//Application::Exit();
			Environment::Exit(0);
		}
		else e->Cancel = true;
			
	}
};

}


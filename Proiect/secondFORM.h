#pragma once
#include "constante.h"

namespace Proiect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for secondFORM
	/// </summary>
	public ref class secondFORM : public System::Windows::Forms::Form
	{
	public:
		secondFORM() { 
			InitializeComponent(); 
			//String^ saving = gcnew String(_txt2.c_str());
			//savingBox->Text = saving + Environment::NewLine;
			//savingBox->AppendText(saving + Environment::NewLine);
		}
		secondFORM(std::string text)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//String^ saving = gcnew String(text.c_str());
				//savingBox->Text = saving + Environment::NewLine;
		   //savingBox->AppendText(saving + Environment::NewLine);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~secondFORM()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  btnResetTextRich;

	public: System::Windows::Forms::TextBox^  savingTextBox;

	public:
	public:
	public:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(secondFORM::typeid));
			this->btnResetTextRich = (gcnew System::Windows::Forms::Button());
			this->savingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnResetTextRich
			// 
			this->btnResetTextRich->Location = System::Drawing::Point(293, 12);
			this->btnResetTextRich->Name = L"btnResetTextRich";
			this->btnResetTextRich->Size = System::Drawing::Size(45, 22);
			this->btnResetTextRich->TabIndex = 2;
			this->btnResetTextRich->Text = L"Resetare";
			this->btnResetTextRich->UseVisualStyleBackColor = true;
			this->btnResetTextRich->Click += gcnew System::EventHandler(this, &secondFORM::btnResetTextRich_Click);
			// 
			// savingTextBox
			// 
			this->savingTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->savingTextBox->BackColor = System::Drawing::SystemColors::Window;
			this->savingTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->savingTextBox->Location = System::Drawing::Point(0, -1);
			this->savingTextBox->Multiline = true;
			this->savingTextBox->Name = L"savingTextBox";
			this->savingTextBox->Size = System::Drawing::Size(294, 195);
			this->savingTextBox->TabIndex = 4;
			// 
			// secondFORM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(338, 192);
			this->Controls->Add(this->savingTextBox);
			this->Controls->Add(this->btnResetTextRich);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(354, 230);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(354, 230);
			this->Name = L"secondFORM";
			this->Text = L"Salvare";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void btnResetTextRich_Click(System::Object^  sender, System::EventArgs^  e) {
		savingTextBox->Clear();
	}
};
}

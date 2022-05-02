#pragma once

#include "generateUUID.h"

namespace Klassensystem_Beta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGenerateID;
	protected:
	private: System::Windows::Forms::TextBox^ tbID;

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
			this->btnGenerateID = (gcnew System::Windows::Forms::Button());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnGenerateID
			// 
			this->btnGenerateID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerateID->Location = System::Drawing::Point(12, 12);
			this->btnGenerateID->Name = L"btnGenerateID";
			this->btnGenerateID->Size = System::Drawing::Size(180, 45);
			this->btnGenerateID->TabIndex = 0;
			this->btnGenerateID->Text = L"Generate ID";
			this->btnGenerateID->UseVisualStyleBackColor = true;
			this->btnGenerateID->Click += gcnew System::EventHandler(this, &Dashboard::btnGenerateID_Click);
			// 
			// tbID
			// 
			this->tbID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbID->Location = System::Drawing::Point(198, 12);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(596, 41);
			this->tbID->TabIndex = 1;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 496);
			this->Controls->Add(this->tbID);
			this->Controls->Add(this->btnGenerateID);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGenerateID_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ newID = generateID(17);
		this->tbID->Text = newID;
	}
	};
}

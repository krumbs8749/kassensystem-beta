#pragma once

namespace Klassensystem_Beta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPage
	/// </summary>
	public ref class MenuPage : public System::Windows::Forms::Form
	{
	public:
		MenuPage(void)
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
		~MenuPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Button^ btnOverview;
	private: System::Windows::Forms::Button^ btnAddORDeleteProduct;

	private: System::Windows::Forms::Button^ btnViewStocks;
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
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->btnOverview = (gcnew System::Windows::Forms::Button());
			this->btnAddORDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->btnViewStocks = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbTitle
			// 
			this->lbTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Lucida Console", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(294, 24);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(173, 60);
			this->lbTitle->TabIndex = 1;
			this->lbTitle->Text = L"Menu";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnOverview
			// 
			this->btnOverview->FlatAppearance->BorderSize = 5;
			this->btnOverview->Font = (gcnew System::Drawing::Font(L"Lucida Console", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOverview->Location = System::Drawing::Point(192, 190);
			this->btnOverview->Name = L"btnOverview";
			this->btnOverview->Size = System::Drawing::Size(384, 43);
			this->btnOverview->TabIndex = 2;
			this->btnOverview->Text = L"Overview";
			this->btnOverview->UseVisualStyleBackColor = true;
			// 
			// btnAddORDeleteProduct
			// 
			this->btnAddORDeleteProduct->FlatAppearance->BorderSize = 5;
			this->btnAddORDeleteProduct->Font = (gcnew System::Drawing::Font(L"Lucida Console", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddORDeleteProduct->Location = System::Drawing::Point(192, 353);
			this->btnAddORDeleteProduct->Name = L"btnAddORDeleteProduct";
			this->btnAddORDeleteProduct->Size = System::Drawing::Size(384, 43);
			this->btnAddORDeleteProduct->TabIndex = 3;
			this->btnAddORDeleteProduct->Text = L"Add/Delete Products";
			this->btnAddORDeleteProduct->UseVisualStyleBackColor = true;
			// 
			// btnViewStocks
			// 
			this->btnViewStocks->FlatAppearance->BorderSize = 5;
			this->btnViewStocks->Font = (gcnew System::Drawing::Font(L"Lucida Console", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewStocks->Location = System::Drawing::Point(192, 267);
			this->btnViewStocks->Name = L"btnViewStocks";
			this->btnViewStocks->Size = System::Drawing::Size(384, 43);
			this->btnViewStocks->TabIndex = 4;
			this->btnViewStocks->Text = L"View Stocks";
			this->btnViewStocks->UseVisualStyleBackColor = true;
			// 
			// MenuPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(794, 669);
			this->Controls->Add(this->btnViewStocks);
			this->Controls->Add(this->btnAddORDeleteProduct);
			this->Controls->Add(this->btnOverview);
			this->Controls->Add(this->lbTitle);
			this->Name = L"MenuPage";
			this->Text = L"Menu Page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

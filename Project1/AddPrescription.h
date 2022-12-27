#pragma once
#include "DoctorView.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for AddPrescription
	/// </summary>
	public ref class AddPrescription : public System::Windows::Forms::Form
	{
	public:
		AddPrescription(void)
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
		~AddPrescription()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbAddPres;
	private: System::Windows::Forms::TextBox^ tbSearchAP;
	private: System::Windows::Forms::Button^ btnSearchAP;


	private: System::Windows::Forms::Label^ lbID;
	private: System::Windows::Forms::Label^ lbNIC;
	private: System::Windows::Forms::Label^ ibDOB;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbDOBAP;
	private: System::Windows::Forms::TextBox^ tbNameAP;
	private: System::Windows::Forms::TextBox^ tbNICAP;
	private: System::Windows::Forms::TextBox^ tbIDAP;
	private: System::Windows::Forms::Label^ lbDiseaseAP;
	private: System::Windows::Forms::Label^ lbMedicationAP;
	private: System::Windows::Forms::TextBox^ tbDiseaseAP;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnADDAP;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddPrescription::typeid));
			this->lbAddPres = (gcnew System::Windows::Forms::Label());
			this->tbSearchAP = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchAP = (gcnew System::Windows::Forms::Button());
			this->lbID = (gcnew System::Windows::Forms::Label());
			this->lbNIC = (gcnew System::Windows::Forms::Label());
			this->ibDOB = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbMedicationAP = (gcnew System::Windows::Forms::Label());
			this->tbDiseaseAP = (gcnew System::Windows::Forms::TextBox());
			this->lbDiseaseAP = (gcnew System::Windows::Forms::Label());
			this->tbDOBAP = (gcnew System::Windows::Forms::TextBox());
			this->tbNameAP = (gcnew System::Windows::Forms::TextBox());
			this->tbNICAP = (gcnew System::Windows::Forms::TextBox());
			this->tbIDAP = (gcnew System::Windows::Forms::TextBox());
			this->btnADDAP = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbAddPres
			// 
			this->lbAddPres->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbAddPres->Location = System::Drawing::Point(18, 19);
			this->lbAddPres->Name = L"lbAddPres";
			this->lbAddPres->Size = System::Drawing::Size(752, 35);
			this->lbAddPres->TabIndex = 0;
			this->lbAddPres->Text = L"Add Prescrition";
			this->lbAddPres->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbSearchAP
			// 
			this->tbSearchAP->BackColor = System::Drawing::SystemColors::MenuBar;
			this->tbSearchAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSearchAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearchAP->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tbSearchAP->Location = System::Drawing::Point(55, 57);
			this->tbSearchAP->Name = L"tbSearchAP";
			this->tbSearchAP->Size = System::Drawing::Size(488, 31);
			this->tbSearchAP->TabIndex = 1;
			this->tbSearchAP->Text = L"NIC/ID";
			// 
			// btnSearchAP
			// 
			this->btnSearchAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearchAP->Location = System::Drawing::Point(549, 57);
			this->btnSearchAP->Name = L"btnSearchAP";
			this->btnSearchAP->Size = System::Drawing::Size(178, 31);
			this->btnSearchAP->TabIndex = 2;
			this->btnSearchAP->Text = L"Search";
			this->btnSearchAP->UseVisualStyleBackColor = true;
			this->btnSearchAP->Click += gcnew System::EventHandler(this, &AddPrescription::btnSearchAP_Click);
			// 
			// lbID
			// 
			this->lbID->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbID->Location = System::Drawing::Point(10, 13);
			this->lbID->Name = L"lbID";
			this->lbID->Size = System::Drawing::Size(65, 24);
			this->lbID->TabIndex = 3;
			this->lbID->Text = L"ID";
			this->lbID->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbNIC
			// 
			this->lbNIC->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNIC->Location = System::Drawing::Point(10, 58);
			this->lbNIC->Name = L"lbNIC";
			this->lbNIC->Size = System::Drawing::Size(65, 24);
			this->lbNIC->TabIndex = 4;
			this->lbNIC->Text = L"NIC";
			this->lbNIC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ibDOB
			// 
			this->ibDOB->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ibDOB->Location = System::Drawing::Point(343, 58);
			this->ibDOB->Name = L"ibDOB";
			this->ibDOB->Size = System::Drawing::Size(72, 24);
			this->ibDOB->TabIndex = 5;
			this->ibDOB->Text = L"DOB";
			this->ibDOB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbName
			// 
			this->lbName->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(343, 13);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(72, 24);
			this->lbName->TabIndex = 6;
			this->lbName->Text = L"Name";
			this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->lbMedicationAP);
			this->panel1->Controls->Add(this->tbDiseaseAP);
			this->panel1->Controls->Add(this->lbDiseaseAP);
			this->panel1->Controls->Add(this->tbDOBAP);
			this->panel1->Controls->Add(this->tbNameAP);
			this->panel1->Controls->Add(this->tbNICAP);
			this->panel1->Controls->Add(this->tbIDAP);
			this->panel1->Controls->Add(this->lbName);
			this->panel1->Controls->Add(this->ibDOB);
			this->panel1->Controls->Add(this->lbNIC);
			this->panel1->Controls->Add(this->lbID);
			this->panel1->Location = System::Drawing::Point(55, 94);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(672, 307);
			this->panel1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(136, 201);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(528, 95);
			this->textBox1->TabIndex = 14;
			// 
			// lbMedicationAP
			// 
			this->lbMedicationAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMedicationAP->Location = System::Drawing::Point(10, 202);
			this->lbMedicationAP->Name = L"lbMedicationAP";
			this->lbMedicationAP->Size = System::Drawing::Size(120, 24);
			this->lbMedicationAP->TabIndex = 13;
			this->lbMedicationAP->Text = L"Medication";
			this->lbMedicationAP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbDiseaseAP
			// 
			this->tbDiseaseAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbDiseaseAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDiseaseAP->Location = System::Drawing::Point(136, 100);
			this->tbDiseaseAP->Multiline = true;
			this->tbDiseaseAP->Name = L"tbDiseaseAP";
			this->tbDiseaseAP->Size = System::Drawing::Size(528, 95);
			this->tbDiseaseAP->TabIndex = 12;
			// 
			// lbDiseaseAP
			// 
			this->lbDiseaseAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDiseaseAP->Location = System::Drawing::Point(10, 101);
			this->lbDiseaseAP->Name = L"lbDiseaseAP";
			this->lbDiseaseAP->Size = System::Drawing::Size(98, 24);
			this->lbDiseaseAP->TabIndex = 11;
			this->lbDiseaseAP->Text = L"Disease";
			this->lbDiseaseAP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbDOBAP
			// 
			this->tbDOBAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbDOBAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDOBAP->Location = System::Drawing::Point(433, 54);
			this->tbDOBAP->Name = L"tbDOBAP";
			this->tbDOBAP->ReadOnly = true;
			this->tbDOBAP->Size = System::Drawing::Size(231, 31);
			this->tbDOBAP->TabIndex = 10;
			// 
			// tbNameAP
			// 
			this->tbNameAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNameAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNameAP->Location = System::Drawing::Point(433, 9);
			this->tbNameAP->Name = L"tbNameAP";
			this->tbNameAP->ReadOnly = true;
			this->tbNameAP->Size = System::Drawing::Size(231, 31);
			this->tbNameAP->TabIndex = 9;
			// 
			// tbNICAP
			// 
			this->tbNICAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNICAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNICAP->Location = System::Drawing::Point(81, 54);
			this->tbNICAP->Name = L"tbNICAP";
			this->tbNICAP->ReadOnly = true;
			this->tbNICAP->Size = System::Drawing::Size(231, 31);
			this->tbNICAP->TabIndex = 8;
			// 
			// tbIDAP
			// 
			this->tbIDAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbIDAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbIDAP->Location = System::Drawing::Point(81, 9);
			this->tbIDAP->Name = L"tbIDAP";
			this->tbIDAP->ReadOnly = true;
			this->tbIDAP->Size = System::Drawing::Size(231, 31);
			this->tbIDAP->TabIndex = 7;
			// 
			// btnADDAP
			// 
			this->btnADDAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnADDAP->Location = System::Drawing::Point(549, 407);
			this->btnADDAP->Name = L"btnADDAP";
			this->btnADDAP->Size = System::Drawing::Size(178, 31);
			this->btnADDAP->TabIndex = 8;
			this->btnADDAP->Text = L"ADD";
			this->btnADDAP->UseVisualStyleBackColor = true;
			// 
			// AddPrescription
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 465);
			this->Controls->Add(this->btnADDAP);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnSearchAP);
			this->Controls->Add(this->tbSearchAP);
			this->Controls->Add(this->lbAddPres);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 512);
			this->MinimumSize = System::Drawing::Size(800, 512);
			this->Name = L"AddPrescription";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddPrescription";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: void patientView() {
			String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Cilin_Database.accdb";
			OleDbConnection Conn(connString);
			Conn.Open();
		}

private: System::Void btnSearchAP_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ search = this->tbSearchAP->Text;

	if (search->Length == 0) {
		MessageBox::Show("Please enter NIC/Patient ID", "Search", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
}
};
}

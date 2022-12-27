#pragma once
#include "User.h"

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
	private: System::Windows::Forms::Label^ lbAge;

	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbAgeAP;

	private: System::Windows::Forms::TextBox^ tbNameAP;
	private: System::Windows::Forms::TextBox^ tbNICAP;
	private: System::Windows::Forms::TextBox^ tbIDAP;
	private: System::Windows::Forms::Label^ lbDiseaseAP;
	private: System::Windows::Forms::Label^ lbMedicationAP;
	private: System::Windows::Forms::TextBox^ tbDiseaseAP;
	private: System::Windows::Forms::TextBox^ tbMedicationAP;

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
			this->lbAge = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbMedicationAP = (gcnew System::Windows::Forms::TextBox());
			this->lbMedicationAP = (gcnew System::Windows::Forms::Label());
			this->tbDiseaseAP = (gcnew System::Windows::Forms::TextBox());
			this->lbDiseaseAP = (gcnew System::Windows::Forms::Label());
			this->tbAgeAP = (gcnew System::Windows::Forms::TextBox());
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
			this->tbSearchAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearchAP->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbSearchAP->Location = System::Drawing::Point(55, 57);
			this->tbSearchAP->Name = L"tbSearchAP";
			this->tbSearchAP->Size = System::Drawing::Size(488, 25);
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
			this->lbID->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbID->Location = System::Drawing::Point(10, 7);
			this->lbID->Name = L"lbID";
			this->lbID->Size = System::Drawing::Size(65, 24);
			this->lbID->TabIndex = 3;
			this->lbID->Text = L"ID";
			this->lbID->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbNIC
			// 
			this->lbNIC->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNIC->Location = System::Drawing::Point(9, 53);
			this->lbNIC->Name = L"lbNIC";
			this->lbNIC->Size = System::Drawing::Size(65, 24);
			this->lbNIC->TabIndex = 4;
			this->lbNIC->Text = L"NIC";
			this->lbNIC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbAge
			// 
			this->lbAge->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAge->Location = System::Drawing::Point(363, 54);
			this->lbAge->Name = L"lbAge";
			this->lbAge->Size = System::Drawing::Size(72, 24);
			this->lbAge->TabIndex = 5;
			this->lbAge->Text = L"Age";
			this->lbAge->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbName
			// 
			this->lbName->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(363, 9);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(72, 24);
			this->lbName->TabIndex = 6;
			this->lbName->Text = L"Name";
			this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->tbMedicationAP);
			this->panel1->Controls->Add(this->lbMedicationAP);
			this->panel1->Controls->Add(this->tbDiseaseAP);
			this->panel1->Controls->Add(this->lbDiseaseAP);
			this->panel1->Controls->Add(this->tbAgeAP);
			this->panel1->Controls->Add(this->tbNameAP);
			this->panel1->Controls->Add(this->tbNICAP);
			this->panel1->Controls->Add(this->tbIDAP);
			this->panel1->Controls->Add(this->lbName);
			this->panel1->Controls->Add(this->lbAge);
			this->panel1->Controls->Add(this->lbNIC);
			this->panel1->Controls->Add(this->lbID);
			this->panel1->Location = System::Drawing::Point(55, 94);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(672, 307);
			this->panel1->TabIndex = 7;
			// 
			// tbMedicationAP
			// 
			this->tbMedicationAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMedicationAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMedicationAP->Location = System::Drawing::Point(136, 201);
			this->tbMedicationAP->Multiline = true;
			this->tbMedicationAP->Name = L"tbMedicationAP";
			this->tbMedicationAP->Size = System::Drawing::Size(528, 95);
			this->tbMedicationAP->TabIndex = 14;
			// 
			// lbMedicationAP
			// 
			this->lbMedicationAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMedicationAP->Location = System::Drawing::Point(10, 201);
			this->lbMedicationAP->Name = L"lbMedicationAP";
			this->lbMedicationAP->Size = System::Drawing::Size(120, 24);
			this->lbMedicationAP->TabIndex = 13;
			this->lbMedicationAP->Text = L"Medication";
			this->lbMedicationAP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbDiseaseAP
			// 
			this->tbDiseaseAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbDiseaseAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDiseaseAP->Location = System::Drawing::Point(136, 100);
			this->tbDiseaseAP->Multiline = true;
			this->tbDiseaseAP->Name = L"tbDiseaseAP";
			this->tbDiseaseAP->Size = System::Drawing::Size(528, 95);
			this->tbDiseaseAP->TabIndex = 12;
			// 
			// lbDiseaseAP
			// 
			this->lbDiseaseAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDiseaseAP->Location = System::Drawing::Point(10, 100);
			this->lbDiseaseAP->Name = L"lbDiseaseAP";
			this->lbDiseaseAP->Size = System::Drawing::Size(98, 24);
			this->lbDiseaseAP->TabIndex = 11;
			this->lbDiseaseAP->Text = L"Disease";
			this->lbDiseaseAP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbAgeAP
			// 
			this->tbAgeAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAgeAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAgeAP->Location = System::Drawing::Point(433, 54);
			this->tbAgeAP->Name = L"tbAgeAP";
			this->tbAgeAP->ReadOnly = true;
			this->tbAgeAP->Size = System::Drawing::Size(231, 25);
			this->tbAgeAP->TabIndex = 10;
			// 
			// tbNameAP
			// 
			this->tbNameAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNameAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNameAP->Location = System::Drawing::Point(433, 9);
			this->tbNameAP->Name = L"tbNameAP";
			this->tbNameAP->ReadOnly = true;
			this->tbNameAP->Size = System::Drawing::Size(231, 25);
			this->tbNameAP->TabIndex = 9;
			// 
			// tbNICAP
			// 
			this->tbNICAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNICAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNICAP->Location = System::Drawing::Point(81, 54);
			this->tbNICAP->Name = L"tbNICAP";
			this->tbNICAP->ReadOnly = true;
			this->tbNICAP->Size = System::Drawing::Size(231, 25);
			this->tbNICAP->TabIndex = 8;
			// 
			// tbIDAP
			// 
			this->tbIDAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbIDAP->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbIDAP->Location = System::Drawing::Point(81, 9);
			this->tbIDAP->Name = L"tbIDAP";
			this->tbIDAP->ReadOnly = true;
			this->tbIDAP->Size = System::Drawing::Size(231, 25);
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
			this->btnADDAP->Click += gcnew System::EventHandler(this, &AddPrescription::btnADDAP_Click);
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
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddPrescription::AddPrescription_FormClosing);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnSearchAP_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ search = this->tbSearchAP->Text;

		if (search->Length == 0) {
			MessageBox::Show("Please enter NIC/Patient ID", "Search", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		try {
			String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Cilin_Database.accdb";
			OleDbConnection Conn(connString);
			Conn.Open();
			String^ oleQuery = "SELECT * FROM patients WHERE Patient_ID = @search OR NIC = @search; ";
			OleDbCommand cmd(oleQuery, % Conn);

			cmd.Parameters->AddWithValue("@search", search);

			OleDbDataReader^ reader = cmd.ExecuteReader();

			if (reader->Read()) {
		
				tbIDAP->Text = reader["Patient_ID"]->ToString();
				tbNameAP->Text = reader["Name"]->ToString();
				tbNICAP->Text= reader["NIC"]->ToString();
				tbAgeAP->Text = reader["Age"]->ToString();

			}
			else {
				MessageBox::Show("No patients were found matching the entered National NIC or Patinet_ID", "Patient Search", MessageBoxButtons::OK, MessageBoxIcon::Question);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect database", "Database Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}


	private: System::Void AddPrescription_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (MessageBox::Show("Do you want to exit?", "Dashboard", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		}
		else {
			e->Cancel = true;
		}
	}

	private: System::Void btnADDAP_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ disease = this-> tbDiseaseAP->Text;
		String^ medication = this->tbMedicationAP->Text;

		try {
			String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Cilin_Database.accdb";
			OleDbConnection Conn(connString);
			Conn.Open();
			String^ oleQuery = "INSERT INTO patients" + "(Disease,Medication) VALUES" + "(@Disease, @Medication);";
			OleDbCommand cmd(oleQuery, % Conn);
			OleDbDataReader^ reader = cmd.ExecuteReader();
			cmd.Parameters->AddWithValue("@Disease", disease);
			cmd.Parameters->AddWithValue("@Medication", medication);
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to add prescription", "Database Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

	}
};
}

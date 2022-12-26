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
	/// Summary for DoctorView
	/// </summary>
	public ref class DoctorView : public System::Windows::Forms::Form
	{
	public:
		DoctorView(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			timer1->Start();
			
			lbDoc->Text = "Dr."+user->Name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DoctorView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbDoc;
	private: System::Windows::Forms::Label^ lbDatetime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ tbSearch;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnPrescription;
	private: System::Windows::Forms::LinkLabel^ llChngPass;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;




	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorView::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbDoc = (gcnew System::Windows::Forms::Label());
			this->lbDatetime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnPrescription = (gcnew System::Windows::Forms::Button());
			this->llChngPass = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome,";
			// 
			// lbDoc
			// 
			this->lbDoc->AutoSize = true;
			this->lbDoc->BackColor = System::Drawing::Color::Transparent;
			this->lbDoc->Font = (gcnew System::Drawing::Font(L"Rockwell", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDoc->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbDoc->Location = System::Drawing::Point(14, 77);
			this->lbDoc->Name = L"lbDoc";
			this->lbDoc->Size = System::Drawing::Size(182, 41);
			this->lbDoc->TabIndex = 1;
			this->lbDoc->Text = L"Doc name";
			// 
			// lbDatetime
			// 
			this->lbDatetime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbDatetime->BackColor = System::Drawing::Color::Silver;
			this->lbDatetime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbDatetime->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatetime->Location = System::Drawing::Point(576, 27);
			this->lbDatetime->Name = L"lbDatetime";
			this->lbDatetime->Size = System::Drawing::Size(190, 22);
			this->lbDatetime->TabIndex = 2;
			this->lbDatetime->Text = L"datetime";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &DoctorView::timer1_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(264, 157);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(503, 280);
			this->dataGridView1->TabIndex = 3;
			// 
			// tbSearch
			// 
			this->tbSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSearch->BackColor = System::Drawing::SystemColors::MenuBar;
			this->tbSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->tbSearch->Location = System::Drawing::Point(263, 91);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(307, 27);
			this->tbSearch->TabIndex = 4;
			this->tbSearch->Text = L"NIC/Patient ID";
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearch->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnSearch->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(576, 86);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(190, 33);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = false;
			// 
			// btnPrescription
			// 
			this->btnPrescription->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnPrescription->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnPrescription->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->btnPrescription->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrescription->Location = System::Drawing::Point(576, 120);
			this->btnPrescription->Name = L"btnPrescription";
			this->btnPrescription->Size = System::Drawing::Size(190, 33);
			this->btnPrescription->TabIndex = 6;
			this->btnPrescription->Text = L"Add Prescription";
			this->btnPrescription->UseVisualStyleBackColor = false;
			// 
			// llChngPass
			// 
			this->llChngPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->llChngPass->AutoSize = true;
			this->llChngPass->BackColor = System::Drawing::Color::Transparent;
			this->llChngPass->DisabledLinkColor = System::Drawing::Color::Gray;
			this->llChngPass->Location = System::Drawing::Point(18, 377);
			this->llChngPass->Name = L"llChngPass";
			this->llChngPass->Size = System::Drawing::Size(117, 16);
			this->llChngPass->TabIndex = 7;
			this->llChngPass->TabStop = true;
			this->llChngPass->Text = L"Change Password";
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::Gray;
			this->linkLabel1->Location = System::Drawing::Point(18, 405);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(48, 16);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Logout";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &DoctorView::linkLabel1_LinkClicked);
			// 
			// DoctorView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(778, 449);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->llChngPass);
			this->Controls->Add(this->btnPrescription);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lbDatetime);
			this->Controls->Add(this->lbDoc);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(796, 496);
			this->Name = L"DoctorView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard-Doctor";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DoctorView::DoctorView_FormClosing);
			this->Load += gcnew System::EventHandler(this, &DoctorView::DoctorView_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma 
public:User^ user = nullptr;

		void patientView() {

			OleDbConnection^ Conn = gcnew OleDbConnection ("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Cilin_Database.accdb");
			int checker;
			Bitmap^ bitmap;

			Conn->Open();
			OleDbCommand^ cmd = Conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT * FROM Patients";
			cmd->ExecuteNonQuery();

			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			dataGridView1->DataSource = dt;
			Conn->Close();

		}
		
	private: System::Void DoctorView_Load(System::Object^ sender, System::EventArgs^ e) {

		patientView();

	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	DateTime datetime = DateTime::Now;
	this->lbDatetime->Text = datetime.ToString();
}


private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	if (MessageBox::Show("Do you want to logout?", "Dashboard", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

	}
}


private: System::Void DoctorView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Dashboard", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

	}
	else {
		e->Cancel = true;
	}
}
};
}

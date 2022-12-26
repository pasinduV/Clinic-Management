#pragma once
#include "User.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


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
			this->label1->Location = System::Drawing::Point(12, 50);
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
			this->lbDoc->Location = System::Drawing::Point(17, 100);
			this->lbDoc->Name = L"lbDoc";
			this->lbDoc->Size = System::Drawing::Size(182, 41);
			this->lbDoc->TabIndex = 1;
			this->lbDoc->Text = L"Doc name";
			// 
			// lbDatetime
			// 
			this->lbDatetime->AutoSize = true;
			this->lbDatetime->BackColor = System::Drawing::Color::Silver;
			this->lbDatetime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbDatetime->Dock = System::Windows::Forms::DockStyle::Right;
			this->lbDatetime->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatetime->Location = System::Drawing::Point(691, 0);
			this->lbDatetime->Name = L"lbDatetime";
			this->lbDatetime->Size = System::Drawing::Size(87, 22);
			this->lbDatetime->TabIndex = 2;
			this->lbDatetime->Text = L"datetime";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &DoctorView::timer1_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(305, 149);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(461, 288);
			this->dataGridView1->TabIndex = 3;
			// 
			// DoctorView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(778, 449);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lbDatetime);
			this->Controls->Add(this->lbDoc);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DoctorView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard-Doctor";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DoctorView::DoctorView_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma 

		
	private: System::Void DoctorView_Load(System::Object^ sender, System::EventArgs^ e) {

		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=ClinicDatabase;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	DateTime datetime = DateTime::Now;
	this->lbDatetime->Text = datetime.ToString();
}
};
}

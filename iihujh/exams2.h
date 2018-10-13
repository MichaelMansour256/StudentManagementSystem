#pragma once

namespace iihujh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for exams2
	/// </summary>
	public ref class exams2 : public System::Windows::Forms::Form
	{
	public:
		exams2(void)
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
		~exams2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;

	private: System::Windows::Forms::ColumnHeader^  columnHeader5;

	private: System::Windows::Forms::ColumnHeader^  columnHeader4;

	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;



	private: System::Windows::Forms::TabPage^  tabPage4;


	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;











	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;





	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ListView^  listView5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader30;
	private: System::Windows::Forms::ColumnHeader^  columnHeader29;
	private: System::Windows::Forms::ColumnHeader^  columnHeader31;
	private: System::Windows::Forms::ColumnHeader^  columnHeader32;

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"1"));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L"2"));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L"3"));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L"4"));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L"5"));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L"6"));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(L"1"));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L"2"));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(L"3"));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(L"4"));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(L"5"));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(L"6"));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(L"1"));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(L"2"));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(L"3"));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(L"4"));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(L"5"));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(L"6"));
			System::Windows::Forms::ListViewItem^  listViewItem19 = (gcnew System::Windows::Forms::ListViewItem(L"1"));
			System::Windows::Forms::ListViewItem^  listViewItem20 = (gcnew System::Windows::Forms::ListViewItem(L"2"));
			System::Windows::Forms::ListViewItem^  listViewItem21 = (gcnew System::Windows::Forms::ListViewItem(L"3"));
			System::Windows::Forms::ListViewItem^  listViewItem22 = (gcnew System::Windows::Forms::ListViewItem(L"4"));
			System::Windows::Forms::ListViewItem^  listViewItem23 = (gcnew System::Windows::Forms::ListViewItem(L"5"));
			System::Windows::Forms::ListViewItem^  listViewItem24 = (gcnew System::Windows::Forms::ListViewItem(L"6"));
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listView5 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader30 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader29 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader31 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader32 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader11, this->columnHeader9, 
				this->columnHeader10, this->columnHeader12});
			this->listView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView3->GridLines = true;
			this->listView3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(6) {listViewItem1, listViewItem2, 
				listViewItem3, listViewItem4, listViewItem5, listViewItem6});
			this->listView3->Location = System::Drawing::Point(3, 3);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(640, 436);
			this->listView3->TabIndex = 12;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"ID";
			this->columnHeader11->Width = 100;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Course Name";
			this->columnHeader9->Width = 180;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Date";
			this->columnHeader10->Width = 160;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Time";
			this->columnHeader12->Width = 107;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"ID";
			this->columnHeader7->Width = 100;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Course Name";
			this->columnHeader5->Width = 180;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Time";
			this->columnHeader4->Width = 107;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listView2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(646, 442);
			this->tabPage3->TabIndex = 7;
			this->tabPage3->Text = L"Third Year";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader7, this->columnHeader5, 
				this->columnHeader6, this->columnHeader8});
			this->listView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(6) {listViewItem7, listViewItem8, 
				listViewItem9, listViewItem10, listViewItem11, listViewItem12});
			this->listView2->Location = System::Drawing::Point(3, 3);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(640, 436);
			this->listView2->TabIndex = 12;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Date";
			this->columnHeader6->Width = 160;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Time";
			this->columnHeader8->Width = 107;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listView3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(646, 442);
			this->tabPage4->TabIndex = 8;
			this->tabPage4->Text = L"Forth Year";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Date";
			this->columnHeader2->Width = 160;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Course Name";
			this->columnHeader1->Width = 180;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"ID";
			this->columnHeader3->Width = 100;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(5, 6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(654, 468);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listView5);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(646, 442);
			this->tabPage1->TabIndex = 5;
			this->tabPage1->Text = L"First Year";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listView5
			// 
			this->listView5->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader30, this->columnHeader29, 
				this->columnHeader31, this->columnHeader32});
			this->listView5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView5->FullRowSelect = true;
			this->listView5->GridLines = true;
			this->listView5->HideSelection = false;
			this->listView5->HotTracking = true;
			this->listView5->HoverSelection = true;
			this->listView5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(6) {listViewItem13, listViewItem14, 
				listViewItem15, listViewItem16, listViewItem17, listViewItem18});
			this->listView5->LabelEdit = true;
			this->listView5->Location = System::Drawing::Point(3, 3);
			this->listView5->Name = L"listView5";
			this->listView5->Size = System::Drawing::Size(640, 436);
			this->listView5->TabIndex = 6;
			this->listView5->UseCompatibleStateImageBehavior = false;
			this->listView5->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader30
			// 
			this->columnHeader30->Text = L"ID";
			this->columnHeader30->Width = 100;
			// 
			// columnHeader29
			// 
			this->columnHeader29->Text = L"Course Name";
			this->columnHeader29->Width = 180;
			// 
			// columnHeader31
			// 
			this->columnHeader31->Text = L"Date";
			this->columnHeader31->Width = 160;
			// 
			// columnHeader32
			// 
			this->columnHeader32->Text = L"Time";
			this->columnHeader32->Width = 107;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(646, 442);
			this->tabPage2->TabIndex = 6;
			this->tabPage2->Text = L"Second Year";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader3, this->columnHeader1, 
				this->columnHeader2, this->columnHeader4});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(6) {listViewItem19, listViewItem20, 
				listViewItem21, listViewItem22, listViewItem23, listViewItem24});
			this->listView1->Location = System::Drawing::Point(3, 3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(640, 436);
			this->listView1->TabIndex = 12;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// exams2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 481);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"exams2";
			this->Text = L"exams2";
			this->Load += gcnew System::EventHandler(this, &exams2::exams2_Load);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exams2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

#pragma once
#include"exams1.h"
#include"exams2.h"
namespace iihujh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for examchoose
	/// </summary>
	public ref class exam: public System::Windows::Forms::Form
	{
	public:
		
		Form^obj;
		exam(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		exam(Form^obj1)
		{
			obj=obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~exam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_update_1;
	protected: 
	private: System::Windows::Forms::Button^  btn_load_1;
	private: System::Windows::Forms::Button^  btn_save_1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::ListBox^  lb_students6;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Button^  btn_upadate_6;
	private: System::Windows::Forms::Button^  btn_load_6;
	private: System::Windows::Forms::Button^  btn_save_6;
	private: System::Windows::Forms::Button^  btn_clear_6;
	private: System::Windows::Forms::Button^  btn_add_6;
	private: System::Windows::Forms::Button^  btn_delete_6;
	private: System::Windows::Forms::Panel^  panel14;














	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::ListBox^  lb_students7;
	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Button^  btn_update_7;
	private: System::Windows::Forms::Button^  btn_load_7;
	private: System::Windows::Forms::Button^  btn_save_7;
	private: System::Windows::Forms::Button^  btn_clear_7;
	private: System::Windows::Forms::Button^  btn_add_7;
	private: System::Windows::Forms::Button^  btn_delete_7;
	private: System::Windows::Forms::Panel^  panel16;














	private: System::Windows::Forms::Button^  btn_clear_1;
	private: System::Windows::Forms::Button^  btn_add_1;
	private: System::Windows::Forms::ListBox^  lb_students1;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  btn_delete_1;



	private: System::Windows::Forms::Panel^  panel4;





	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::TextBox^  tb_cn_1;

	private: System::Windows::Forms::TextBox^  tb_id_1;
private: System::Windows::Forms::TextBox^  tb_start_1;

	private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TextBox^  tb_date_1;

	private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Button^  btn_update;







private: System::Windows::Forms::Button^  btn_save;

private: System::Windows::Forms::Button^  btn_load;
private: System::Windows::Forms::Button^  btn_clear;
private: System::Windows::Forms::Button^  btn_add;





private: System::Windows::Forms::Button^  btn_delete;







	private: System::Windows::Forms::Panel^  panel1;



	private: System::Windows::Forms::Button^  btn_load_5;
	private: System::Windows::Forms::Button^  btn_save_5;
	private: System::Windows::Forms::Button^  btn_clear_5;
	private: System::Windows::Forms::Button^  btn_add_5;
	private: System::Windows::Forms::Button^  btn_delete_5;

	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  btn_update_5;

	private: System::Windows::Forms::Panel^  panel8;

















	private: System::Windows::Forms::ListBox^  lb_students5;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Button^  btn_update_4;

	private: System::Windows::Forms::Button^  btn_load_4;
	private: System::Windows::Forms::ListBox^  lb_students4;
	private: System::Windows::Forms::Button^  btn_save_4;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  btn_clear_4;
	private: System::Windows::Forms::Button^  btn_add_4;
	private: System::Windows::Forms::Button^  btn_delete_4;
	private: System::Windows::Forms::Panel^  panel6;








	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::ListBox^  lb_students;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::ListBox^  lb_students2;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Button^  btn_update_2;
	private: System::Windows::Forms::Button^  btn_load_2;
	private: System::Windows::Forms::Button^  btn_save_2;
	private: System::Windows::Forms::Button^  btn_clear_2;
	private: System::Windows::Forms::Button^  btn_add_2;
	private: System::Windows::Forms::Button^  btn_delete_2;
	private: System::Windows::Forms::Panel^  panel10;





	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  tb_cn_2;

	private: System::Windows::Forms::TextBox^  tb_id_2;
private: System::Windows::Forms::TextBox^  tb_start_2;

	private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  tb_date_2;

	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::ListBox^  lb_students3;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Button^  btn_update_3;
	private: System::Windows::Forms::Button^  btn_load_3;
	private: System::Windows::Forms::Button^  btn_save_3;
	private: System::Windows::Forms::Button^  btn_clear_3;
	private: System::Windows::Forms::Button^  btn_add_3;
	private: System::Windows::Forms::Button^  btn_delete_3;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Panel^  panel12;







	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TextBox^  tb_end_1;

private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  tb_end_2;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::TextBox^  tb_end_6;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  tb_cn_6;
private: System::Windows::Forms::TextBox^  tb_id_6;
private: System::Windows::Forms::TextBox^  tb_start_6;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::TextBox^  tb_date_6;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::TextBox^  tb_end_7;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::TextBox^  tb_cn_7;
private: System::Windows::Forms::TextBox^  tb_id_7;
private: System::Windows::Forms::TextBox^  tb_start_7;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  tb_date_7;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::TextBox^  tb_end_5;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  tb_cn_5;
private: System::Windows::Forms::TextBox^  tb_id_5;
private: System::Windows::Forms::TextBox^  tb_start_5;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  tb_date_5;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::TextBox^  tb_end_4;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  tb_cn_4;
private: System::Windows::Forms::TextBox^  tb_id_4;
private: System::Windows::Forms::TextBox^  tb_start_4;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  tb_date_4;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  tb_end_3;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  tb_cn_3;
private: System::Windows::Forms::TextBox^  tb_id_3;
private: System::Windows::Forms::TextBox^  tb_start_3;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  tb_date_3;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::TextBox^  tb_end;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  tb_cn;
private: System::Windows::Forms::TextBox^  tb_id;
private: System::Windows::Forms::TextBox^  tb_start;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::TextBox^  tb_date;
















		 //static :int i=0;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(exam::typeid));
			this->btn_update_1 = (gcnew System::Windows::Forms::Button());
			this->btn_load_1 = (gcnew System::Windows::Forms::Button());
			this->btn_save_1 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students6 = (gcnew System::Windows::Forms::ListBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->btn_upadate_6 = (gcnew System::Windows::Forms::Button());
			this->btn_load_6 = (gcnew System::Windows::Forms::Button());
			this->btn_save_6 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_6 = (gcnew System::Windows::Forms::Button());
			this->btn_add_6 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_6 = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_6 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_6 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_6 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_6 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->tb_date_6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students7 = (gcnew System::Windows::Forms::ListBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_7 = (gcnew System::Windows::Forms::Button());
			this->btn_load_7 = (gcnew System::Windows::Forms::Button());
			this->btn_save_7 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_7 = (gcnew System::Windows::Forms::Button());
			this->btn_add_7 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_7 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_7 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_7 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_7 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_7 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->tb_date_7 = (gcnew System::Windows::Forms::TextBox());
			this->btn_clear_1 = (gcnew System::Windows::Forms::Button());
			this->btn_add_1 = (gcnew System::Windows::Forms::Button());
			this->lb_students1 = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_delete_1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_1 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tb_date_1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tb_cn = (gcnew System::Windows::Forms::TextBox());
			this->tb_id = (gcnew System::Windows::Forms::TextBox());
			this->tb_start = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->tb_date = (gcnew System::Windows::Forms::TextBox());
			this->btn_load_5 = (gcnew System::Windows::Forms::Button());
			this->btn_save_5 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_5 = (gcnew System::Windows::Forms::Button());
			this->btn_add_5 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_5 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_5 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_5 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_5 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tb_date_5 = (gcnew System::Windows::Forms::TextBox());
			this->lb_students5 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->btn_update_4 = (gcnew System::Windows::Forms::Button());
			this->btn_load_4 = (gcnew System::Windows::Forms::Button());
			this->lb_students4 = (gcnew System::Windows::Forms::ListBox());
			this->btn_save_4 = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btn_clear_4 = (gcnew System::Windows::Forms::Button());
			this->btn_add_4 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_4 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_4 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tb_date_4 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students2 = (gcnew System::Windows::Forms::ListBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_2 = (gcnew System::Windows::Forms::Button());
			this->btn_load_2 = (gcnew System::Windows::Forms::Button());
			this->btn_save_2 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_2 = (gcnew System::Windows::Forms::Button());
			this->btn_add_2 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_2 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_2 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->tb_date_2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students3 = (gcnew System::Windows::Forms::ListBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_3 = (gcnew System::Windows::Forms::Button());
			this->btn_load_3 = (gcnew System::Windows::Forms::Button());
			this->btn_save_3 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_3 = (gcnew System::Windows::Forms::Button());
			this->btn_add_3 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_3 = (gcnew System::Windows::Forms::Button());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_end_3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tb_cn_3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_start_3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tb_date_3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_update_1
			// 
			this->btn_update_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_1->Location = System::Drawing::Point(44, 432);
			this->btn_update_1->Name = L"btn_update_1";
			this->btn_update_1->Size = System::Drawing::Size(156, 33);
			this->btn_update_1->TabIndex = 21;
			this->btn_update_1->Text = L"Update Exams";
			this->btn_update_1->UseVisualStyleBackColor = true;
			this->btn_update_1->Click += gcnew System::EventHandler(this, &exam::btn_update_1_Click);
			// 
			// btn_load_1
			// 
			this->btn_load_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_1->Location = System::Drawing::Point(44, 156);
			this->btn_load_1->Name = L"btn_load_1";
			this->btn_load_1->Size = System::Drawing::Size(156, 33);
			this->btn_load_1->TabIndex = 16;
			this->btn_load_1->Text = L"Show Exams";
			this->btn_load_1->UseVisualStyleBackColor = true;
			this->btn_load_1->Click += gcnew System::EventHandler(this, &exam::btn_load_1_Click);
			// 
			// btn_save_1
			// 
			this->btn_save_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_1->Location = System::Drawing::Point(44, 213);
			this->btn_save_1->Name = L"btn_save_1";
			this->btn_save_1->Size = System::Drawing::Size(156, 33);
			this->btn_save_1->TabIndex = 17;
			this->btn_save_1->Text = L"Save Exams";
			this->btn_save_1->UseVisualStyleBackColor = true;
			this->btn_save_1->Click += gcnew System::EventHandler(this, &exam::btn_save_1_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 32);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1136, 600);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Forth Year";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage11);
			this->tabControl5->Controls->Add(this->tabPage12);
			this->tabControl5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl5->Location = System::Drawing::Point(3, 3);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(1130, 594);
			this->tabControl5->TabIndex = 1;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->lb_students6);
			this->tabPage11->Controls->Add(this->panel13);
			this->tabPage11->Controls->Add(this->panel14);
			this->tabPage11->Location = System::Drawing::Point(4, 32);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1122, 558);
			this->tabPage11->TabIndex = 0;
			this->tabPage11->Text = L"First Term";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// lb_students6
			// 
			this->lb_students6->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students6->FormattingEnabled = true;
			this->lb_students6->ItemHeight = 23;
			this->lb_students6->Location = System::Drawing::Point(572, 3);
			this->lb_students6->Name = L"lb_students6";
			this->lb_students6->Size = System::Drawing::Size(547, 552);
			this->lb_students6->TabIndex = 13;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->btn_upadate_6);
			this->panel13->Controls->Add(this->btn_load_6);
			this->panel13->Controls->Add(this->btn_save_6);
			this->panel13->Controls->Add(this->btn_clear_6);
			this->panel13->Controls->Add(this->btn_add_6);
			this->panel13->Controls->Add(this->btn_delete_6);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel13->Location = System::Drawing::Point(327, 3);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(792, 552);
			this->panel13->TabIndex = 12;
			// 
			// btn_upadate_6
			// 
			this->btn_upadate_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_upadate_6->Location = System::Drawing::Point(44, 433);
			this->btn_upadate_6->Name = L"btn_upadate_6";
			this->btn_upadate_6->Size = System::Drawing::Size(156, 33);
			this->btn_upadate_6->TabIndex = 21;
			this->btn_upadate_6->Text = L"Update Exams";
			this->btn_upadate_6->UseVisualStyleBackColor = true;
			this->btn_upadate_6->Click += gcnew System::EventHandler(this, &exam::btn_upadate_6_Click);
			// 
			// btn_load_6
			// 
			this->btn_load_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_6->Location = System::Drawing::Point(44, 156);
			this->btn_load_6->Name = L"btn_load_6";
			this->btn_load_6->Size = System::Drawing::Size(156, 33);
			this->btn_load_6->TabIndex = 16;
			this->btn_load_6->Text = L"Show Exams";
			this->btn_load_6->UseVisualStyleBackColor = true;
			this->btn_load_6->Click += gcnew System::EventHandler(this, &exam::btn_load_6_Click);
			// 
			// btn_save_6
			// 
			this->btn_save_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_6->Location = System::Drawing::Point(44, 213);
			this->btn_save_6->Name = L"btn_save_6";
			this->btn_save_6->Size = System::Drawing::Size(156, 33);
			this->btn_save_6->TabIndex = 17;
			this->btn_save_6->Text = L"Save Exams";
			this->btn_save_6->UseVisualStyleBackColor = true;
			this->btn_save_6->Click += gcnew System::EventHandler(this, &exam::btn_save_6_Click);
			// 
			// btn_clear_6
			// 
			this->btn_clear_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_6->Location = System::Drawing::Point(44, 272);
			this->btn_clear_6->Name = L"btn_clear_6";
			this->btn_clear_6->Size = System::Drawing::Size(156, 33);
			this->btn_clear_6->TabIndex = 18;
			this->btn_clear_6->Text = L"Clear";
			this->btn_clear_6->UseVisualStyleBackColor = true;
			this->btn_clear_6->Click += gcnew System::EventHandler(this, &exam::btn_clear_6_Click);
			// 
			// btn_add_6
			// 
			this->btn_add_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_6->Location = System::Drawing::Point(44, 380);
			this->btn_add_6->Name = L"btn_add_6";
			this->btn_add_6->Size = System::Drawing::Size(156, 33);
			this->btn_add_6->TabIndex = 20;
			this->btn_add_6->Text = L"Add Exams";
			this->btn_add_6->UseVisualStyleBackColor = true;
			this->btn_add_6->Click += gcnew System::EventHandler(this, &exam::btn_add_6_Click);
			// 
			// btn_delete_6
			// 
			this->btn_delete_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_6->Location = System::Drawing::Point(44, 327);
			this->btn_delete_6->Name = L"btn_delete_6";
			this->btn_delete_6->Size = System::Drawing::Size(156, 33);
			this->btn_delete_6->TabIndex = 19;
			this->btn_delete_6->Text = L"Delete Exams";
			this->btn_delete_6->UseVisualStyleBackColor = true;
			this->btn_delete_6->Click += gcnew System::EventHandler(this, &exam::btn_delete_6_Click);
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->groupBox12);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel14->Location = System::Drawing::Point(3, 3);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(324, 552);
			this->panel14->TabIndex = 11;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->tb_end_6);
			this->groupBox12->Controls->Add(this->label33);
			this->groupBox12->Controls->Add(this->label34);
			this->groupBox12->Controls->Add(this->label35);
			this->groupBox12->Controls->Add(this->label37);
			this->groupBox12->Controls->Add(this->tb_cn_6);
			this->groupBox12->Controls->Add(this->tb_id_6);
			this->groupBox12->Controls->Add(this->tb_start_6);
			this->groupBox12->Controls->Add(this->label39);
			this->groupBox12->Controls->Add(this->tb_date_6);
			this->groupBox12->Location = System::Drawing::Point(5, 3);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(310, 292);
			this->groupBox12->TabIndex = 24;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Course Info";
			// 
			// tb_end_6
			// 
			this->tb_end_6->Location = System::Drawing::Point(107, 201);
			this->tb_end_6->Name = L"tb_end_6";
			this->tb_end_6->Size = System::Drawing::Size(193, 30);
			this->tb_end_6->TabIndex = 12;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(7, 201);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(58, 26);
			this->label33->TabIndex = 13;
			this->label33->Text = L"End  :";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(6, 35);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(39, 26);
			this->label34->TabIndex = 11;
			this->label34->Text = L"ID :";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(6, 71);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(76, 20);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Course :";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(6, 111);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(58, 26);
			this->label37->TabIndex = 4;
			this->label37->Text = L"Date :";
			// 
			// tb_cn_6
			// 
			this->tb_cn_6->Location = System::Drawing::Point(107, 71);
			this->tb_cn_6->Name = L"tb_cn_6";
			this->tb_cn_6->Size = System::Drawing::Size(192, 30);
			this->tb_cn_6->TabIndex = 0;
			// 
			// tb_id_6
			// 
			this->tb_id_6->Location = System::Drawing::Point(107, 35);
			this->tb_id_6->Name = L"tb_id_6";
			this->tb_id_6->Size = System::Drawing::Size(192, 30);
			this->tb_id_6->TabIndex = 10;
			// 
			// tb_start_6
			// 
			this->tb_start_6->Location = System::Drawing::Point(107, 153);
			this->tb_start_6->Name = L"tb_start_6";
			this->tb_start_6->Size = System::Drawing::Size(192, 30);
			this->tb_start_6->TabIndex = 2;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(6, 153);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(69, 26);
			this->label39->TabIndex = 5;
			this->label39->Text = L"Start  :";
			// 
			// tb_date_6
			// 
			this->tb_date_6->Location = System::Drawing::Point(107, 111);
			this->tb_date_6->Name = L"tb_date_6";
			this->tb_date_6->Size = System::Drawing::Size(192, 30);
			this->tb_date_6->TabIndex = 1;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->lb_students7);
			this->tabPage12->Controls->Add(this->panel15);
			this->tabPage12->Controls->Add(this->panel16);
			this->tabPage12->Location = System::Drawing::Point(4, 32);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1122, 558);
			this->tabPage12->TabIndex = 1;
			this->tabPage12->Text = L"Second Term";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// lb_students7
			// 
			this->lb_students7->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students7->FormattingEnabled = true;
			this->lb_students7->ItemHeight = 23;
			this->lb_students7->Location = System::Drawing::Point(572, 3);
			this->lb_students7->Name = L"lb_students7";
			this->lb_students7->Size = System::Drawing::Size(547, 552);
			this->lb_students7->TabIndex = 13;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->btn_update_7);
			this->panel15->Controls->Add(this->btn_load_7);
			this->panel15->Controls->Add(this->btn_save_7);
			this->panel15->Controls->Add(this->btn_clear_7);
			this->panel15->Controls->Add(this->btn_add_7);
			this->panel15->Controls->Add(this->btn_delete_7);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel15->Location = System::Drawing::Point(327, 3);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(792, 552);
			this->panel15->TabIndex = 12;
			// 
			// btn_update_7
			// 
			this->btn_update_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_7->Location = System::Drawing::Point(44, 432);
			this->btn_update_7->Name = L"btn_update_7";
			this->btn_update_7->Size = System::Drawing::Size(156, 33);
			this->btn_update_7->TabIndex = 21;
			this->btn_update_7->Text = L"Update Exams";
			this->btn_update_7->UseVisualStyleBackColor = true;
			this->btn_update_7->Click += gcnew System::EventHandler(this, &exam::btn_update_7_Click);
			// 
			// btn_load_7
			// 
			this->btn_load_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_7->Location = System::Drawing::Point(44, 156);
			this->btn_load_7->Name = L"btn_load_7";
			this->btn_load_7->Size = System::Drawing::Size(156, 33);
			this->btn_load_7->TabIndex = 16;
			this->btn_load_7->Text = L"Show Exams";
			this->btn_load_7->UseVisualStyleBackColor = true;
			this->btn_load_7->Click += gcnew System::EventHandler(this, &exam::btn_load_7_Click);
			// 
			// btn_save_7
			// 
			this->btn_save_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_7->Location = System::Drawing::Point(44, 213);
			this->btn_save_7->Name = L"btn_save_7";
			this->btn_save_7->Size = System::Drawing::Size(156, 33);
			this->btn_save_7->TabIndex = 17;
			this->btn_save_7->Text = L"Save Exams";
			this->btn_save_7->UseVisualStyleBackColor = true;
			this->btn_save_7->Click += gcnew System::EventHandler(this, &exam::btn_save_7_Click);
			// 
			// btn_clear_7
			// 
			this->btn_clear_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_7->Location = System::Drawing::Point(44, 272);
			this->btn_clear_7->Name = L"btn_clear_7";
			this->btn_clear_7->Size = System::Drawing::Size(156, 33);
			this->btn_clear_7->TabIndex = 18;
			this->btn_clear_7->Text = L"Clear";
			this->btn_clear_7->UseVisualStyleBackColor = true;
			this->btn_clear_7->Click += gcnew System::EventHandler(this, &exam::btn_clear_7_Click);
			// 
			// btn_add_7
			// 
			this->btn_add_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_7->Location = System::Drawing::Point(44, 380);
			this->btn_add_7->Name = L"btn_add_7";
			this->btn_add_7->Size = System::Drawing::Size(156, 33);
			this->btn_add_7->TabIndex = 20;
			this->btn_add_7->Text = L"Add Exams";
			this->btn_add_7->UseVisualStyleBackColor = true;
			this->btn_add_7->Click += gcnew System::EventHandler(this, &exam::btn_add_7_Click);
			// 
			// btn_delete_7
			// 
			this->btn_delete_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_7->Location = System::Drawing::Point(44, 327);
			this->btn_delete_7->Name = L"btn_delete_7";
			this->btn_delete_7->Size = System::Drawing::Size(156, 33);
			this->btn_delete_7->TabIndex = 19;
			this->btn_delete_7->Text = L"Delete Exams";
			this->btn_delete_7->UseVisualStyleBackColor = true;
			this->btn_delete_7->Click += gcnew System::EventHandler(this, &exam::btn_delete_7_Click);
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->groupBox14);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel16->Location = System::Drawing::Point(3, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(324, 552);
			this->panel16->TabIndex = 11;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->tb_end_7);
			this->groupBox14->Controls->Add(this->label40);
			this->groupBox14->Controls->Add(this->label41);
			this->groupBox14->Controls->Add(this->label43);
			this->groupBox14->Controls->Add(this->label45);
			this->groupBox14->Controls->Add(this->tb_cn_7);
			this->groupBox14->Controls->Add(this->tb_id_7);
			this->groupBox14->Controls->Add(this->tb_start_7);
			this->groupBox14->Controls->Add(this->label46);
			this->groupBox14->Controls->Add(this->tb_date_7);
			this->groupBox14->Location = System::Drawing::Point(5, 3);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(310, 292);
			this->groupBox14->TabIndex = 24;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Course Info";
			// 
			// tb_end_7
			// 
			this->tb_end_7->Location = System::Drawing::Point(107, 201);
			this->tb_end_7->Name = L"tb_end_7";
			this->tb_end_7->Size = System::Drawing::Size(193, 30);
			this->tb_end_7->TabIndex = 12;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(7, 201);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(58, 26);
			this->label40->TabIndex = 13;
			this->label40->Text = L"End  :";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(6, 35);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(39, 26);
			this->label41->TabIndex = 11;
			this->label41->Text = L"ID :";
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(6, 71);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(76, 20);
			this->label43->TabIndex = 3;
			this->label43->Text = L"Course :";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(6, 111);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(58, 26);
			this->label45->TabIndex = 4;
			this->label45->Text = L"Date :";
			// 
			// tb_cn_7
			// 
			this->tb_cn_7->Location = System::Drawing::Point(107, 71);
			this->tb_cn_7->Name = L"tb_cn_7";
			this->tb_cn_7->Size = System::Drawing::Size(192, 30);
			this->tb_cn_7->TabIndex = 0;
			// 
			// tb_id_7
			// 
			this->tb_id_7->Location = System::Drawing::Point(107, 35);
			this->tb_id_7->Name = L"tb_id_7";
			this->tb_id_7->Size = System::Drawing::Size(192, 30);
			this->tb_id_7->TabIndex = 10;
			// 
			// tb_start_7
			// 
			this->tb_start_7->Location = System::Drawing::Point(107, 153);
			this->tb_start_7->Name = L"tb_start_7";
			this->tb_start_7->Size = System::Drawing::Size(192, 30);
			this->tb_start_7->TabIndex = 2;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(6, 153);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(69, 26);
			this->label46->TabIndex = 5;
			this->label46->Text = L"Start  :";
			// 
			// tb_date_7
			// 
			this->tb_date_7->Location = System::Drawing::Point(107, 111);
			this->tb_date_7->Name = L"tb_date_7";
			this->tb_date_7->Size = System::Drawing::Size(192, 30);
			this->tb_date_7->TabIndex = 1;
			// 
			// btn_clear_1
			// 
			this->btn_clear_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_1->Location = System::Drawing::Point(44, 272);
			this->btn_clear_1->Name = L"btn_clear_1";
			this->btn_clear_1->Size = System::Drawing::Size(156, 33);
			this->btn_clear_1->TabIndex = 18;
			this->btn_clear_1->Text = L"Clear";
			this->btn_clear_1->UseVisualStyleBackColor = true;
			this->btn_clear_1->Click += gcnew System::EventHandler(this, &exam::btn_clear_1_Click);
			// 
			// btn_add_1
			// 
			this->btn_add_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_1->Location = System::Drawing::Point(44, 380);
			this->btn_add_1->Name = L"btn_add_1";
			this->btn_add_1->Size = System::Drawing::Size(156, 33);
			this->btn_add_1->TabIndex = 20;
			this->btn_add_1->Text = L"Add Exams";
			this->btn_add_1->UseVisualStyleBackColor = true;
			this->btn_add_1->Click += gcnew System::EventHandler(this, &exam::btn_add_1_Click);
			// 
			// lb_students1
			// 
			this->lb_students1->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students1->FormattingEnabled = true;
			this->lb_students1->ItemHeight = 23;
			this->lb_students1->Location = System::Drawing::Point(572, 3);
			this->lb_students1->Name = L"lb_students1";
			this->lb_students1->Size = System::Drawing::Size(547, 552);
			this->lb_students1->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btn_update_1);
			this->panel3->Controls->Add(this->btn_load_1);
			this->panel3->Controls->Add(this->btn_save_1);
			this->panel3->Controls->Add(this->btn_clear_1);
			this->panel3->Controls->Add(this->btn_add_1);
			this->panel3->Controls->Add(this->btn_delete_1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(327, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(792, 552);
			this->panel3->TabIndex = 12;
			// 
			// btn_delete_1
			// 
			this->btn_delete_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_1->Location = System::Drawing::Point(44, 327);
			this->btn_delete_1->Name = L"btn_delete_1";
			this->btn_delete_1->Size = System::Drawing::Size(156, 33);
			this->btn_delete_1->TabIndex = 19;
			this->btn_delete_1->Text = L"Delete Exams";
			this->btn_delete_1->UseVisualStyleBackColor = true;
			this->btn_delete_1->Click += gcnew System::EventHandler(this, &exam::btn_delete_1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->groupBox4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(324, 552);
			this->panel4->TabIndex = 11;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->tb_end_1);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label51);
			this->groupBox4->Controls->Add(this->label55);
			this->groupBox4->Controls->Add(this->tb_cn_1);
			this->groupBox4->Controls->Add(this->tb_id_1);
			this->groupBox4->Controls->Add(this->tb_start_1);
			this->groupBox4->Controls->Add(this->label56);
			this->groupBox4->Controls->Add(this->tb_date_1);
			this->groupBox4->Location = System::Drawing::Point(5, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(310, 292);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Course Info";
			// 
			// tb_end_1
			// 
			this->tb_end_1->Location = System::Drawing::Point(107, 201);
			this->tb_end_1->Name = L"tb_end_1";
			this->tb_end_1->Size = System::Drawing::Size(192, 30);
			this->tb_end_1->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 26);
			this->label8->TabIndex = 13;
			this->label8->Text = L" End  :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 26);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ID :";
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(6, 72);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(82, 29);
			this->label51->TabIndex = 3;
			this->label51->Text = L"Course :";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(6, 111);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(58, 26);
			this->label55->TabIndex = 4;
			this->label55->Text = L"Date :";
			// 
			// tb_cn_1
			// 
			this->tb_cn_1->Location = System::Drawing::Point(107, 71);
			this->tb_cn_1->Name = L"tb_cn_1";
			this->tb_cn_1->Size = System::Drawing::Size(192, 30);
			this->tb_cn_1->TabIndex = 0;
			// 
			// tb_id_1
			// 
			this->tb_id_1->Location = System::Drawing::Point(107, 35);
			this->tb_id_1->Name = L"tb_id_1";
			this->tb_id_1->Size = System::Drawing::Size(192, 30);
			this->tb_id_1->TabIndex = 10;
			// 
			// tb_start_1
			// 
			this->tb_start_1->Location = System::Drawing::Point(107, 153);
			this->tb_start_1->Name = L"tb_start_1";
			this->tb_start_1->Size = System::Drawing::Size(192, 30);
			this->tb_start_1->TabIndex = 2;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(6, 153);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(69, 26);
			this->label56->TabIndex = 5;
			this->label56->Text = L"Start  :";
			// 
			// tb_date_1
			// 
			this->tb_date_1->Location = System::Drawing::Point(107, 111);
			this->tb_date_1->Name = L"tb_date_1";
			this->tb_date_1->Size = System::Drawing::Size(192, 30);
			this->tb_date_1->TabIndex = 1;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->lb_students1);
			this->tabPage6->Controls->Add(this->panel3);
			this->tabPage6->Controls->Add(this->panel4);
			this->tabPage6->Location = System::Drawing::Point(4, 32);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1122, 558);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Second Term";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update->Location = System::Drawing::Point(44, 432);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(156, 33);
			this->btn_update->TabIndex = 21;
			this->btn_update->Text = L"Update Exams";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &exam::btn_update_Click);
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save->Location = System::Drawing::Point(44, 213);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(156, 33);
			this->btn_save->TabIndex = 17;
			this->btn_save->Text = L"Save Exams";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &exam::btn_save_Click);
			// 
			// btn_load
			// 
			this->btn_load->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load->Location = System::Drawing::Point(44, 156);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(156, 33);
			this->btn_load->TabIndex = 16;
			this->btn_load->Text = L"Show Exams";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &exam::btn_load_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(44, 272);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(156, 33);
			this->btn_clear->TabIndex = 18;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &exam::btn_clear_Click);
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(44, 380);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(156, 33);
			this->btn_add->TabIndex = 20;
			this->btn_add->Text = L"Add Exams";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &exam::btn_add_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete->Location = System::Drawing::Point(44, 327);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(156, 33);
			this->btn_delete->TabIndex = 19;
			this->btn_delete->Text = L"Delete Exams";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &exam::btn_delete_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(324, 552);
			this->panel1->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tb_end);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->tb_cn);
			this->groupBox1->Controls->Add(this->tb_id);
			this->groupBox1->Controls->Add(this->tb_start);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->tb_date);
			this->groupBox1->Location = System::Drawing::Point(5, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(310, 292);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Course Info";
			// 
			// tb_end
			// 
			this->tb_end->Location = System::Drawing::Point(107, 201);
			this->tb_end->Name = L"tb_end";
			this->tb_end->Size = System::Drawing::Size(192, 30);
			this->tb_end->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 26);
			this->label1->TabIndex = 13;
			this->label1->Text = L" End  :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 26);
			this->label2->TabIndex = 11;
			this->label2->Text = L"ID :";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Course :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 26);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Date :";
			// 
			// tb_cn
			// 
			this->tb_cn->Location = System::Drawing::Point(107, 71);
			this->tb_cn->Name = L"tb_cn";
			this->tb_cn->Size = System::Drawing::Size(192, 30);
			this->tb_cn->TabIndex = 0;
			// 
			// tb_id
			// 
			this->tb_id->Location = System::Drawing::Point(107, 35);
			this->tb_id->Name = L"tb_id";
			this->tb_id->Size = System::Drawing::Size(192, 30);
			this->tb_id->TabIndex = 10;
			// 
			// tb_start
			// 
			this->tb_start->Location = System::Drawing::Point(107, 153);
			this->tb_start->Name = L"tb_start";
			this->tb_start->Size = System::Drawing::Size(192, 30);
			this->tb_start->TabIndex = 2;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(6, 153);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(69, 26);
			this->label47->TabIndex = 5;
			this->label47->Text = L"Start  :";
			// 
			// tb_date
			// 
			this->tb_date->Location = System::Drawing::Point(107, 111);
			this->tb_date->Name = L"tb_date";
			this->tb_date->Size = System::Drawing::Size(192, 30);
			this->tb_date->TabIndex = 1;
			// 
			// btn_load_5
			// 
			this->btn_load_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_5->Location = System::Drawing::Point(44, 156);
			this->btn_load_5->Name = L"btn_load_5";
			this->btn_load_5->Size = System::Drawing::Size(156, 33);
			this->btn_load_5->TabIndex = 16;
			this->btn_load_5->Text = L"Show Exams";
			this->btn_load_5->UseVisualStyleBackColor = true;
			this->btn_load_5->Click += gcnew System::EventHandler(this, &exam::btn_load_5_Click);
			// 
			// btn_save_5
			// 
			this->btn_save_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_5->Location = System::Drawing::Point(44, 213);
			this->btn_save_5->Name = L"btn_save_5";
			this->btn_save_5->Size = System::Drawing::Size(156, 33);
			this->btn_save_5->TabIndex = 17;
			this->btn_save_5->Text = L"Save Exams";
			this->btn_save_5->UseVisualStyleBackColor = true;
			this->btn_save_5->Click += gcnew System::EventHandler(this, &exam::btn_save_5_Click);
			// 
			// btn_clear_5
			// 
			this->btn_clear_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_5->Location = System::Drawing::Point(44, 272);
			this->btn_clear_5->Name = L"btn_clear_5";
			this->btn_clear_5->Size = System::Drawing::Size(156, 33);
			this->btn_clear_5->TabIndex = 18;
			this->btn_clear_5->Text = L"Clear";
			this->btn_clear_5->UseVisualStyleBackColor = true;
			this->btn_clear_5->Click += gcnew System::EventHandler(this, &exam::btn_clear_5_Click);
			// 
			// btn_add_5
			// 
			this->btn_add_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_5->Location = System::Drawing::Point(44, 380);
			this->btn_add_5->Name = L"btn_add_5";
			this->btn_add_5->Size = System::Drawing::Size(156, 33);
			this->btn_add_5->TabIndex = 20;
			this->btn_add_5->Text = L"Add Exams";
			this->btn_add_5->UseVisualStyleBackColor = true;
			this->btn_add_5->Click += gcnew System::EventHandler(this, &exam::btn_add_5_Click);
			// 
			// btn_delete_5
			// 
			this->btn_delete_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_5->Location = System::Drawing::Point(44, 327);
			this->btn_delete_5->Name = L"btn_delete_5";
			this->btn_delete_5->Size = System::Drawing::Size(156, 33);
			this->btn_delete_5->TabIndex = 19;
			this->btn_delete_5->Text = L"Delete Exams";
			this->btn_delete_5->UseVisualStyleBackColor = true;
			this->btn_delete_5->Click += gcnew System::EventHandler(this, &exam::btn_delete_5_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->btn_update_5);
			this->panel7->Controls->Add(this->btn_load_5);
			this->panel7->Controls->Add(this->btn_save_5);
			this->panel7->Controls->Add(this->btn_clear_5);
			this->panel7->Controls->Add(this->btn_add_5);
			this->panel7->Controls->Add(this->btn_delete_5);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(327, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(792, 552);
			this->panel7->TabIndex = 12;
			// 
			// btn_update_5
			// 
			this->btn_update_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_5->Location = System::Drawing::Point(44, 432);
			this->btn_update_5->Name = L"btn_update_5";
			this->btn_update_5->Size = System::Drawing::Size(156, 33);
			this->btn_update_5->TabIndex = 21;
			this->btn_update_5->Text = L"Update Exams";
			this->btn_update_5->UseVisualStyleBackColor = true;
			this->btn_update_5->Click += gcnew System::EventHandler(this, &exam::btn_update_5_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->groupBox10);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel8->Location = System::Drawing::Point(3, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(324, 552);
			this->panel8->TabIndex = 11;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->tb_end_5);
			this->groupBox10->Controls->Add(this->label19);
			this->groupBox10->Controls->Add(this->label27);
			this->groupBox10->Controls->Add(this->label28);
			this->groupBox10->Controls->Add(this->label29);
			this->groupBox10->Controls->Add(this->tb_cn_5);
			this->groupBox10->Controls->Add(this->tb_id_5);
			this->groupBox10->Controls->Add(this->tb_start_5);
			this->groupBox10->Controls->Add(this->label31);
			this->groupBox10->Controls->Add(this->tb_date_5);
			this->groupBox10->Location = System::Drawing::Point(5, 3);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(310, 292);
			this->groupBox10->TabIndex = 24;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Course Info";
			// 
			// tb_end_5
			// 
			this->tb_end_5->Location = System::Drawing::Point(107, 201);
			this->tb_end_5->Name = L"tb_end_5";
			this->tb_end_5->Size = System::Drawing::Size(193, 30);
			this->tb_end_5->TabIndex = 12;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(7, 201);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 26);
			this->label19->TabIndex = 13;
			this->label19->Text = L"End  :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(6, 35);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(39, 26);
			this->label27->TabIndex = 11;
			this->label27->Text = L"ID :";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(6, 71);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(76, 20);
			this->label28->TabIndex = 3;
			this->label28->Text = L"Course :";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(6, 111);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(58, 26);
			this->label29->TabIndex = 4;
			this->label29->Text = L"Date :";
			// 
			// tb_cn_5
			// 
			this->tb_cn_5->Location = System::Drawing::Point(107, 71);
			this->tb_cn_5->Name = L"tb_cn_5";
			this->tb_cn_5->Size = System::Drawing::Size(192, 30);
			this->tb_cn_5->TabIndex = 0;
			// 
			// tb_id_5
			// 
			this->tb_id_5->Location = System::Drawing::Point(107, 35);
			this->tb_id_5->Name = L"tb_id_5";
			this->tb_id_5->Size = System::Drawing::Size(192, 30);
			this->tb_id_5->TabIndex = 10;
			// 
			// tb_start_5
			// 
			this->tb_start_5->Location = System::Drawing::Point(107, 153);
			this->tb_start_5->Name = L"tb_start_5";
			this->tb_start_5->Size = System::Drawing::Size(192, 30);
			this->tb_start_5->TabIndex = 2;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(6, 153);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(69, 26);
			this->label31->TabIndex = 5;
			this->label31->Text = L"Start  :";
			// 
			// tb_date_5
			// 
			this->tb_date_5->Location = System::Drawing::Point(107, 111);
			this->tb_date_5->Name = L"tb_date_5";
			this->tb_date_5->Size = System::Drawing::Size(192, 30);
			this->tb_date_5->TabIndex = 1;
			// 
			// lb_students5
			// 
			this->lb_students5->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students5->FormattingEnabled = true;
			this->lb_students5->ItemHeight = 23;
			this->lb_students5->Location = System::Drawing::Point(572, 3);
			this->lb_students5->Name = L"lb_students5";
			this->lb_students5->Size = System::Drawing::Size(547, 552);
			this->lb_students5->TabIndex = 13;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->lb_students5);
			this->tabPage8->Controls->Add(this->panel7);
			this->tabPage8->Controls->Add(this->panel8);
			this->tabPage8->Location = System::Drawing::Point(4, 32);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1122, 558);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Second Term";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// btn_update_4
			// 
			this->btn_update_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_4->Location = System::Drawing::Point(44, 432);
			this->btn_update_4->Name = L"btn_update_4";
			this->btn_update_4->Size = System::Drawing::Size(156, 33);
			this->btn_update_4->TabIndex = 21;
			this->btn_update_4->Text = L"Update Exams";
			this->btn_update_4->UseVisualStyleBackColor = true;
			this->btn_update_4->Click += gcnew System::EventHandler(this, &exam::btn_update_4_Click);
			// 
			// btn_load_4
			// 
			this->btn_load_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_4->Location = System::Drawing::Point(44, 156);
			this->btn_load_4->Name = L"btn_load_4";
			this->btn_load_4->Size = System::Drawing::Size(156, 33);
			this->btn_load_4->TabIndex = 16;
			this->btn_load_4->Text = L"Show Exams";
			this->btn_load_4->UseVisualStyleBackColor = true;
			this->btn_load_4->Click += gcnew System::EventHandler(this, &exam::btn_load_4_Click);
			// 
			// lb_students4
			// 
			this->lb_students4->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students4->FormattingEnabled = true;
			this->lb_students4->ItemHeight = 23;
			this->lb_students4->Location = System::Drawing::Point(572, 3);
			this->lb_students4->Name = L"lb_students4";
			this->lb_students4->Size = System::Drawing::Size(547, 552);
			this->lb_students4->TabIndex = 13;
			// 
			// btn_save_4
			// 
			this->btn_save_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_4->Location = System::Drawing::Point(44, 213);
			this->btn_save_4->Name = L"btn_save_4";
			this->btn_save_4->Size = System::Drawing::Size(156, 33);
			this->btn_save_4->TabIndex = 17;
			this->btn_save_4->Text = L"Save Exams";
			this->btn_save_4->UseVisualStyleBackColor = true;
			this->btn_save_4->Click += gcnew System::EventHandler(this, &exam::btn_save_4_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->lb_students4);
			this->tabPage7->Controls->Add(this->panel5);
			this->tabPage7->Controls->Add(this->panel6);
			this->tabPage7->Location = System::Drawing::Point(4, 32);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1122, 558);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"First Term";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btn_update_4);
			this->panel5->Controls->Add(this->btn_load_4);
			this->panel5->Controls->Add(this->btn_save_4);
			this->panel5->Controls->Add(this->btn_clear_4);
			this->panel5->Controls->Add(this->btn_add_4);
			this->panel5->Controls->Add(this->btn_delete_4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(327, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(792, 552);
			this->panel5->TabIndex = 12;
			// 
			// btn_clear_4
			// 
			this->btn_clear_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_4->Location = System::Drawing::Point(44, 272);
			this->btn_clear_4->Name = L"btn_clear_4";
			this->btn_clear_4->Size = System::Drawing::Size(156, 33);
			this->btn_clear_4->TabIndex = 18;
			this->btn_clear_4->Text = L"Clear";
			this->btn_clear_4->UseVisualStyleBackColor = true;
			this->btn_clear_4->Click += gcnew System::EventHandler(this, &exam::btn_clear_4_Click);
			// 
			// btn_add_4
			// 
			this->btn_add_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_4->Location = System::Drawing::Point(44, 380);
			this->btn_add_4->Name = L"btn_add_4";
			this->btn_add_4->Size = System::Drawing::Size(156, 33);
			this->btn_add_4->TabIndex = 20;
			this->btn_add_4->Text = L"Add Exams";
			this->btn_add_4->UseVisualStyleBackColor = true;
			this->btn_add_4->Click += gcnew System::EventHandler(this, &exam::btn_add_4_Click);
			// 
			// btn_delete_4
			// 
			this->btn_delete_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_4->Location = System::Drawing::Point(44, 327);
			this->btn_delete_4->Name = L"btn_delete_4";
			this->btn_delete_4->Size = System::Drawing::Size(156, 33);
			this->btn_delete_4->TabIndex = 19;
			this->btn_delete_4->Text = L"Delete Exams";
			this->btn_delete_4->UseVisualStyleBackColor = true;
			this->btn_delete_4->Click += gcnew System::EventHandler(this, &exam::btn_delete_4_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->groupBox8);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(324, 552);
			this->panel6->TabIndex = 11;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->tb_end_4);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->tb_cn_4);
			this->groupBox8->Controls->Add(this->tb_id_4);
			this->groupBox8->Controls->Add(this->tb_start_4);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->tb_date_4);
			this->groupBox8->Location = System::Drawing::Point(5, 3);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(310, 292);
			this->groupBox8->TabIndex = 24;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Course Info";
			// 
			// tb_end_4
			// 
			this->tb_end_4->Location = System::Drawing::Point(107, 201);
			this->tb_end_4->Name = L"tb_end_4";
			this->tb_end_4->Size = System::Drawing::Size(193, 30);
			this->tb_end_4->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(7, 201);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(58, 26);
			this->label13->TabIndex = 13;
			this->label13->Text = L"End  :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(6, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 26);
			this->label17->TabIndex = 11;
			this->label17->Text = L"ID :";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(6, 71);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(76, 20);
			this->label21->TabIndex = 3;
			this->label21->Text = L"Course :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(6, 111);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 26);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Date :";
			// 
			// tb_cn_4
			// 
			this->tb_cn_4->Location = System::Drawing::Point(107, 71);
			this->tb_cn_4->Name = L"tb_cn_4";
			this->tb_cn_4->Size = System::Drawing::Size(192, 30);
			this->tb_cn_4->TabIndex = 0;
			// 
			// tb_id_4
			// 
			this->tb_id_4->Location = System::Drawing::Point(107, 35);
			this->tb_id_4->Name = L"tb_id_4";
			this->tb_id_4->Size = System::Drawing::Size(192, 30);
			this->tb_id_4->TabIndex = 10;
			// 
			// tb_start_4
			// 
			this->tb_start_4->Location = System::Drawing::Point(107, 153);
			this->tb_start_4->Name = L"tb_start_4";
			this->tb_start_4->Size = System::Drawing::Size(192, 30);
			this->tb_start_4->TabIndex = 2;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(6, 153);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(69, 26);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Start  :";
			// 
			// tb_date_4
			// 
			this->tb_date_4->Location = System::Drawing::Point(107, 111);
			this->tb_date_4->Name = L"tb_date_4";
			this->tb_date_4->Size = System::Drawing::Size(192, 30);
			this->tb_date_4->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1144, 636);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1136, 600);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"First Year";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Left;
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1130, 594);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->lb_students);
			this->tabPage5->Controls->Add(this->panel2);
			this->tabPage5->Controls->Add(this->panel1);
			this->tabPage5->Location = System::Drawing::Point(4, 32);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1122, 558);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"First Term";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// lb_students
			// 
			this->lb_students->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students->FormattingEnabled = true;
			this->lb_students->ItemHeight = 23;
			this->lb_students->Location = System::Drawing::Point(572, 3);
			this->lb_students->Name = L"lb_students";
			this->lb_students->Size = System::Drawing::Size(547, 552);
			this->lb_students->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->btn_update);
			this->panel2->Controls->Add(this->btn_load);
			this->panel2->Controls->Add(this->btn_save);
			this->panel2->Controls->Add(this->btn_clear);
			this->panel2->Controls->Add(this->btn_add);
			this->panel2->Controls->Add(this->btn_delete);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(327, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(792, 552);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &exam::panel2_Paint);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl4);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1136, 600);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Second Year";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage9);
			this->tabControl4->Controls->Add(this->tabPage10);
			this->tabControl4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl4->Location = System::Drawing::Point(3, 3);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(1130, 594);
			this->tabControl4->TabIndex = 1;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->lb_students2);
			this->tabPage9->Controls->Add(this->panel9);
			this->tabPage9->Controls->Add(this->panel10);
			this->tabPage9->Location = System::Drawing::Point(4, 32);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1122, 558);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"First Term";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// lb_students2
			// 
			this->lb_students2->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students2->FormattingEnabled = true;
			this->lb_students2->ItemHeight = 23;
			this->lb_students2->Location = System::Drawing::Point(572, 3);
			this->lb_students2->Name = L"lb_students2";
			this->lb_students2->Size = System::Drawing::Size(547, 552);
			this->lb_students2->TabIndex = 13;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->btn_update_2);
			this->panel9->Controls->Add(this->btn_load_2);
			this->panel9->Controls->Add(this->btn_save_2);
			this->panel9->Controls->Add(this->btn_clear_2);
			this->panel9->Controls->Add(this->btn_add_2);
			this->panel9->Controls->Add(this->btn_delete_2);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(327, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(792, 552);
			this->panel9->TabIndex = 12;
			// 
			// btn_update_2
			// 
			this->btn_update_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_2->Location = System::Drawing::Point(44, 432);
			this->btn_update_2->Name = L"btn_update_2";
			this->btn_update_2->Size = System::Drawing::Size(156, 33);
			this->btn_update_2->TabIndex = 21;
			this->btn_update_2->Text = L"Update Exams";
			this->btn_update_2->UseVisualStyleBackColor = true;
			this->btn_update_2->Click += gcnew System::EventHandler(this, &exam::btn_update_2_Click);
			// 
			// btn_load_2
			// 
			this->btn_load_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_2->Location = System::Drawing::Point(44, 156);
			this->btn_load_2->Name = L"btn_load_2";
			this->btn_load_2->Size = System::Drawing::Size(156, 33);
			this->btn_load_2->TabIndex = 16;
			this->btn_load_2->Text = L"Show Exams";
			this->btn_load_2->UseVisualStyleBackColor = true;
			this->btn_load_2->Click += gcnew System::EventHandler(this, &exam::btn_load_2_Click);
			// 
			// btn_save_2
			// 
			this->btn_save_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_2->Location = System::Drawing::Point(44, 213);
			this->btn_save_2->Name = L"btn_save_2";
			this->btn_save_2->Size = System::Drawing::Size(156, 33);
			this->btn_save_2->TabIndex = 17;
			this->btn_save_2->Text = L"Save Exams";
			this->btn_save_2->UseVisualStyleBackColor = true;
			this->btn_save_2->Click += gcnew System::EventHandler(this, &exam::btn_save_2_Click);
			// 
			// btn_clear_2
			// 
			this->btn_clear_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_2->Location = System::Drawing::Point(44, 272);
			this->btn_clear_2->Name = L"btn_clear_2";
			this->btn_clear_2->Size = System::Drawing::Size(156, 33);
			this->btn_clear_2->TabIndex = 18;
			this->btn_clear_2->Text = L"Clear";
			this->btn_clear_2->UseVisualStyleBackColor = true;
			this->btn_clear_2->Click += gcnew System::EventHandler(this, &exam::btn_clear_2_Click);
			// 
			// btn_add_2
			// 
			this->btn_add_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_2->Location = System::Drawing::Point(44, 380);
			this->btn_add_2->Name = L"btn_add_2";
			this->btn_add_2->Size = System::Drawing::Size(156, 33);
			this->btn_add_2->TabIndex = 20;
			this->btn_add_2->Text = L"Add Exams";
			this->btn_add_2->UseVisualStyleBackColor = true;
			this->btn_add_2->Click += gcnew System::EventHandler(this, &exam::btn_add_2_Click);
			// 
			// btn_delete_2
			// 
			this->btn_delete_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_2->Location = System::Drawing::Point(44, 327);
			this->btn_delete_2->Name = L"btn_delete_2";
			this->btn_delete_2->Size = System::Drawing::Size(156, 33);
			this->btn_delete_2->TabIndex = 19;
			this->btn_delete_2->Text = L"Delete Exams";
			this->btn_delete_2->UseVisualStyleBackColor = true;
			this->btn_delete_2->Click += gcnew System::EventHandler(this, &exam::btn_delete_2_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->groupBox6);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(3, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(324, 552);
			this->panel10->TabIndex = 11;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->tb_end_2);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->label58);
			this->groupBox6->Controls->Add(this->label59);
			this->groupBox6->Controls->Add(this->tb_cn_2);
			this->groupBox6->Controls->Add(this->tb_id_2);
			this->groupBox6->Controls->Add(this->tb_start_2);
			this->groupBox6->Controls->Add(this->label60);
			this->groupBox6->Controls->Add(this->tb_date_2);
			this->groupBox6->Location = System::Drawing::Point(5, 3);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(310, 292);
			this->groupBox6->TabIndex = 22;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Course Info";
			// 
			// tb_end_2
			// 
			this->tb_end_2->Location = System::Drawing::Point(107, 201);
			this->tb_end_2->Name = L"tb_end_2";
			this->tb_end_2->Size = System::Drawing::Size(193, 30);
			this->tb_end_2->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(7, 201);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 26);
			this->label9->TabIndex = 13;
			this->label9->Text = L"End  :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(6, 35);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(39, 26);
			this->label25->TabIndex = 11;
			this->label25->Text = L"ID :";
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(6, 71);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(76, 20);
			this->label58->TabIndex = 3;
			this->label58->Text = L"Course :";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(6, 111);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(58, 26);
			this->label59->TabIndex = 4;
			this->label59->Text = L"Date :";
			// 
			// tb_cn_2
			// 
			this->tb_cn_2->Location = System::Drawing::Point(107, 71);
			this->tb_cn_2->Name = L"tb_cn_2";
			this->tb_cn_2->Size = System::Drawing::Size(192, 30);
			this->tb_cn_2->TabIndex = 0;
			// 
			// tb_id_2
			// 
			this->tb_id_2->Location = System::Drawing::Point(107, 35);
			this->tb_id_2->Name = L"tb_id_2";
			this->tb_id_2->Size = System::Drawing::Size(192, 30);
			this->tb_id_2->TabIndex = 10;
			// 
			// tb_start_2
			// 
			this->tb_start_2->Location = System::Drawing::Point(107, 153);
			this->tb_start_2->Name = L"tb_start_2";
			this->tb_start_2->Size = System::Drawing::Size(192, 30);
			this->tb_start_2->TabIndex = 2;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(6, 153);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(69, 26);
			this->label60->TabIndex = 5;
			this->label60->Text = L"Start  :";
			// 
			// tb_date_2
			// 
			this->tb_date_2->Location = System::Drawing::Point(107, 111);
			this->tb_date_2->Name = L"tb_date_2";
			this->tb_date_2->Size = System::Drawing::Size(192, 30);
			this->tb_date_2->TabIndex = 1;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->lb_students3);
			this->tabPage10->Controls->Add(this->panel11);
			this->tabPage10->Controls->Add(this->label65);
			this->tabPage10->Controls->Add(this->panel12);
			this->tabPage10->Location = System::Drawing::Point(4, 32);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1122, 558);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Second Term";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// lb_students3
			// 
			this->lb_students3->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students3->FormattingEnabled = true;
			this->lb_students3->ItemHeight = 23;
			this->lb_students3->Location = System::Drawing::Point(572, 3);
			this->lb_students3->Name = L"lb_students3";
			this->lb_students3->Size = System::Drawing::Size(547, 552);
			this->lb_students3->TabIndex = 13;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->btn_update_3);
			this->panel11->Controls->Add(this->btn_load_3);
			this->panel11->Controls->Add(this->btn_save_3);
			this->panel11->Controls->Add(this->btn_clear_3);
			this->panel11->Controls->Add(this->btn_add_3);
			this->panel11->Controls->Add(this->btn_delete_3);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel11->Location = System::Drawing::Point(327, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(792, 552);
			this->panel11->TabIndex = 12;
			// 
			// btn_update_3
			// 
			this->btn_update_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_3->Location = System::Drawing::Point(44, 432);
			this->btn_update_3->Name = L"btn_update_3";
			this->btn_update_3->Size = System::Drawing::Size(156, 33);
			this->btn_update_3->TabIndex = 21;
			this->btn_update_3->Text = L"Update Exams";
			this->btn_update_3->UseVisualStyleBackColor = true;
			this->btn_update_3->Click += gcnew System::EventHandler(this, &exam::btn_update_3_Click);
			// 
			// btn_load_3
			// 
			this->btn_load_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_3->Location = System::Drawing::Point(44, 156);
			this->btn_load_3->Name = L"btn_load_3";
			this->btn_load_3->Size = System::Drawing::Size(156, 33);
			this->btn_load_3->TabIndex = 16;
			this->btn_load_3->Text = L"Show Exams";
			this->btn_load_3->UseVisualStyleBackColor = true;
			this->btn_load_3->Click += gcnew System::EventHandler(this, &exam::btn_load_3_Click);
			// 
			// btn_save_3
			// 
			this->btn_save_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_3->Location = System::Drawing::Point(44, 213);
			this->btn_save_3->Name = L"btn_save_3";
			this->btn_save_3->Size = System::Drawing::Size(156, 33);
			this->btn_save_3->TabIndex = 17;
			this->btn_save_3->Text = L"Save Exams";
			this->btn_save_3->UseVisualStyleBackColor = true;
			this->btn_save_3->Click += gcnew System::EventHandler(this, &exam::btn_save_3_Click);
			// 
			// btn_clear_3
			// 
			this->btn_clear_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_clear_3->Location = System::Drawing::Point(44, 272);
			this->btn_clear_3->Name = L"btn_clear_3";
			this->btn_clear_3->Size = System::Drawing::Size(156, 33);
			this->btn_clear_3->TabIndex = 18;
			this->btn_clear_3->Text = L"Clear";
			this->btn_clear_3->UseVisualStyleBackColor = true;
			this->btn_clear_3->Click += gcnew System::EventHandler(this, &exam::btn_clear_3_Click);
			// 
			// btn_add_3
			// 
			this->btn_add_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_3->Location = System::Drawing::Point(44, 380);
			this->btn_add_3->Name = L"btn_add_3";
			this->btn_add_3->Size = System::Drawing::Size(156, 33);
			this->btn_add_3->TabIndex = 20;
			this->btn_add_3->Text = L"Add Exams";
			this->btn_add_3->UseVisualStyleBackColor = true;
			this->btn_add_3->Click += gcnew System::EventHandler(this, &exam::btn_add_3_Click);
			// 
			// btn_delete_3
			// 
			this->btn_delete_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_3->Location = System::Drawing::Point(44, 327);
			this->btn_delete_3->Name = L"btn_delete_3";
			this->btn_delete_3->Size = System::Drawing::Size(156, 33);
			this->btn_delete_3->TabIndex = 19;
			this->btn_delete_3->Text = L"Delete Exams";
			this->btn_delete_3->UseVisualStyleBackColor = true;
			this->btn_delete_3->Click += gcnew System::EventHandler(this, &exam::btn_delete_3_Click);
			// 
			// label65
			// 
			this->label65->Location = System::Drawing::Point(621, 4);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(88, 35);
			this->label65->TabIndex = 14;
			this->label65->Text = L"first name";
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->groupBox3);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(3, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(324, 552);
			this->panel12->TabIndex = 11;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tb_end_3);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->tb_cn_3);
			this->groupBox3->Controls->Add(this->tb_id_3);
			this->groupBox3->Controls->Add(this->tb_start_3);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->tb_date_3);
			this->groupBox3->Location = System::Drawing::Point(5, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(310, 292);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Course Info";
			// 
			// tb_end_3
			// 
			this->tb_end_3->Location = System::Drawing::Point(107, 201);
			this->tb_end_3->Name = L"tb_end_3";
			this->tb_end_3->Size = System::Drawing::Size(193, 30);
			this->tb_end_3->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(7, 201);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 26);
			this->label10->TabIndex = 13;
			this->label10->Text = L"End  :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(6, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 26);
			this->label11->TabIndex = 11;
			this->label11->Text = L"ID :";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 71);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 20);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Course :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(6, 111);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 26);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Date :";
			// 
			// tb_cn_3
			// 
			this->tb_cn_3->Location = System::Drawing::Point(107, 71);
			this->tb_cn_3->Name = L"tb_cn_3";
			this->tb_cn_3->Size = System::Drawing::Size(192, 30);
			this->tb_cn_3->TabIndex = 0;
			// 
			// tb_id_3
			// 
			this->tb_id_3->Location = System::Drawing::Point(107, 35);
			this->tb_id_3->Name = L"tb_id_3";
			this->tb_id_3->Size = System::Drawing::Size(192, 30);
			this->tb_id_3->TabIndex = 10;
			// 
			// tb_start_3
			// 
			this->tb_start_3->Location = System::Drawing::Point(107, 153);
			this->tb_start_3->Name = L"tb_start_3";
			this->tb_start_3->Size = System::Drawing::Size(192, 30);
			this->tb_start_3->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(6, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(69, 26);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Start  :";
			// 
			// tb_date_3
			// 
			this->tb_date_3->Location = System::Drawing::Point(107, 111);
			this->tb_date_3->Name = L"tb_date_3";
			this->tb_date_3->Size = System::Drawing::Size(192, 30);
			this->tb_date_3->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 32);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1136, 600);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Third Year";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl3->Location = System::Drawing::Point(3, 3);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(1130, 594);
			this->tabControl3->TabIndex = 1;
			// 
			// exam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1144, 636);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"exam";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Exams";
			this->Load += gcnew System::EventHandler(this, &exam::exam_Load);
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: void clearControls()
				 {
					 tb_id->Text = "";
					 tb_cn->Text = "";
					 tb_date->Text = "";
					 tb_start->Text = "";
					 tb_end->Text = "";
		 }


private: void clearControls1()
				 {
					 tb_id_1->Text = "";
					 tb_cn_1->Text = "";
					 tb_date_1->Text = "";
					 tb_start_1->Text = "";
					 tb_end_1->Text = "";
		 }
					/* cb_subject_1->SelectedIndex = -1;
					 cb_grade_1->SelectedIndex = -1;
					 cb_grade_1->Items->Clear();
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);
*/

private: void clearControls2()
				 {
					 tb_id_2->Text = "";
					 tb_cn_2->Text = "";
					 tb_date_2->Text = "";
					 tb_start_2->Text = "";
					 tb_end_2->Text = "";
		 }

private: void clearControls3()
				 {
					 tb_id_3->Text = "";
					 tb_cn_3->Text = "";
					 tb_date_3->Text = "";
					 tb_start_3->Text = "";
					 tb_end_3->Text = "";
		 }
				 
private: void clearControls4()
				 {
					 tb_id_4->Text = "";
					 tb_cn_4->Text = "";
					 tb_date_4->Text = "";
					 tb_start_4->Text = "";
					 tb_end_4->Text = "";
		 }

private: void clearControls5()
				 {
					 tb_id_5->Text = "";
					 tb_cn_5->Text = "";
					 tb_date_5->Text = "";
					 tb_start_5->Text = "";
					 tb_end_5->Text = "";
		 }

private: void clearControls6()
				 {
					 tb_id_6->Text = "";
					 tb_cn_6->Text = "";
					 tb_date_6->Text = "";
					 tb_start_6->Text = "";
					 tb_end_6->Text = "";
		 }

private: void clearControls7()
				 {
					 tb_id_7->Text = "";
					 tb_cn_7->Text = "";
					 tb_date_7->Text = "";
					 tb_start_7->Text = "";
					 tb_end_7->Text = "";
		 }





//First Year (First Term)
private: System::Void btn_load_Click(System::Object^  sender, System::EventArgs^  e) {
		     StreamReader^ sr= gcnew StreamReader ("exams.txt");
			 while(!sr->EndOfStream)
			 {
				 lb_students->Items->Add(sr->ReadLine());
			 }
			 sr->Close();
			 clearControls();

		 }
private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {
		     StreamWriter^ sw = gcnew StreamWriter("exams.txt");
			 int counter = lb_students->Items->Count;
			 for(int i=0; i<counter;i++)
			 {
				 sw->WriteLine(lb_students->Items[i]);
			 }
			 sw->Close();
			 clearControls();

		 }
private: System::Void btn_clear_Click(System::Object^  sender, System::EventArgs^  e) {
		  clearControls();

		 }
private: System::Void btn_delete_Click(System::Object^  sender, System::EventArgs^  e) {
		  lb_students->Items->Remove(lb_students->SelectedItem);

		 }
private: System::Void btn_add_Click(System::Object^  sender, System::EventArgs^  e) {
         				 String^ stuInfo = "";
						 String^ fullName = tb_id->Text+ "\t" +tb_cn->Text +"\t"+ tb_date->Text+  "\t" + tb_start->Text+":00"+"\t" + tb_end->Text+":00";
		
						 stuInfo = fullName; 
			
						 lb_students->Items->Add(stuInfo);
			 
		 }
private: System::Void btn_update_Click(System::Object^  sender, System::EventArgs^  e) {
            String^ stuInfo = "";
 String^ fullName = tb_id->Text+ "\t" +tb_cn->Text +"\t"+ tb_date->Text+  "\t" + tb_start->Text+":00"+"\t" + tb_end->Text+":00";
			
			stuInfo = fullName; 
			lb_students->Items[lb_students->SelectedIndex] = stuInfo;

		 }




//First Year (Second Term)

private: System::Void btn_load_1_Click(System::Object^  sender, System::EventArgs^  e) {
			  StreamReader^ sr1= gcnew StreamReader ("exams1.txt");
			 while(!sr1->EndOfStream)
			 {
				 lb_students1->Items->Add(sr1->ReadLine());
			 }
			 sr1->Close();
			 clearControls1();

		 
		 }

private: System::Void btn_save_1_Click(System::Object^  sender, System::EventArgs^  e) {
			  			 StreamWriter^ sw1 = gcnew StreamWriter("exams1.txt");
			 int counter1 = lb_students1->Items->Count;
			 for(int i=0; i<counter1;i++)
			 {
				 sw1->WriteLine(lb_students1->Items[i]);
			 }
			 sw1->Close();
			 clearControls1();

		 }

private: System::Void btn_clear_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 clearControls1();

		 }
private: System::Void btn_delete_1_Click(System::Object^  sender, System::EventArgs^  e) {
 lb_students1->Items->Remove(lb_students1->SelectedItem);

		 }
private: System::Void btn_add_1_Click(System::Object^  sender, System::EventArgs^  e) {
            			 String^ stuInfo1 = "";
						 String^ fullName1 = tb_id_1->Text+ "\t" +tb_cn_1->Text +"\t"+ tb_date_1->Text+  "\t" + tb_start_1->Text+":00"+"\t" + tb_end_1->Text+":00";
		
						 stuInfo1 = fullName1; 
			
						 lb_students1->Items->Add(stuInfo1);
			


		 }
private: System::Void btn_update_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 		    String^ stuInfo1 = "";
        String^ fullName1 = tb_id_1->Text+ "\t" +tb_cn_1->Text +"\t"+ tb_date_1->Text+  "\t" + tb_start_1->Text+":00"+"\t" + tb_end_1->Text+":00";
			
			stuInfo1 = fullName1; 
			lb_students1->Items[lb_students1->SelectedIndex] = stuInfo1;


		 }






//Second Year (First Term)


private: System::Void btn_load_2_Click(System::Object^  sender, System::EventArgs^  e) {
		   StreamReader^ sr2= gcnew StreamReader ("exams2.txt");
			 while(!sr2->EndOfStream)
			 {
				 lb_students2->Items->Add(sr2->ReadLine());
			 }
			 sr2->Close();
			 clearControls2();

		 }
private: System::Void btn_save_2_Click(System::Object^  sender, System::EventArgs^  e) {
		  			 StreamWriter^ sw2 = gcnew StreamWriter("exams2.txt");
			 int counter2 = lb_students2->Items->Count;
			 for(int i=0; i<counter2;i++)
			 {
				 sw2->WriteLine(lb_students2->Items[i]);
			 }
			 sw2->Close();
			 clearControls2();

		 }
private: System::Void btn_clear_2_Click(System::Object^  sender, System::EventArgs^  e) {
		 clearControls2();

		 }
private: System::Void btn_delete_2_Click(System::Object^  sender, System::EventArgs^  e) {
 lb_students2->Items->Remove(lb_students2->SelectedItem);

		 }
private: System::Void btn_add_2_Click(System::Object^  sender, System::EventArgs^  e) {
            			 String^ stuInfo2 = "";
						 String^ fullName2 = tb_id_2->Text+ "\t" +tb_cn_2->Text +"\t"+ tb_date_2->Text+  "\t" + tb_start_2->Text+":00"+"\t" + tb_end_2->Text+":00";
		
						 stuInfo2 = fullName2; 
			
						 lb_students2->Items->Add(stuInfo2);
			
		 }
private: System::Void btn_update_2_Click(System::Object^  sender, System::EventArgs^  e) {
		  String^ stuInfo2 = "";
           String^ fullName2 = tb_id_2->Text+ "\t" +tb_cn_2->Text +"\t"+ tb_date_2->Text+  "\t" + tb_start_2->Text+":00"+"\t" + tb_end_2->Text+":00";
			
			stuInfo2 = fullName2; 
			lb_students2->Items[lb_students2->SelectedIndex] = stuInfo2;

		 }



//Second Year(First Term)

private: System::Void btn_load_3_Click(System::Object^  sender, System::EventArgs^  e) {
  StreamReader^ sr3= gcnew StreamReader ("exams3.txt");
			 while(!sr3->EndOfStream)
			 {
				 lb_students3->Items->Add(sr3->ReadLine());
			 }
			 sr3->Close();
			 clearControls3();
		 
		 }
private: System::Void btn_save_3_Click(System::Object^  sender, System::EventArgs^  e) {
               			 StreamWriter^ sw3 = gcnew StreamWriter("exams3.txt");
			 int counter3 = lb_students3->Items->Count;
			 for(int i=0; i<counter3;i++)
			 {
				 sw3->WriteLine(lb_students3->Items[i]);
			 }
			 sw3->Close();
			 clearControls3();
		 
		 }
private: System::Void btn_clear_3_Click(System::Object^  sender, System::EventArgs^  e) {
		  clearControls3();
		 
		 }
private: System::Void btn_delete_3_Click(System::Object^  sender, System::EventArgs^  e) {
                lb_students3->Items->Remove(lb_students3->SelectedItem);
		 
		 }
private: System::Void btn_add_3_Click(System::Object^  sender, System::EventArgs^  e) {
						 String^ stuInfo3 = "";
						 String^ fullName3 = tb_id_3->Text+ "\t" +tb_cn_3->Text +"\t"+ tb_date_3->Text+  "\t" + tb_start_3->Text+":00"+"\t" + tb_end_3->Text+":00";
		
						 stuInfo3 = fullName3; 
			
						 lb_students3->Items->Add(stuInfo3);
			
		 }
private: System::Void btn_update_3_Click(System::Object^  sender, System::EventArgs^  e) {
		    String^ stuInfo3 = "";
    String^ fullName3 = tb_id_3->Text+ "\t" +tb_cn_3->Text +"\t"+ tb_date_3->Text+  "\t" + tb_start_3->Text+":00"+"\t" + tb_end_3->Text+":00";
			
			stuInfo3 = fullName3; 
			lb_students3->Items[lb_students3->SelectedIndex] = stuInfo3;
		 }

//Third Year(First Year)


private: System::Void btn_load_4_Click(System::Object^  sender, System::EventArgs^  e) {
    StreamReader^ sr4= gcnew StreamReader ("exams4.txt");
			 while(!sr4->EndOfStream)
			 {
				 lb_students4->Items->Add(sr4->ReadLine());
			 }
			 sr4->Close();
			 clearControls4();

		 }
private: System::Void btn_save_4_Click(System::Object^  sender, System::EventArgs^  e) {
		       			 StreamWriter^ sw4 = gcnew StreamWriter("exams4.txt");
			 int counter4 = lb_students4->Items->Count;
			 for(int i=0; i<counter4;i++)
			 {
				 sw4->WriteLine(lb_students4->Items[i]);
			 }
			 sw4->Close();
			 clearControls4();

		 }
private: System::Void btn_clear_4_Click(System::Object^  sender, System::EventArgs^  e) {
		clearControls4();
		 
		 }
private: System::Void btn_delete_4_Click(System::Object^  sender, System::EventArgs^  e) {
		        lb_students4->Items->Remove(lb_students4->SelectedItem);
		 
		 }
private: System::Void btn_add_4_Click(System::Object^  sender, System::EventArgs^  e) {
		    			 String^ stuInfo4 = "";
						 String^ fullName4 = tb_id_4->Text+ "\t" +tb_cn_4->Text +"\t"+ tb_date_4->Text+  "\t" + tb_start_4->Text+":00"+"\t" + tb_end_4->Text+":00";
		
						 stuInfo4 = fullName4; 
			
						 lb_students4->Items->Add(stuInfo4);
			
		 }
private: System::Void btn_update_4_Click(System::Object^  sender, System::EventArgs^  e) {
            String^ stuInfo4 = "";
     String^ fullName4 = tb_id_4->Text+ "\t" +tb_cn_4->Text +"\t"+ tb_date_4->Text+  "\t" + tb_start_4->Text+":00"+"\t" + tb_end_4->Text+":00";
			
			stuInfo4 = fullName4; 
			lb_students4->Items[lb_students4->SelectedIndex] = stuInfo4;
		 
		}


//Third Year(Second Term)


private: System::Void btn_load_5_Click(System::Object^  sender, System::EventArgs^  e) {
	         StreamReader^ sr5= gcnew StreamReader ("exams5.txt");
			 while(!sr5->EndOfStream)
			 {
				 lb_students5->Items->Add(sr5->ReadLine());
			 }
			 sr5->Close();
			 clearControls5();

		 }
private: System::Void btn_save_5_Click(System::Object^  sender, System::EventArgs^  e) {
		   			 StreamWriter^ sw5 = gcnew StreamWriter("exams5.txt");
			 int counter5 = lb_students5->Items->Count;
			 for(int i=0; i<counter5;i++)
			 {
				 sw5->WriteLine(lb_students5->Items[i]);
			 }
			 sw5->Close();
			 clearControls5();

		 }
private: System::Void btn_clear_5_Click(System::Object^  sender, System::EventArgs^  e) {
		  clearControls5();

		 }
private: System::Void btn_delete_5_Click(System::Object^  sender, System::EventArgs^  e) {
		        lb_students5->Items->Remove(lb_students5->SelectedItem);

		 }
private: System::Void btn_add_5_Click(System::Object^  sender, System::EventArgs^  e) {
						 String^ stuInfo5 = "";
						 String^ fullName5 = tb_id_5->Text+ "\t" +tb_cn_5->Text +"\t"+ tb_date_5->Text+  "\t" + tb_start_5->Text+":00"+"\t" + tb_end_5->Text+":00";
		
						 stuInfo5 = fullName5; 
			
						 lb_students5->Items->Add(stuInfo5);
		 
		 }
private: System::Void btn_update_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ stuInfo5 = "";
     String^ fullName5 = tb_id_5->Text+ "\t" +tb_cn_5->Text +"\t"+ tb_date_5->Text+  "\t" + tb_start_5->Text+":00"+"\t" + tb_end_5->Text+":00";
			
			stuInfo5 = fullName5; 
			lb_students5->Items[lb_students5->SelectedIndex] = stuInfo5;

		 }




//Forth Year(First Term)
private: System::Void btn_load_6_Click(System::Object^  sender, System::EventArgs^  e) {
		     StreamReader^ sr6= gcnew StreamReader ("exams6.txt");
			 while(!sr6->EndOfStream)
			 {
				 lb_students6->Items->Add(sr6->ReadLine());
			 }
			 sr6->Close();
			 clearControls6();

		 }
private: System::Void btn_save_6_Click(System::Object^  sender, System::EventArgs^  e) {
	         StreamWriter^ sw6 = gcnew StreamWriter("exams6.txt");
			 int counter6 = lb_students6->Items->Count;
			 for(int i=0; i<counter6;i++)
			 {
				 sw6->WriteLine(lb_students6->Items[i]);
			 }
			 sw6->Close();
			 clearControls6();

		 }
private: System::Void btn_clear_6_Click(System::Object^  sender, System::EventArgs^  e) {
		 clearControls6();

		 }
private: System::Void btn_delete_6_Click(System::Object^  sender, System::EventArgs^  e) {
		  lb_students6->Items->Remove(lb_students6->SelectedItem);

		 }
private: System::Void btn_add_6_Click(System::Object^  sender, System::EventArgs^  e) {
		  			 String^ stuInfo6 = "";
						 String^ fullName6 = tb_id_6->Text+ "\t" +tb_cn_6->Text +"\t"+ tb_date_6->Text+  "\t" + tb_start_6->Text+":00"+"\t" + tb_end_6->Text+":00";
		
						 stuInfo6 = fullName6; 
			
						 lb_students6->Items->Add(stuInfo6);
			

		 }
private: System::Void btn_upadate_6_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ stuInfo6 = "";
            String^ fullName6 = tb_id_6->Text+ "\t" +tb_cn_6->Text +"\t"+ tb_date_6->Text+  "\t" + tb_start_6->Text+":00"+"\t" + tb_end_6->Text+":00";
			
			stuInfo6 = fullName6; 
			lb_students6->Items[lb_students6->SelectedIndex] = stuInfo6;

		 }



//Forth Year(Second Term)


private: System::Void btn_load_7_Click(System::Object^  sender, System::EventArgs^  e) {
		     StreamReader^ sr7= gcnew StreamReader ("exams7.txt");
			 while(!sr7->EndOfStream)
			 {
				 lb_students7->Items->Add(sr7->ReadLine());
			 }
			 sr7->Close();
			 clearControls7();

		 }
private: System::Void btn_save_7_Click(System::Object^  sender, System::EventArgs^  e) {
		     StreamWriter^ sw7 = gcnew StreamWriter("exams7.txt");
			 int counter7 = lb_students7->Items->Count;
			 for(int i=0; i<counter7;i++)
			 {
				 sw7->WriteLine(lb_students7->Items[i]);
			 }
			 sw7->Close();
			 clearControls7();

		 }
private: System::Void btn_clear_7_Click(System::Object^  sender, System::EventArgs^  e) {
		 clearControls7();

		 }
private: System::Void btn_delete_7_Click(System::Object^  sender, System::EventArgs^  e) {
		  lb_students7->Items->Remove(lb_students7->SelectedItem);

		 }
private: System::Void btn_add_7_Click(System::Object^  sender, System::EventArgs^  e) {
        
						 String^ stuInfo7 = "";
						 String^ fullName7 = tb_id_7->Text+ "\t" +tb_cn_7->Text +"\t"+ tb_date_7->Text+  "\t" + tb_start_7->Text+":00"+"\t" + tb_end_7->Text+":00";
		
						 stuInfo7 = fullName7; 
			
						 lb_students7->Items->Add(stuInfo7);
			 
		 }
private: System::Void btn_update_7_Click(System::Object^  sender, System::EventArgs^  e) {
		    String^ stuInfo7 = "";
String^ fullName7 = tb_id_7->Text+ "\t" +tb_cn_7->Text +"\t"+ tb_date_7->Text+  "\t" + tb_start_7->Text+":00"+"\t" + tb_end_7->Text+":00";
			
			stuInfo7 = fullName7; 
			lb_students7->Items[lb_students7->SelectedIndex] = stuInfo7;

		 }



private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void exam_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

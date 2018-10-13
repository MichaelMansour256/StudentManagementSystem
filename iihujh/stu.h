#pragma once

namespace iihujh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO;

	/// <summary>
	/// Summary for stu
	/// </summary>
	public ref class stu : public System::Windows::Forms::Form
	{
	public:
		stu(void)
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
		~stu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage4;
	protected: 
	private: System::Windows::Forms::TabControl^  tabControl5;






















	private: System::Windows::Forms::TabPage^  tabPage12;



































































	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage9;





















	private: System::Windows::Forms::TabPage^  tabPage10;





















	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::ListBox^  lb_students;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TabPage^  tabPage6;





















	private: System::Windows::Forms::TabControl^  tabControl1;





private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::ListBox^  lb_students7;
































private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Button^  btn_update_7;

private: System::Windows::Forms::Button^  btn_load_7;
private: System::Windows::Forms::Button^  btn_save_7;
private: System::Windows::Forms::Button^  btn_clear_7;
private: System::Windows::Forms::Button^  btn_add_7;




private: System::Windows::Forms::Button^  btn_delete_7;


private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::GroupBox^  groupBox15;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::ComboBox^  cb_grade_7;

private: System::Windows::Forms::ComboBox^  cb_subject_7;

private: System::Windows::Forms::GroupBox^  groupBox16;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::TextBox^  tb_fn_7;

private: System::Windows::Forms::TextBox^  tb_id_7;




private: System::Windows::Forms::TextBox^  tb_ln_7;

private: System::Windows::Forms::ListBox^  lb_students2;






private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Button^  btn_update_2;

private: System::Windows::Forms::Button^  btn_load_2;
private: System::Windows::Forms::Button^  btn_save_2;
private: System::Windows::Forms::Button^  btn_clear_2;
private: System::Windows::Forms::Button^  btn_add_2;




private: System::Windows::Forms::Button^  btn_delete_2;


private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::ComboBox^  cb_grade_2;

private: System::Windows::Forms::ComboBox^  cb_subject_2;



private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  tb_fn_2;

private: System::Windows::Forms::TextBox^  tb_id_2;









private: System::Windows::Forms::TextBox^  tb_ln_2;
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
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::ComboBox^  cb_grade_3;

private: System::Windows::Forms::ComboBox^  cb_subject_3;

private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::TextBox^  tb_fn_3;

private: System::Windows::Forms::TextBox^  tb_id_3;




private: System::Windows::Forms::TextBox^  tb_ln_3;

private: System::Windows::Forms::ListBox^  lb_students1;




private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Button^  btn_update_1;

private: System::Windows::Forms::Button^  btn_load_1;
private: System::Windows::Forms::Button^  btn_save_1;

private: System::Windows::Forms::Button^  btn_clear_1;
private: System::Windows::Forms::Button^  btn_add_1;




private: System::Windows::Forms::Button^  btn_delete_1;


private: System::Windows::Forms::Panel^  panel4;





private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::TextBox^  tb_fn_1;

private: System::Windows::Forms::TextBox^  tb_id_1;







private: System::Windows::Forms::TextBox^  tb_ln_1;


private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::ListBox^  lb_students4;





private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Button^  btn_update_4;

private: System::Windows::Forms::Button^  btn_load_4;
private: System::Windows::Forms::Button^  btn_save_4;
private: System::Windows::Forms::Button^  btn_clear_4;
private: System::Windows::Forms::Button^  btn_add_4;




private: System::Windows::Forms::Button^  btn_delete_4;


private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::ComboBox^  cb_grade_4;

private: System::Windows::Forms::ComboBox^  cb_subject_4;

private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::TextBox^  tb_fn_4;

private: System::Windows::Forms::TextBox^  tb_id_4;




private: System::Windows::Forms::TextBox^  tb_ln_4;

private: System::Windows::Forms::TabPage^  tabPage8;
private: System::Windows::Forms::ListBox^  lb_students5;





private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Button^  btn_update_5;

private: System::Windows::Forms::Button^  btn_load_5;
private: System::Windows::Forms::Button^  btn_save_5;
private: System::Windows::Forms::Button^  btn_clear_5;
private: System::Windows::Forms::Button^  btn_add_5;




private: System::Windows::Forms::Button^  btn_delete_5;


private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::ComboBox^  cb_grade_5;

private: System::Windows::Forms::ComboBox^  cb_subject_5;

private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::TextBox^  tb_fn_5;

private: System::Windows::Forms::TextBox^  tb_id_5;




private: System::Windows::Forms::TextBox^  tb_ln_5;

private: System::Windows::Forms::GroupBox^  groupBox17;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::ComboBox^  cb_grade_1;

private: System::Windows::Forms::ComboBox^  cb_subject_1;



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
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::ComboBox^  cb_grade_6;

private: System::Windows::Forms::ComboBox^  cb_subject_6;


private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::TextBox^  tb_fn_6;

private: System::Windows::Forms::TextBox^  tb_id_6;




private: System::Windows::Forms::TextBox^  tb_ln_6;
private: System::Windows::Forms::TextBox^  tb_search_6;
private: System::Windows::Forms::Button^  btn_search_6;
private: System::Windows::Forms::TextBox^  tb_search_7;
private: System::Windows::Forms::Button^  btn_search_7;
private: System::Windows::Forms::TextBox^  tb_search_2;
private: System::Windows::Forms::Button^  btn_search_2;
private: System::Windows::Forms::TextBox^  tb_search_3;

private: System::Windows::Forms::Button^  btn_search_3;
private: System::Windows::Forms::TextBox^  tb_search;
private: System::Windows::Forms::Button^  btn_search;
private: System::Windows::Forms::TextBox^  tb_search_1;
private: System::Windows::Forms::Button^  btn_search_1;
private: System::Windows::Forms::TextBox^  tb_search_4;
private: System::Windows::Forms::Button^  btn_search_4;
private: System::Windows::Forms::TextBox^  tb_search_5;
private: System::Windows::Forms::Button^  btn_search_5;
private: System::Windows::Forms::ComboBox^  cb_fees_2;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::ComboBox^  cb_fees;
private: System::Windows::Forms::ComboBox^  cb_fees_1;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::ComboBox^  cb_fees_3;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::ComboBox^  cb_fees_6;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::ComboBox^  cb_fees_7;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::ComboBox^  cb_fees_4;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::ComboBox^  cb_fees_5;

private: System::Windows::Forms::Label^  label12;









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
		virtual void InitializeComponent(void) 
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(stu::typeid));
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
			this->tb_search_6 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_6 = (gcnew System::Windows::Forms::Button());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_6 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_6 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_6 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_6 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_6 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_6 = (gcnew System::Windows::Forms::TextBox());
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
			this->tb_search_7 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_7 = (gcnew System::Windows::Forms::Button());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_7 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_7 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_7 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_7 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_7 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_7 = (gcnew System::Windows::Forms::TextBox());
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
			this->tb_search_2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_2 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_2 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_2 = (gcnew System::Windows::Forms::TextBox());
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
			this->tb_search_3 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_3 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_3 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_3 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lb_students = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tb_search = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students1 = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_1 = (gcnew System::Windows::Forms::Button());
			this->btn_load_1 = (gcnew System::Windows::Forms::Button());
			this->btn_save_1 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_1 = (gcnew System::Windows::Forms::Button());
			this->btn_add_1 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tb_search_1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_1 = (gcnew System::Windows::Forms::Button());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_1 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students4 = (gcnew System::Windows::Forms::ListBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_4 = (gcnew System::Windows::Forms::Button());
			this->btn_load_4 = (gcnew System::Windows::Forms::Button());
			this->btn_save_4 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_4 = (gcnew System::Windows::Forms::Button());
			this->btn_add_4 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_4 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->tb_search_4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_4 = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_4 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_4 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_4 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->lb_students5 = (gcnew System::Windows::Forms::ListBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btn_update_5 = (gcnew System::Windows::Forms::Button());
			this->btn_load_5 = (gcnew System::Windows::Forms::Button());
			this->btn_save_5 = (gcnew System::Windows::Forms::Button());
			this->btn_clear_5 = (gcnew System::Windows::Forms::Button());
			this->btn_add_5 = (gcnew System::Windows::Forms::Button());
			this->btn_delete_5 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->tb_search_5 = (gcnew System::Windows::Forms::TextBox());
			this->btn_search_5 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->cb_grade_5 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_subject_5 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_fees_5 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->tb_fn_5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ln_5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 32);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1292, 590);
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
			this->tabControl5->Size = System::Drawing::Size(1286, 584);
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
			this->tabPage11->Size = System::Drawing::Size(1278, 548);
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
			this->lb_students6->Size = System::Drawing::Size(703, 542);
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
			this->panel13->Size = System::Drawing::Size(948, 542);
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
			this->btn_upadate_6->Text = L"Update Students";
			this->btn_upadate_6->UseVisualStyleBackColor = true;
			this->btn_upadate_6->Click += gcnew System::EventHandler(this, &stu::btn_upadate_6_Click);
			// 
			// btn_load_6
			// 
			this->btn_load_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_6->Location = System::Drawing::Point(44, 156);
			this->btn_load_6->Name = L"btn_load_6";
			this->btn_load_6->Size = System::Drawing::Size(156, 33);
			this->btn_load_6->TabIndex = 16;
			this->btn_load_6->Text = L"Load Students";
			this->btn_load_6->UseVisualStyleBackColor = true;
			this->btn_load_6->Click += gcnew System::EventHandler(this, &stu::btn_load_6_Click);
			// 
			// btn_save_6
			// 
			this->btn_save_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_6->Location = System::Drawing::Point(44, 213);
			this->btn_save_6->Name = L"btn_save_6";
			this->btn_save_6->Size = System::Drawing::Size(156, 33);
			this->btn_save_6->TabIndex = 17;
			this->btn_save_6->Text = L"Save Students";
			this->btn_save_6->UseVisualStyleBackColor = true;
			this->btn_save_6->Click += gcnew System::EventHandler(this, &stu::btn_save_6_Click);
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
			this->btn_clear_6->Click += gcnew System::EventHandler(this, &stu::btn_clear_6_Click);
			// 
			// btn_add_6
			// 
			this->btn_add_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_6->Location = System::Drawing::Point(44, 380);
			this->btn_add_6->Name = L"btn_add_6";
			this->btn_add_6->Size = System::Drawing::Size(156, 33);
			this->btn_add_6->TabIndex = 20;
			this->btn_add_6->Text = L"Add Students";
			this->btn_add_6->UseVisualStyleBackColor = true;
			this->btn_add_6->Click += gcnew System::EventHandler(this, &stu::btn_add_6_Click);
			// 
			// btn_delete_6
			// 
			this->btn_delete_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_6->Location = System::Drawing::Point(44, 327);
			this->btn_delete_6->Name = L"btn_delete_6";
			this->btn_delete_6->Size = System::Drawing::Size(156, 33);
			this->btn_delete_6->TabIndex = 19;
			this->btn_delete_6->Text = L"Delete Students";
			this->btn_delete_6->UseVisualStyleBackColor = true;
			this->btn_delete_6->Click += gcnew System::EventHandler(this, &stu::btn_delete_6_Click);
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->tb_search_6);
			this->panel14->Controls->Add(this->btn_search_6);
			this->panel14->Controls->Add(this->groupBox13);
			this->panel14->Controls->Add(this->groupBox14);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel14->Location = System::Drawing::Point(3, 3);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(324, 542);
			this->panel14->TabIndex = 11;
			this->panel14->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &stu::panel14_Paint);
			// 
			// tb_search_6
			// 
			this->tb_search_6->Location = System::Drawing::Point(35, 434);
			this->tb_search_6->Name = L"tb_search_6";
			this->tb_search_6->Size = System::Drawing::Size(216, 30);
			this->tb_search_6->TabIndex = 29;
			// 
			// btn_search_6
			// 
			this->btn_search_6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_6->Location = System::Drawing::Point(85, 486);
			this->btn_search_6->Name = L"btn_search_6";
			this->btn_search_6->Size = System::Drawing::Size(118, 33);
			this->btn_search_6->TabIndex = 28;
			this->btn_search_6->Text = L"Search";
			this->btn_search_6->UseVisualStyleBackColor = true;
			this->btn_search_6->Click += gcnew System::EventHandler(this, &stu::btn_search_6_Click);
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->label38);
			this->groupBox13->Controls->Add(this->label42);
			this->groupBox13->Controls->Add(this->cb_grade_6);
			this->groupBox13->Controls->Add(this->cb_subject_6);
			this->groupBox13->Location = System::Drawing::Point(5, 240);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(310, 160);
			this->groupBox13->TabIndex = 23;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Subject Info";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(12, 45);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(90, 26);
			this->label38->TabIndex = 6;
			this->label38->Text = L"Subjects  :";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(13, 91);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(75, 26);
			this->label42->TabIndex = 7;
			this->label42->Text = L"Grades :";
			// 
			// cb_grade_6
			// 
			this->cb_grade_6->FormattingEnabled = true;
			this->cb_grade_6->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_6->Location = System::Drawing::Point(124, 91);
			this->cb_grade_6->Name = L"cb_grade_6";
			this->cb_grade_6->Size = System::Drawing::Size(169, 31);
			this->cb_grade_6->TabIndex = 9;
			this->cb_grade_6->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_6_TextChanged);
			// 
			// cb_subject_6
			// 
			this->cb_subject_6->FormattingEnabled = true;
			this->cb_subject_6->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Modeling & Simulation", L"Compiler Theory", 
				L"Image Processing", L"Computer Networks", L"Selected Topics", L"Project"});
			this->cb_subject_6->Location = System::Drawing::Point(124, 45);
			this->cb_subject_6->Name = L"cb_subject_6";
			this->cb_subject_6->Size = System::Drawing::Size(169, 31);
			this->cb_subject_6->TabIndex = 8;
			this->cb_subject_6->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_6_SelectedIndexChanged);
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->cb_fees_6);
			this->groupBox14->Controls->Add(this->label16);
			this->groupBox14->Controls->Add(this->label37);
			this->groupBox14->Controls->Add(this->label74);
			this->groupBox14->Controls->Add(this->label75);
			this->groupBox14->Controls->Add(this->tb_fn_6);
			this->groupBox14->Controls->Add(this->tb_id_6);
			this->groupBox14->Controls->Add(this->tb_ln_6);
			this->groupBox14->Location = System::Drawing::Point(5, 3);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(310, 221);
			this->groupBox14->TabIndex = 22;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Student Info";
			// 
			// cb_fees_6
			// 
			this->cb_fees_6->FormattingEnabled = true;
			this->cb_fees_6->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_6->Location = System::Drawing::Point(130, 155);
			this->cb_fees_6->Name = L"cb_fees_6";
			this->cb_fees_6->Size = System::Drawing::Size(169, 31);
			this->cb_fees_6->TabIndex = 14;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(12, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 26);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Fees  :";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(12, 35);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(39, 26);
			this->label37->TabIndex = 11;
			this->label37->Text = L"ID :";
			// 
			// label74
			// 
			this->label74->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(12, 71);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(114, 20);
			this->label74->TabIndex = 3;
			this->label74->Text = L"First Name :";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(12, 111);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(103, 26);
			this->label75->TabIndex = 4;
			this->label75->Text = L"Last Name :";
			// 
			// tb_fn_6
			// 
			this->tb_fn_6->Location = System::Drawing::Point(130, 71);
			this->tb_fn_6->Name = L"tb_fn_6";
			this->tb_fn_6->Size = System::Drawing::Size(169, 30);
			this->tb_fn_6->TabIndex = 0;
			this->tb_fn_6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_6_KeyPress);
			// 
			// tb_id_6
			// 
			this->tb_id_6->Location = System::Drawing::Point(129, 35);
			this->tb_id_6->Name = L"tb_id_6";
			this->tb_id_6->Size = System::Drawing::Size(169, 30);
			this->tb_id_6->TabIndex = 10;
			this->tb_id_6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_6_KeyPress);
			// 
			// tb_ln_6
			// 
			this->tb_ln_6->Location = System::Drawing::Point(130, 111);
			this->tb_ln_6->Name = L"tb_ln_6";
			this->tb_ln_6->Size = System::Drawing::Size(169, 30);
			this->tb_ln_6->TabIndex = 1;
			this->tb_ln_6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_6_KeyPress);
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->lb_students7);
			this->tabPage12->Controls->Add(this->panel15);
			this->tabPage12->Controls->Add(this->panel16);
			this->tabPage12->Location = System::Drawing::Point(4, 32);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1278, 548);
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
			this->lb_students7->Size = System::Drawing::Size(703, 542);
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
			this->panel15->Size = System::Drawing::Size(948, 542);
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
			this->btn_update_7->Text = L"Update Students";
			this->btn_update_7->UseVisualStyleBackColor = true;
			this->btn_update_7->Click += gcnew System::EventHandler(this, &stu::btn_update_7_Click);
			// 
			// btn_load_7
			// 
			this->btn_load_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_7->Location = System::Drawing::Point(44, 156);
			this->btn_load_7->Name = L"btn_load_7";
			this->btn_load_7->Size = System::Drawing::Size(156, 33);
			this->btn_load_7->TabIndex = 16;
			this->btn_load_7->Text = L"Load Students";
			this->btn_load_7->UseVisualStyleBackColor = true;
			this->btn_load_7->Click += gcnew System::EventHandler(this, &stu::btn_load_7_Click);
			// 
			// btn_save_7
			// 
			this->btn_save_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_7->Location = System::Drawing::Point(44, 213);
			this->btn_save_7->Name = L"btn_save_7";
			this->btn_save_7->Size = System::Drawing::Size(156, 33);
			this->btn_save_7->TabIndex = 17;
			this->btn_save_7->Text = L"Save Students";
			this->btn_save_7->UseVisualStyleBackColor = true;
			this->btn_save_7->Click += gcnew System::EventHandler(this, &stu::btn_save_7_Click);
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
			this->btn_clear_7->Click += gcnew System::EventHandler(this, &stu::btn_clear_7_Click);
			// 
			// btn_add_7
			// 
			this->btn_add_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_7->Location = System::Drawing::Point(44, 380);
			this->btn_add_7->Name = L"btn_add_7";
			this->btn_add_7->Size = System::Drawing::Size(156, 33);
			this->btn_add_7->TabIndex = 20;
			this->btn_add_7->Text = L"Add Students";
			this->btn_add_7->UseVisualStyleBackColor = true;
			this->btn_add_7->Click += gcnew System::EventHandler(this, &stu::btn_add_7_Click);
			// 
			// btn_delete_7
			// 
			this->btn_delete_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_7->Location = System::Drawing::Point(44, 327);
			this->btn_delete_7->Name = L"btn_delete_7";
			this->btn_delete_7->Size = System::Drawing::Size(156, 33);
			this->btn_delete_7->TabIndex = 19;
			this->btn_delete_7->Text = L"Delete Students";
			this->btn_delete_7->UseVisualStyleBackColor = true;
			this->btn_delete_7->Click += gcnew System::EventHandler(this, &stu::btn_delete_7_Click);
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->tb_search_7);
			this->panel16->Controls->Add(this->btn_search_7);
			this->panel16->Controls->Add(this->groupBox15);
			this->panel16->Controls->Add(this->groupBox16);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel16->Location = System::Drawing::Point(3, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(324, 542);
			this->panel16->TabIndex = 11;
			// 
			// tb_search_7
			// 
			this->tb_search_7->Location = System::Drawing::Point(35, 434);
			this->tb_search_7->Name = L"tb_search_7";
			this->tb_search_7->Size = System::Drawing::Size(216, 30);
			this->tb_search_7->TabIndex = 27;
			// 
			// btn_search_7
			// 
			this->btn_search_7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_7->Location = System::Drawing::Point(85, 486);
			this->btn_search_7->Name = L"btn_search_7";
			this->btn_search_7->Size = System::Drawing::Size(118, 33);
			this->btn_search_7->TabIndex = 26;
			this->btn_search_7->Text = L"Search";
			this->btn_search_7->UseVisualStyleBackColor = true;
			this->btn_search_7->Click += gcnew System::EventHandler(this, &stu::btn_search_7_Click);
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->label44);
			this->groupBox15->Controls->Add(this->label48);
			this->groupBox15->Controls->Add(this->cb_grade_7);
			this->groupBox15->Controls->Add(this->cb_subject_7);
			this->groupBox15->Location = System::Drawing::Point(5, 240);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(310, 160);
			this->groupBox15->TabIndex = 23;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Subject Info";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(12, 45);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(90, 26);
			this->label44->TabIndex = 6;
			this->label44->Text = L"Subjects  :";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(13, 91);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(75, 26);
			this->label48->TabIndex = 7;
			this->label48->Text = L"Grades :";
			// 
			// cb_grade_7
			// 
			this->cb_grade_7->FormattingEnabled = true;
			this->cb_grade_7->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_7->Location = System::Drawing::Point(124, 91);
			this->cb_grade_7->Name = L"cb_grade_7";
			this->cb_grade_7->Size = System::Drawing::Size(169, 31);
			this->cb_grade_7->TabIndex = 9;
			this->cb_grade_7->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_7_TextChanged);
			// 
			// cb_subject_7
			// 
			this->cb_subject_7->FormattingEnabled = true;
			this->cb_subject_7->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Theory of Computation", L"Neural Networks", 
				L"Distributed Computing", L"Computer Security Methods", L"Selected Topics", L"Project"});
			this->cb_subject_7->Location = System::Drawing::Point(124, 45);
			this->cb_subject_7->Name = L"cb_subject_7";
			this->cb_subject_7->Size = System::Drawing::Size(169, 31);
			this->cb_subject_7->TabIndex = 8;
			this->cb_subject_7->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_7_SelectedIndexChanged);
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->cb_fees_7);
			this->groupBox16->Controls->Add(this->label15);
			this->groupBox16->Controls->Add(this->label43);
			this->groupBox16->Controls->Add(this->label78);
			this->groupBox16->Controls->Add(this->label79);
			this->groupBox16->Controls->Add(this->tb_fn_7);
			this->groupBox16->Controls->Add(this->tb_id_7);
			this->groupBox16->Controls->Add(this->tb_ln_7);
			this->groupBox16->Location = System::Drawing::Point(5, 3);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(310, 221);
			this->groupBox16->TabIndex = 22;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"Student Info";
			// 
			// cb_fees_7
			// 
			this->cb_fees_7->FormattingEnabled = true;
			this->cb_fees_7->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_7->Location = System::Drawing::Point(130, 155);
			this->cb_fees_7->Name = L"cb_fees_7";
			this->cb_fees_7->Size = System::Drawing::Size(169, 31);
			this->cb_fees_7->TabIndex = 14;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(12, 153);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 26);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Fees  :";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(12, 35);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(39, 26);
			this->label43->TabIndex = 11;
			this->label43->Text = L"ID :";
			// 
			// label78
			// 
			this->label78->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(12, 71);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(114, 20);
			this->label78->TabIndex = 3;
			this->label78->Text = L"First Name :";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(12, 111);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(103, 26);
			this->label79->TabIndex = 4;
			this->label79->Text = L"Last Name :";
			// 
			// tb_fn_7
			// 
			this->tb_fn_7->Location = System::Drawing::Point(130, 71);
			this->tb_fn_7->Name = L"tb_fn_7";
			this->tb_fn_7->Size = System::Drawing::Size(169, 30);
			this->tb_fn_7->TabIndex = 0;
			this->tb_fn_7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_7_KeyPress);
			// 
			// tb_id_7
			// 
			this->tb_id_7->Location = System::Drawing::Point(129, 35);
			this->tb_id_7->Name = L"tb_id_7";
			this->tb_id_7->Size = System::Drawing::Size(169, 30);
			this->tb_id_7->TabIndex = 10;
			this->tb_id_7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_7_KeyPress);
			// 
			// tb_ln_7
			// 
			this->tb_ln_7->Location = System::Drawing::Point(130, 111);
			this->tb_ln_7->Name = L"tb_ln_7";
			this->tb_ln_7->Size = System::Drawing::Size(169, 30);
			this->tb_ln_7->TabIndex = 1;
			this->tb_ln_7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_7_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl4);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1292, 590);
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
			this->tabControl4->Size = System::Drawing::Size(1286, 584);
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
			this->tabPage9->Size = System::Drawing::Size(1278, 548);
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
			this->lb_students2->Size = System::Drawing::Size(703, 542);
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
			this->panel9->Size = System::Drawing::Size(948, 542);
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
			this->btn_update_2->Text = L"Update Students";
			this->btn_update_2->UseVisualStyleBackColor = true;
			this->btn_update_2->Click += gcnew System::EventHandler(this, &stu::btn_update_2_Click);
			// 
			// btn_load_2
			// 
			this->btn_load_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_2->Location = System::Drawing::Point(44, 156);
			this->btn_load_2->Name = L"btn_load_2";
			this->btn_load_2->Size = System::Drawing::Size(156, 33);
			this->btn_load_2->TabIndex = 16;
			this->btn_load_2->Text = L"Load Students";
			this->btn_load_2->UseVisualStyleBackColor = true;
			this->btn_load_2->Click += gcnew System::EventHandler(this, &stu::btn_load_2_Click);
			// 
			// btn_save_2
			// 
			this->btn_save_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_2->Location = System::Drawing::Point(44, 213);
			this->btn_save_2->Name = L"btn_save_2";
			this->btn_save_2->Size = System::Drawing::Size(156, 33);
			this->btn_save_2->TabIndex = 17;
			this->btn_save_2->Text = L"Save Students";
			this->btn_save_2->UseVisualStyleBackColor = true;
			this->btn_save_2->Click += gcnew System::EventHandler(this, &stu::btn_save_2_Click);
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
			this->btn_clear_2->Click += gcnew System::EventHandler(this, &stu::btn_clear_2_Click);
			// 
			// btn_add_2
			// 
			this->btn_add_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_2->Location = System::Drawing::Point(44, 380);
			this->btn_add_2->Name = L"btn_add_2";
			this->btn_add_2->Size = System::Drawing::Size(156, 33);
			this->btn_add_2->TabIndex = 20;
			this->btn_add_2->Text = L"Add Students";
			this->btn_add_2->UseVisualStyleBackColor = true;
			this->btn_add_2->Click += gcnew System::EventHandler(this, &stu::btn_add_2_Click);
			// 
			// btn_delete_2
			// 
			this->btn_delete_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_2->Location = System::Drawing::Point(44, 327);
			this->btn_delete_2->Name = L"btn_delete_2";
			this->btn_delete_2->Size = System::Drawing::Size(156, 33);
			this->btn_delete_2->TabIndex = 19;
			this->btn_delete_2->Text = L"Delete Students";
			this->btn_delete_2->UseVisualStyleBackColor = true;
			this->btn_delete_2->Click += gcnew System::EventHandler(this, &stu::btn_delete_2_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->tb_search_2);
			this->panel10->Controls->Add(this->btn_search_2);
			this->panel10->Controls->Add(this->groupBox5);
			this->panel10->Controls->Add(this->groupBox6);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(3, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(324, 542);
			this->panel10->TabIndex = 11;
			// 
			// tb_search_2
			// 
			this->tb_search_2->Location = System::Drawing::Point(35, 434);
			this->tb_search_2->Name = L"tb_search_2";
			this->tb_search_2->Size = System::Drawing::Size(216, 30);
			this->tb_search_2->TabIndex = 27;
			// 
			// btn_search_2
			// 
			this->btn_search_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_2->Location = System::Drawing::Point(85, 486);
			this->btn_search_2->Name = L"btn_search_2";
			this->btn_search_2->Size = System::Drawing::Size(118, 33);
			this->btn_search_2->TabIndex = 26;
			this->btn_search_2->Text = L"Search";
			this->btn_search_2->UseVisualStyleBackColor = true;
			this->btn_search_2->Click += gcnew System::EventHandler(this, &stu::btn_search_2_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Controls->Add(this->cb_grade_2);
			this->groupBox5->Controls->Add(this->cb_subject_2);
			this->groupBox5->Location = System::Drawing::Point(5, 240);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(310, 160);
			this->groupBox5->TabIndex = 23;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Subject Info";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(12, 45);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(90, 26);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Subjects  :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(13, 91);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(75, 26);
			this->label30->TabIndex = 7;
			this->label30->Text = L"Grades :";
			// 
			// cb_grade_2
			// 
			this->cb_grade_2->FormattingEnabled = true;
			this->cb_grade_2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_2->Location = System::Drawing::Point(124, 91);
			this->cb_grade_2->Name = L"cb_grade_2";
			this->cb_grade_2->Size = System::Drawing::Size(169, 31);
			this->cb_grade_2->TabIndex = 9;
			this->cb_grade_2->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_2_TextChanged);
			// 
			// cb_subject_2
			// 
			this->cb_subject_2->FormattingEnabled = true;
			this->cb_subject_2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Report Writing", L"Mathematics (3)", L"Data Structures", 
				L"Logic Design", L"Probability and Statistics", L"Introduction to Information Systems"});
			this->cb_subject_2->Location = System::Drawing::Point(124, 45);
			this->cb_subject_2->Name = L"cb_subject_2";
			this->cb_subject_2->Size = System::Drawing::Size(169, 31);
			this->cb_subject_2->TabIndex = 8;
			this->cb_subject_2->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_2_SelectedIndexChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->cb_fees_2);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->label58);
			this->groupBox6->Controls->Add(this->label59);
			this->groupBox6->Controls->Add(this->tb_fn_2);
			this->groupBox6->Controls->Add(this->tb_id_2);
			this->groupBox6->Controls->Add(this->tb_ln_2);
			this->groupBox6->Location = System::Drawing::Point(5, 3);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(310, 221);
			this->groupBox6->TabIndex = 22;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Student Info";
			// 
			// cb_fees_2
			// 
			this->cb_fees_2->FormattingEnabled = true;
			this->cb_fees_2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_2->Location = System::Drawing::Point(130, 155);
			this->cb_fees_2->Name = L"cb_fees_2";
			this->cb_fees_2->Size = System::Drawing::Size(169, 31);
			this->cb_fees_2->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 26);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Fees  :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(12, 35);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(39, 26);
			this->label25->TabIndex = 11;
			this->label25->Text = L"ID :";
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(12, 71);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(114, 20);
			this->label58->TabIndex = 3;
			this->label58->Text = L"First Name :";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(12, 111);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(103, 26);
			this->label59->TabIndex = 4;
			this->label59->Text = L"Last Name :";
			// 
			// tb_fn_2
			// 
			this->tb_fn_2->Location = System::Drawing::Point(130, 71);
			this->tb_fn_2->Name = L"tb_fn_2";
			this->tb_fn_2->Size = System::Drawing::Size(169, 30);
			this->tb_fn_2->TabIndex = 0;
			this->tb_fn_2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_2_KeyPress);
			// 
			// tb_id_2
			// 
			this->tb_id_2->Location = System::Drawing::Point(130, 35);
			this->tb_id_2->Name = L"tb_id_2";
			this->tb_id_2->Size = System::Drawing::Size(169, 30);
			this->tb_id_2->TabIndex = 10;
			this->tb_id_2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_2_KeyPress);
			// 
			// tb_ln_2
			// 
			this->tb_ln_2->Location = System::Drawing::Point(130, 111);
			this->tb_ln_2->Name = L"tb_ln_2";
			this->tb_ln_2->Size = System::Drawing::Size(169, 30);
			this->tb_ln_2->TabIndex = 1;
			this->tb_ln_2->TextChanged += gcnew System::EventHandler(this, &stu::textBox20_TextChanged);
			this->tb_ln_2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_2_KeyPress);
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
			this->tabPage10->Size = System::Drawing::Size(1278, 548);
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
			this->lb_students3->Size = System::Drawing::Size(703, 542);
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
			this->panel11->Size = System::Drawing::Size(948, 542);
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
			this->btn_update_3->Text = L"Update Students";
			this->btn_update_3->UseVisualStyleBackColor = true;
			this->btn_update_3->Click += gcnew System::EventHandler(this, &stu::btn_update_3_Click);
			// 
			// btn_load_3
			// 
			this->btn_load_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_3->Location = System::Drawing::Point(44, 156);
			this->btn_load_3->Name = L"btn_load_3";
			this->btn_load_3->Size = System::Drawing::Size(156, 33);
			this->btn_load_3->TabIndex = 16;
			this->btn_load_3->Text = L"Load Students";
			this->btn_load_3->UseVisualStyleBackColor = true;
			this->btn_load_3->Click += gcnew System::EventHandler(this, &stu::btn_load_3_Click);
			// 
			// btn_save_3
			// 
			this->btn_save_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_3->Location = System::Drawing::Point(44, 213);
			this->btn_save_3->Name = L"btn_save_3";
			this->btn_save_3->Size = System::Drawing::Size(156, 33);
			this->btn_save_3->TabIndex = 17;
			this->btn_save_3->Text = L"Save Students";
			this->btn_save_3->UseVisualStyleBackColor = true;
			this->btn_save_3->Click += gcnew System::EventHandler(this, &stu::btn_save_3_Click);
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
			this->btn_clear_3->Click += gcnew System::EventHandler(this, &stu::btn_clear_3_Click);
			// 
			// btn_add_3
			// 
			this->btn_add_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_3->Location = System::Drawing::Point(44, 380);
			this->btn_add_3->Name = L"btn_add_3";
			this->btn_add_3->Size = System::Drawing::Size(156, 33);
			this->btn_add_3->TabIndex = 20;
			this->btn_add_3->Text = L"Add Students";
			this->btn_add_3->UseVisualStyleBackColor = true;
			this->btn_add_3->Click += gcnew System::EventHandler(this, &stu::btn_add_3_Click);
			// 
			// btn_delete_3
			// 
			this->btn_delete_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_3->Location = System::Drawing::Point(44, 327);
			this->btn_delete_3->Name = L"btn_delete_3";
			this->btn_delete_3->Size = System::Drawing::Size(156, 33);
			this->btn_delete_3->TabIndex = 19;
			this->btn_delete_3->Text = L"Delete Students";
			this->btn_delete_3->UseVisualStyleBackColor = true;
			this->btn_delete_3->Click += gcnew System::EventHandler(this, &stu::btn_delete_3_Click);
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
			this->panel12->Controls->Add(this->tb_search_3);
			this->panel12->Controls->Add(this->btn_search_3);
			this->panel12->Controls->Add(this->groupBox7);
			this->panel12->Controls->Add(this->groupBox8);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(3, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(324, 542);
			this->panel12->TabIndex = 11;
			// 
			// tb_search_3
			// 
			this->tb_search_3->Location = System::Drawing::Point(35, 433);
			this->tb_search_3->Name = L"tb_search_3";
			this->tb_search_3->Size = System::Drawing::Size(216, 30);
			this->tb_search_3->TabIndex = 27;
			// 
			// btn_search_3
			// 
			this->btn_search_3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_3->Location = System::Drawing::Point(85, 486);
			this->btn_search_3->Name = L"btn_search_3";
			this->btn_search_3->Size = System::Drawing::Size(118, 33);
			this->btn_search_3->TabIndex = 26;
			this->btn_search_3->Text = L"Search";
			this->btn_search_3->UseVisualStyleBackColor = true;
			this->btn_search_3->Click += gcnew System::EventHandler(this, &stu::btn_search_3_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label32);
			this->groupBox7->Controls->Add(this->label36);
			this->groupBox7->Controls->Add(this->cb_grade_3);
			this->groupBox7->Controls->Add(this->cb_subject_3);
			this->groupBox7->Location = System::Drawing::Point(5, 240);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(310, 160);
			this->groupBox7->TabIndex = 23;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Subject Info";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(12, 45);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(90, 26);
			this->label32->TabIndex = 6;
			this->label32->Text = L"Subjects  :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(13, 91);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(75, 26);
			this->label36->TabIndex = 7;
			this->label36->Text = L"Grades :";
			// 
			// cb_grade_3
			// 
			this->cb_grade_3->FormattingEnabled = true;
			this->cb_grade_3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_3->Location = System::Drawing::Point(124, 91);
			this->cb_grade_3->Name = L"cb_grade_3";
			this->cb_grade_3->Size = System::Drawing::Size(169, 31);
			this->cb_grade_3->TabIndex = 9;
			this->cb_grade_3->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_3_TextChanged);
			// 
			// cb_subject_3
			// 
			this->cb_subject_3->FormattingEnabled = true;
			this->cb_subject_3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Professional Ethics & Legal Aspects", L"Mathematics (4)", 
				L"File Organization", L"Statistical Analysis & Applications", L"Object Oriented Programming", L"Operations Research"});
			this->cb_subject_3->Location = System::Drawing::Point(124, 45);
			this->cb_subject_3->Name = L"cb_subject_3";
			this->cb_subject_3->Size = System::Drawing::Size(169, 31);
			this->cb_subject_3->TabIndex = 8;
			this->cb_subject_3->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_3_SelectedIndexChanged);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->cb_fees_3);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->label62);
			this->groupBox8->Controls->Add(this->label63);
			this->groupBox8->Controls->Add(this->tb_fn_3);
			this->groupBox8->Controls->Add(this->tb_id_3);
			this->groupBox8->Controls->Add(this->tb_ln_3);
			this->groupBox8->Location = System::Drawing::Point(5, 3);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(310, 221);
			this->groupBox8->TabIndex = 22;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Student Info";
			// 
			// cb_fees_3
			// 
			this->cb_fees_3->FormattingEnabled = true;
			this->cb_fees_3->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_3->Location = System::Drawing::Point(130, 155);
			this->cb_fees_3->Name = L"cb_fees_3";
			this->cb_fees_3->Size = System::Drawing::Size(169, 31);
			this->cb_fees_3->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 153);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 26);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Fees  :";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(12, 35);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(39, 26);
			this->label31->TabIndex = 11;
			this->label31->Text = L"ID :";
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(12, 71);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(114, 20);
			this->label62->TabIndex = 3;
			this->label62->Text = L"First Name :";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(12, 111);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(103, 26);
			this->label63->TabIndex = 4;
			this->label63->Text = L"Last Name :";
			// 
			// tb_fn_3
			// 
			this->tb_fn_3->Location = System::Drawing::Point(130, 71);
			this->tb_fn_3->Name = L"tb_fn_3";
			this->tb_fn_3->Size = System::Drawing::Size(169, 30);
			this->tb_fn_3->TabIndex = 0;
			this->tb_fn_3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_3_KeyPress);
			// 
			// tb_id_3
			// 
			this->tb_id_3->Location = System::Drawing::Point(130, 35);
			this->tb_id_3->Name = L"tb_id_3";
			this->tb_id_3->Size = System::Drawing::Size(169, 30);
			this->tb_id_3->TabIndex = 10;
			this->tb_id_3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_3_KeyPress);
			// 
			// tb_ln_3
			// 
			this->tb_ln_3->Location = System::Drawing::Point(130, 111);
			this->tb_ln_3->Name = L"tb_ln_3";
			this->tb_ln_3->Size = System::Drawing::Size(169, 30);
			this->tb_ln_3->TabIndex = 1;
			this->tb_ln_3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_3_KeyPress);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1292, 590);
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
			this->tabControl2->Size = System::Drawing::Size(1286, 584);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->panel2);
			this->tabPage5->Controls->Add(this->panel1);
			this->tabPage5->Location = System::Drawing::Point(4, 32);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1278, 548);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"First Term";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->lb_students);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(327, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(948, 542);
			this->panel2->TabIndex = 3;
			// 
			// lb_students
			// 
			this->lb_students->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students->FormattingEnabled = true;
			this->lb_students->ItemHeight = 23;
			this->lb_students->Location = System::Drawing::Point(245, 0);
			this->lb_students->Name = L"lb_students";
			this->lb_students->Size = System::Drawing::Size(703, 542);
			this->lb_students->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(44, 432);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 33);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Update Students";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &stu::button6_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(44, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 33);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Load Students";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &stu::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(44, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 33);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Save Students";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &stu::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(44, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 33);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &stu::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(44, 380);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 33);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Add Students";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &stu::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(44, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 33);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Delete Students";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &stu::button4_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tb_search);
			this->panel1->Controls->Add(this->btn_search);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(324, 542);
			this->panel1->TabIndex = 2;
			// 
			// tb_search
			// 
			this->tb_search->Location = System::Drawing::Point(35, 434);
			this->tb_search->Name = L"tb_search";
			this->tb_search->Size = System::Drawing::Size(216, 30);
			this->tb_search->TabIndex = 27;
			// 
			// btn_search
			// 
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(85, 486);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(118, 33);
			this->btn_search->TabIndex = 26;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &stu::btn_search_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Location = System::Drawing::Point(5, 240);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(310, 160);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Subject Info";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Subjects  :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Grades :";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->comboBox2->Location = System::Drawing::Point(124, 91);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(169, 31);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &stu::comboBox2_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"English", L"Humanistics", L"Langistics", L"Maths", 
				L"Organisation Behaviour", L"Physics"});
			this->comboBox1->Location = System::Drawing::Point(124, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(169, 31);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cb_fees);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Location = System::Drawing::Point(5, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(310, 221);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Student Info";
			// 
			// cb_fees
			// 
			this->cb_fees->FormattingEnabled = true;
			this->cb_fees->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees->Location = System::Drawing::Point(130, 155);
			this->cb_fees->Name = L"cb_fees";
			this->cb_fees->Size = System::Drawing::Size(169, 31);
			this->cb_fees->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 26);
			this->label6->TabIndex = 11;
			this->label6->Text = L"ID :";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Last Name :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(130, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(169, 30);
			this->textBox4->TabIndex = 0;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::textBox4_KeyPress_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 30);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &stu::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 26);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Fees  :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(130, 111);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(169, 30);
			this->textBox5->TabIndex = 1;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::textBox5_KeyPress_1);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->lb_students1);
			this->tabPage6->Controls->Add(this->panel3);
			this->tabPage6->Controls->Add(this->panel4);
			this->tabPage6->Location = System::Drawing::Point(4, 32);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1278, 548);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Second Term";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// lb_students1
			// 
			this->lb_students1->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students1->FormattingEnabled = true;
			this->lb_students1->ItemHeight = 23;
			this->lb_students1->Location = System::Drawing::Point(572, 3);
			this->lb_students1->Name = L"lb_students1";
			this->lb_students1->Size = System::Drawing::Size(703, 542);
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
			this->panel3->Size = System::Drawing::Size(948, 542);
			this->panel3->TabIndex = 12;
			// 
			// btn_update_1
			// 
			this->btn_update_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_1->Location = System::Drawing::Point(44, 432);
			this->btn_update_1->Name = L"btn_update_1";
			this->btn_update_1->Size = System::Drawing::Size(156, 33);
			this->btn_update_1->TabIndex = 21;
			this->btn_update_1->Text = L"Update Students";
			this->btn_update_1->UseVisualStyleBackColor = true;
			this->btn_update_1->Click += gcnew System::EventHandler(this, &stu::btn_update_1_Click_1);
			// 
			// btn_load_1
			// 
			this->btn_load_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_1->Location = System::Drawing::Point(44, 156);
			this->btn_load_1->Name = L"btn_load_1";
			this->btn_load_1->Size = System::Drawing::Size(156, 33);
			this->btn_load_1->TabIndex = 16;
			this->btn_load_1->Text = L"Load Students";
			this->btn_load_1->UseVisualStyleBackColor = true;
			this->btn_load_1->Click += gcnew System::EventHandler(this, &stu::btn_load_1_Click_1);
			// 
			// btn_save_1
			// 
			this->btn_save_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_1->Location = System::Drawing::Point(44, 213);
			this->btn_save_1->Name = L"btn_save_1";
			this->btn_save_1->Size = System::Drawing::Size(156, 33);
			this->btn_save_1->TabIndex = 17;
			this->btn_save_1->Text = L"Save Students";
			this->btn_save_1->UseVisualStyleBackColor = true;
			this->btn_save_1->Click += gcnew System::EventHandler(this, &stu::btn_save_1_Click);
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
			this->btn_clear_1->Click += gcnew System::EventHandler(this, &stu::btn_clear_1_Click);
			// 
			// btn_add_1
			// 
			this->btn_add_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_1->Location = System::Drawing::Point(44, 380);
			this->btn_add_1->Name = L"btn_add_1";
			this->btn_add_1->Size = System::Drawing::Size(156, 33);
			this->btn_add_1->TabIndex = 20;
			this->btn_add_1->Text = L"Add Students";
			this->btn_add_1->UseVisualStyleBackColor = true;
			this->btn_add_1->Click += gcnew System::EventHandler(this, &stu::btn_add_1_Click);
			// 
			// btn_delete_1
			// 
			this->btn_delete_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_1->Location = System::Drawing::Point(44, 327);
			this->btn_delete_1->Name = L"btn_delete_1";
			this->btn_delete_1->Size = System::Drawing::Size(156, 33);
			this->btn_delete_1->TabIndex = 19;
			this->btn_delete_1->Text = L"Delete Students";
			this->btn_delete_1->UseVisualStyleBackColor = true;
			this->btn_delete_1->Click += gcnew System::EventHandler(this, &stu::btn_delete_1_Click_1);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->tb_search_1);
			this->panel4->Controls->Add(this->btn_search_1);
			this->panel4->Controls->Add(this->groupBox17);
			this->panel4->Controls->Add(this->groupBox4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(324, 542);
			this->panel4->TabIndex = 11;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &stu::panel4_Paint);
			// 
			// tb_search_1
			// 
			this->tb_search_1->Location = System::Drawing::Point(35, 434);
			this->tb_search_1->Name = L"tb_search_1";
			this->tb_search_1->Size = System::Drawing::Size(216, 30);
			this->tb_search_1->TabIndex = 25;
			// 
			// btn_search_1
			// 
			this->btn_search_1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_1->Location = System::Drawing::Point(85, 486);
			this->btn_search_1->Name = L"btn_search_1";
			this->btn_search_1->Size = System::Drawing::Size(118, 33);
			this->btn_search_1->TabIndex = 24;
			this->btn_search_1->Text = L"Search";
			this->btn_search_1->UseVisualStyleBackColor = true;
			this->btn_search_1->Click += gcnew System::EventHandler(this, &stu::btn_search_1_Click);
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->label82);
			this->groupBox17->Controls->Add(this->label83);
			this->groupBox17->Controls->Add(this->cb_grade_1);
			this->groupBox17->Controls->Add(this->cb_subject_1);
			this->groupBox17->Location = System::Drawing::Point(5, 240);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(310, 160);
			this->groupBox17->TabIndex = 23;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Subject Info";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(12, 45);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(90, 26);
			this->label82->TabIndex = 6;
			this->label82->Text = L"Subjects  :";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(13, 91);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(75, 26);
			this->label83->TabIndex = 7;
			this->label83->Text = L"Grades :";
			// 
			// cb_grade_1
			// 
			this->cb_grade_1->FormattingEnabled = true;
			this->cb_grade_1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_1->Location = System::Drawing::Point(124, 91);
			this->cb_grade_1->Name = L"cb_grade_1";
			this->cb_grade_1->Size = System::Drawing::Size(169, 31);
			this->cb_grade_1->TabIndex = 8;
			this->cb_grade_1->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_1_TextChanged);
			// 
			// cb_subject_1
			// 
			this->cb_subject_1->FormattingEnabled = true;
			this->cb_subject_1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"English Language (2)", L"Business Organization", 
				L"Mathematics (2)", L"Physics (2)", L"Electronics", L"Structured Programming"});
			this->cb_subject_1->Location = System::Drawing::Point(124, 45);
			this->cb_subject_1->Name = L"cb_subject_1";
			this->cb_subject_1->Size = System::Drawing::Size(169, 31);
			this->cb_subject_1->TabIndex = 9;
			this->cb_subject_1->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_1_SelectedIndexChanged_1);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->cb_fees_1);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label51);
			this->groupBox4->Controls->Add(this->label55);
			this->groupBox4->Controls->Add(this->tb_fn_1);
			this->groupBox4->Controls->Add(this->tb_id_1);
			this->groupBox4->Controls->Add(this->tb_ln_1);
			this->groupBox4->Location = System::Drawing::Point(5, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(310, 221);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Student Info";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &stu::groupBox4_Enter);
			// 
			// cb_fees_1
			// 
			this->cb_fees_1->FormattingEnabled = true;
			this->cb_fees_1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_1->Location = System::Drawing::Point(130, 155);
			this->cb_fees_1->Name = L"cb_fees_1";
			this->cb_fees_1->Size = System::Drawing::Size(169, 31);
			this->cb_fees_1->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 26);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Fees  :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 26);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ID :";
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(12, 71);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(114, 20);
			this->label51->TabIndex = 3;
			this->label51->Text = L"First Name :";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(12, 111);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(103, 26);
			this->label55->TabIndex = 4;
			this->label55->Text = L"Last Name :";
			// 
			// tb_fn_1
			// 
			this->tb_fn_1->Location = System::Drawing::Point(130, 71);
			this->tb_fn_1->Name = L"tb_fn_1";
			this->tb_fn_1->Size = System::Drawing::Size(169, 30);
			this->tb_fn_1->TabIndex = 0;
			this->tb_fn_1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_1_KeyPress_1);
			// 
			// tb_id_1
			// 
			this->tb_id_1->Location = System::Drawing::Point(130, 35);
			this->tb_id_1->Name = L"tb_id_1";
			this->tb_id_1->Size = System::Drawing::Size(169, 30);
			this->tb_id_1->TabIndex = 10;
			this->tb_id_1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_1_KeyPress_1);
			// 
			// tb_ln_1
			// 
			this->tb_ln_1->Location = System::Drawing::Point(130, 111);
			this->tb_ln_1->Name = L"tb_ln_1";
			this->tb_ln_1->Size = System::Drawing::Size(169, 30);
			this->tb_ln_1->TabIndex = 1;
			this->tb_ln_1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_1_KeyPress_1);
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
			this->tabControl1->Size = System::Drawing::Size(1300, 626);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 32);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1292, 590);
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
			this->tabControl3->Size = System::Drawing::Size(1286, 584);
			this->tabControl3->TabIndex = 1;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->lb_students4);
			this->tabPage7->Controls->Add(this->panel5);
			this->tabPage7->Controls->Add(this->panel6);
			this->tabPage7->Location = System::Drawing::Point(4, 32);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1278, 548);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"First Term";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// lb_students4
			// 
			this->lb_students4->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students4->FormattingEnabled = true;
			this->lb_students4->ItemHeight = 23;
			this->lb_students4->Location = System::Drawing::Point(572, 3);
			this->lb_students4->Name = L"lb_students4";
			this->lb_students4->Size = System::Drawing::Size(703, 542);
			this->lb_students4->TabIndex = 13;
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
			this->panel5->Size = System::Drawing::Size(948, 542);
			this->panel5->TabIndex = 12;
			// 
			// btn_update_4
			// 
			this->btn_update_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_update_4->Location = System::Drawing::Point(44, 432);
			this->btn_update_4->Name = L"btn_update_4";
			this->btn_update_4->Size = System::Drawing::Size(156, 33);
			this->btn_update_4->TabIndex = 21;
			this->btn_update_4->Text = L"Update Students";
			this->btn_update_4->UseVisualStyleBackColor = true;
			this->btn_update_4->Click += gcnew System::EventHandler(this, &stu::btn_update_4_Click);
			// 
			// btn_load_4
			// 
			this->btn_load_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_4->Location = System::Drawing::Point(44, 156);
			this->btn_load_4->Name = L"btn_load_4";
			this->btn_load_4->Size = System::Drawing::Size(156, 33);
			this->btn_load_4->TabIndex = 16;
			this->btn_load_4->Text = L"Load Students";
			this->btn_load_4->UseVisualStyleBackColor = true;
			this->btn_load_4->Click += gcnew System::EventHandler(this, &stu::btn_load_4_Click);
			// 
			// btn_save_4
			// 
			this->btn_save_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_4->Location = System::Drawing::Point(44, 213);
			this->btn_save_4->Name = L"btn_save_4";
			this->btn_save_4->Size = System::Drawing::Size(156, 33);
			this->btn_save_4->TabIndex = 17;
			this->btn_save_4->Text = L"Save Students";
			this->btn_save_4->UseVisualStyleBackColor = true;
			this->btn_save_4->Click += gcnew System::EventHandler(this, &stu::btn_save_4_Click);
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
			this->btn_clear_4->Click += gcnew System::EventHandler(this, &stu::btn_clear_4_Click);
			// 
			// btn_add_4
			// 
			this->btn_add_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_4->Location = System::Drawing::Point(44, 380);
			this->btn_add_4->Name = L"btn_add_4";
			this->btn_add_4->Size = System::Drawing::Size(156, 33);
			this->btn_add_4->TabIndex = 20;
			this->btn_add_4->Text = L"Add Students";
			this->btn_add_4->UseVisualStyleBackColor = true;
			this->btn_add_4->Click += gcnew System::EventHandler(this, &stu::btn_add_4_Click);
			// 
			// btn_delete_4
			// 
			this->btn_delete_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_4->Location = System::Drawing::Point(44, 327);
			this->btn_delete_4->Name = L"btn_delete_4";
			this->btn_delete_4->Size = System::Drawing::Size(156, 33);
			this->btn_delete_4->TabIndex = 19;
			this->btn_delete_4->Text = L"Delete Students";
			this->btn_delete_4->UseVisualStyleBackColor = true;
			this->btn_delete_4->Click += gcnew System::EventHandler(this, &stu::btn_delete_4_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->tb_search_4);
			this->panel6->Controls->Add(this->btn_search_4);
			this->panel6->Controls->Add(this->groupBox9);
			this->panel6->Controls->Add(this->groupBox10);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(324, 542);
			this->panel6->TabIndex = 11;
			// 
			// tb_search_4
			// 
			this->tb_search_4->Location = System::Drawing::Point(35, 434);
			this->tb_search_4->Name = L"tb_search_4";
			this->tb_search_4->Size = System::Drawing::Size(216, 30);
			this->tb_search_4->TabIndex = 27;
			// 
			// btn_search_4
			// 
			this->btn_search_4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_4->Location = System::Drawing::Point(85, 486);
			this->btn_search_4->Name = L"btn_search_4";
			this->btn_search_4->Size = System::Drawing::Size(118, 33);
			this->btn_search_4->TabIndex = 26;
			this->btn_search_4->Text = L"Search";
			this->btn_search_4->UseVisualStyleBackColor = true;
			this->btn_search_4->Click += gcnew System::EventHandler(this, &stu::btn_search_4_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label14);
			this->groupBox9->Controls->Add(this->label18);
			this->groupBox9->Controls->Add(this->cb_grade_4);
			this->groupBox9->Controls->Add(this->cb_subject_4);
			this->groupBox9->Location = System::Drawing::Point(5, 240);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(310, 160);
			this->groupBox9->TabIndex = 23;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Subject Info";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(12, 45);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(90, 26);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Subjects  :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(13, 91);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 26);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Grades :";
			// 
			// cb_grade_4
			// 
			this->cb_grade_4->FormattingEnabled = true;
			this->cb_grade_4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_4->Location = System::Drawing::Point(124, 91);
			this->cb_grade_4->Name = L"cb_grade_4";
			this->cb_grade_4->Size = System::Drawing::Size(169, 31);
			this->cb_grade_4->TabIndex = 9;
			this->cb_grade_4->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_4_TextChanged);
			// 
			// cb_subject_4
			// 
			this->cb_subject_4->FormattingEnabled = true;
			this->cb_subject_4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Formal Languages & Automata", L"Numerical Computing Methods", 
				L"Logic Programming", L"Analysis and Design of Algorithms", L"Software Engineering", L"Assembly Language"});
			this->cb_subject_4->Location = System::Drawing::Point(124, 45);
			this->cb_subject_4->Name = L"cb_subject_4";
			this->cb_subject_4->Size = System::Drawing::Size(169, 31);
			this->cb_subject_4->TabIndex = 8;
			this->cb_subject_4->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_4_SelectedIndexChanged);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->cb_fees_4);
			this->groupBox10->Controls->Add(this->label11);
			this->groupBox10->Controls->Add(this->label13);
			this->groupBox10->Controls->Add(this->label66);
			this->groupBox10->Controls->Add(this->label67);
			this->groupBox10->Controls->Add(this->tb_fn_4);
			this->groupBox10->Controls->Add(this->tb_id_4);
			this->groupBox10->Controls->Add(this->tb_ln_4);
			this->groupBox10->Location = System::Drawing::Point(5, 3);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(310, 221);
			this->groupBox10->TabIndex = 22;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Student Info";
			// 
			// cb_fees_4
			// 
			this->cb_fees_4->FormattingEnabled = true;
			this->cb_fees_4->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_4->Location = System::Drawing::Point(130, 155);
			this->cb_fees_4->Name = L"cb_fees_4";
			this->cb_fees_4->Size = System::Drawing::Size(169, 31);
			this->cb_fees_4->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 26);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Fees  :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(12, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 26);
			this->label13->TabIndex = 11;
			this->label13->Text = L"ID :";
			// 
			// label66
			// 
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(12, 71);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(114, 20);
			this->label66->TabIndex = 3;
			this->label66->Text = L"First Name :";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(12, 111);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(103, 26);
			this->label67->TabIndex = 4;
			this->label67->Text = L"Last Name :";
			// 
			// tb_fn_4
			// 
			this->tb_fn_4->Location = System::Drawing::Point(130, 71);
			this->tb_fn_4->Name = L"tb_fn_4";
			this->tb_fn_4->Size = System::Drawing::Size(169, 30);
			this->tb_fn_4->TabIndex = 0;
			this->tb_fn_4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_4_KeyPress);
			// 
			// tb_id_4
			// 
			this->tb_id_4->Location = System::Drawing::Point(130, 35);
			this->tb_id_4->Name = L"tb_id_4";
			this->tb_id_4->Size = System::Drawing::Size(169, 30);
			this->tb_id_4->TabIndex = 10;
			this->tb_id_4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_4_KeyPress);
			// 
			// tb_ln_4
			// 
			this->tb_ln_4->Location = System::Drawing::Point(130, 111);
			this->tb_ln_4->Name = L"tb_ln_4";
			this->tb_ln_4->Size = System::Drawing::Size(169, 30);
			this->tb_ln_4->TabIndex = 1;
			this->tb_ln_4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_4_KeyPress);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->lb_students5);
			this->tabPage8->Controls->Add(this->panel7);
			this->tabPage8->Controls->Add(this->panel8);
			this->tabPage8->Location = System::Drawing::Point(4, 32);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1278, 548);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Second Term";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// lb_students5
			// 
			this->lb_students5->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_students5->FormattingEnabled = true;
			this->lb_students5->ItemHeight = 23;
			this->lb_students5->Location = System::Drawing::Point(572, 3);
			this->lb_students5->Name = L"lb_students5";
			this->lb_students5->Size = System::Drawing::Size(703, 542);
			this->lb_students5->TabIndex = 13;
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
			this->panel7->Size = System::Drawing::Size(948, 542);
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
			this->btn_update_5->Text = L"Update Students";
			this->btn_update_5->UseVisualStyleBackColor = true;
			this->btn_update_5->Click += gcnew System::EventHandler(this, &stu::btn_update_5_Click);
			// 
			// btn_load_5
			// 
			this->btn_load_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_load_5->Location = System::Drawing::Point(44, 156);
			this->btn_load_5->Name = L"btn_load_5";
			this->btn_load_5->Size = System::Drawing::Size(156, 33);
			this->btn_load_5->TabIndex = 16;
			this->btn_load_5->Text = L"Load Students";
			this->btn_load_5->UseVisualStyleBackColor = true;
			this->btn_load_5->Click += gcnew System::EventHandler(this, &stu::btn_load_5_Click);
			// 
			// btn_save_5
			// 
			this->btn_save_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_save_5->Location = System::Drawing::Point(44, 213);
			this->btn_save_5->Name = L"btn_save_5";
			this->btn_save_5->Size = System::Drawing::Size(156, 33);
			this->btn_save_5->TabIndex = 17;
			this->btn_save_5->Text = L"Save Students";
			this->btn_save_5->UseVisualStyleBackColor = true;
			this->btn_save_5->Click += gcnew System::EventHandler(this, &stu::btn_save_5_Click);
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
			this->btn_clear_5->Click += gcnew System::EventHandler(this, &stu::btn_clear_5_Click);
			// 
			// btn_add_5
			// 
			this->btn_add_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add_5->Location = System::Drawing::Point(44, 380);
			this->btn_add_5->Name = L"btn_add_5";
			this->btn_add_5->Size = System::Drawing::Size(156, 33);
			this->btn_add_5->TabIndex = 20;
			this->btn_add_5->Text = L"Add Students";
			this->btn_add_5->UseVisualStyleBackColor = true;
			this->btn_add_5->Click += gcnew System::EventHandler(this, &stu::btn_add_5_Click);
			// 
			// btn_delete_5
			// 
			this->btn_delete_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete_5->Location = System::Drawing::Point(44, 327);
			this->btn_delete_5->Name = L"btn_delete_5";
			this->btn_delete_5->Size = System::Drawing::Size(156, 33);
			this->btn_delete_5->TabIndex = 19;
			this->btn_delete_5->Text = L"Delete Students";
			this->btn_delete_5->UseVisualStyleBackColor = true;
			this->btn_delete_5->Click += gcnew System::EventHandler(this, &stu::btn_delete_5_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->tb_search_5);
			this->panel8->Controls->Add(this->btn_search_5);
			this->panel8->Controls->Add(this->groupBox11);
			this->panel8->Controls->Add(this->groupBox12);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel8->Location = System::Drawing::Point(3, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(324, 542);
			this->panel8->TabIndex = 11;
			// 
			// tb_search_5
			// 
			this->tb_search_5->Location = System::Drawing::Point(35, 434);
			this->tb_search_5->Name = L"tb_search_5";
			this->tb_search_5->Size = System::Drawing::Size(216, 30);
			this->tb_search_5->TabIndex = 27;
			// 
			// btn_search_5
			// 
			this->btn_search_5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search_5->Location = System::Drawing::Point(85, 486);
			this->btn_search_5->Name = L"btn_search_5";
			this->btn_search_5->Size = System::Drawing::Size(118, 33);
			this->btn_search_5->TabIndex = 26;
			this->btn_search_5->Text = L"Search";
			this->btn_search_5->UseVisualStyleBackColor = true;
			this->btn_search_5->Click += gcnew System::EventHandler(this, &stu::btn_search_5_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label20);
			this->groupBox11->Controls->Add(this->label24);
			this->groupBox11->Controls->Add(this->cb_grade_5);
			this->groupBox11->Controls->Add(this->cb_subject_5);
			this->groupBox11->Location = System::Drawing::Point(5, 240);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(310, 160);
			this->groupBox11->TabIndex = 23;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Subject Info";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(12, 45);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 26);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Subjects  :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(13, 91);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(75, 26);
			this->label24->TabIndex = 7;
			this->label24->Text = L"Grades :";
			// 
			// cb_grade_5
			// 
			this->cb_grade_5->FormattingEnabled = true;
			this->cb_grade_5->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"0", L"0", L"0", L"0", L"0", L"0"});
			this->cb_grade_5->Location = System::Drawing::Point(124, 91);
			this->cb_grade_5->Name = L"cb_grade_5";
			this->cb_grade_5->Size = System::Drawing::Size(169, 31);
			this->cb_grade_5->TabIndex = 9;
			this->cb_grade_5->TextChanged += gcnew System::EventHandler(this, &stu::cb_grade_5_TextChanged);
			// 
			// cb_subject_5
			// 
			this->cb_subject_5->FormattingEnabled = true;
			this->cb_subject_5->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Systems Analysis and Design", L"Operating Systems", 
				L"Database Management Systems", L"Artificial Intelligence", L"Computer Graphics", L"Computer Arch. & Organization"});
			this->cb_subject_5->Location = System::Drawing::Point(124, 45);
			this->cb_subject_5->Name = L"cb_subject_5";
			this->cb_subject_5->Size = System::Drawing::Size(169, 31);
			this->cb_subject_5->TabIndex = 8;
			this->cb_subject_5->SelectedIndexChanged += gcnew System::EventHandler(this, &stu::cb_subject_5_SelectedIndexChanged);
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->cb_fees_5);
			this->groupBox12->Controls->Add(this->label12);
			this->groupBox12->Controls->Add(this->label19);
			this->groupBox12->Controls->Add(this->label70);
			this->groupBox12->Controls->Add(this->label71);
			this->groupBox12->Controls->Add(this->tb_fn_5);
			this->groupBox12->Controls->Add(this->tb_id_5);
			this->groupBox12->Controls->Add(this->tb_ln_5);
			this->groupBox12->Location = System::Drawing::Point(5, 3);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(310, 221);
			this->groupBox12->TabIndex = 22;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Student Info";
			// 
			// cb_fees_5
			// 
			this->cb_fees_5->FormattingEnabled = true;
			this->cb_fees_5->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->cb_fees_5->Location = System::Drawing::Point(130, 155);
			this->cb_fees_5->Name = L"cb_fees_5";
			this->cb_fees_5->Size = System::Drawing::Size(169, 31);
			this->cb_fees_5->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 153);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 26);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Fees  :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(12, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 26);
			this->label19->TabIndex = 11;
			this->label19->Text = L"ID :";
			// 
			// label70
			// 
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(12, 71);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(114, 20);
			this->label70->TabIndex = 3;
			this->label70->Text = L"First Name :";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(12, 111);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(103, 26);
			this->label71->TabIndex = 4;
			this->label71->Text = L"Last Name :";
			// 
			// tb_fn_5
			// 
			this->tb_fn_5->Location = System::Drawing::Point(130, 71);
			this->tb_fn_5->Name = L"tb_fn_5";
			this->tb_fn_5->Size = System::Drawing::Size(169, 30);
			this->tb_fn_5->TabIndex = 0;
			this->tb_fn_5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_fn_5_KeyPress);
			// 
			// tb_id_5
			// 
			this->tb_id_5->Location = System::Drawing::Point(130, 35);
			this->tb_id_5->Name = L"tb_id_5";
			this->tb_id_5->Size = System::Drawing::Size(169, 30);
			this->tb_id_5->TabIndex = 10;
			this->tb_id_5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_id_5_KeyPress);
			// 
			// tb_ln_5
			// 
			this->tb_ln_5->Location = System::Drawing::Point(130, 111);
			this->tb_ln_5->Name = L"tb_ln_5";
			this->tb_ln_5->Size = System::Drawing::Size(169, 30);
			this->tb_ln_5->TabIndex = 1;
			this->tb_ln_5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &stu::tb_ln_5_KeyPress);
			// 
			// stu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 626);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"stu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Students";
			this->Load += gcnew System::EventHandler(this, &stu::stu_Load);
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void clearControls()
				 {
					 textBox1->Text = "";
					 textBox4->Text = "";
					 textBox5->Text = "";
					 
					 comboBox1->SelectedIndex = -1;
					 comboBox2->SelectedIndex = -1;
					 cb_fees->SelectedIndex = -1;
					 comboBox2->Items->Clear();
					 //cb_fees->Items->Clear();
					 comboBox2->Items->Add(0);
					 comboBox2->Items->Add(0);
					 comboBox2->Items->Add(0);
					 comboBox2->Items->Add(0);
					 comboBox2->Items->Add(0);
					 comboBox2->Items->Add(0);

				 }

private: void clearControls1()
				 {
					 tb_id_1->Text = "";
					 tb_fn_1->Text = "";
					 tb_ln_1->Text = "";
					
					 cb_subject_1->SelectedIndex = -1;
					 cb_grade_1->SelectedIndex = -1;
					 cb_grade_1->Items->Clear();
					 //cb_fees_1->Items->Clear();
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);
					 cb_grade_1->Items->Add(0);

				 }

private: void clearControls2()
				 {
					 tb_id_2->Text = "";
					 tb_fn_2->Text = "";
					 tb_ln_2->Text = "";
					 //cb_fees_2->Items->Clear();
					 cb_subject_2->SelectedIndex = -1;
					 cb_grade_2->SelectedIndex = -1;
					 cb_grade_2->Items->Clear();
					 cb_grade_2->Items->Add(0);
					 cb_grade_2->Items->Add(0);
					 cb_grade_2->Items->Add(0);
					 cb_grade_2->Items->Add(0);
					 cb_grade_2->Items->Add(0);
					 cb_grade_2->Items->Add(0);

				 }

private: void clearControls3()
				 {
					 tb_id_3->Text = "";
					 tb_fn_3->Text = "";
					 tb_ln_3->Text = "";
					 //cb_fees_3->Items->Clear();
					 cb_subject_3->SelectedIndex = -1;
					 cb_grade_3->SelectedIndex = -1;
					 cb_grade_3->Items->Clear();
					 cb_grade_3->Items->Add(0);
					 cb_grade_3->Items->Add(0);
					 cb_grade_3->Items->Add(0);
					 cb_grade_3->Items->Add(0);
					 cb_grade_3->Items->Add(0);
					 cb_grade_3->Items->Add(0);

				 }


private: void clearControls4()
				 {
					 tb_id_4->Text = "";
					 tb_fn_4->Text = "";
					 tb_ln_4->Text = "";
					 //cb_fees_4->Items->Clear();
					 cb_subject_4->SelectedIndex = -1;
					 cb_grade_4->SelectedIndex = -1;
					 cb_grade_4->Items->Clear();
					 cb_grade_4->Items->Add(0);
					 cb_grade_4->Items->Add(0);
					 cb_grade_4->Items->Add(0);
					 cb_grade_4->Items->Add(0);
					 cb_grade_4->Items->Add(0);
					 cb_grade_4->Items->Add(0);

				 }

private: void clearControls5()
				 {
					 tb_id_5->Text = "";
					 tb_fn_5->Text = "";
					 tb_ln_5->Text = "";
					 //cb_fees_5->Items->Clear();
					 cb_subject_5->SelectedIndex = -1;
					 cb_grade_5->SelectedIndex = -1;
					 cb_grade_5->Items->Clear();
					 cb_grade_5->Items->Add(0);
					 cb_grade_5->Items->Add(0);
					 cb_grade_5->Items->Add(0);
					 cb_grade_5->Items->Add(0);
					 cb_grade_5->Items->Add(0);
					 cb_grade_5->Items->Add(0);

				 }

private: void clearControls6()
				 {
					 tb_id_6->Text = "";
					 tb_fn_6->Text = "";
					 tb_ln_6->Text = "";
					 //cb_fees_6->Items->Clear();
					 cb_subject_6->SelectedIndex = -1;
					 cb_grade_6->SelectedIndex = -1;
					 cb_grade_6->Items->Clear();
					 cb_grade_6->Items->Add(0);
					 cb_grade_6->Items->Add(0);
					 cb_grade_6->Items->Add(0);
					 cb_grade_6->Items->Add(0);
					 cb_grade_6->Items->Add(0);
					 cb_grade_6->Items->Add(0);

				 }
private: void clearControls7()
				 {
					 tb_id_7->Text = "";
					 tb_fn_7->Text = "";
					 tb_ln_7->Text = "";
					 //cb_fees_7->Items->Clear();
					 cb_subject_7->SelectedIndex = -1;
					 cb_grade_7->SelectedIndex = -1;
					 cb_grade_7->Items->Clear();
					 cb_grade_7->Items->Add(0);
					 cb_grade_7->Items->Add(0);
					 cb_grade_7->Items->Add(0);
					 cb_grade_7->Items->Add(0);
					 cb_grade_7->Items->Add(0);
					 cb_grade_7->Items->Add(0);

				 }



		
		 // function //////
		 int splite_string(String^ s)
		 {

				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search->Text->ToLower())
				 {
				 textBox1->Text=result[0];
				 textBox4->Text=result[1];
				 textBox5->Text=result[2];
				 cb_fees->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 comboBox2->Items[0]=result[4];
				 comboBox2->Items[1]=result[5];
				 comboBox2->Items[2]=result[6];
				 comboBox2->Items[3]=result[7];
				 comboBox2->Items[4]=result[8];
				 comboBox2->Items[5]=result[9];

				 return 1;
				 }
				 
		}

 int splite_string1(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_1->Text->ToLower())
				 {
				 tb_id_1->Text=result[0];
				 tb_fn_1->Text=result[1];
				 tb_ln_1->Text=result[2];
				 cb_fees_1->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_1->Items[0]=result[4];
				 cb_grade_1->Items[1]=result[5];
				 cb_grade_1->Items[2]=result[6];
				 cb_grade_1->Items[3]=result[7];
				 cb_grade_1->Items[4]=result[8];
				 cb_grade_1->Items[5]=result[9];

				 return 1;
				 }
				 
		}


 int splite_string2(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_2->Text->ToLower())
				 {
				 tb_id_2->Text=result[0];
				 tb_fn_2->Text=result[1];
				 tb_ln_2->Text=result[2];
				 cb_fees_2->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_2->Items[0]=result[4];
				 cb_grade_2->Items[1]=result[5];
				 cb_grade_2->Items[2]=result[6];
				 cb_grade_2->Items[3]=result[7];
				 cb_grade_2->Items[4]=result[8];
				 cb_grade_2->Items[5]=result[9];

				 return 1;
				 }
				 
		}
				 
		


   int splite_string3(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_3->Text->ToLower())
				 {
				 tb_id_3->Text=result[0];
				 tb_fn_3->Text=result[1];
				 tb_ln_3->Text=result[2];
				 cb_fees_3->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_3->Items[0]=result[4];
				 cb_grade_3->Items[1]=result[5];
				 cb_grade_3->Items[2]=result[6];
				 cb_grade_3->Items[3]=result[7];
				 cb_grade_3->Items[4]=result[8];
				 cb_grade_3->Items[5]=result[9];

				 return 1;
				 }
				 
		}


 int splite_string4(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_4->Text->ToLower())
				 {
				 tb_id_4->Text=result[0];
				 tb_fn_4->Text=result[1];
				 tb_ln_4->Text=result[2];
				 cb_fees_4->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_4->Items[0]=result[4];
				 cb_grade_4->Items[1]=result[5];
				 cb_grade_4->Items[2]=result[6];
				 cb_grade_4->Items[3]=result[7];
				 cb_grade_4->Items[4]=result[8];
				 cb_grade_4->Items[5]=result[9];

				 return 1;
				 }
				 
		}


	  int splite_string5(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_5->Text->ToLower())
				 {
				 tb_id_5->Text=result[0];
				 tb_fn_5->Text=result[1];
				 tb_ln_5->Text=result[2];
				 cb_fees_5->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_5->Items[0]=result[4];
				 cb_grade_5->Items[1]=result[5];
				 cb_grade_5->Items[2]=result[6];
				 cb_grade_5->Items[3]=result[7];
				 cb_grade_5->Items[4]=result[8];
				 cb_grade_5->Items[5]=result[9];

				 return 1;
				 }
				 
		}



	 int splite_string6(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_6->Text->ToLower())
				 {
				 tb_id_6->Text=result[0];
				 tb_fn_6->Text=result[1];
				 tb_ln_6->Text=result[2];
				 cb_fees_6->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_6->Items[0]=result[4];
				 cb_grade_6->Items[1]=result[5];
				 cb_grade_6->Items[2]=result[6];
				 cb_grade_6->Items[3]=result[7];
				 cb_grade_6->Items[4]=result[8];
				 cb_grade_6->Items[5]=result[9];

				 return 1;
				 }
				 
		}



 int splite_string7(String^ s)
		 {
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0]->ToLower()==tb_search_7->Text->ToLower())
				 {
				 tb_id_7->Text=result[0];
				 tb_fn_7->Text=result[1];
				 tb_ln_7->Text=result[2];
				 cb_fees_7->Text=result[3];
				 /*listBox1->SelectedItem=result[3];*/
				 cb_grade_7->Items[0]=result[4];
				 cb_grade_7->Items[1]=result[5];
				 cb_grade_7->Items[2]=result[6];
				 cb_grade_7->Items[3]=result[7];
				 cb_grade_7->Items[4]=result[8];
				 cb_grade_7->Items[5]=result[9];

				 return 1;
				 }
				 
		}

//
//
//
//
//

//First Year(First Term)

private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }

		 }
private: System::Void textBox4_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }

		 }
private: System::Void textBox5_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
          		 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }

		 }

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(comboBox1->SelectedIndex != -1)
				 {
					 comboBox2->SelectedIndex = comboBox1->SelectedIndex;
				 }
			 }

private: System::Void comboBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

					if(comboBox1->SelectedIndex != -1)
					{
						comboBox2->Items[comboBox1->SelectedIndex] = comboBox2->Text;
					}
		 }

	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void stu_Load(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
    //    	/*int counter = lb_students->Items->Count;*/
			 //if(lb_students->TopIndex != lb_students->SelectedIndex)
			 //lb_students->TopIndex=lb_students->SelectedIndex;
			 //for(int x=(lb_students->SelectedIndex-1);x>=0;x--)
			 //{
				// 			 			 lb_students->Items->RemoveAt(x);

			 //}
			 //lb_students->ClearSelected();


		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 StreamReader^ sr = gcnew StreamReader ("student.txt",true);
			 while(!sr->EndOfStream)
			 {
				 lb_students->Items->Add(sr->ReadLine());
			 }
			 sr->Close();
			 clearControls();

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 StreamWriter^ sw = gcnew StreamWriter("student.txt",true);
			 int counter = lb_students->Items->Count;
			 for(int i=0; i<counter;i++)
			 {
				 sw->WriteLine(lb_students->Items[i]);
			 }
			 sw->Close();
		clearControls();
		
		 
		 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 clearControls();

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 lb_students->Items->Remove(lb_students->SelectedItem);

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 		
			 String^ stuInfo = "";
			String^ fullName = textBox1->Text + "\t" + textBox4->Text +"\t  "+textBox5->Text + "\t" + cb_fees->Text;
			String^ grades = comboBox2->Items[0]->ToString() + "\t" +
							 comboBox2->Items[1]->ToString() + "\t" +
							 comboBox2->Items[2]->ToString() + "\t" +
							 comboBox2->Items[3]->ToString() + "\t" +
							 comboBox2->Items[4]->ToString() + "\t" +
							 comboBox2->Items[5]->ToString();

			stuInfo = fullName + "\t"  + grades;
			lb_students->Items->Add(stuInfo);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
			   String^ stuInfo = "";
			String^ fullName = textBox1->Text + "\t" + textBox4->Text +"\t "+textBox5->Text  + "\t" + cb_fees->Text;
			String^ grades = comboBox2->Items[0]->ToString() + "\t" +
							 comboBox2->Items[1]->ToString() + "\t" +
							 comboBox2->Items[2]->ToString() + "\t" +
							 comboBox2->Items[3]->ToString() + "\t" +
							 comboBox2->Items[4]->ToString() + "\t" +
							 comboBox2->Items[5]->ToString();
			stuInfo = fullName + "\t"  + grades;
			lb_students->Items[lb_students->SelectedIndex] = stuInfo;
			
		 }

private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {
	 StreamReader^ re=gcnew StreamReader("student.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string(re->ReadLine()))
					 {
						 break;
					 } 
				 }

				 re->Close();
		 }
				 
		 

private: System::Void label50_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label53_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label85_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }



		


// First Year (Second Term)

private: System::Void tb_id_1_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }

		 }
private: System::Void tb_fn_1_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 
		 }
private: System::Void tb_ln_1_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		  char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
}
	

 private: System::Void cb_subject_1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
				 if(cb_subject_1->SelectedIndex != -1)
				 {
					 cb_grade_1->SelectedIndex = cb_subject_1->SelectedIndex;
				 }

		}

private: System::Void cb_grade_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
					if(cb_subject_1->SelectedIndex != -1)
					{
						cb_grade_1->Items[cb_subject_1->SelectedIndex] = cb_grade_1->Text;
					}

		 }



private: System::Void btn_load_1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		  StreamReader^ sr1= gcnew StreamReader ("student1.txt",true);
			 while(!sr1->EndOfStream)
			 {
				 lb_students1->Items->Add(sr1->ReadLine());
			 }
			 sr1->Close();
			 clearControls1();

		 
		 }
private: System::Void btn_save_1_Click(System::Object^  sender, System::EventArgs^  e) {
			  			 StreamWriter^ sw1 = gcnew StreamWriter("student1.txt",true);
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


private: System::Void btn_delete_1_Click_1(System::Object^  sender, System::EventArgs^  e) {
 lb_students1->Items->Remove(lb_students1->SelectedItem);

		 }


 private: System::Void btn_add_1_Click(System::Object^  sender, System::EventArgs^  e) {
						 			 String^ stuInfo1 = "";
			String^ fullName1 = tb_id_1->Text + "\t" + tb_fn_1->Text +"\t "+tb_ln_1->Text + "\t" + cb_fees_1->Text;
			String^ grades1 = cb_grade_1->Items[0]->ToString() + "\t" +
							 cb_grade_1->Items[1]->ToString() + "\t" +
							 cb_grade_1->Items[2]->ToString() + "\t" +
							 cb_grade_1->Items[3]->ToString() + "\t" +
							 cb_grade_1->Items[4]->ToString() + "\t" +
							 cb_grade_1->Items[5]->ToString();

			stuInfo1 = fullName1 + "\t"  + grades1;
			lb_students1->Items->Add(stuInfo1);
				  }

private: System::Void btn_update_1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 		    String^ stuInfo1 = "";
			String^ fullName1 = tb_id_1->Text + "\t " + tb_fn_1->Text +"\t "+tb_ln_1->Text + "\t " + cb_fees_1->Text;
			String^ grades1 = cb_grade_1->Items[0]->ToString() + "\t" +
							  cb_grade_1->Items[1]->ToString() + "\t" +
							  cb_grade_1->Items[2]->ToString() + "\t"+
							  cb_grade_1->Items[3]->ToString() + "\t" +
							  cb_grade_1->Items[4]->ToString() + "\t" +
							  cb_grade_1->Items[5]->ToString();
		
			stuInfo1 = fullName1 + "\t"  + grades1;
			lb_students1->Items[lb_students1->SelectedIndex] = stuInfo1;

		 }

private: System::Void btn_search_1_Click(System::Object^  sender, System::EventArgs^  e) {
	 StreamReader^ re=gcnew StreamReader("student1.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string1(re->ReadLine()))
					 {
						 break;
					 } 
				 }

				 re->Close();
		 }

		 


//second Year(First Term)

private: System::Void tb_id_2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_fn_2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_ln_2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }



private: System::Void cb_subject_2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(cb_subject_2->SelectedIndex != -1)
				 {
					 cb_grade_2->SelectedIndex = cb_subject_2->SelectedIndex;
				 }

		}

		 
private: System::Void cb_grade_2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
					if(cb_subject_2->SelectedIndex != -1)
					{
						cb_grade_2->Items[cb_subject_2->SelectedIndex] = cb_grade_2->Text;
					}


		 }


private: System::Void btn_load_2_Click(System::Object^  sender, System::EventArgs^  e) {
       		  StreamReader^ sr2= gcnew StreamReader ("student2.txt",true);
			 while(!sr2->EndOfStream)
			 {
				 lb_students2->Items->Add(sr2->ReadLine());
			 }
			 sr2->Close();
			 clearControls2();

		 }


private: System::Void btn_save_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 	  			 StreamWriter^ sw2 = gcnew StreamWriter("student2.txt",true);
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
			String^ fullName2 = tb_id_2->Text + "\t" + tb_fn_2->Text +"\t "+tb_ln_2->Text + "\t" + cb_fees_2->Text;
			String^ grades2 = cb_grade_2->Items[0]->ToString() + "\t" +
							 cb_grade_2->Items[1]->ToString() + "\t" +
							 cb_grade_2->Items[2]->ToString() + "\t" +
							 cb_grade_2->Items[3]->ToString() + "\t" +
							 cb_grade_2->Items[4]->ToString() + "\t" +
							 cb_grade_2->Items[5]->ToString();

			stuInfo2 = fullName2 + "\t"  + grades2;
			lb_students2->Items->Add(stuInfo2);
		 }
private: System::Void btn_update_2_Click(System::Object^  sender, System::EventArgs^  e) {
 		    String^ stuInfo2 = "";
			String^ fullName2 = tb_id_2->Text + "\t " + tb_fn_2->Text +"\t "+tb_ln_2->Text + "\t " + cb_fees_2->Text;
			String^ grades2 = cb_grade_2->Items[0]->ToString() + "\t" +
							  cb_grade_2->Items[1]->ToString() + "\t" +
							  cb_grade_2->Items[2]->ToString() + "\t"+
							  cb_grade_2->Items[3]->ToString() + "\t" +
							  cb_grade_2->Items[4]->ToString() + "\t" +
							  cb_grade_2->Items[5]->ToString();
					stuInfo2 = fullName2 + "\t"  + grades2;
			lb_students2->Items[lb_students2->SelectedIndex] = stuInfo2;

		 }


		 private: System::Void btn_search_2_Click(System::Object^  sender, System::EventArgs^  e) {
		 StreamReader^ re=gcnew StreamReader("student2.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string2(re->ReadLine()))
					 {
						 break;
					 } 
				 }
				 re->Close();
				  }


//second Year(Second Term)

		 private: System::Void tb_id_3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }
				  }
private: System::Void tb_fn_3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_ln_3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }




private: System::Void cb_subject_3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		  if(cb_subject_3->SelectedIndex != -1)
				 {
					 cb_grade_3->SelectedIndex = cb_subject_3->SelectedIndex;
				 }
		 }
private: System::Void cb_grade_3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if(cb_subject_3->SelectedIndex != -1)
					{
						cb_grade_3->Items[cb_subject_3->SelectedIndex] = cb_grade_3->Text;
					}

		 }



private: System::Void btn_load_3_Click(System::Object^  sender, System::EventArgs^  e) {
			  StreamReader^ sr3= gcnew StreamReader ("student3.txt",true);
			 while(!sr3->EndOfStream)
			 {
				 lb_students3->Items->Add(sr3->ReadLine());
			 }
			 sr3->Close();
			 clearControls3();

		 }

private: System::Void btn_save_3_Click(System::Object^  sender, System::EventArgs^  e) {
			  StreamWriter^ sw3 = gcnew StreamWriter("student3.txt",true);
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
			String^ fullName3 = tb_id_3->Text + "\t" + tb_fn_3->Text +"\t "+tb_ln_3->Text + "\t" + cb_fees_3->Text;
			String^ grades3= cb_grade_3->Items[0]->ToString() + "\t" +
							 cb_grade_3->Items[1]->ToString() + "\t" +
							 cb_grade_3->Items[2]->ToString() + "\t" +
							 cb_grade_3->Items[3]->ToString() + "\t" +
							 cb_grade_3->Items[4]->ToString() + "\t" +
							 cb_grade_3->Items[5]->ToString();

			stuInfo3 = fullName3 + "\t"  + grades3;
			lb_students3->Items->Add(stuInfo3);
		 }

private: System::Void btn_update_3_Click(System::Object^  sender, System::EventArgs^  e) {
 		    String^ stuInfo3 = "";
			String^ fullName3 = tb_id_3->Text + "\t " + tb_fn_3->Text +"\t "+tb_ln_3->Text + "\t " + cb_fees_3->Text;
			String^ grades3 = cb_grade_3->Items[0]->ToString() + "\t" +
							  cb_grade_3->Items[1]->ToString() + "\t" +
							  cb_grade_3->Items[2]->ToString() + "\t"+
							  cb_grade_3->Items[3]->ToString() + "\t" +
							  cb_grade_3->Items[4]->ToString() + "\t" +
							  cb_grade_3->Items[5]->ToString();
					stuInfo3 = fullName3 + "\t"  + grades3;
			lb_students3->Items[lb_students3->SelectedIndex] = stuInfo3;

		 }

private: System::Void btn_search_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 		 StreamReader^ re=gcnew StreamReader("student3.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string3(re->ReadLine()))
					 {
						 break;
					 } 
				 }
				 re->Close();
		 }
 			


//Third Year(First Term)
		 private: System::Void tb_id_4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }
				  }
private: System::Void tb_fn_4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_ln_4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
         	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }

private: System::Void cb_subject_4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		  if(cb_subject_4->SelectedIndex != -1)
				 {
					 cb_grade_4->SelectedIndex = cb_subject_4->SelectedIndex;
				 }

		 }
private: System::Void cb_grade_4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if(cb_subject_4->SelectedIndex != -1)
					{
						cb_grade_4->Items[cb_subject_4->SelectedIndex] = cb_grade_4->Text;
					}

		 }

private: System::Void btn_load_4_Click(System::Object^  sender, System::EventArgs^  e) {
			  StreamReader^ sr4= gcnew StreamReader ("student4.txt",true);
			 while(!sr4->EndOfStream)
			 {
				 lb_students4->Items->Add(sr4->ReadLine());
			 }
			 sr4->Close();
			 clearControls4();

		 }
private: System::Void btn_save_4_Click(System::Object^  sender, System::EventArgs^  e) {
			  StreamWriter^ sw4 = gcnew StreamWriter("student4.txt",true);
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
			String^ fullName4 = tb_id_4->Text + "\t" + tb_fn_4->Text +"\t "+tb_ln_4->Text + "\t" + cb_fees_4->Text;
			String^ grades4 = cb_grade_4->Items[0]->ToString() + "\t" +
							 cb_grade_4->Items[1]->ToString() + "\t" +
							 cb_grade_4->Items[2]->ToString() + "\t" +
							 cb_grade_4->Items[3]->ToString() + "\t" +
							 cb_grade_4->Items[4]->ToString() + "\t" +
							 cb_grade_4->Items[5]->ToString();

			stuInfo4 = fullName4 + "\t"  + grades4;
			lb_students4->Items->Add(stuInfo4);

		 }
private: System::Void btn_update_4_Click(System::Object^  sender, System::EventArgs^  e) {
 		    String^ stuInfo4 = "";
			String^ fullName4 = tb_id_4->Text + "\t " + tb_fn_4->Text +"\t "+tb_ln_4->Text + "\t " + cb_fees_4->Text;
			String^ grades4 = cb_grade_4->Items[0]->ToString() + "\t" +
							  cb_grade_4->Items[1]->ToString() + "\t" +
							  cb_grade_4->Items[2]->ToString() + "\t"+
							  cb_grade_4->Items[3]->ToString() + "\t" +
							  cb_grade_4->Items[4]->ToString() + "\t" +
							  cb_grade_4->Items[5]->ToString();
					stuInfo4 = fullName4 + "\t"  + grades4;
			lb_students4->Items[lb_students4->SelectedIndex] = stuInfo4;

		 }

		 private: System::Void btn_search_4_Click(System::Object^  sender, System::EventArgs^  e) {
				StreamReader^ re=gcnew StreamReader("student4.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string4(re->ReadLine()))
					 {
						 break;
					 } 
				 }
				 re->Close();

				  }


//Third Year(Second Term)
		 private: System::Void tb_id_5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }
				  }
private: System::Void tb_fn_5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_ln_5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }

private: System::Void cb_subject_5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		  if(cb_subject_5->SelectedIndex != -1)
				 {
					 cb_grade_5->SelectedIndex = cb_subject_5->SelectedIndex;
				 }

		 }
private: System::Void cb_grade_5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if(cb_subject_5->SelectedIndex != -1)
					{
						cb_grade_5->Items[cb_subject_5->SelectedIndex] = cb_grade_5->Text;
					}

		 }



private: System::Void btn_load_5_Click(System::Object^  sender, System::EventArgs^  e) {
		  StreamReader^ sr5= gcnew StreamReader ("student5.txt",true);
			 while(!sr5->EndOfStream)
			 {
				 lb_students5->Items->Add(sr5->ReadLine());
			 }
			 sr5->Close();
			 clearControls5();
		 }
private: System::Void btn_save_5_Click(System::Object^  sender, System::EventArgs^  e) {
             StreamWriter^ sw5 = gcnew StreamWriter("student5.txt",true);
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
			String^ fullName5 = tb_id_5->Text + "\t" + tb_fn_5->Text +"\t "+tb_ln_5->Text + "\t" + cb_fees_5->Text;
			String^ grades5 = cb_grade_5->Items[0]->ToString() + "\t" +
							 cb_grade_5->Items[1]->ToString() + "\t" +
							 cb_grade_5->Items[2]->ToString() + "\t" +
							 cb_grade_5->Items[3]->ToString() + "\t" +
							 cb_grade_5->Items[4]->ToString() + "\t" +
							 cb_grade_5->Items[5]->ToString();

			stuInfo5 = fullName5 + "\t"  + grades5;
			lb_students5->Items->Add(stuInfo5);

		 }
private: System::Void btn_update_5_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ stuInfo5 = "";
			String^ fullName5 = tb_id_5->Text + "\t " + tb_fn_5->Text +" \t"+tb_ln_5->Text + "\t " + cb_fees_5->Text;
			String^ grades5 = cb_grade_5->Items[0]->ToString() + "\t" +
							  cb_grade_5->Items[1]->ToString() + "\t" +
							  cb_grade_5->Items[2]->ToString() + "\t"+
							  cb_grade_5->Items[3]->ToString() + "\t" +
							  cb_grade_5->Items[4]->ToString() + "\t" +
							  cb_grade_5->Items[5]->ToString();
					stuInfo5 = fullName5 + "\t"  + grades5;
			lb_students5->Items[lb_students5->SelectedIndex] = stuInfo5;

		 }

private: System::Void btn_search_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 				StreamReader^ re=gcnew StreamReader("student5.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string5(re->ReadLine()))
					 {
						 break;
					 } 
				 }
				 re->Close();


		 }







//Forth Year(First Year)
private: System::Void tb_id_6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_fn_6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_ln_6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }

 private: System::Void cb_subject_6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  		  if(cb_subject_6->SelectedIndex != -1)
				 {
					 cb_grade_6->SelectedIndex = cb_subject_6->SelectedIndex;
				 }

		  }
private: System::Void cb_grade_6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if(cb_subject_6->SelectedIndex != -1)
					{
						cb_grade_6->Items[cb_subject_6->SelectedIndex] = cb_grade_6->Text;
					}

		 }


private: System::Void btn_load_6_Click(System::Object^  sender, System::EventArgs^  e) {
		  StreamReader^ sr6= gcnew StreamReader ("student6.txt",true);
			 while(!sr6->EndOfStream)
			 {
				 lb_students6->Items->Add(sr6->ReadLine());
			 }
			 sr6->Close();
			 clearControls6();
		 }
private: System::Void btn_save_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter^ sw6 = gcnew StreamWriter("student6.txt",true);
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
			String^ fullName6 = tb_id_6->Text + "\t" + tb_fn_6->Text +"\t "+tb_ln_6->Text + "\t" + cb_fees_6->Text;
			String^ grades6 = cb_grade_6->Items[0]->ToString() + "\t" +
							 cb_grade_6->Items[1]->ToString() + "\t" +
							 cb_grade_6->Items[2]->ToString() + "\t" +
							 cb_grade_6->Items[3]->ToString() + "\t" +
							 cb_grade_6->Items[4]->ToString() + "\t" +
							 cb_grade_6->Items[5]->ToString();

			stuInfo6 = fullName6 + "\t"  + grades6;
			lb_students6->Items->Add(stuInfo6);
				
		 }
private: System::Void btn_upadate_6_Click(System::Object^  sender, System::EventArgs^  e) {
		  String^ stuInfo6 = "";
			String^ fullName6 = tb_id_6->Text + "\t " + tb_fn_6->Text +"\t "+tb_ln_6->Text  + "\t " + cb_fees_6->Text;
			String^ grades6 = cb_grade_6->Items[0]->ToString() + "\t" +
							  cb_grade_6->Items[1]->ToString() + "\t" +
							  cb_grade_6->Items[2]->ToString() + "\t"+
							  cb_grade_6->Items[3]->ToString() + "\t" +
							  cb_grade_6->Items[4]->ToString() + "\t" +
							  cb_grade_6->Items[5]->ToString();
		
			stuInfo6 = fullName6 + "\t"  + grades6;
			lb_students6->Items[lb_students6->SelectedIndex] = stuInfo6;
		 }

private: System::Void btn_search_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 				StreamReader^ re=gcnew StreamReader("student6.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string6(re->ReadLine()))
					 {
						 break;
					 } 
				 }
				 re->Close();


		 }





//forth Year(Second Term)
private: System::Void tb_id_7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 char ch = e->KeyChar;
			 if(!Char::IsDigit(ch) && ch != 8 && ch!=46)
			 {
				 e->Handled = true;
			 } 
		 }
private: System::Void tb_fn_7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }
private: System::Void tb_ln_7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 	 char ch = e->KeyChar;
			 if(!Char::IsLetter(ch) && ch != 8 && ch!=46 && ch!=32  && ch!=110)
			 {
				 e->Handled = true;
			 }
		 }

private: System::Void cb_subject_7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  		  if(cb_subject_7->SelectedIndex != -1)
				 {
					 cb_grade_7->SelectedIndex = cb_subject_7->SelectedIndex;
				 }

		 }
private: System::Void cb_grade_7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if(cb_subject_7->SelectedIndex != -1)
					{
						cb_grade_7->Items[cb_subject_7->SelectedIndex] = cb_grade_7->Text;
					}

		 }


private: System::Void btn_load_7_Click(System::Object^  sender, System::EventArgs^  e) {
             StreamReader^ sr7= gcnew StreamReader ("student7.txt",true);
			 while(!sr7->EndOfStream)
			 {
				 lb_students7->Items->Add(sr7->ReadLine());
			 }
			 sr7->Close();
			 clearControls7();

		 }
private: System::Void btn_save_7_Click(System::Object^  sender, System::EventArgs^  e) {
		 StreamWriter^ sw7 = gcnew StreamWriter("student7.txt",true);
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
			String^ fullName7 = tb_id_7->Text + "\t" + tb_fn_7->Text +"\t "+tb_ln_7->Text + "\t" + cb_fees_7->Text;
			String^ grades7 = cb_grade_7->Items[0]->ToString() + "\t" +
							 cb_grade_7->Items[1]->ToString() + "\t" +
							 cb_grade_7->Items[2]->ToString() + "\t" +
							 cb_grade_7->Items[3]->ToString() + "\t" +
							 cb_grade_7->Items[4]->ToString() + "\t" +
							 cb_grade_7->Items[5]->ToString();

			stuInfo7 = fullName7 + "\t"  + grades7;
			lb_students7->Items->Add(stuInfo7);
			   }
private: System::Void btn_update_7_Click(System::Object^  sender, System::EventArgs^  e) {
		  String^ stuInfo7 = "";
			String^ fullName7 = tb_id_7->Text + "\t " + tb_fn_7->Text +"\t "+tb_ln_7->Text  + "\t " + cb_fees_7->Text;
			String^ grades7 = cb_grade_7->Items[0]->ToString() + "\t" +
							  cb_grade_7->Items[1]->ToString() + "\t" +
							  cb_grade_7->Items[2]->ToString() + "\t"+
							  cb_grade_7->Items[3]->ToString() + "\t" +
							  cb_grade_7->Items[4]->ToString() + "\t" +
							  cb_grade_7->Items[5]->ToString();
		
			stuInfo7 = fullName7 + "\t"  + grades7;
			lb_students7->Items[lb_students7->SelectedIndex] = stuInfo7;

		 }

private: System::Void btn_search_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 				StreamReader^ re=gcnew StreamReader("student7.txt");
				 while (!re->EndOfStream)
				 {
					 if (splite_string7(re->ReadLine()))
					 {
						 break;
					 } 
				 }
				 re->Close();


		 }




private: System::Void panel14_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }




};
}


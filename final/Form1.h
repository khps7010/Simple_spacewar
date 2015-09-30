#pragma once

namespace final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->BeginInit();
			this->pictureBox52->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 200;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(52, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"STAGE :";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(160, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"0";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(317, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"SCORE :";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(423, 9);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(98, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"000000";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(52, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 31);
			this->label5->TabIndex = 10;
			this->label5->Text = L"HEART :";
			this->label5->Visible = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(163, 43);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(32, 31);
			this->pictureBox43->TabIndex = 11;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Visible = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(201, 43);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(32, 31);
			this->pictureBox44->TabIndex = 12;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Visible = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(239, 43);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(32, 31);
			this->pictureBox45->TabIndex = 13;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Visible = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox46->Location = System::Drawing::Point(423, 43);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(10, 31);
			this->pictureBox46->TabIndex = 14;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Visible = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox47->Location = System::Drawing::Point(439, 43);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(10, 31);
			this->pictureBox47->TabIndex = 15;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Visible = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox48->Location = System::Drawing::Point(455, 43);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(10, 31);
			this->pictureBox48->TabIndex = 16;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Visible = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox49->Location = System::Drawing::Point(471, 43);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(10, 31);
			this->pictureBox49->TabIndex = 17;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Visible = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox50->Location = System::Drawing::Point(487, 43);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(10, 31);
			this->pictureBox50->TabIndex = 18;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Visible = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox51->Location = System::Drawing::Point(503, 43);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(10, 31);
			this->pictureBox51->TabIndex = 19;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(317, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 31);
			this->label6->TabIndex = 20;
			this->label6->Text = L"SPEED :";
			this->label6->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->pictureBox52);
			this->panel1->Location = System::Drawing::Point(12, 88);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(728, 560);
			this->panel1->TabIndex = 21;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox52->Controls->Add(this->pictureBox42);
			this->pictureBox52->Controls->Add(this->pictureBox5);
			this->pictureBox52->Controls->Add(this->pictureBox6);
			this->pictureBox52->Controls->Add(this->pictureBox7);
			this->pictureBox52->Controls->Add(this->pictureBox8);
			this->pictureBox52->Controls->Add(this->pictureBox9);
			this->pictureBox52->Controls->Add(this->pictureBox10);
			this->pictureBox52->Controls->Add(this->pictureBox11);
			this->pictureBox52->Controls->Add(this->pictureBox12);
			this->pictureBox52->Controls->Add(this->pictureBox13);
			this->pictureBox52->Controls->Add(this->pictureBox14);
			this->pictureBox52->Controls->Add(this->pictureBox15);
			this->pictureBox52->Controls->Add(this->pictureBox16);
			this->pictureBox52->Controls->Add(this->pictureBox17);
			this->pictureBox52->Controls->Add(this->pictureBox18);
			this->pictureBox52->Controls->Add(this->pictureBox19);
			this->pictureBox52->Controls->Add(this->pictureBox20);
			this->pictureBox52->Controls->Add(this->pictureBox21);
			this->pictureBox52->Controls->Add(this->pictureBox22);
			this->pictureBox52->Controls->Add(this->pictureBox23);
			this->pictureBox52->Controls->Add(this->pictureBox24);
			this->pictureBox52->Controls->Add(this->pictureBox25);
			this->pictureBox52->Controls->Add(this->pictureBox26);
			this->pictureBox52->Controls->Add(this->pictureBox27);
			this->pictureBox52->Controls->Add(this->pictureBox28);
			this->pictureBox52->Controls->Add(this->pictureBox29);
			this->pictureBox52->Controls->Add(this->pictureBox30);
			this->pictureBox52->Controls->Add(this->pictureBox31);
			this->pictureBox52->Controls->Add(this->pictureBox32);
			this->pictureBox52->Controls->Add(this->pictureBox33);
			this->pictureBox52->Controls->Add(this->pictureBox34);
			this->pictureBox52->Controls->Add(this->pictureBox35);
			this->pictureBox52->Controls->Add(this->pictureBox36);
			this->pictureBox52->Controls->Add(this->pictureBox37);
			this->pictureBox52->Controls->Add(this->pictureBox38);
			this->pictureBox52->Controls->Add(this->pictureBox39);
			this->pictureBox52->Controls->Add(this->pictureBox40);
			this->pictureBox52->Controls->Add(this->pictureBox41);
			this->pictureBox52->Controls->Add(this->pictureBox4);
			this->pictureBox52->Controls->Add(this->pictureBox3);
			this->pictureBox52->Controls->Add(this->pictureBox2);
			this->pictureBox52->Controls->Add(this->pictureBox1);
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(0, 0);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(728, 560);
			this->pictureBox52->TabIndex = 173;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(0, 0);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(50, 30);
			this->pictureBox42->TabIndex = 174;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(115, 36);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 30);
			this->pictureBox5->TabIndex = 125;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(171, 36);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 30);
			this->pictureBox6->TabIndex = 126;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(227, 36);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 30);
			this->pictureBox7->TabIndex = 127;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(283, 36);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 30);
			this->pictureBox8->TabIndex = 130;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(339, 36);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 30);
			this->pictureBox9->TabIndex = 129;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(395, 36);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(50, 30);
			this->pictureBox10->TabIndex = 128;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(451, 36);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(50, 30);
			this->pictureBox11->TabIndex = 133;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(507, 36);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(50, 30);
			this->pictureBox12->TabIndex = 132;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(563, 36);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(50, 30);
			this->pictureBox13->TabIndex = 131;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(115, 72);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(50, 30);
			this->pictureBox14->TabIndex = 142;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(171, 72);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(50, 30);
			this->pictureBox15->TabIndex = 141;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(227, 72);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 30);
			this->pictureBox16->TabIndex = 140;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(283, 72);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(50, 30);
			this->pictureBox17->TabIndex = 139;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(339, 72);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(50, 30);
			this->pictureBox18->TabIndex = 138;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(395, 72);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(50, 30);
			this->pictureBox19->TabIndex = 137;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(451, 72);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(50, 30);
			this->pictureBox20->TabIndex = 136;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(507, 72);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(50, 30);
			this->pictureBox21->TabIndex = 135;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(563, 72);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(50, 30);
			this->pictureBox22->TabIndex = 134;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Visible = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(115, 108);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(50, 30);
			this->pictureBox23->TabIndex = 151;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Visible = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(171, 108);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(50, 30);
			this->pictureBox24->TabIndex = 150;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Visible = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(227, 108);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(50, 30);
			this->pictureBox25->TabIndex = 149;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Visible = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(283, 108);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(50, 30);
			this->pictureBox26->TabIndex = 148;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Visible = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(339, 108);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(50, 30);
			this->pictureBox27->TabIndex = 147;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Visible = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(395, 108);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(50, 30);
			this->pictureBox28->TabIndex = 146;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Visible = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(451, 108);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(50, 30);
			this->pictureBox29->TabIndex = 145;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Visible = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(507, 108);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(50, 30);
			this->pictureBox30->TabIndex = 144;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Visible = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(563, 108);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(50, 30);
			this->pictureBox31->TabIndex = 143;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Visible = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(115, 144);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(50, 30);
			this->pictureBox32->TabIndex = 160;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Visible = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(171, 144);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(50, 30);
			this->pictureBox33->TabIndex = 172;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Visible = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(227, 144);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(50, 30);
			this->pictureBox34->TabIndex = 171;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Visible = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(283, 144);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(50, 30);
			this->pictureBox35->TabIndex = 170;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Visible = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(339, 144);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(50, 30);
			this->pictureBox36->TabIndex = 169;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Visible = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(395, 144);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(50, 30);
			this->pictureBox37->TabIndex = 168;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Visible = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(451, 144);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(50, 30);
			this->pictureBox38->TabIndex = 167;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Visible = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(507, 144);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(50, 30);
			this->pictureBox39->TabIndex = 166;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Visible = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(563, 144);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(50, 30);
			this->pictureBox40->TabIndex = 165;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Visible = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(339, 500);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(50, 60);
			this->pictureBox41->TabIndex = 161;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(348, 458);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 42);
			this->pictureBox4->TabIndex = 124;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(348, 458);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 42);
			this->pictureBox3->TabIndex = 123;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(348, 458);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 42);
			this->pictureBox2->TabIndex = 122;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(348, 458);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 42);
			this->pictureBox1->TabIndex = 121;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 45, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(555, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 65);
			this->label7->TabIndex = 174;
			this->label7->Text = L"3";
			this->label7->Visible = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::White;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(636, 9);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(104, 65);
			this->pictureBox53->TabIndex = 22;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 500;
			this->timer4->Tick += gcnew System::EventHandler(this, &Form1::timer4_Tick);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(752, 662);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"小蜜蜂";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->EndInit();
			this->pictureBox52->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	public: static bool start;//開始按鍵是否按下
	public: static bool play;//遊戲是否開始
	public: static int time=0;//time 紀錄發射砲彈是第幾發
	public: static int top;//top 用來儲存砲彈初始位置
	public: static int left;//left用來儲存飛碟得初始位置
	public: static int count=0;//count 計算擊倒數
	public: static int speed;//子彈速度
	public: static int level;//關卡等級
	public: static int seed=(int)DateTime::Now.Ticks;//建立亂數物件
	public: static Random ^r=gcnew Random(seed);
	public: static int b=1;
	public: static array <bool> ^Fire=gcnew array <bool>(4);//陣列Fire 用來判斷第幾發砲彈
	public: static array <PictureBox^> ^p=gcnew array <PictureBox^>(53);//圖片陣列 方便管理圖片
	public: static array <int> ^Pictop=gcnew array <int>(36);//陣列Pictop 用來儲存小蜜蜂初始位置
	public: static array <int> ^x=gcnew array <int>(4);//陣列x 用來儲存每個砲彈的x座標

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				  p[0]=pictureBox1; p[1]=pictureBox2; p[2]=pictureBox3; p[3]=pictureBox4; p[4]=pictureBox41;
				  p[5]=pictureBox5; p[6]=pictureBox6; p[7]=pictureBox7; p[8]=pictureBox8; p[9]=pictureBox9; 
				  p[10]=pictureBox10; p[11]=pictureBox11;p[12]=pictureBox12; p[13]=pictureBox13; p[14]=pictureBox14; 
				  p[15]=pictureBox15; p[16]=pictureBox16; p[17]=pictureBox17; p[18]=pictureBox18; p[19]=pictureBox19; 
				  p[20]=pictureBox20; p[21]=pictureBox21; p[22]=pictureBox22; p[23]=pictureBox23; p[24]=pictureBox24; 
				  p[25]=pictureBox25; p[26]=pictureBox26; p[27]=pictureBox27; p[28]=pictureBox28; p[29]=pictureBox29; 
				  p[30]=pictureBox30; p[31]=pictureBox31; p[32]=pictureBox32; p[33]=pictureBox33; p[34]=pictureBox34;
				  p[35]=pictureBox35; p[36]=pictureBox36; p[37]=pictureBox37; p[38]=pictureBox38; p[39]=pictureBox39;
				  p[40]=pictureBox40; p[41]=pictureBox42; p[42]=pictureBox43; p[43]=pictureBox44; p[44]=pictureBox45;
				  p[45]=pictureBox46; p[46]=pictureBox47; p[47]=pictureBox48; p[48]=pictureBox49; p[49]=pictureBox50;
				  p[50]=pictureBox51; p[51]=pictureBox52; p[52]=pictureBox53;
				  //紀錄小蜜蜂位置
				  for(int i=0;i<36;i++)
					  Pictop[i]=p[i+5]->Top;
				  //設定砲彈的Y座標初值
				  top=p[4]->Top-25;
				  //設定飛碟的位置初值
				  left=-p[41]->Width;
				  //準備
				  ready();
			 }
	//鍵盤控制
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 //當start鍵案下 倒數結束
				 if(!start && !label7->Visible){
					//按下右
					if(e->KeyCode==Keys::Right && p[4]->Left<675){
						p[4]->Location = Point(p[4]->Left+56,  p[4]->Top);
					}
					//按下左
					else if(e->KeyCode==Keys::Left && p[4]->Left>3){
						p[4]->Location = Point(p[4]->Left-56, p[4]->Top);
					}
					//按下發射鍵 Space
					else if(e->KeyCode==Keys::Space){
						//發射砲彈 最多一次四發
						if(Fire[time]){
							x[time]=p[4]->Left+(p[4]->Width/2-p[time]->Width/2);//砲彈X座標 隨我機改變
							p[time]->Location = Point(x[time],top);//變更砲彈位置
							p[time]->Visible = true;//砲彈顯示
							Fire[time]=false;
							if(time<3)
								time+=1;
							else
								time=0;
						 }
					 }
				 }
			 }
	//砲彈 關卡
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //砲彈飛行
				 for(int i=0;i<4;i++){
			   		if(p[i]->Top + p[i]->Height >0){
						p[i]->Top-=speed;
						p[i]->Location =Point(x[i],p[i]->Top);
					}
					//擊中幽浮
					if(p[i]->Left+p[i]->Width>=p[41]->Left && p[i]->Left<=(p[41]->Left+p[41]->Width) && p[i]->Top >= (p[41]->Top-p[41]->Height) && p[i]->Top<=p[41]->Top && p[41]->Visible && p[i]->Visible){
						p[i]->Visible = false;//擊中後 砲彈消失
						p[41]->Visible = false;//擊中後 飛碟消失
						Fire[i]=true;//擊中後 砲彈又可以再發射
						//子彈速度上升
						if(speed<25){
							speed+=4;
							switch(speed){
							case 9:
								p[46]->Visible=true;
								break;
							case 13:
								p[47]->Visible=true;
								break;
							case 17:
								p[48]->Visible=true;
								break;
							case 21:
								p[49]->Visible=true;
								break;
							case 25:
								p[50]->Visible=true;
								break;
							}
						}
						label4->Text=Convert::ToString(Convert::ToInt32(label4->Text)+level*100)->PadLeft(6, '0');//計算分數，並向左邊補0
					}
					//擊中小蜜蜂
					for(int j=5;j<41;j++){
						if(p[i]->Left>=p[j]->Left && p[i]->Left<=(p[j]->Left+p[j]->Width) && p[i]->Top >= (p[j]->Top-p[j]->Height) && p[i]->Top<=p[j]->Top && p[j]->Visible && p[i]->Visible){
							p[i]->Visible = false;//擊中後 砲彈消失
							p[j]->Visible = false;//擊中後 小蜜蜂消失
							Fire[i]=true;//擊中後 砲彈又可以再發射
							count+=1;//計算打重幾隻小蜜蜂
							label4->Text=Convert::ToString(Convert::ToInt32(label4->Text)+level*10)->PadLeft(6, '0');//計算分數，並向左邊補0
							//擊中小蜜蜂時 機率出現飛碟
							if(!p[41]->Visible){
								if(r->Next(100)==0){
									p[41]->Visible=true;
									p[41]->Left=left;
								}
							}
						}
					}
					//砲彈沒有擊中，並穿越底線
					if(p[i]->Top + p[i]->Height <=0){
							p[i]->Visible = false;//穿過底線後 砲彈消失
							Fire[i]=true;//穿過底線後 砲彈又可以再發射
					}
				 }
				 //過關，打完所有小蜜蜂，當最後只剩幽浮時，消失時才跳下一關
				 if(count==36 && !p[41]->Visible){
					 next();
				 }
			 }
	//小蜜蜂 飛碟
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //飛碟移動
				 if(p[41]->Visible){
					 p[41]->Location=Point(p[41]->Left+10,p[41]->Top);
					 if(p[41]->Left>=p[51]->Width)
						 p[41]->Visible=false;
				 }
				 //小蜜蜂移動
				 for(int i=5;i<=40;i++){
					 //撞到玩家
					 if(p[i]->Top+p[i]->Height>=p[4]->Top && p[i]->Visible){
						 //減少命
						 if(p[44]->Visible)
							 p[44]->Visible=false;
						 else if(p[43]->Visible)
							  p[43]->Visible=false;
						 else if(p[42]->Visible)
							  p[42]->Visible=false;
						 //子彈速度下降
						 if(speed>5){
							speed-=4;
							switch(speed){
							case 5:
								p[46]->Visible=false;
								break;
							case 9:
								p[47]->Visible=false;
								break;
							case 13:
								p[48]->Visible=false;
								break;
							case 17:
								p[49]->Visible=false;
								break;
							case 21:
								p[50]->Visible=false;
								break;
							}
						 }
						 //重新開始
						 restart();
					 }
					 //正常移動
					 else{
						 p[i]->Location =Point(p[i]->Left,p[i]->Top+3);
					 }
				 }
			 }
	//開始倒數
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
				 label7->Text=Convert::ToString(Convert::ToInt32(label7->Text)-1);
				 if(Convert::ToInt32(label7->Text)==0){
					 timer1->Start();
					 timer2->Start();
					 timer3->Stop();
					 timer4->Start();
					 label7->Text="3";
					 label7->Visible=false;
				 }
			 }
	//背景
	private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(b<3){
				p[51]->Image=Image::FromFile("image\\背景"+b+".png");
				b++;
			 }
			 else{
				 b=2;
				 p[51]->Image=Image::FromFile("image\\背景1.png");
			 }
		 }
	private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
				 //按下start
				 if(start){
					 label7->Visible=true;
					 timer3->Start();
					 //第一次運行
					 if(play){
						 //顯示玩家、小蜜蜂和介面
						 for(int i=4;i<=40;i++)
							 p[i]->Visible=true;
						 label1->Visible=true;
						 label2->Visible=true;
						 label3->Visible=true;
						 label4->Visible=true;
						 label5->Visible=true;
						 label6->Visible=true;
						 for(int i=42;i<46;i++)
							 p[i]->Visible=true;
						 play=false;
					 }
					 start=false;
					 p[52]->Image=Image::FromFile("image\\stop.png");//更換圖片為stop
				 }
				 //按下stop
				 else{
					 start=true;
					 p[52]->Image=Image::FromFile("image\\start.png");//更換圖片為start
					 timer1->Stop();
					 timer2->Stop();
					 timer3->Stop();
					 timer4->Stop();
				 }
			}
	//準備開始遊戲
	private: void ready(){
				 start=true;
				 play=true;
				 p[52]->Image=Image::FromFile("image\\start.png");
				 //初始化
				 for(int i=0;i<51;i++)
					 p[i]->Visible=false;
				 label1->Visible=false;
				 label2->Visible=false;
				 label3->Visible=false;
				 label4->Visible=false;
				 label5->Visible=false;
				 label6->Visible=false;
				 //小蜜蜂歸位
				 for(int i=0;i<36;i++)
						p[i+5]->Top=Pictop[i];
				 //飛碟初始化
				 p[41]->Left=left;
				 p[41]->Visible=false;
				 //炮彈設定初始化
				 for(int i=0;i<4;i++)
					 Fire[i]=true;
				 count=0;
				 speed=5;//設定砲彈基本速度
				 //關卡、分數初始化
				 timer2->Interval=200;//設定關卡速度初值
				 level=1;//設定level初值
				 label2->Text=Convert::ToString(level);//設定關卡初值
				 label4->Text="000000";//設定分數初值
			 }
	//下一關
	private: void next(){
				 //等級上升
				 if(level!=15){
					 timer1->Stop();
					 timer2->Stop();
					 timer4->Stop();
					 count=0;//計數歸零
					 //清除上一關的砲彈
					 for(int i=0;i<4;i++)
						 p[i]->Visible=false;
					 //小蜜蜂初始化
					 for(int i=0;i<36;i++){
						p[i+5]->Top=Pictop[i];//小蜜蜂歸位
						p[i+5]->Visible=true;//小蜜蜂顯示
					 }
					 //飛碟初始化
					 p[41]->Left=left;
					 p[41]->Visible=false;
					 //玩家歸位
					 p[4]->Location=Point(339,500);
					 label2->Text=Convert::ToString(level+=1);//下一關
					 //難度上升
					 if(level<=5){
						 timer2->Interval-=20;
					 }
					 else if(level<=9){
						 timer2->Interval-=10;
					 }
					 else if(level<=15){
						 timer2->Interval-=5;
					 }
					 label7->Visible=true;
					 timer3->Start();
				 }
				 //全破
				 else{
					 timer1->Stop();
					 timer2->Stop();
					 timer4->Stop();
					 //過關訊息
					 System::Windows::Forms::DialogResult result;
					 result = MessageBox::Show("恭喜你過關了!\n得分:"+Convert::ToInt32(label4->Text),"過關",MessageBoxButtons::OK,MessageBoxIcon::None,MessageBoxDefaultButton::Button1);
					 //重置遊戲
					 ready();
				 }
			 }
	//重新開始
	private: void restart(){
				 if(p[42]->Visible){
					 //清除上一關的砲彈
					 for(int i=0;i<4;i++)
						 p[i]->Visible=false;
					 //小蜜蜂歸位
					 for(int i=0;i<36;i++)
						 p[i+5]->Top=Pictop[i];
					 //飛碟初始化
					 p[41]->Left=left;
					 p[41]->Visible=false;
					 //玩家歸位
					 p[4]->Location=Point(339,500);
					 timer1->Stop();
					 timer2->Stop();
					 timer4->Stop();
					 label7->Visible=true;
					 timer3->Start();
				 }
				 else{
					 timer1->Stop();
					 timer2->Stop();
					 timer4->Stop();
					 //結束訊息
					 System::Windows::Forms::DialogResult result;
					 result = MessageBox::Show("遊戲結束!\n得分:"+Convert::ToInt32(label4->Text),"結束",MessageBoxButtons::OK,MessageBoxIcon::None,MessageBoxDefaultButton::Button1);
					 //重置遊戲
					 ready();
				 }
			 }
};
}
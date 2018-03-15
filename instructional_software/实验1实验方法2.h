#pragma once
#include "voice.h"
extern bool 实验1实验方法2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// 实验1实验方法2 摘要
	/// </summary>
	public ref class 实验1实验方法2 : public System::Windows::Forms::Form
	{
	public:
		实验1实验方法2(void)
		{
			InitializeComponent();
			实验1实验方法2Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验方法2()
		{
			实验1实验方法2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  labelkm1;
	private: System::Windows::Forms::Label^  labelkm2;
	private: System::Windows::Forms::Label^  labelkm3;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;









	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb22;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验方法2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelkm1 = (gcnew System::Windows::Forms::Label());
			this->labelkm2 = (gcnew System::Windows::Forms::Label());
			this->labelkm3 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(379, 501);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(442, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 62);
			this->label1->TabIndex = 1;
			this->label1->Text = L"检查无误后，启动电源进行实验：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(442, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(568, 62);
			this->label2->TabIndex = 2;
			this->label2->Text = L"（1）合上开关Q1，接通三相交流380V电源；";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(442, 238);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(704, 62);
			this->label3->TabIndex = 3;
			this->label3->Text = L"（2）按下起动按钮SB2，松手后观察电动机M运转情况；";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(442, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(704, 62);
			this->label4->TabIndex = 4;
			this->label4->Text = L"（3）按下停止按钮SB1，松手后观察电动机M运转情况。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelkm1
			// 
			this->labelkm1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm1->Location = System::Drawing::Point(63, 228);
			this->labelkm1->Name = L"labelkm1";
			this->labelkm1->Size = System::Drawing::Size(19, 10);
			this->labelkm1->TabIndex = 5;
			this->labelkm1->Text = L"label5";
			// 
			// labelkm2
			// 
			this->labelkm2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm2->Location = System::Drawing::Point(119, 228);
			this->labelkm2->Name = L"labelkm2";
			this->labelkm2->Size = System::Drawing::Size(19, 10);
			this->labelkm2->TabIndex = 6;
			this->labelkm2->Text = L"label6";
			// 
			// labelkm3
			// 
			this->labelkm3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm3->Location = System::Drawing::Point(172, 228);
			this->labelkm3->Name = L"labelkm3";
			this->labelkm3->Size = System::Drawing::Size(19, 10);
			this->labelkm3->TabIndex = 7;
			this->labelkm3->Text = L"label7";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(63, 76);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(19, 10);
			this->labelq1->TabIndex = 8;
			this->labelq1->Text = L"label8";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(119, 76);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(19, 10);
			this->labelq2->TabIndex = 9;
			this->labelq2->Text = L"label9";
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(172, 76);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(19, 10);
			this->labelq3->TabIndex = 10;
			this->labelq3->Text = L"label10";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::Color::White;
			this->labelsb11->Location = System::Drawing::Point(321, 175);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(19, 21);
			this->labelsb11->TabIndex = 11;
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb12->Location = System::Drawing::Point(314, 186);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(19, 10);
			this->labelsb12->TabIndex = 12;
			this->labelsb12->Text = L"label12";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(85, 554);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 48);
			this->button1->TabIndex = 13;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1实验方法2::button1_Click);
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::Color::White;
			this->labelsb21->Location = System::Drawing::Point(314, 256);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(19, 21);
			this->labelsb21->TabIndex = 14;
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb22->Location = System::Drawing::Point(321, 256);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(10, 21);
			this->labelsb22->TabIndex = 15;
			this->labelsb22->Text = L"label12";
			// 
			// 实验1实验方法2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 652);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->labelkm3);
			this->Controls->Add(this->labelkm2);
			this->Controls->Add(this->labelkm1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验1实验方法2";
			this->Text = L"2、三相异步电动机自锁控制线路：";
			this->Load += gcnew System::EventHandler(this, &实验1实验方法2::实验1实验方法2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验1实验方法2_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelkm1->Visible = false;
				 labelkm2->Visible = false;
				 labelkm3->Visible = false;
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 labelkm1->Visible = true;
				 labelkm2->Visible = true;
				 labelkm3->Visible = true;
				 Speek(label2->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label3->Text);
				 Thread^flashSB2 = gcnew Thread(gcnew ThreadStart(this, &实验1实验方法2::flashSB2));
				 flashSB2->Start();
				 flashSB2->Join();
				 Speek(label4->Text);
				 Thread^flashSB1 = gcnew Thread(gcnew ThreadStart(this, &实验1实验方法2::flashSB1));
				 flashSB1->Start();
				 flashSB1->Join();
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验1实验方法2::speek));
				 Thread_speek->Name = in;
				 Thread_speek->Start();
				 Thread_speek->Join();
			 }
			 void flashSB2() {
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 Sleep(1000);
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
			 }
			 void flashSB1() {
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
				 Sleep(1000);
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
			 }
			 void speek() {
				 g_voice.voice_speek(Thread_speek->Name);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		init();
		speek_control();
	}
};
}

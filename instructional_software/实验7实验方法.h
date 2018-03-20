#pragma once
#include "voice.h"
extern bool 实验7实验方法Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验7实验方法 摘要
	/// </summary>
	public ref class 实验7实验方法 : public System::Windows::Forms::Form
	{
	public:
		实验7实验方法(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验7实验方法Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验7实验方法()
		{
			实验7实验方法Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验7实验方法::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(826, 793);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(61, 808);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(726, 39);
			this->label2->TabIndex = 8;
			this->label2->Text = L"图8-17  时间继电器控制线绕式异步电动机起动控制线路";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Click += gcnew System::EventHandler(this, &实验7实验方法::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(869, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(726, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"1、时间继电器控制线绕式异步电动机起动控制线路：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(869, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(726, 39);
			this->label3->TabIndex = 10;
			this->label3->Text = L"按图8-17接线。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(883, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(786, 48);
			this->label4->TabIndex = 11;
			this->label4->Text = L"（1）按下“开”按钮，合上开关Q1，接通380V三相交流电源。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(883, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(726, 77);
			this->label5->TabIndex = 12;
			this->label5->Text = L"（2）按SB1，观察并记录电动机M的运转情况。电机起动时电流表的最大读数为________________A。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(883, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(726, 75);
			this->label6->TabIndex = 13;
			this->label6->Text = L"（3）经过一段时间延时，起动电阻被切除后，电流表的读数为_______A。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(883, 426);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(726, 72);
			this->label7->TabIndex = 14;
			this->label7->Text = L"（4）按下SB2，电机停转后，用导线把电动机转子短接。";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(883, 498);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(726, 97);
			this->label8->TabIndex = 15;
			this->label8->Text = L"（5）再按下SB1，记录电机起动时电流表的最大读数为________A。";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(258, 79);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 47;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(172, 79);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 46;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(75, 79);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 45;
			this->labelq1->Text = L"labell1";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(519, 335);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 55;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(519, 246);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 46);
			this->labelsb21->TabIndex = 57;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(516, 246);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(24, 37);
			this->labelsb22->TabIndex = 56;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(907, 598);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 48);
			this->button1->TabIndex = 58;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验7实验方法::button1_Click);
			// 
			// 实验7实验方法
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1776, 846);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验7实验方法";
			this->Text = L"实验7实验方法";
			this->Load += gcnew System::EventHandler(this, &实验7实验方法::实验7实验方法_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验7实验方法_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
				 labelsb11->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label3->Text);
				 Speek(label4->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label5->Text);
				 labelsb11->Visible = true;
				 Speek(label6->Text);
				 Speek(label7->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 Speek(label8->Text);
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验7实验方法::speek));
				 Thread_speek->Name = in;
				 Thread_speek->Start();
				 Thread_speek->Join();
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

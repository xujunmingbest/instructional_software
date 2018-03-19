#pragma once
#include "voice.h"
extern bool 实验4实验方法2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验4实验方法2 摘要
	/// </summary>
	public ref class 实验4实验方法2 : public System::Windows::Forms::Form
	{
	public:
		实验4实验方法2(void)
		{
			InitializeComponent();
			实验4实验方法2Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验4实验方法2()
		{
			实验4实验方法2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelsb12;



	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb32;


	private: System::Windows::Forms::Label^  labelsb31;
	private: System::Windows::Forms::Label^  labelsb41;
	private: System::Windows::Forms::Label^  labelsb42;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验4实验方法2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb32 = (gcnew System::Windows::Forms::Label());
			this->labelsb31 = (gcnew System::Windows::Forms::Label());
			this->labelsb41 = (gcnew System::Windows::Forms::Label());
			this->labelsb42 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(820, 720);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(838, 367);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(776, 81);
			this->label6->TabIndex = 13;
			this->label6->Text = L"（5）在M1与M2都运行时，按下SB1，观察电机及各接触器运行状态。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(838, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(776, 45);
			this->label5->TabIndex = 12;
			this->label5->Text = L"（4）单独按下SB3，观察并记录电机及各接触器运行状态。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(838, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(776, 45);
			this->label4->TabIndex = 11;
			this->label4->Text = L"（3）再按下SB4，观察并记录电机及各接触器运行状态。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(838, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(776, 45);
			this->label3->TabIndex = 10;
			this->label3->Text = L"（2）按下SB2，观察并记录电机及各接触器运行情况。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(838, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(776, 45);
			this->label2->TabIndex = 9;
			this->label2->Text = L"（1）按下屏上启动按钮，合上开关Q1，接通380V三相交流电源。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(838, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 45);
			this->label1->TabIndex = 8;
			this->label1->Text = L"按图8－10接线。 ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(206, 80);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 26;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(143, 80);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 25;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(76, 79);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 24;
			this->labelq1->Text = L"labell1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(843, 494);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 59);
			this->button1->TabIndex = 27;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验4实验方法2::button1_Click);
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(624, 358);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 46);
			this->labelsb21->TabIndex = 29;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(614, 367);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(20, 29);
			this->labelsb22->TabIndex = 28;
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb12->Location = System::Drawing::Point(624, 245);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(10, 46);
			this->labelsb12->TabIndex = 31;
			this->labelsb12->Text = L"label12";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::Color::White;
			this->labelsb11->Location = System::Drawing::Point(614, 245);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(31, 29);
			this->labelsb11->TabIndex = 30;
			// 
			// labelsb32
			// 
			this->labelsb32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb32->Location = System::Drawing::Point(743, 241);
			this->labelsb32->Name = L"labelsb32";
			this->labelsb32->Size = System::Drawing::Size(10, 46);
			this->labelsb32->TabIndex = 33;
			this->labelsb32->Text = L"label12";
			// 
			// labelsb31
			// 
			this->labelsb31->BackColor = System::Drawing::Color::White;
			this->labelsb31->Location = System::Drawing::Point(731, 245);
			this->labelsb31->Name = L"labelsb31";
			this->labelsb31->Size = System::Drawing::Size(27, 29);
			this->labelsb31->TabIndex = 32;
			// 
			// labelsb41
			// 
			this->labelsb41->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb41->Location = System::Drawing::Point(740, 358);
			this->labelsb41->Name = L"labelsb41";
			this->labelsb41->Size = System::Drawing::Size(10, 46);
			this->labelsb41->TabIndex = 35;
			this->labelsb41->Text = L"label12";
			// 
			// labelsb42
			// 
			this->labelsb42->BackColor = System::Drawing::Color::White;
			this->labelsb42->Location = System::Drawing::Point(728, 362);
			this->labelsb42->Name = L"labelsb42";
			this->labelsb42->Size = System::Drawing::Size(27, 29);
			this->labelsb42->TabIndex = 34;
			// 
			// 实验4实验方法2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1655, 759);
			this->Controls->Add(this->labelsb41);
			this->Controls->Add(this->labelsb42);
			this->Controls->Add(this->labelsb32);
			this->Controls->Add(this->labelsb31);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验4实验方法2";
			this->Text = L"实验4实验方法2";
			this->Load += gcnew System::EventHandler(this, &实验4实验方法2::实验4实验方法2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验4实验方法2_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
				 labelsb31->Visible = false;
				 labelsb32->Visible = false;
				 labelsb41->Visible = false;
				 labelsb42->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label2->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label3->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 Speek(label4->Text);
				 labelsb41->Visible = true;
				 labelsb42->Visible = true;
				 Speek(label5->Text);
				 labelsb31->Visible = true;
				 labelsb32->Visible = true;
				 Speek(label6->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验4实验方法2::speek));
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

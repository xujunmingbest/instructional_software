#pragma once
#include "voice.h"
extern bool 实验4实验方法1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验4实验方法1 摘要
	/// </summary>
	public ref class 实验4实验方法1 : public System::Windows::Forms::Form
	{
	public:
		实验4实验方法1(void)
		{
			InitializeComponent();
			实验4实验方法1Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验4实验方法1()
		{
			实验4实验方法1Status = false;
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb22;






	private: System::Windows::Forms::Label^  labelsb31;
	private: System::Windows::Forms::Label^  labelsb32;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验4实验方法1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelsb31 = (gcnew System::Windows::Forms::Label());
			this->labelsb32 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(5, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(835, 757);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(862, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(776, 89);
			this->label6->TabIndex = 19;
			this->label6->Text = L"（5）按下SB3使电机停转后，先按SB2，分析电机M2为什么不能起动。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(862, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(776, 45);
			this->label5->TabIndex = 18;
			this->label5->Text = L"（4）在M1和M2都运转时，能不能单独停止M2。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(862, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(776, 45);
			this->label4->TabIndex = 17;
			this->label4->Text = L"（3）保持M1运转时按下SB2，观察电机运转及接触器吸合情况。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(862, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(776, 45);
			this->label3->TabIndex = 16;
			this->label3->Text = L"（2）按下SB1，观察电机运行情况及接触器吸合情况。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(862, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(776, 45);
			this->label2->TabIndex = 15;
			this->label2->Text = L"（1）按下启动按钮，合上开关Q1，接通380V三相交流电源。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(862, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 45);
			this->label1->TabIndex = 14;
			this->label1->Text = L"按图8-9接线。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(884, 461);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 53);
			this->button1->TabIndex = 20;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验4实验方法1::button1_Click);
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(64, 93);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 21;
			this->labelq1->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(138, 94);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 22;
			this->labelq2->Text = L"labell1";
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(209, 92);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 23;
			this->labelq3->Text = L"labell1";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(634, 320);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 25;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(624, 335);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(20, 29);
			this->labelsb12->TabIndex = 24;
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(733, 425);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 46);
			this->labelsb21->TabIndex = 27;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(723, 425);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(20, 29);
			this->labelsb22->TabIndex = 26;
			// 
			// labelsb31
			// 
			this->labelsb31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb31->Location = System::Drawing::Point(633, 237);
			this->labelsb31->Name = L"labelsb31";
			this->labelsb31->Size = System::Drawing::Size(10, 46);
			this->labelsb31->TabIndex = 29;
			this->labelsb31->Text = L"label12";
			// 
			// labelsb32
			// 
			this->labelsb32->BackColor = System::Drawing::Color::White;
			this->labelsb32->Location = System::Drawing::Point(624, 237);
			this->labelsb32->Name = L"labelsb32";
			this->labelsb32->Size = System::Drawing::Size(29, 29);
			this->labelsb32->TabIndex = 28;
			// 
			// 实验4实验方法1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1650, 786);
			this->Controls->Add(this->labelsb31);
			this->Controls->Add(this->labelsb32);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验4实验方法1";
			this->Text = L"实验4实验方法1";
			this->Load += gcnew System::EventHandler(this, &实验4实验方法1::实验4实验方法1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验4实验方法1_Load(System::Object^  sender, System::EventArgs^  e) {
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
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label2->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label3->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
				 Speek(label4->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 Speek(label5->Text);
				 labelsb31->Visible = true;
				 labelsb32->Visible = true;
				 Speek(label5->Text);
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验4实验方法1::speek));
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

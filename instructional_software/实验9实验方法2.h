#pragma once
#include "voice.h"
extern bool 实验9实验方法2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验9实验方法2 摘要
	/// </summary>
	public ref class 实验9实验方法2 : public System::Windows::Forms::Form
	{
	public:
		实验9实验方法2(void)
		{
			InitializeComponent();
			实验9实验方法2Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验9实验方法2()
		{
			实验9实验方法2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验9实验方法2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(994, 889);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1030, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(645, 50);
			this->label4->TabIndex = 9;
			this->label4->Text = L"（2）调节时间继电器，使延时时间为5秒。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(1030, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(746, 81);
			this->label3->TabIndex = 8;
			this->label3->Text = L"（1）启动控制屏，合上开关Q1，接通 380V三相交流电源。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(1030, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 75);
			this->label2->TabIndex = 7;
			this->label2->Text = L"开启交流电源，将三相输出线电压调至380V，按下“关”按钮，按图8－20接线。经检查无误后，按以下步骤通电操作，";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1030, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 62);
			this->label1->TabIndex = 6;
			this->label1->Text = L"2、异步电动机能耗制动控制线路：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1030, 320);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(645, 50);
			this->label5->TabIndex = 10;
			this->label5->Text = L"（3）按下SB1，使电动机M起动运转。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1030, 398);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(645, 95);
			this->label6->TabIndex = 11;
			this->label6->Text = L"（4）待电动机运转稳定后，按下SB2，观察并记录电动机M从按下SB1起至电动机停止旋转的能耗制动时间。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(302, 96);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 53;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(208, 96);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 52;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(94, 96);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 51;
			this->labelq1->Text = L"labell1";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(766, 461);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 65;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(755, 461);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(24, 37);
			this->labelsb12->TabIndex = 64;
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(766, 362);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 46);
			this->labelsb21->TabIndex = 67;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(759, 362);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(24, 37);
			this->labelsb22->TabIndex = 66;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1046, 525);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 48);
			this->button1->TabIndex = 68;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验9实验方法2::button1_Click);
			// 
			// 实验9实验方法2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1869, 911);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
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
			this->Name = L"实验9实验方法2";
			this->Text = L"实验9实验方法2";
			this->Load += gcnew System::EventHandler(this, &实验9实验方法2::实验9实验方法2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验9实验方法2_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label2->Text);
				 Speek(label3->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label4->Text);
				 Speek(label5->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
				 Speek(label6->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验9实验方法2::speek));
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

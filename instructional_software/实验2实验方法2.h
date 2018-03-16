#pragma once
#include "voice.h"
extern bool 实验2实验方法2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验2实验方法2 摘要
	/// </summary>
	public ref class 实验2实验方法2 : public System::Windows::Forms::Form
	{
	public:
		实验2实验方法2(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验2实验方法2Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验2实验方法2()
		{
			实验2实验方法2Status = false;
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
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq3;





	private: System::Windows::Forms::Label^  labelsb12;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb32;
	private: System::Windows::Forms::Label^  labelsb31;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验2实验方法2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb32 = (gcnew System::Windows::Forms::Label());
			this->labelsb31 = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox1->Size = System::Drawing::Size(825, 816);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(903, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(487, 91);
			this->label2->TabIndex = 4;
			this->label2->Text = L"（1）按下“关”按钮切断交流电源。按图8-5接线。经指导老师检查无误后，按下“开”按钮通电操作。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(903, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(487, 91);
			this->label1->TabIndex = 5;
			this->label1->Text = L"（2）合上电源开关Q1，接通 380V三相交流电源。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(903, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(487, 91);
			this->label3->TabIndex = 6;
			this->label3->Text = L"（3）按下SB1，观察并记录电动机M的转向、接触器自锁和联锁触点的    吸断情况。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(903, 367);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(487, 91);
			this->label4->TabIndex = 7;
			this->label4->Text = L"（4）按下SB3，观察并记录M运转状态、接触器各触点的吸断情况。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(903, 458);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(487, 91);
			this->label5->TabIndex = 8;
			this->label5->Text = L"（5）再按下SB2，观察并记录M的转向、接触器自锁和联锁触点的吸断情况。 ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(71, 106);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 13;
			this->labelq1->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(155, 106);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 14;
			this->labelq2->Text = L"label6";
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(233, 106);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 15;
			this->labelq3->Text = L"label7";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb12->Location = System::Drawing::Point(609, 428);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(10, 40);
			this->labelsb12->TabIndex = 17;
			this->labelsb12->Text = L"label12";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::Color::White;
			this->labelsb11->Location = System::Drawing::Point(600, 437);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(19, 21);
			this->labelsb11->TabIndex = 16;
			// 
			// labelsb32
			// 
			this->labelsb32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb32->Location = System::Drawing::Point(600, 348);
			this->labelsb32->Name = L"labelsb32";
			this->labelsb32->Size = System::Drawing::Size(19, 10);
			this->labelsb32->TabIndex = 19;
			this->labelsb32->Text = L"label12";
			// 
			// labelsb31
			// 
			this->labelsb31->BackColor = System::Drawing::Color::White;
			this->labelsb31->Location = System::Drawing::Point(609, 329);
			this->labelsb31->Name = L"labelsb31";
			this->labelsb31->Size = System::Drawing::Size(20, 29);
			this->labelsb31->TabIndex = 18;
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(735, 434);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 34);
			this->labelsb21->TabIndex = 21;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(726, 437);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(19, 21);
			this->labelsb22->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(869, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 50);
			this->button1->TabIndex = 22;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验2实验方法2::button1_Click);
			// 
			// 实验2实验方法2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1469, 859);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb32);
			this->Controls->Add(this->labelsb31);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验2实验方法2";
			this->Text = L"实验2实验方法2";
			this->Load += gcnew System::EventHandler(this, &实验2实验方法2::实验2实验方法2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验2实验方法2_Load(System::Object^  sender, System::EventArgs^  e) {
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
				 Speek(label2->Text);
				 Speek(label1->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label3->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
				 Speek(label4->Text);
				 labelsb31->Visible = true;
				 labelsb32->Visible = true;
				 Speek(label5->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验2实验方法2::speek));
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

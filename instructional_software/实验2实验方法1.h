#pragma once
#include "voice.h"
extern bool 实验2实验方法1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验2实验方法1 摘要
	/// </summary>
	public ref class 实验2实验方法1 : public System::Windows::Forms::Form
	{
	public:
		实验2实验方法1(void)
		{
			InitializeComponent();
			实验2实验方法1Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验2实验方法1()
		{
			实验2实验方法1Status = false;
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
	private: System::Windows::Forms::Label^  labell1;
	private: System::Windows::Forms::Label^  labell2;
	private: System::Windows::Forms::Label^  labell3;
	private: System::Windows::Forms::Label^  labelr1;
	private: System::Windows::Forms::Label^  labelr2;
	private: System::Windows::Forms::Label^  labelr3;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验2实验方法1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labell1 = (gcnew System::Windows::Forms::Label());
			this->labell2 = (gcnew System::Windows::Forms::Label());
			this->labell3 = (gcnew System::Windows::Forms::Label());
			this->labelr1 = (gcnew System::Windows::Forms::Label());
			this->labelr2 = (gcnew System::Windows::Forms::Label());
			this->labelr3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(532, 808);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(576, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(445, 34);
			this->label2->TabIndex = 3;
			this->label2->Text = L"1、倒顺开关正反转控制线路：";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(576, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(445, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"（1）按图8-4接线。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(576, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(445, 70);
			this->label3->TabIndex = 5;
			this->label3->Text = L"（2）启动电源后，把开关Q1合向“左合”位置，观察电机转向。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(576, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(445, 97);
			this->label4->TabIndex = 6;
			this->label4->Text = L"（3）运转半分钟后，把开关Q1合向“断开”位置后，再扳向“右合”位置，观察电机转向。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labell1
			// 
			this->labell1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labell1->Location = System::Drawing::Point(146, 334);
			this->labell1->Name = L"labell1";
			this->labell1->Size = System::Drawing::Size(10, 43);
			this->labell1->TabIndex = 12;
			this->labell1->Text = L"labell1";
			// 
			// labell2
			// 
			this->labell2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labell2->Location = System::Drawing::Point(239, 334);
			this->labell2->Name = L"labell2";
			this->labell2->Size = System::Drawing::Size(10, 43);
			this->labell2->TabIndex = 13;
			this->labell2->Text = L"label10";
			// 
			// labell3
			// 
			this->labell3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labell3->Location = System::Drawing::Point(332, 334);
			this->labell3->Name = L"labell3";
			this->labell3->Size = System::Drawing::Size(10, 43);
			this->labell3->TabIndex = 14;
			this->labell3->Text = L"label10";
			// 
			// labelr1
			// 
			this->labelr1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelr1->Location = System::Drawing::Point(146, 377);
			this->labelr1->Name = L"labelr1";
			this->labelr1->Size = System::Drawing::Size(10, 43);
			this->labelr1->TabIndex = 15;
			this->labelr1->Text = L"label10";
			// 
			// labelr2
			// 
			this->labelr2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelr2->Location = System::Drawing::Point(239, 377);
			this->labelr2->Name = L"labelr2";
			this->labelr2->Size = System::Drawing::Size(10, 43);
			this->labelr2->TabIndex = 16;
			this->labelr2->Text = L"label10";
			// 
			// labelr3
			// 
			this->labelr3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelr3->Location = System::Drawing::Point(332, 377);
			this->labelr3->Name = L"labelr3";
			this->labelr3->Size = System::Drawing::Size(10, 43);
			this->labelr3->TabIndex = 17;
			this->labelr3->Text = L"label10";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(581, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 37);
			this->button1->TabIndex = 18;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验2实验方法1::button1_Click);
			// 
			// 实验2实验方法1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 846);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelr3);
			this->Controls->Add(this->labelr2);
			this->Controls->Add(this->labelr1);
			this->Controls->Add(this->labell3);
			this->Controls->Add(this->labell2);
			this->Controls->Add(this->labell1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验2实验方法1";
			this->Text = L"实验2实验方法1";
			this->Load += gcnew System::EventHandler(this, &实验2实验方法1::实验2实验方法1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验2实验方法1_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labell1->Visible = false;
				 labell2->Visible = false;
				 labell3->Visible = false;

				 labelr1->Visible = false;
				 labelr2->Visible = false;
				 labelr3->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label2->Text);
				 Speek(label1->Text);
				 Speek(label3->Text);
				 labell1->Visible = true;
				 labell2->Visible = true;
				 labell3->Visible = true;
				 Speek(label4->Text);
				 labell1->Visible = false;
				 labell2->Visible = false;
				 labell3->Visible = false;
				 labelr1->Visible = true;
				 labelr2->Visible = true;
				 labelr3->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验2实验方法1::speek));
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


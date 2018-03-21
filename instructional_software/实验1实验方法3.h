#pragma once
#include "voice.h"
extern bool 实验1实验方法3Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验1实验方法3 摘要
	/// </summary>
	public ref class 实验1实验方法3 : public System::Windows::Forms::Form
	{
	public:
		实验1实验方法3(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验1实验方法3Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验方法3()
		{
			实验1实验方法3Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  labelkm11;
	private: System::Windows::Forms::Label^  labelkm12;
	private: System::Windows::Forms::Label^  labelkm13;




	private: System::Windows::Forms::Label^  labelq11;
	private: System::Windows::Forms::Label^  labelq12;
	private: System::Windows::Forms::Label^  labelq13;



	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;


	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验方法3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelkm11 = (gcnew System::Windows::Forms::Label());
			this->labelkm12 = (gcnew System::Windows::Forms::Label());
			this->labelkm13 = (gcnew System::Windows::Forms::Label());
			this->labelq11 = (gcnew System::Windows::Forms::Label());
			this->labelq12 = (gcnew System::Windows::Forms::Label());
			this->labelq13 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelsb31 = (gcnew System::Windows::Forms::Label());
			this->labelsb32 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(418, 504);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(460, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 62);
			this->label1->TabIndex = 2;
			this->label1->Text = L"（1）合上Q1接通三相交流380V电源；";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(460, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 62);
			this->label2->TabIndex = 3;
			this->label2->Text = L"（2）按下起动按钮SB2，松手后观察电机M是否继续运转；";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(460, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(746, 81);
			this->label3->TabIndex = 4;
			this->label3->Text = L"（3）运转半分钟后按下SB3，然后松开，电机M是否停转；连续按下和松开SB3，观察此时属于什么控制状态。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(460, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(645, 50);
			this->label4->TabIndex = 5;
			this->label4->Text = L"（4）按下停止按钮SB1，松手后观察M是否停转。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelkm11
			// 
			this->labelkm11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm11->Location = System::Drawing::Point(45, 231);
			this->labelkm11->Name = L"labelkm11";
			this->labelkm11->Size = System::Drawing::Size(19, 10);
			this->labelkm11->TabIndex = 8;
			this->labelkm11->Text = L"label5";
			// 
			// labelkm12
			// 
			this->labelkm12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm12->Location = System::Drawing::Point(106, 231);
			this->labelkm12->Name = L"labelkm12";
			this->labelkm12->Size = System::Drawing::Size(19, 10);
			this->labelkm12->TabIndex = 9;
			this->labelkm12->Text = L"label5";
			// 
			// labelkm13
			// 
			this->labelkm13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm13->Location = System::Drawing::Point(156, 231);
			this->labelkm13->Name = L"labelkm13";
			this->labelkm13->Size = System::Drawing::Size(19, 10);
			this->labelkm13->TabIndex = 10;
			this->labelkm13->Text = L"label5";
			// 
			// labelq11
			// 
			this->labelq11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq11->Location = System::Drawing::Point(45, 73);
			this->labelq11->Name = L"labelq11";
			this->labelq11->Size = System::Drawing::Size(19, 10);
			this->labelq11->TabIndex = 11;
			this->labelq11->Text = L"label5";
			// 
			// labelq12
			// 
			this->labelq12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq12->Location = System::Drawing::Point(106, 73);
			this->labelq12->Name = L"labelq12";
			this->labelq12->Size = System::Drawing::Size(19, 10);
			this->labelq12->TabIndex = 12;
			this->labelq12->Text = L"label5";
			// 
			// labelq13
			// 
			this->labelq13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq13->Location = System::Drawing::Point(156, 73);
			this->labelq13->Name = L"labelq13";
			this->labelq13->Size = System::Drawing::Size(19, 10);
			this->labelq13->TabIndex = 13;
			this->labelq13->Text = L"label5";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb22->Location = System::Drawing::Point(308, 244);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(10, 21);
			this->labelsb22->TabIndex = 17;
			this->labelsb22->Text = L"label12";
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::Color::White;
			this->labelsb21->Location = System::Drawing::Point(301, 244);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(19, 21);
			this->labelsb21->TabIndex = 16;
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(297, 187);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(19, 10);
			this->labelsb11->TabIndex = 19;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(303, 171);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(19, 21);
			this->labelsb12->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(451, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 48);
			this->button1->TabIndex = 20;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1实验方法3::button1_Click);
			// 
			// labelsb31
			// 
			this->labelsb31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb31->Location = System::Drawing::Point(348, 241);
			this->labelsb31->Name = L"labelsb31";
			this->labelsb31->Size = System::Drawing::Size(10, 30);
			this->labelsb31->TabIndex = 22;
			this->labelsb31->Text = L"label12";
			// 
			// labelsb32
			// 
			this->labelsb32->BackColor = System::Drawing::Color::White;
			this->labelsb32->Location = System::Drawing::Point(343, 244);
			this->labelsb32->Name = L"labelsb32";
			this->labelsb32->Size = System::Drawing::Size(19, 21);
			this->labelsb32->TabIndex = 21;
			// 
			// 实验1实验方法3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1266, 749);
			this->Controls->Add(this->labelsb31);
			this->Controls->Add(this->labelsb32);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelq13);
			this->Controls->Add(this->labelq12);
			this->Controls->Add(this->labelq11);
			this->Controls->Add(this->labelkm13);
			this->Controls->Add(this->labelkm12);
			this->Controls->Add(this->labelkm11);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验1实验方法3";
			this->Text = L"3、三相异步电动机既可点动又可自锁控制线路：";
			this->Load += gcnew System::EventHandler(this, &实验1实验方法3::实验1实验方法3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验1实验方法3_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq11->Visible = false;
				 labelq12->Visible = false;
				 labelq13->Visible = false;
				 labelkm11->Visible = false;
				 labelkm12->Visible = false;
				 labelkm13->Visible = false;
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
				 labelsb31->Visible = false;
				 labelsb32->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 labelq11->Visible = true;
				 labelq12->Visible = true;
				 labelq13->Visible = true;
				 Speek(label2->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 Speek(label3->Text);
				 labelsb31->Visible = true;
				 labelsb32->Visible = true;
				 Speek(label4->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验1实验方法3::speek));
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

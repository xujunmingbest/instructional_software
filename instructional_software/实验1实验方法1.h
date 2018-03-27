#pragma once
#include "voice.h"
extern bool 实验1实验方法1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验1实验方法1 摘要
	/// </summary>
	public ref class 实验1实验方法1 : public System::Windows::Forms::Form
	{
	public:
		实验1实验方法1(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验1实验方法1Status = true;
						//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验方法1()
		{
			实验1实验方法1Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labell1;
	private: System::Windows::Forms::Label^  labell2;
	private: System::Windows::Forms::Label^  labell3;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelkm1;
	private: System::Windows::Forms::Label^  labelkm2;
	private: System::Windows::Forms::Label^  labelkm3;
	private: System::Windows::Forms::Label^  labelsb12;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验方法1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labell1 = (gcnew System::Windows::Forms::Label());
			this->labell2 = (gcnew System::Windows::Forms::Label());
			this->labell3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelkm1 = (gcnew System::Windows::Forms::Label());
			this->labelkm2 = (gcnew System::Windows::Forms::Label());
			this->labelkm3 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(428, 520);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(484, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(402, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"（1）按下控制屏上“开”按钮。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(487, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(455, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"（2）先合Q1，接通三相交流380V电源；";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(484, 362);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(662, 68);
			this->label4->TabIndex = 4;
			this->label4->Text = L"（3）按下启动按钮SB1，对电动机M进行点动操作，比较按下SB1和松开SB1时电动机M的运转情况";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(484, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 208);
			this->label1->TabIndex = 1;
			this->label1->Text = L"按图8-1接线。接线时，先接主电路，它是从380V三相交流电源的输出端 U、V、W开始，经三刀开关 Q1、熔断器FU1、FU2、FU3、接触器KM1主触点到电动机"
				L"M的三个线端A、B、C的电路，用导线按顺序串联起来，有三路。主电路经检查无误后，再接控制电路，从熔断器FU4插孔V开始，经按钮SB1常开、接触器KM1线圈到插孔"
				L"W 。线接好经指导老师检查无误后，按下列步骤进行实验：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labell1
			// 
			this->labell1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labell1->Location = System::Drawing::Point(73, 100);
			this->labell1->Name = L"labell1";
			this->labell1->Size = System::Drawing::Size(22, 10);
			this->labell1->TabIndex = 5;
			this->labell1->Text = L"label5";
			// 
			// labell2
			// 
			this->labell2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labell2->Location = System::Drawing::Point(146, 100);
			this->labell2->Name = L"labell2";
			this->labell2->Size = System::Drawing::Size(22, 10);
			this->labell2->TabIndex = 6;
			this->labell2->Text = L"label6";
			// 
			// labell3
			// 
			this->labell3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labell3->Location = System::Drawing::Point(218, 100);
			this->labell3->Name = L"labell3";
			this->labell3->Size = System::Drawing::Size(22, 10);
			this->labell3->TabIndex = 7;
			this->labell3->Text = L"label7";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(130, 557);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 58);
			this->button1->TabIndex = 9;
			this->button1->Text = L"开始朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1实验方法1::button1_Click);
			// 
			// labelkm1
			// 
			this->labelkm1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm1->Location = System::Drawing::Point(73, 296);
			this->labelkm1->Name = L"labelkm1";
			this->labelkm1->Size = System::Drawing::Size(22, 10);
			this->labelkm1->TabIndex = 10;
			this->labelkm1->Text = L"label9";
			// 
			// labelkm2
			// 
			this->labelkm2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm2->Location = System::Drawing::Point(146, 296);
			this->labelkm2->Name = L"labelkm2";
			this->labelkm2->Size = System::Drawing::Size(22, 10);
			this->labelkm2->TabIndex = 11;
			this->labelkm2->Text = L"label10";
			// 
			// labelkm3
			// 
			this->labelkm3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm3->Location = System::Drawing::Point(218, 296);
			this->labelkm3->Name = L"labelkm3";
			this->labelkm3->Size = System::Drawing::Size(22, 10);
			this->labelkm3->TabIndex = 12;
			this->labelkm3->Text = L"label11";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(380, 122);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(19, 21);
			this->labelsb12->TabIndex = 19;
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(389, 113);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 20;
			this->labelsb11->Text = L"label8";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(451, 557);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 58);
			this->button2->TabIndex = 21;
			this->button2->Text = L"线程挂起";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &实验1实验方法1::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(779, 557);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(225, 58);
			this->button3->TabIndex = 22;
			this->button3->Text = L"线程继续";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &实验1实验方法1::button3_Click);
			// 
			// 实验1实验方法1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1333, 727);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelkm3);
			this->Controls->Add(this->labelkm2);
			this->Controls->Add(this->labelkm1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labell3);
			this->Controls->Add(this->labell2);
			this->Controls->Add(this->labell1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验1实验方法1";
			this->Text = L"实验方法-三相异步电动机点动控制线路";
			this->Load += gcnew System::EventHandler(this, &实验1实验方法1::实验1实验方法1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验1实验方法1_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelkm1->Visible = false;
				 labelkm2->Visible = false;
				 labelkm3->Visible = false;
			     labell1->Visible = false;
				 labell2->Visible = false;
				 labell3->Visible = false;
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 init();
				//Speek(label1->Text);
				 Speek(label2->Text);
				 labelkm1->Visible = true;
				 labelkm2->Visible = true;
				 labelkm3->Visible = true;
				 Speek(label3->Text);
				 labell1->Visible = true;
				 labell2->Visible = true;
				 labell3->Visible = true;
				 Speek(label4->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验1实验方法1::speek));
				 Thread_speek->Name = in;
				 Thread_speek->Start();
				 Thread_speek->Join();
			 }
			 void speek() {
				 g_voice.voice_speek(Thread_speek->Name);
			 }
			 Thread^	 Thread1;
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Thread1 = gcnew Thread(gcnew ThreadStart(this, &实验1实验方法1::speek_control));
		Thread1->Start();
		Console::Write(Thread1->ThreadState);
		//	init();
		//speek_control();
	}
			 /*
	设计文档: 开始的时候启动，线程挂起
	          然后 点击的时候检查线程的状态
			  然后在点击线程的挂起
			  暂停的时候，直接暂停
			  继续的时候发现线程是不是挂起的状态
			  杀死线程，观察状态
			 */

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Thread1->Suspend();
	Console::Write("\n");
	Console::Write(Thread1->ThreadState);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Thread1->Resume();
	if (Thread1 == nullptr)
	{
		Console::Write("线程为 nullptr");
	}
	else {
		Console::Write(Thread1->ThreadState);
		Thread1->Resume();
	}
}
};
}

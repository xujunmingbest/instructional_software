#pragma once
#include "voice.h"
extern bool 实验13实验方法1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验13实验方法1 摘要
	/// </summary>
	public ref class 实验13实验方法1 : public System::Windows::Forms::Form
	{
	public:
		实验13实验方法1(void)
		{
			InitializeComponent();
			实验13实验方法1Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验13实验方法1()
		{
			实验13实验方法1Status = false;
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelsb3;
	private: System::Windows::Forms::Label^  labelsb2;
	private: System::Windows::Forms::Label^  labelsb1;
	private: System::Windows::Forms::Label^  labelsb4;
	private: System::Windows::Forms::Label^  labelq21;
	private: System::Windows::Forms::Label^  labelq23;


	private: System::Windows::Forms::Label^  labelq22;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验13实验方法1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelsb3 = (gcnew System::Windows::Forms::Label());
			this->labelsb2 = (gcnew System::Windows::Forms::Label());
			this->labelsb1 = (gcnew System::Windows::Forms::Label());
			this->labelsb4 = (gcnew System::Windows::Forms::Label());
			this->labelq21 = (gcnew System::Windows::Forms::Label());
			this->labelq23 = (gcnew System::Windows::Forms::Label());
			this->labelq22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(455, 718);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(490, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(645, 65);
			this->label4->TabIndex = 9;
			this->label4->Text = L"（2）按起动按钮SB3，观察主轴电机应起动运转，并符合假定的正、反转要求。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(490, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(746, 76);
			this->label3->TabIndex = 8;
			this->label3->Text = L"（1）按交流电源接通按钮SB3，操作Q1开关，对主轴的正转（假定为逆时针）反转（假定为顺时针）进行预选，按下SB1或SB2电机停止运转。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(490, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 45);
			this->label2->TabIndex = 7;
			this->label2->Text = L"1）主轴电机控制";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(490, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"按图8－24接线 ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(55, 734);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(375, 62);
			this->label5->TabIndex = 10;
			this->label5->Text = L"图8-24 X62W铣床控制电路图";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(490, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(645, 56);
			this->label6->TabIndex = 11;
			this->label6->Text = L"（3）变速冲动：在停机情况下，按SB4实现主轴电机的冲动，便于齿轮的啮合。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(490, 675);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(645, 83);
			this->label7->TabIndex = 21;
			this->label7->Text = L"（4）工作台快速移动。在主轴电机正常运转，工作台有进给运动的情况下，若合上开关Q3，则KA2吸合（模拟电磁铁动作），工作台快速移动。";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(490, 451);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(645, 98);
			this->label8->TabIndex = 20;
			this->label8->Text = L"（2）工作台纵向进给：Q2开关置于园工作台断开位置（即Q2-1、Q2-3闭合，Q2-2断开），操作ST1或ST2（使ST1-1闭合或ST2-1闭合），进给电机应正"
				L"转或反转运行。";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(490, 552);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(645, 108);
			this->label9->TabIndex = 19;
			this->label9->Text = L"（3）工作台横向及垂直进给：Q2开关置于园工作台断开位置（即Q2-2断开、Q2-1，Q2-3闭合），操作ST3或ST4（使ST3-1闭合或ST4-1闭合）进给电机"
				L"应正转或反转运行，实现工作台横向或垂直进给。";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(490, 338);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(772, 113);
			this->label10->TabIndex = 18;
			this->label10->Text = L"（1）园工作台工作：Q2开关置于园工作台接通位置（即Q2-1、Q2-3断开，Q2-2闭合），主轴电机起动情况下，进给电机正转；Q2开关置于园工作台断开位置时，（即"
				L"Q2-2断开、Q2-1闭合，Q2-3闭合）进给电机停止运转。";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(490, 309);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(492, 29);
			this->label11->TabIndex = 17;
			this->label11->Text = L"2）进给电机控制";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(807, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 53);
			this->button1->TabIndex = 47;
			this->button1->Text = L"朗读并演示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验13实验方法1::button1_Click);
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(273, 166);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(25, 10);
			this->labelq3->TabIndex = 52;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(273, 123);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(27, 10);
			this->labelq2->TabIndex = 51;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(275, 83);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(25, 10);
			this->labelq1->TabIndex = 50;
			this->labelq1->Text = L"labell1";
			// 
			// labelsb3
			// 
			this->labelsb3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb3->Location = System::Drawing::Point(171, 516);
			this->labelsb3->Name = L"labelsb3";
			this->labelsb3->Size = System::Drawing::Size(33, 10);
			this->labelsb3->TabIndex = 60;
			this->labelsb3->Text = L"label12";
			// 
			// labelsb2
			// 
			this->labelsb2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb2->Location = System::Drawing::Point(210, 516);
			this->labelsb2->Name = L"labelsb2";
			this->labelsb2->Size = System::Drawing::Size(33, 10);
			this->labelsb2->TabIndex = 62;
			this->labelsb2->Text = L"label12";
			// 
			// labelsb1
			// 
			this->labelsb1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb1->Location = System::Drawing::Point(249, 516);
			this->labelsb1->Name = L"labelsb1";
			this->labelsb1->Size = System::Drawing::Size(33, 10);
			this->labelsb1->TabIndex = 63;
			this->labelsb1->Text = L"label12";
			// 
			// labelsb4
			// 
			this->labelsb4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb4->Location = System::Drawing::Point(285, 492);
			this->labelsb4->Name = L"labelsb4";
			this->labelsb4->Size = System::Drawing::Size(33, 10);
			this->labelsb4->TabIndex = 64;
			this->labelsb4->Text = L"label12";
			// 
			// labelq21
			// 
			this->labelq21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelq21->Location = System::Drawing::Point(249, 585);
			this->labelq21->Name = L"labelq21";
			this->labelq21->Size = System::Drawing::Size(21, 21);
			this->labelq21->TabIndex = 65;
			// 
			// labelq23
			// 
			this->labelq23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelq23->Location = System::Drawing::Point(440, 602);
			this->labelq23->Name = L"labelq23";
			this->labelq23->Size = System::Drawing::Size(14, 21);
			this->labelq23->TabIndex = 66;
			// 
			// labelq22
			// 
			this->labelq22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq22->Location = System::Drawing::Point(381, 620);
			this->labelq22->Name = L"labelq22";
			this->labelq22->Size = System::Drawing::Size(31, 10);
			this->labelq22->TabIndex = 67;
			// 
			// 实验13实验方法1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1340, 795);
			this->Controls->Add(this->labelq22);
			this->Controls->Add(this->labelq23);
			this->Controls->Add(this->labelq21);
			this->Controls->Add(this->labelsb4);
			this->Controls->Add(this->labelsb1);
			this->Controls->Add(this->labelsb2);
			this->Controls->Add(this->labelsb3);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验13实验方法1";
			this->Text = L"实验13实验方法1";
			this->Load += gcnew System::EventHandler(this, &实验13实验方法1::实验13实验方法1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验13实验方法1_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;

				 labelsb1->Visible = false;
				 labelsb2->Visible = false;
				 labelsb3->Visible = false;
				 labelsb4->Visible = false;
				 labelq21->Visible = false;
				 labelq22->Visible = false;
				 labelq23->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label2->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label4->Text);

				 Speek(label5->Text);
				 Speek(label6->Text);
				 Speek(label7->Text);
				 Speek(label8->Text);
				 Speek(label9->Text);
				 Speek(label10->Text);
				 Speek(label11->Text);
				 Speek(label10->Text);
				 Speek(label11->Text);

				 labelsb1->Visible = true;
				 labelsb2->Visible = true;
				 labelsb3->Visible = true;
				 labelsb4->Visible = true;
				 labelq21->Visible = true;
				 labelq22->Visible = true;
				 labelq23->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &实验13实验方法1::speek));
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

#pragma once
#include "voice.h"
extern bool ʵ��10ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��10ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��10ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��10ʵ�鷽��(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��10ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��10ʵ�鷽��()
		{
			ʵ��10ʵ�鷽��Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelq3;

	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelqq3;

	private: System::Windows::Forms::Label^  labelqq2;

	private: System::Windows::Forms::Label^  labelqq1;


	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelkm1;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;
	private: System::Windows::Forms::Label^  labelq2;
	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��10ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelqq3 = (gcnew System::Windows::Forms::Label());
			this->labelqq2 = (gcnew System::Windows::Forms::Label());
			this->labelqq1 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelkm1 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(915, 775);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(235, 803);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(373, 42);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ͼ8-21  C620�����ĵ���������·";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(960, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 107);
			this->label1->TabIndex = 7;
			this->label1->Text = L"1��������������ߵ�ѹ380V�����¡��ء���ť����ͼ8��21���ߡ�������Ϻ󣬼������󣬰����²��������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(943, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(500, 107);
			this->label2->TabIndex = 8;
			this->label2->Text = L"��1�����������������Ͽ���Q1����ͨ 380V������Դ��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(943, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(500, 87);
			this->label4->TabIndex = 9;
			this->label4->Text = L"��2������SB1��ť��KM1ͨ�����ϣ�����綯��M1����ת��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(943, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(500, 84);
			this->label5->TabIndex = 10;
			this->label5->Text = L"��3�����Ͽ���Q2����ȴ�õ綯��M2����ת��";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(943, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(500, 99);
			this->label6->TabIndex = 11;
			this->label6->Text = L"��4������SB2��ť��KM1��Ȧ�ϵ磬����綯��M1�ϵ�ֹͣ��ת��ͬʱ��ȴ�õ綯��M2Ҳֹͣ��ת��";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(943, 519);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(500, 84);
			this->label7->TabIndex = 12;
			this->label7->Text = L"��5��ͼ��ELΪ���������ƣ��ɿ���Q3���ơ�";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(965, 627);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 53);
			this->button1->TabIndex = 21;
			this->button1->Text = L"�ʶ�����ʾ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��10ʵ�鷽��::button1_Click);
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(248, 104);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 41;
			this->labelq3->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(64, 102);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 39;
			this->labelq1->Text = L"labell1";
			// 
			// labelqq3
			// 
			this->labelqq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelqq3->Location = System::Drawing::Point(513, 581);
			this->labelqq3->Name = L"labelqq3";
			this->labelqq3->Size = System::Drawing::Size(10, 45);
			this->labelqq3->TabIndex = 44;
			this->labelqq3->Text = L"labell1";
			// 
			// labelqq2
			// 
			this->labelqq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelqq2->Location = System::Drawing::Point(430, 581);
			this->labelqq2->Name = L"labelqq2";
			this->labelqq2->Size = System::Drawing::Size(10, 43);
			this->labelqq2->TabIndex = 43;
			this->labelqq2->Text = L"labell1";
			// 
			// labelqq1
			// 
			this->labelqq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelqq1->Location = System::Drawing::Point(331, 581);
			this->labelqq1->Name = L"labelqq1";
			this->labelqq1->Size = System::Drawing::Size(10, 43);
			this->labelqq1->TabIndex = 42;
			this->labelqq1->Text = L"labell1";
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(643, 343);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 46);
			this->labelsb21->TabIndex = 53;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(631, 343);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(33, 37);
			this->labelsb22->TabIndex = 52;
			// 
			// labelkm1
			// 
			this->labelkm1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm1->Location = System::Drawing::Point(678, 428);
			this->labelkm1->Name = L"labelkm1";
			this->labelkm1->Size = System::Drawing::Size(10, 46);
			this->labelkm1->TabIndex = 54;
			this->labelkm1->Text = L"label12";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(643, 428);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 56;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(631, 428);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(33, 37);
			this->labelsb12->TabIndex = 55;
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(167, 102);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 40;
			this->labelq2->Text = L"labell1";
			// 
			// ʵ��10ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1499, 868);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelkm1);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelqq3);
			this->Controls->Add(this->labelqq2);
			this->Controls->Add(this->labelqq1);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��10ʵ�鷽��";
			this->Text = L"ʵ��10ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��10ʵ�鷽��::ʵ��10ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��10ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;
				 labelqq1->Visible = false;
				 labelqq2->Visible = false;
				 labelqq3->Visible = false;
				 labelsb21->Visible = false;
				 labelsb22->Visible = false;
				 labelsb11->Visible = false;
				 labelsb12->Visible = false;
				 labelkm1->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label2->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label4->Text);
				 labelsb11->Visible = true;
				 labelsb12->Visible = true;
				 labelkm1->Visible = true;
				 Speek(label5->Text);
				 labelqq1->Visible = true;
				 labelqq2->Visible = true;
				 labelqq3->Visible = true;
				 Speek(label6->Text);
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 labelkm1->Visible = false;
				 Speek(label7->Text);
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��10ʵ�鷽��::speek));
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

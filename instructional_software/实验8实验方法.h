#pragma once
#include "voice.h"
extern bool ʵ��8ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��8ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��8ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��8ʵ�鷽��(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��8ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��8ʵ�鷽��()
		{
			ʵ��8ʵ�鷽��Status = false;
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
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelkm13;
	private: System::Windows::Forms::Label^  labelkm12;
	private: System::Windows::Forms::Label^  labelkm11;
	private: System::Windows::Forms::Label^  labelkm23;
	private: System::Windows::Forms::Label^  labelkm22;
	private: System::Windows::Forms::Label^  labelkm21;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;
	private: System::Windows::Forms::Label^  label6;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��8ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelkm13 = (gcnew System::Windows::Forms::Label());
			this->labelkm12 = (gcnew System::Windows::Forms::Label());
			this->labelkm11 = (gcnew System::Windows::Forms::Label());
			this->labelkm23 = (gcnew System::Windows::Forms::Label());
			this->labelkm22 = (gcnew System::Windows::Forms::Label());
			this->labelkm21 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(822, 769);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(828, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(607, 71);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1��˫���첽�綯���Ŀ�����·��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(828, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(607, 54);
			this->label1->TabIndex = 7;
			this->label1->Text = L"�𶯿������������ѹ��������ߵ�ѹ380V������ٰ��¡��ء���ť����ͼ8-18���ߡ�";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(828, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(607, 96);
			this->label3->TabIndex = 8;
			this->label3->Text = L"��1���𶯵�Դ������SB2���綯���������νӷ��𶯣��۲첢��¼�綯��ת�ٺͰ����������Ϊ__________A��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(828, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(607, 97);
			this->label4->TabIndex = 9;
			this->label4->Text = L"��2������һ��ʱ����ʱ�󣬵綯����˫���νӷ����У��۲첢��¼�綯��ת�ٺͰ�������Ϊ____________A��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(828, 399);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(607, 71);
			this->label5->TabIndex = 10;
			this->label5->Text = L"��3������SB1���綯��ֹͣ��ת��";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(383, 72);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 50;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(318, 72);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 49;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(254, 72);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 48;
			this->labelq1->Text = L"labell1";
			// 
			// labelkm13
			// 
			this->labelkm13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm13->Location = System::Drawing::Point(384, 430);
			this->labelkm13->Name = L"labelkm13";
			this->labelkm13->Size = System::Drawing::Size(10, 43);
			this->labelkm13->TabIndex = 53;
			this->labelkm13->Text = L"labell1";
			// 
			// labelkm12
			// 
			this->labelkm12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm12->Location = System::Drawing::Point(319, 430);
			this->labelkm12->Name = L"labelkm12";
			this->labelkm12->Size = System::Drawing::Size(10, 43);
			this->labelkm12->TabIndex = 52;
			this->labelkm12->Text = L"labell1";
			// 
			// labelkm11
			// 
			this->labelkm11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm11->Location = System::Drawing::Point(252, 430);
			this->labelkm11->Name = L"labelkm11";
			this->labelkm11->Size = System::Drawing::Size(10, 43);
			this->labelkm11->TabIndex = 51;
			this->labelkm11->Text = L"labell1";
			// 
			// labelkm23
			// 
			this->labelkm23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm23->Location = System::Drawing::Point(513, 431);
			this->labelkm23->Name = L"labelkm23";
			this->labelkm23->Size = System::Drawing::Size(10, 43);
			this->labelkm23->TabIndex = 56;
			this->labelkm23->Text = L"labell1";
			// 
			// labelkm22
			// 
			this->labelkm22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm22->Location = System::Drawing::Point(472, 430);
			this->labelkm22->Name = L"labelkm22";
			this->labelkm22->Size = System::Drawing::Size(10, 43);
			this->labelkm22->TabIndex = 55;
			this->labelkm22->Text = L"labell1";
			// 
			// labelkm21
			// 
			this->labelkm21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm21->Location = System::Drawing::Point(429, 429);
			this->labelkm21->Name = L"labelkm21";
			this->labelkm21->Size = System::Drawing::Size(10, 43);
			this->labelkm21->TabIndex = 54;
			this->labelkm21->Text = L"labell1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(833, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 48);
			this->button1->TabIndex = 59;
			this->button1->Text = L"�ʶ�����ʾ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��8ʵ�鷽��::button1_Click);
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb21->Location = System::Drawing::Point(608, 360);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(10, 46);
			this->labelsb21->TabIndex = 61;
			this->labelsb21->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(596, 362);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(24, 37);
			this->labelsb22->TabIndex = 60;
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(608, 283);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 63;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(601, 283);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(24, 37);
			this->labelsb12->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(332, 793);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 42);
			this->label6->TabIndex = 64;
			this->label6->Text = L"ͼ8-18";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��8ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1467, 844);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelkm23);
			this->Controls->Add(this->labelkm22);
			this->Controls->Add(this->labelkm21);
			this->Controls->Add(this->labelkm13);
			this->Controls->Add(this->labelkm12);
			this->Controls->Add(this->labelkm11);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��8ʵ�鷽��";
			this->Text = L"ʵ��8ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��8ʵ�鷽��::ʵ��8ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��8ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
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
				 labelkm11->Visible = false;
				 labelkm12->Visible = false;
				 labelkm13->Visible = false;
				 labelkm21->Visible = false;
				 labelkm22->Visible = false;
				 labelkm23->Visible = false;
			 }
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label2->Text);
				 Speek(label3->Text);
				 Speek(label4->Text);
				 labelq1->Visible = true;
				 labelq2->Visible = true;
				 labelq3->Visible = true;
				 Speek(label5->Text);
				 labelsb11->Visible = true;
				 labelsb21->Visible = true;
				 labelsb22->Visible = true;
				 labelkm11->Visible = true;
				 labelkm12->Visible = true;
				 labelkm13->Visible = true;
				 labelkm21->Visible = true;
				 labelkm22->Visible = true;
				 labelkm23->Visible = true;
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��8ʵ�鷽��::speek));
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

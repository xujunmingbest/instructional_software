#pragma once
#include "voice.h"
extern bool ʵ��11ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��11ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��11ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��11ʵ�鷽��(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��11ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��11ʵ�鷽��()
		{
			ʵ��11ʵ�鷽��Status = false;
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
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelka1;

	private: System::Windows::Forms::Label^  labelq31;
	private: System::Windows::Forms::Label^  labelq32;
	private: System::Windows::Forms::Label^  labelsb11;



	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelkm1;

	private: System::Windows::Forms::Label^  labelq23;

	private: System::Windows::Forms::Label^  labelq22;

	private: System::Windows::Forms::Label^  labelq21;
	private: System::Windows::Forms::Label^  labelst3;
	private: System::Windows::Forms::Label^  labelkm2;



	private: System::Windows::Forms::Label^  labelsb4;
	private: System::Windows::Forms::Label^  labelsb2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��11ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelka1 = (gcnew System::Windows::Forms::Label());
			this->labelq31 = (gcnew System::Windows::Forms::Label());
			this->labelq32 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelkm1 = (gcnew System::Windows::Forms::Label());
			this->labelq23 = (gcnew System::Windows::Forms::Label());
			this->labelq22 = (gcnew System::Windows::Forms::Label());
			this->labelq21 = (gcnew System::Windows::Forms::Label());
			this->labelst3 = (gcnew System::Windows::Forms::Label());
			this->labelkm2 = (gcnew System::Windows::Forms::Label());
			this->labelsb4 = (gcnew System::Windows::Forms::Label());
			this->labelsb2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1020, 762);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(1033, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(726, 37);
			this->label3->TabIndex = 12;
			this->label3->Text = L"��1�����¡�������ť������Q1����ͨ���ཻ����Դ��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1033, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(726, 67);
			this->label1->TabIndex = 11;
			this->label1->Text = L"1����������ɵ�����ߵ�ѹ380V�����¡��ء���ť����ͼ8-22���ߡ�������ϼ������󣬰����²��������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(284, 777);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 39);
			this->label2->TabIndex = 13;
			this->label2->Text = L"ͼ8-22  M7130ƽ��ĥ���ĵ���������·";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1033, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(726, 62);
			this->label4->TabIndex = 14;
			this->label4->Text = L"��2��ת������Q3��������λ�ã��м�̵���KA1���ϣ���KA1ģ��Ƿ�����̵������ϣ���ģ�����������ϣ���";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1033, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(726, 169);
			this->label5->TabIndex = 16;
			this->label5->Text = L"��4������ST3��KM2ͨ�����ϣ�Һѹ�õ綯��M3����ת���۲�M3ת����ת5������ְ���ST1��ģ�⹤��̨���е�һ��λ��ѹ���г̿���ST1�����۲�綯��M3"
				L"ת������ת 5������ְ���ST2��ģ�⹤��̨���е�һ��λ��ѹ���г̿���ST2�����۲�綯��M3ת����ת5�룬�����ְ���ST3��ģ�⹤��̨���е�����λ�ã���"
				L"�̿���ST1�𻵲�������ʱѹ��ST3�����綯��M3Ӧֹͣ���С�";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1033, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(726, 57);
			this->label6->TabIndex = 15;
			this->label6->Text = L"��3������SB1��KM1ͨ�����ϣ�M1ɰ�ֵ綯�������У����Ͽ���Q2����ȴ�õ綯��M2�����С�";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(1038, 655);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(726, 72);
			this->label7->TabIndex = 18;
			this->label7->Text = L"��6������SB4��Һѹ�õ綯��ֹͣ���У��ٰ���SB2��ɰ�ֵ綯��M1����ȴ�õ綯��ֹͣ��ת��";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(1033, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(726, 191);
			this->label8->TabIndex = 17;
			this->label8->Text = resources->GetString(L"label8.Text");
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(188, 85);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 44;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(122, 86);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 43;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(44, 86);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 42;
			this->labelq1->Text = L"labell1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1053, 754);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 53);
			this->button1->TabIndex = 45;
			this->button1->Text = L"�ʶ�����ʾ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��11ʵ�鷽��::button1_Click);
			// 
			// labelka1
			// 
			this->labelka1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelka1->Location = System::Drawing::Point(860, 359);
			this->labelka1->Name = L"labelka1";
			this->labelka1->Size = System::Drawing::Size(10, 43);
			this->labelka1->TabIndex = 46;
			this->labelka1->Text = L"labell1";
			// 
			// labelq31
			// 
			this->labelq31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq31->Location = System::Drawing::Point(385, 119);
			this->labelq31->Name = L"labelq31";
			this->labelq31->Size = System::Drawing::Size(52, 10);
			this->labelq31->TabIndex = 47;
			this->labelq31->Text = L"labell1";
			// 
			// labelq32
			// 
			this->labelq32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq32->Location = System::Drawing::Point(385, 150);
			this->labelq32->Name = L"labelq32";
			this->labelq32->Size = System::Drawing::Size(52, 10);
			this->labelq32->TabIndex = 48;
			this->labelq32->Text = L"labell1";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(792, 489);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(10, 46);
			this->labelsb11->TabIndex = 69;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::Color::White;
			this->labelsb22->Location = System::Drawing::Point(788, 489);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(14, 37);
			this->labelsb22->TabIndex = 68;
			// 
			// labelkm1
			// 
			this->labelkm1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm1->Location = System::Drawing::Point(820, 489);
			this->labelkm1->Name = L"labelkm1";
			this->labelkm1->Size = System::Drawing::Size(10, 37);
			this->labelkm1->TabIndex = 70;
			this->labelkm1->Text = L"label12";
			// 
			// labelq23
			// 
			this->labelq23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq23->Location = System::Drawing::Point(370, 624);
			this->labelq23->Name = L"labelq23";
			this->labelq23->Size = System::Drawing::Size(10, 43);
			this->labelq23->TabIndex = 73;
			this->labelq23->Text = L"labell1";
			// 
			// labelq22
			// 
			this->labelq22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq22->Location = System::Drawing::Point(328, 625);
			this->labelq22->Name = L"labelq22";
			this->labelq22->Size = System::Drawing::Size(10, 43);
			this->labelq22->TabIndex = 72;
			this->labelq22->Text = L"labell1";
			// 
			// labelq21
			// 
			this->labelq21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq21->Location = System::Drawing::Point(286, 625);
			this->labelq21->Name = L"labelq21";
			this->labelq21->Size = System::Drawing::Size(10, 43);
			this->labelq21->TabIndex = 71;
			this->labelq21->Text = L"labell1";
			// 
			// labelst3
			// 
			this->labelst3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelst3->Location = System::Drawing::Point(860, 589);
			this->labelst3->Name = L"labelst3";
			this->labelst3->Size = System::Drawing::Size(10, 37);
			this->labelst3->TabIndex = 74;
			this->labelst3->Text = L"label16";
			// 
			// labelkm2
			// 
			this->labelkm2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm2->Location = System::Drawing::Point(969, 643);
			this->labelkm2->Name = L"labelkm2";
			this->labelkm2->Size = System::Drawing::Size(10, 37);
			this->labelkm2->TabIndex = 75;
			this->labelkm2->Text = L"label17";
			// 
			// labelsb4
			// 
			this->labelsb4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb4->Location = System::Drawing::Point(860, 402);
			this->labelsb4->Name = L"labelsb4";
			this->labelsb4->Size = System::Drawing::Size(10, 19);
			this->labelsb4->TabIndex = 76;
			this->labelsb4->Text = L"labell1";
			// 
			// labelsb2
			// 
			this->labelsb2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb2->Location = System::Drawing::Point(788, 448);
			this->labelsb2->Name = L"labelsb2";
			this->labelsb2->Size = System::Drawing::Size(10, 19);
			this->labelsb2->TabIndex = 77;
			this->labelsb2->Text = L"labell1";
			// 
			// ʵ��11ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1771, 958);
			this->Controls->Add(this->labelsb2);
			this->Controls->Add(this->labelsb4);
			this->Controls->Add(this->labelkm2);
			this->Controls->Add(this->labelst3);
			this->Controls->Add(this->labelq23);
			this->Controls->Add(this->labelq22);
			this->Controls->Add(this->labelq21);
			this->Controls->Add(this->labelkm1);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelq32);
			this->Controls->Add(this->labelq31);
			this->Controls->Add(this->labelka1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��11ʵ�鷽��";
			this->Text = L"ʵ��11ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��11ʵ�鷽��::ʵ��11ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��11ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
		init();
	}
			 void init() {
				 labelq1->Visible = false;
				 labelq2->Visible = false;
				 labelq3->Visible = false;
				 labelq31->Visible = false;
				 labelq32->Visible = false;
				 labelq21->Visible = false;
				 labelq22->Visible = false;
				 labelq23->Visible = false;
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

				 Speek(label5->Text);
				 Speek(label6->Text);
				 labelsb22->Visible = true;
				 Speek(label7->Text);
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��11ʵ�鷽��::speek));
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

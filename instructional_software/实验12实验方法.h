#pragma once
#include "voice.h"
extern bool ʵ��12ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��12ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��12ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��12ʵ�鷽��(void)
		{
			InitializeComponent();
			ʵ��12ʵ�鷽��Status = true;
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��12ʵ�鷽��()
		{
			ʵ��12ʵ�鷽��Status = false;
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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelq3;
	private: System::Windows::Forms::Label^  labelq2;
	private: System::Windows::Forms::Label^  labelq1;
	private: System::Windows::Forms::Label^  labelsb11;
	private: System::Windows::Forms::Label^  labelsb12;
	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  labelsb32;
	private: System::Windows::Forms::Label^  labelsb31;
	private: System::Windows::Forms::Label^  labelsb42;
	private: System::Windows::Forms::Label^  labelsb41;
	private: System::Windows::Forms::Label^  labelst12;
	private: System::Windows::Forms::Label^  labelst11;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��12ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelq3 = (gcnew System::Windows::Forms::Label());
			this->labelq2 = (gcnew System::Windows::Forms::Label());
			this->labelq1 = (gcnew System::Windows::Forms::Label());
			this->labelsb11 = (gcnew System::Windows::Forms::Label());
			this->labelsb12 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->labelsb32 = (gcnew System::Windows::Forms::Label());
			this->labelsb31 = (gcnew System::Windows::Forms::Label());
			this->labelsb42 = (gcnew System::Windows::Forms::Label());
			this->labelsb41 = (gcnew System::Windows::Forms::Label());
			this->labelst12 = (gcnew System::Windows::Forms::Label());
			this->labelst11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1006, 798);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ʵ��12ʵ�鷽��::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(261, 813);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ͼ 8-23";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1024, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(614, 80);
			this->label2->TabIndex = 11;
			this->label2->Text = L"1����������ɵ�����ߵ�ѹ380V�����¡��ء���ť����ͼ8-23���ߡ�";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1024, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(588, 88);
			this->label3->TabIndex = 12;
			this->label3->Text = L"2��M1�첽�綯��װ�ڵ����ϣ�M2�����綯������ʵ������̨���ϣ��ֱ�ģ�����������е綯����";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1024, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(748, 126);
			this->label4->TabIndex = 13;
			this->label4->Text = L"3����·������ɣ���ָ����ʦ�������󣬷��ɰ����в������ͨ��ʵ�顣�ٶ��綯��M1����Ϊ˳ʱ��ת�򣬵綯��M2��ǰ����Ϊ˳ʱ��ת����SB1��SB3Ӧ����ת��Ҫ"
				L"����������Ҫ��Ӧ��������ʹ���ת�����˳ʱ��ļٶ�Ҫ��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1024, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(748, 118);
			this->label5->TabIndex = 14;
			this->label5->Text = L"4����SB2��SB4��M1��M2��ת��Ӧ������ʱ��ת��Ҫ���ڵ��M1��ת��״̬�£���ST1���Ե���ܺ��ƶ����۲���Ӧ�ܿ�ͣת����ģ��ʵ�ʵ��«�������綯��ͣ��"
				L"ʱ���������ƶ�����������բ�������Ῠס����ʹ���������ڿ��С�";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1024, 455);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(748, 180);
			this->label6->TabIndex = 15;
			this->label6->Text = L"5���ٴβ�������ť���Ȱ�SB2��M1�����ʱ��ת���½������ٰ�SB3��M2���˳ʱ��ת����ǰ������Ϊ��SB4��M2�����ʱ��ת����󣩣��ɿ�����ť�����Ӧͣ"
				L"ֹ��ת����SB1��M1���˳ʱ����ת������������10���ӣ�ģ ���������������λ������ʱ��ST1��ģ�����������λ��ײ��λ����ST1�������Ӧ�ܿ�ֹͣ��ת��";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1024, 650);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(737, 92);
			this->label7->TabIndex = 16;
			this->label7->Text = L"6��Ϊ����ʵ�ʲ����б�֤��ȫ��Ҫ��ÿ��ֻ����һ����ť����ʹ��������ʱ�����������У�������������ʱ��ʹ�����������˶���Ҳ�������ڵ�·�м�����ʹ��������ȫ��";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Click += gcnew System::EventHandler(this, &ʵ��12ʵ�鷽��::label7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1029, 747);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 53);
			this->button1->TabIndex = 46;
			this->button1->Text = L"�ʶ�����ʾ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��12ʵ�鷽��::button1_Click);
			// 
			// labelq3
			// 
			this->labelq3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq3->Location = System::Drawing::Point(495, 80);
			this->labelq3->Name = L"labelq3";
			this->labelq3->Size = System::Drawing::Size(10, 43);
			this->labelq3->TabIndex = 49;
			this->labelq3->Text = L"labell1";
			// 
			// labelq2
			// 
			this->labelq2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq2->Location = System::Drawing::Point(429, 81);
			this->labelq2->Name = L"labelq2";
			this->labelq2->Size = System::Drawing::Size(10, 43);
			this->labelq2->TabIndex = 48;
			this->labelq2->Text = L"labell1";
			// 
			// labelq1
			// 
			this->labelq1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelq1->Location = System::Drawing::Point(351, 81);
			this->labelq1->Name = L"labelq1";
			this->labelq1->Size = System::Drawing::Size(10, 43);
			this->labelq1->TabIndex = 47;
			this->labelq1->Text = L"labell1";
			// 
			// labelsb11
			// 
			this->labelsb11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb11->Location = System::Drawing::Point(26, 326);
			this->labelsb11->Name = L"labelsb11";
			this->labelsb11->Size = System::Drawing::Size(33, 10);
			this->labelsb11->TabIndex = 58;
			this->labelsb11->Text = L"label12";
			// 
			// labelsb12
			// 
			this->labelsb12->BackColor = System::Drawing::Color::White;
			this->labelsb12->Location = System::Drawing::Point(26, 338);
			this->labelsb12->Name = L"labelsb12";
			this->labelsb12->Size = System::Drawing::Size(33, 13);
			this->labelsb12->TabIndex = 57;
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb22->Location = System::Drawing::Point(93, 314);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(10, 46);
			this->labelsb22->TabIndex = 60;
			this->labelsb22->Text = L"label12";
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::Color::White;
			this->labelsb21->Location = System::Drawing::Point(81, 338);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(33, 10);
			this->labelsb21->TabIndex = 59;
			// 
			// labelsb32
			// 
			this->labelsb32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb32->Location = System::Drawing::Point(38, 632);
			this->labelsb32->Name = L"labelsb32";
			this->labelsb32->Size = System::Drawing::Size(10, 46);
			this->labelsb32->TabIndex = 62;
			this->labelsb32->Text = L"label12";
			// 
			// labelsb31
			// 
			this->labelsb31->BackColor = System::Drawing::Color::White;
			this->labelsb31->Location = System::Drawing::Point(26, 632);
			this->labelsb31->Name = L"labelsb31";
			this->labelsb31->Size = System::Drawing::Size(33, 37);
			this->labelsb31->TabIndex = 61;
			// 
			// labelsb42
			// 
			this->labelsb42->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb42->Location = System::Drawing::Point(101, 625);
			this->labelsb42->Name = L"labelsb42";
			this->labelsb42->Size = System::Drawing::Size(10, 46);
			this->labelsb42->TabIndex = 64;
			this->labelsb42->Text = L"label12";
			// 
			// labelsb41
			// 
			this->labelsb41->BackColor = System::Drawing::Color::White;
			this->labelsb41->Location = System::Drawing::Point(93, 650);
			this->labelsb41->Name = L"labelsb41";
			this->labelsb41->Size = System::Drawing::Size(21, 19);
			this->labelsb41->TabIndex = 63;
			// 
			// labelst12
			// 
			this->labelst12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelst12->Location = System::Drawing::Point(132, 276);
			this->labelst12->Name = L"labelst12";
			this->labelst12->Size = System::Drawing::Size(10, 46);
			this->labelst12->TabIndex = 66;
			this->labelst12->Text = L"label12";
			// 
			// labelst11
			// 
			this->labelst11->BackColor = System::Drawing::Color::White;
			this->labelst11->Location = System::Drawing::Point(120, 276);
			this->labelst11->Name = L"labelst11";
			this->labelst11->Size = System::Drawing::Size(33, 37);
			this->labelst11->TabIndex = 65;
			// 
			// ʵ��12ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1793, 886);
			this->Controls->Add(this->labelst12);
			this->Controls->Add(this->labelst11);
			this->Controls->Add(this->labelsb42);
			this->Controls->Add(this->labelsb41);
			this->Controls->Add(this->labelsb32);
			this->Controls->Add(this->labelsb31);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->labelsb11);
			this->Controls->Add(this->labelsb12);
			this->Controls->Add(this->labelq3);
			this->Controls->Add(this->labelq2);
			this->Controls->Add(this->labelq1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��12ʵ�鷽��";
			this->Text = L"ʵ��12ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��12ʵ�鷽��::ʵ��12ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��12ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
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
				 labelsb41->Visible = false;
				 labelsb42->Visible = false;
				 labelst11->Visible = false;
				 labelst12->Visible = false;
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
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��12ʵ�鷽��::speek));
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
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

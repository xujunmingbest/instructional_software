#pragma once
#include "voice.h"
extern bool ʵ��7������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��7������ ժҪ
	/// </summary>
	public ref class ʵ��7������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��7������(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��7������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��7������()
		{
			ʵ��7������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(217, 339);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 89);
			this->label2->TabIndex = 8;
			this->label2->Text = L"2����������ʽ�綯�����𶯷������ļ��֣�ʲô��Ƶ�����������к��ص㣿";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(217, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(906, 145);
			this->label1->TabIndex = 7;
			this->label1->Text = L"1����������ʽ�첽�綯��ת�Ӵ�������Լ�С�𶯵�������߹�������������ת���⣬�����Խ���ʲô��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &ʵ��7������::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��7������::button1_Click);
			// 
			// ʵ��7������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1458, 742);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��7������";
			this->Text = L"ʵ��7������";
			this->Load += gcnew System::EventHandler(this, &ʵ��7������::ʵ��7������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��7������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label2->Text);
				 Speek(label1->Text);

			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��7������::speek));
				 Thread_speek->Name = in;
				 Thread_speek->Start();
				 Thread_speek->Join();
			 }
			 void speek() {
				 g_voice.voice_speek(Thread_speek->Name);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speek_control();
	}
	};
}

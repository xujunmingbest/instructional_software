#pragma once
#include "voice.h"
extern bool ʵ��9ʵ��Ŀ��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��9ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ʵ��9ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��9ʵ��Ŀ��(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��9ʵ��Ŀ��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��9ʵ��Ŀ��()
		{
			ʵ��9ʵ��Ŀ��Status = false;
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
			this->label2->Location = System::Drawing::Point(203, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(677, 103);
			this->label2->TabIndex = 5;
			this->label2->Text = L"2��������ո����ƶ���ԭ��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(203, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 153);
			this->label1->TabIndex = 4;
			this->label1->Text = L"1��ͨ�������ƶ���ʵ�ʽ��ߣ��˽ⲻͬ�ƶ����ص�����õķ�Χ��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 73);
			this->button1->TabIndex = 11;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��9ʵ��Ŀ��::button1_Click);
			// 
			// ʵ��9ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1302, 650);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��9ʵ��Ŀ��";
			this->Text = L"ʵ��9ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &ʵ��9ʵ��Ŀ��::ʵ��9ʵ��Ŀ��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��9ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label1->Text);
				 Speek(label2->Text);
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��9ʵ��Ŀ��::speek));
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

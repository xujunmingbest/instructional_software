#pragma once
#include "voice.h"
extern bool ʵ��3������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��3������ ժҪ
	/// </summary>
	public ref class ʵ��3������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��3������(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��3������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��3������()
		{
			ʵ��3������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(116, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(906, 122);
			this->label1->TabIndex = 4;
			this->label1->Text = L"1���г̿�����Ҫ����ʲô���ϣ���������ʲô���ﵽ�г̿��ƣ��г̿���һ�㰲װ��ʲô�ط���";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(116, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 89);
			this->label2->TabIndex = 5;
			this->label2->Text = L"2��ͼ��ST0��ST4���г̿�������ʲô���ã�";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(116, 317);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(724, 83);
			this->label3->TabIndex = 6;
			this->label3->Text = L"3���оټ�����λ�����Ļ�������ʵ����  ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 7;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��3������::button1_Click);
			// 
			// ʵ��3������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 641);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��3������";
			this->Text = L"ʵ��3������";
			this->Load += gcnew System::EventHandler(this, &ʵ��3������::ʵ��3������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��3������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 Thread ^Thread_speek;
			 void speek_control() {
				 Speek(label2->Text);
				 Speek(label1->Text);
				 Speek(label3->Text);
			 }
			 void Speek(String ^in) {
				 Thread_speek = gcnew Thread(gcnew ThreadStart(this, &ʵ��3������::speek));
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

#pragma once
#include "voice.h"
extern bool ʵ��1ʵ��Ŀ��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ʵ��1ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ʵ��Ŀ��(void)
		{
			InitializeComponent();
			ʵ��1ʵ��Ŀ��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ʵ��Ŀ��()
		{
			ʵ��1ʵ��Ŀ��Status = false;
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
			this->label1->Location = System::Drawing::Point(326, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"һ��ʵ��Ŀ��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(90, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 140);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1��ͨ���������첽�綯���㶯���ƺ�����������·��ʵ�ʰ�װ���ߣ������ɵ���ԭ��ͼ�任�ɰ�װ����ͼ��֪ʶ��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(100, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(844, 94);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2��ͨ��ʵ���һ���������㶯���ƺ��������Ƶ��ص��Լ��ڻ��������е�Ӧ�á�";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(49, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 66);
			this->button1->TabIndex = 3;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��1ʵ��Ŀ��::button1_Click);
			// 
			// ʵ��1ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1107, 493);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��1ʵ��Ŀ��";
			this->Text = L"ʵ��1ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ʵ��Ŀ��::ʵ��1ʵ��Ŀ��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		string content = "һ��ʵ��Ŀ��\
1��ͨ���������첽�綯���㶯���ƺ�����������·��ʵ�ʰ�װ���ߣ������ɵ���ԭ��ͼ�任�ɰ�װ����ͼ��֪ʶ��\
2��ͨ��ʵ���һ���������㶯���ƺ��������Ƶ��ص��Լ��ڻ��������е�Ӧ�á�";
		system((LangdunvPath + content).c_str());
	}
};
}

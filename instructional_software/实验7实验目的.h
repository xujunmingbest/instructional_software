#pragma once
extern bool ʵ��7ʵ��Ŀ��Status;

namespace instructional_software {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��7ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ʵ��7ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��7ʵ��Ŀ��(void)
		{
			InitializeComponent();
			ʵ��7ʵ��Ŀ��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��7ʵ��Ŀ��()
		{
			ʵ��7ʵ��Ŀ��Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(102, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(844, 94);
			this->label3->TabIndex = 8;
			this->label3->Text = L"2������������������ʽ�첽�綯������Ӧ���ں��ֳ��ϣ����к��ص㣿";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(91, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 151);
			this->label2->TabIndex = 7;
			this->label2->Text = L"1��ͨ������������ʽ�첽�綯�����𶯿�����·��ʵ�ʰ�װ���ߣ������ɵ�·ԭ��ͼ�ӳ�ʵ�ʲ�����·�ķ�����";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(327, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 6;
			this->label1->Text = L"һ��ʵ��Ŀ��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ʵ��7ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 417);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��7ʵ��Ŀ��";
			this->Text = L"ʵ��7ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &ʵ��7ʵ��Ŀ��::ʵ��7ʵ��Ŀ��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��7ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

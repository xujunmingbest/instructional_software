#pragma once
extern bool ʵ��10������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��10������ ժҪ
	/// </summary>
	public ref class ʵ��10������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��10������(void)
		{
			InitializeComponent();
			ʵ��10������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��10������()
		{
			ʵ��10������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;

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
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(56, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(844, 122);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2������C620����������·����ʲô������";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(56, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 123);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1���Է�����ȴ�õ��Ϊʲô����KM1���档";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��10������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 712);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"ʵ��10������";
			this->Text = L"ʵ��10������";
			this->Load += gcnew System::EventHandler(this, &ʵ��10������::ʵ��10������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��10������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

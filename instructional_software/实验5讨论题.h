#pragma once
extern bool ʵ��5������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��5������ ժҪ
	/// </summary>
	public ref class ʵ��5������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��5������(void)
		{
			InitializeComponent();
			ʵ��5������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��5������()
		{
			ʵ��5������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(199, 44);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(727, 75);
			this->label1->TabIndex = 5;
			this->label1->Text = L"1��ʲô�����ؿ��ƣ����ؿ����к��ص㣿";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(199, 160);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(727, 75);
			this->label2->TabIndex = 6;
			this->label2->Text = L"2�����ؿ��ƵĽ���ԭ����ʲô��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��5������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 471);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��5������";
			this->Text = L"ʵ��5������";
			this->Load += gcnew System::EventHandler(this, &ʵ��5������::ʵ��5������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��5������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool ʵ��4������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��4������ ժҪ
	/// </summary>
	public ref class ʵ��4������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��4������(void)
		{
			InitializeComponent();
			ʵ��4������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��4������()
		{
			ʵ��4������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(136, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(720, 121);
			this->label2->TabIndex = 3;
			this->label2->Text = L"1������ͼ8��9��8��10��8-1l������ԭ������ͼ��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(136, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(720, 121);
			this->label1->TabIndex = 4;
			this->label1->Text = L"2���Ƚ�ͼ8-9��8-l0��8-11������·�Ĳ�ͬ��͸��Ե��ص㡣";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(136, 309);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(720, 121);
			this->label3->TabIndex = 5;
			this->label3->Text = L"3�����ټ���˳����ƵĻ�������ʵ������˵������;��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��4������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 759);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"ʵ��4������";
			this->Text = L"ʵ��4������";
			this->Load += gcnew System::EventHandler(this, &ʵ��4������::ʵ��4������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��4������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

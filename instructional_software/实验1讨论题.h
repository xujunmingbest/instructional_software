#pragma once
extern bool ʵ��1������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1������ ժҪ
	/// </summary>
	public ref class ʵ��1������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��1������(void)
		{
			InitializeComponent();
			ʵ��1������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1������()
		{
			ʵ��1������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(77, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 140);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1���Է���ʲô�е㶯��ʲô�����������Ƚ�ͼ8-1��ͼ8-2�Ľṹ�͹�������ʲô����";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(77, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(906, 189);
			this->label1->TabIndex = 3;
			this->label1->Text = L"2��ͼ�и���������Q1��FU1��FU2��FU3��FU4��KM1��FR��SB1��SB2��SB3����ʲô���ã�����ʹ�����۶���Ϊ�λ�Ҫʹ���ȼ̵������Ѿ����˿���Q1Ϊ"
				L"�λ�Ҫʹ�ýӴ��� KM1��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(77, 433);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(906, 140);
			this->label3->TabIndex = 4;
			this->label3->Text = L"3��ͼ8-2��·�ܷ�Ե綯��ʵ�ֹ�������·��Ƿѹ��ʧѹ������";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(77, 573);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(906, 140);
			this->label4->TabIndex = 5;
			this->label4->Text = L"4������ͼ8��l��8��2��8��3�Ĺ���ԭ������ͼ��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��1������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1167, 722);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"ʵ��1������";
			this->Text = L"ʵ��1������";
			this->Load += gcnew System::EventHandler(this, &ʵ��1������::ʵ��1������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

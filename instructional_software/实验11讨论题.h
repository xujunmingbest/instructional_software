#pragma once
extern bool ʵ��11������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��11������ ժҪ
	/// </summary>
	public ref class ʵ��11������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��11������(void)
		{
			InitializeComponent();
			ʵ��11������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��11������()
		{
			ʵ��11������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(172, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(844, 105);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2�����������������У��������ͨ��Ӧ��ʲô��Դ��Ϊʲô��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(172, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 116);
			this->label2->TabIndex = 9;
			this->label2->Text = L"l��ͼ��Һѹ�ÿ��ƻ�·����ʲô������·��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(532, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 87);
			this->label1->TabIndex = 11;
			this->label1->Text = L"������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(172, 422);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(844, 103);
			this->label4->TabIndex = 12;
			this->label4->Text = L"3���˵�·����Щ���屣����      ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��11������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1326, 679);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"ʵ��11������";
			this->Text = L"ʵ��11������";
			this->Load += gcnew System::EventHandler(this, &ʵ��11������::ʵ��11������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��11������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

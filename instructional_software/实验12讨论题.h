#pragma once
extern bool ʵ��12������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��12������ ժҪ
	/// </summary>
	public ref class ʵ��12������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��12������(void)
		{
			InitializeComponent();
			ʵ��12������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��12������()
		{
			ʵ��12������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::Label^  label1;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(460, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 126);
			this->label4->TabIndex = 14;
			this->label4->Text = L"������";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(177, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(748, 126);
			this->label1->TabIndex = 15;
			this->label1->Text = L"��1��Ϊʲô�ڵ綯��«���Ƶ�·�У���ťҪ���õ㶯���ƣ�";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(177, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(748, 126);
			this->label2->TabIndex = 16;
			this->label2->Text = L"��2����ͼ�У��г̿��� ST1��ʲô���ã� ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��12������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1211, 685);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Name = L"ʵ��12������";
			this->Text = L"ʵ��12������";
			this->Load += gcnew System::EventHandler(this, &ʵ��12������::ʵ��12������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��12������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool ʵ��3ʵ��Ŀ��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��3ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ʵ��3ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��3ʵ��Ŀ��(void)
		{
			InitializeComponent();
			ʵ��3ʵ��Ŀ��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��3ʵ��Ŀ��()
		{
			ʵ��3ʵ��Ŀ��Status = false;
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
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(116, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 132);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1��ͨ���Թ���̨�Զ�����ѭ��������·��ʵ�ʰ�װ���ߡ������ɵ���ԭ��ͼ�任�ɰ�װ����ͼ�ķ����������г̿������г̿��ص����á��Լ��ڻ�����·�е�Ӧ�á�";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(116, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(677, 82);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2��ͨ��ʵ���һ�������Զ�����ѭ�������ڻ�����·�е�Ӧ�ó��ϡ�";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��3ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1018, 483);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ʵ��3ʵ��Ŀ��";
			this->Text = L"ʵ��3ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &ʵ��3ʵ��Ŀ��::ʵ��3ʵ��Ŀ��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��3ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool ʵ��6������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��6������ ժҪ
	/// </summary>
	public ref class ʵ��6������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��6������(void)
		{
			InitializeComponent();
			ʵ��6������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��6������()
		{
			ʵ��6������Status = false;
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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(177, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1112, 71);
			this->label2->TabIndex = 5;
			this->label2->Text = L"1������ͼ8��13��8��14��8��15��8��16�Ĺ���ԭ������ͼ��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(177, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1008, 58);
			this->label1->TabIndex = 6;
			this->label1->Text = L"2��ʱ��̵�����ͼ8��14��8��16�е�������ʲô��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(177, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(906, 58);
			this->label3->TabIndex = 7;
			this->label3->Text = L"3��ͼ8-14 ��ͼ8-13�д����跽����ʲô�ŵ㣿";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(177, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(906, 65);
			this->label4->TabIndex = 8;
			this->label4->Text = L"4������Y-����ѹ�𶯵ķ���ʱ�Ե綯���к�Ҫ��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(177, 345);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(906, 60);
			this->label5->TabIndex = 9;
			this->label5->Text = L"5����ѹ�𶯵�����Ŀ���ǿ���ʲô��������";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(177, 415);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(906, 89);
			this->label6->TabIndex = 10;
			this->label6->Text = L"6����ѹ�𶯵��Զ��������ֶ�������·�Ƚϣ�����Щ�ŵ㣿 ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��6������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1313, 695);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"ʵ��6������";
			this->Text = L"ʵ��6������";
			this->Load += gcnew System::EventHandler(this, &ʵ��6������::ʵ��6������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��6������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

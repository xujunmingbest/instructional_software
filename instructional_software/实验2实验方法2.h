#pragma once
extern bool ʵ��2ʵ�鷽��2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��2ʵ�鷽��2 ժҪ
	/// </summary>
	public ref class ʵ��2ʵ�鷽��2 : public System::Windows::Forms::Form
	{
	public:
		ʵ��2ʵ�鷽��2(void)
		{
			InitializeComponent();
			ʵ��2ʵ�鷽��2Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��2ʵ�鷽��2()
		{
			ʵ��2ʵ�鷽��2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��2ʵ�鷽��2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(825, 816);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(903, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(487, 91);
			this->label2->TabIndex = 4;
			this->label2->Text = L"��1�����¡��ء���ť�жϽ�����Դ����ͼ8-5���ߡ���ָ����ʦ�������󣬰��¡�������ťͨ�������";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(903, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(487, 91);
			this->label1->TabIndex = 5;
			this->label1->Text = L"��2�����ϵ�Դ����Q1����ͨ 380V���ཻ����Դ��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(903, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(487, 91);
			this->label3->TabIndex = 6;
			this->label3->Text = L"��3������SB1���۲첢��¼�綯��M��ת�򡢽Ӵ������������������    ���������";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(903, 367);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(487, 91);
			this->label4->TabIndex = 7;
			this->label4->Text = L"��4������SB3���۲첢��¼M��ת״̬���Ӵ�������������������";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(903, 458);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(487, 91);
			this->label5->TabIndex = 8;
			this->label5->Text = L"��5���ٰ���SB2���۲첢��¼M��ת�򡢽Ӵ��������������������������� ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��2ʵ�鷽��2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1469, 859);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��2ʵ�鷽��2";
			this->Text = L"ʵ��2ʵ�鷽��2";
			this->Load += gcnew System::EventHandler(this, &ʵ��2ʵ�鷽��2::ʵ��2ʵ�鷽��2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��2ʵ�鷽��2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool ʵ��4ʵ�鷽��1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��4ʵ�鷽��1 ժҪ
	/// </summary>
	public ref class ʵ��4ʵ�鷽��1 : public System::Windows::Forms::Form
	{
	public:
		ʵ��4ʵ�鷽��1(void)
		{
			InitializeComponent();
			ʵ��4ʵ�鷽��1Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��4ʵ�鷽��1()
		{
			ʵ��4ʵ�鷽��1Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��4ʵ�鷽��1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(835, 757);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(862, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(776, 89);
			this->label6->TabIndex = 19;
			this->label6->Text = L"��5������SB3ʹ���ͣת���Ȱ�SB2���������M2Ϊʲô�����𶯡�";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(862, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(776, 45);
			this->label5->TabIndex = 18;
			this->label5->Text = L"��4����M1��M2����תʱ���ܲ��ܵ���ֹͣM2��";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(862, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(776, 45);
			this->label4->TabIndex = 17;
			this->label4->Text = L"��3������M1��תʱ����SB2���۲�����ת���Ӵ������������";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(862, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(776, 45);
			this->label3->TabIndex = 16;
			this->label3->Text = L"��2������SB1���۲�������������Ӵ������������";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(862, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(776, 45);
			this->label2->TabIndex = 15;
			this->label2->Text = L"��1������������ť�����Ͽ���Q1����ͨ380V���ཻ����Դ��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(862, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 45);
			this->label1->TabIndex = 14;
			this->label1->Text = L"��ͼ8-9���ߡ�";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��4ʵ�鷽��1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1650, 786);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��4ʵ�鷽��1";
			this->Text = L"ʵ��4ʵ�鷽��1";
			this->Load += gcnew System::EventHandler(this, &ʵ��4ʵ�鷽��1::ʵ��4ʵ�鷽��1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��4ʵ�鷽��1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool ʵ��7ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��7ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��7ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��7ʵ�鷽��(void)
		{
			InitializeComponent();
			ʵ��7ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��7ʵ�鷽��()
		{
			ʵ��7ʵ�鷽��Status = false;
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
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��7ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(826, 793);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(61, 808);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(726, 39);
			this->label2->TabIndex = 8;
			this->label2->Text = L"ͼ8-17  ʱ��̵�����������ʽ�첽�綯���𶯿�����·";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Click += gcnew System::EventHandler(this, &ʵ��7ʵ�鷽��::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(869, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(726, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"1��ʱ��̵�����������ʽ�첽�綯���𶯿�����·��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(869, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(726, 39);
			this->label3->TabIndex = 10;
			this->label3->Text = L"��ͼ8-17���ߡ�";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(883, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(786, 48);
			this->label4->TabIndex = 11;
			this->label4->Text = L"��1�����¡�������ť�����Ͽ���Q1����ͨ380V���ཻ����Դ��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(883, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(726, 77);
			this->label5->TabIndex = 12;
			this->label5->Text = L"��2����SB1���۲첢��¼�綯��M����ת����������ʱ�������������Ϊ________________A��";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(883, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(726, 75);
			this->label6->TabIndex = 13;
			this->label6->Text = L"��3������һ��ʱ����ʱ���𶯵��豻�г��󣬵�����Ķ���Ϊ_______A��";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(883, 426);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(726, 72);
			this->label7->TabIndex = 14;
			this->label7->Text = L"��4������SB2�����ͣת���õ��߰ѵ綯��ת�Ӷ̽ӡ�";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(883, 498);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(726, 97);
			this->label8->TabIndex = 15;
			this->label8->Text = L"��5���ٰ���SB1����¼�����ʱ�������������Ϊ________A��";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��7ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1776, 846);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��7ʵ�鷽��";
			this->Text = L"ʵ��7ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��7ʵ�鷽��::ʵ��7ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��7ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

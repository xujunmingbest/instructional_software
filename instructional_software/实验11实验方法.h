#pragma once
extern bool ʵ��11ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��11ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��11ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��11ʵ�鷽��(void)
		{
			InitializeComponent();
			ʵ��11ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��11ʵ�鷽��()
		{
			ʵ��11ʵ�鷽��Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��11ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox1->Size = System::Drawing::Size(1020, 762);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(1033, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(726, 37);
			this->label3->TabIndex = 12;
			this->label3->Text = L"��1�����¡�������ť������Q1����ͨ���ཻ����Դ��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1033, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(726, 67);
			this->label1->TabIndex = 11;
			this->label1->Text = L"1����������ɵ�����ߵ�ѹ380V�����¡��ء���ť����ͼ8-22���ߡ�������ϼ������󣬰����²��������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(284, 777);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 39);
			this->label2->TabIndex = 13;
			this->label2->Text = L"ͼ8-22  M7130ƽ��ĥ���ĵ���������·";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1033, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(726, 62);
			this->label4->TabIndex = 14;
			this->label4->Text = L"��2��ת������Q3��������λ�ã��м�̵���KA1���ϣ���KA1ģ��Ƿ�����̵������ϣ���ģ�����������ϣ���";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1033, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(726, 169);
			this->label5->TabIndex = 16;
			this->label5->Text = L"��4������ST3��KM2ͨ�����ϣ�Һѹ�õ綯��M3����ת���۲�M3ת����ת5������ְ���ST1��ģ�⹤��̨���е�һ��λ��ѹ���г̿���ST1�����۲�綯��M3"
				L"ת������ת 5������ְ���ST2��ģ�⹤��̨���е�һ��λ��ѹ���г̿���ST2�����۲�綯��M3ת����ת5�룬�����ְ���ST3��ģ�⹤��̨���е�����λ�ã���"
				L"�̿���ST1�𻵲�������ʱѹ��ST3�����綯��M3Ӧֹͣ���С�";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1033, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(726, 57);
			this->label6->TabIndex = 15;
			this->label6->Text = L"��3������SB1��KM1ͨ�����ϣ�M1ɰ�ֵ綯�������У����Ͽ���Q2����ȴ�õ綯��M2�����С�";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(1038, 655);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(726, 72);
			this->label7->TabIndex = 18;
			this->label7->Text = L"��6������SB4��Һѹ�õ綯��ֹͣ���У��ٰ���SB2��ɰ�ֵ綯��M1����ȴ�õ綯��ֹͣ��ת��";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(1033, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(726, 191);
			this->label8->TabIndex = 17;
			this->label8->Text = resources->GetString(L"label8.Text");
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��11ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1771, 958);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��11ʵ�鷽��";
			this->Text = L"ʵ��11ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��11ʵ�鷽��::ʵ��11ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��11ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

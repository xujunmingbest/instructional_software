#pragma once
extern bool ʵ��13ʵ�鷽��1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��13ʵ�鷽��1 ժҪ
	/// </summary>
	public ref class ʵ��13ʵ�鷽��1 : public System::Windows::Forms::Form
	{
	public:
		ʵ��13ʵ�鷽��1(void)
		{
			InitializeComponent();
			ʵ��13ʵ�鷽��1Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��13ʵ�鷽��1()
		{
			ʵ��13ʵ�鷽��1Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��13ʵ�鷽��1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(455, 718);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(490, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(645, 65);
			this->label4->TabIndex = 9;
			this->label4->Text = L"��2�����𶯰�ťSB3���۲�������Ӧ����ת�������ϼٶ���������תҪ��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(490, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(746, 76);
			this->label3->TabIndex = 8;
			this->label3->Text = L"��1����������Դ��ͨ��ťSB3������Q1���أ����������ת���ٶ�Ϊ��ʱ�룩��ת���ٶ�Ϊ˳ʱ�룩����Ԥѡ������SB1��SB2���ֹͣ��ת��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(490, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 45);
			this->label2->TabIndex = 7;
			this->label2->Text = L"1������������";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(490, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"��ͼ8��24���� ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(55, 734);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(375, 62);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ͼ8-24 X62Wϳ�����Ƶ�·ͼ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(490, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(645, 56);
			this->label6->TabIndex = 11;
			this->label6->Text = L"��3�����ٳ嶯����ͣ������£���SB4ʵ���������ĳ嶯�����ڳ��ֵ����ϡ�";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(490, 675);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(645, 83);
			this->label7->TabIndex = 21;
			this->label7->Text = L"��4������̨�����ƶ�����������������ת������̨�н����˶�������£������Ͽ���Q3����KA2���ϣ�ģ������������������̨�����ƶ���";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(490, 451);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(645, 98);
			this->label8->TabIndex = 20;
			this->label8->Text = L"��2������̨���������Q2��������԰����̨�Ͽ�λ�ã���Q2-1��Q2-3�պϣ�Q2-2�Ͽ���������ST1��ST2��ʹST1-1�պϻ�ST2-1�պϣ����������Ӧ��"
				L"ת��ת���С�";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(490, 552);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(645, 108);
			this->label9->TabIndex = 19;
			this->label9->Text = L"��3������̨���򼰴�ֱ������Q2��������԰����̨�Ͽ�λ�ã���Q2-2�Ͽ���Q2-1��Q2-3�պϣ�������ST3��ST4��ʹST3-1�պϻ�ST4-1�պϣ��������"
				L"Ӧ��ת��ת���У�ʵ�ֹ���̨�����ֱ������";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(490, 338);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(772, 113);
			this->label10->TabIndex = 18;
			this->label10->Text = L"��1��԰����̨������Q2��������԰����̨��ͨλ�ã���Q2-1��Q2-3�Ͽ���Q2-2�պϣ���������������£����������ת��Q2��������԰����̨�Ͽ�λ��ʱ������"
				L"Q2-2�Ͽ���Q2-1�պϣ�Q2-3�պϣ��������ֹͣ��ת��";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(490, 309);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(492, 29);
			this->label11->TabIndex = 17;
			this->label11->Text = L"2�������������";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��13ʵ�鷽��1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1340, 799);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��13ʵ�鷽��1";
			this->Text = L"ʵ��13ʵ�鷽��1";
			this->Load += gcnew System::EventHandler(this, &ʵ��13ʵ�鷽��1::ʵ��13ʵ�鷽��1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��13ʵ�鷽��1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

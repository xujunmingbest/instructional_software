#pragma once
extern bool ʵ��12ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��12ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��12ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��12ʵ�鷽��(void)
		{
			InitializeComponent();
			ʵ��12ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��12ʵ�鷽��()
		{
			ʵ��12ʵ�鷽��Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��12ʵ�鷽��::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1006, 798);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(261, 813);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 10;
			this->label1->Text = L"һ��ʵ��Ŀ��";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1024, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(614, 80);
			this->label2->TabIndex = 11;
			this->label2->Text = L"1����������ɵ�����ߵ�ѹ380V�����¡��ء���ť����ͼ8-23���ߡ�";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1024, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(588, 88);
			this->label3->TabIndex = 12;
			this->label3->Text = L"2��M1�첽�綯��װ�ڵ����ϣ�M2�����綯������ʵ������̨���ϣ��ֱ�ģ�����������е綯����";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1024, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(748, 126);
			this->label4->TabIndex = 13;
			this->label4->Text = L"3����·������ɣ���ָ����ʦ�������󣬷��ɰ����в������ͨ��ʵ�顣�ٶ��綯��M1����Ϊ˳ʱ��ת�򣬵綯��M2��ǰ����Ϊ˳ʱ��ת����SB1��SB3Ӧ����ת��Ҫ"
				L"����������Ҫ��Ӧ��������ʹ���ת�����˳ʱ��ļٶ�Ҫ��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1024, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(748, 118);
			this->label5->TabIndex = 14;
			this->label5->Text = L"4����SB2��SB4��M1��M2��ת��Ӧ������ʱ��ת��Ҫ���ڵ��M1��ת��״̬�£���ST1���Ե���ܺ��ƶ����۲���Ӧ�ܿ�ͣת����ģ��ʵ�ʵ��«�������綯��ͣ��"
				L"ʱ���������ƶ�����������բ�������Ῠס����ʹ���������ڿ��С�";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1024, 455);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(748, 180);
			this->label6->TabIndex = 15;
			this->label6->Text = L"5���ٴβ�������ť���Ȱ�SB2��M1�����ʱ��ת���½������ٰ�SB3��M2���˳ʱ��ת����ǰ������Ϊ��SB4��M2�����ʱ��ת����󣩣��ɿ�����ť�����Ӧͣ"
				L"ֹ��ת����SB1��M1���˳ʱ����ת������������10���ӣ�ģ ���������������λ������ʱ��ST1��ģ�����������λ��ײ��λ����ST1�������Ӧ�ܿ�ֹͣ��ת��";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1024, 650);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(737, 92);
			this->label7->TabIndex = 16;
			this->label7->Text = L"6��Ϊ����ʵ�ʲ����б�֤��ȫ��Ҫ��ÿ��ֻ����һ����ť����ʹ��������ʱ�����������У�������������ʱ��ʹ�����������˶���Ҳ�������ڵ�·�м�����ʹ��������ȫ��";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��12ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1793, 886);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��12ʵ�鷽��";
			this->Text = L"ʵ��12ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��12ʵ�鷽��::ʵ��12ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��12ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

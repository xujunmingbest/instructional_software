#pragma once
extern bool ʵ��8ʵ�鷽��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��8ʵ�鷽�� ժҪ
	/// </summary>
	public ref class ʵ��8ʵ�鷽�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��8ʵ�鷽��(void)
		{
			InitializeComponent();
			ʵ��8ʵ�鷽��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��8ʵ�鷽��()
		{
			ʵ��8ʵ�鷽��Status = false;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��8ʵ�鷽��::typeid));
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
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(822, 769);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(828, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(607, 71);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1��˫���첽�綯���Ŀ�����·��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(828, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(607, 54);
			this->label1->TabIndex = 7;
			this->label1->Text = L"�𶯿������������ѹ��������ߵ�ѹ380V������ٰ��¡��ء���ť����ͼ8-18���ߡ�";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(828, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(607, 96);
			this->label3->TabIndex = 8;
			this->label3->Text = L"��1���𶯵�Դ������SB2���綯���������νӷ��𶯣��۲첢��¼�綯��ת�ٺͰ����������Ϊ__________A��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(828, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(607, 97);
			this->label4->TabIndex = 9;
			this->label4->Text = L"��2������һ��ʱ����ʱ�󣬵綯����˫���νӷ����У��۲첢��¼�綯��ת�ٺͰ�������Ϊ____________A��";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(828, 399);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(607, 71);
			this->label5->TabIndex = 10;
			this->label5->Text = L"��3������SB1���綯��ֹͣ��ת��";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��8ʵ�鷽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1467, 779);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��8ʵ�鷽��";
			this->Text = L"ʵ��8ʵ�鷽��";
			this->Load += gcnew System::EventHandler(this, &ʵ��8ʵ�鷽��::ʵ��8ʵ�鷽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��8ʵ�鷽��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool ʵ��1ʵ�鷽��1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1ʵ�鷽��1 ժҪ
	/// </summary>
	public ref class ʵ��1ʵ�鷽��1 : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ʵ�鷽��1(void)
		{
			InitializeComponent();
			ʵ��1ʵ�鷽��1Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ʵ�鷽��1()
		{
			ʵ��1ʵ�鷽��1Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��1ʵ�鷽��1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(428, 520);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(484, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 208);
			this->label1->TabIndex = 1;
			this->label1->Text = L"��ͼ8-1���� ������ʱ���Ƚ�����·�����Ǵ�380V���ཻ����Դ������� U��V��W��ʼ������������ Q1���۶���FU1��FU2��FU3���Ӵ���KM1�����㵽�綯"
				L"��M�������߶�A��B��C�ĵ�·���õ��߰�˳��������������·������·�����������ٽӿ��Ƶ�·�����۶���FU4���V��ʼ������ťSB1�������Ӵ���KM1��Ȧ����"
				L"��W ���߽Ӻþ�ָ����ʦ�������󣬰����в������ʵ�飺";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(484, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(402, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"��1�����¿������ϡ�������ť��";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(487, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(455, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"��2���Ⱥ�Q1����ͨ���ཻ��380V��Դ��";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(484, 362);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(662, 68);
			this->label4->TabIndex = 4;
			this->label4->Text = L"��3������������ťSB1���Ե綯��M���е㶯�������Ƚϰ���SB1���ɿ�SB1ʱ�綯�� M����ת���";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ʵ��1ʵ�鷽��1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1333, 551);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ʵ��1ʵ�鷽��1";
			this->Text = L"ʵ�鷽��-�����첽�綯���㶯������·";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ʵ�鷽��1::ʵ��1ʵ�鷽��1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��1ʵ�鷽��1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

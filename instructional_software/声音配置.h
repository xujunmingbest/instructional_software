#pragma once
#include "voice.h"

extern bool ��������Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// �������� ժҪ
	/// </summary>
	public ref class �������� : public System::Windows::Forms::Form
	{
	public:
		��������(void)
		{
			InitializeComponent();
			��������Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~��������()
		{
			��������Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;


	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(120, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(520, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"���ʶ�Ůexe·�����Ƶ�����";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &��������::textBox1_TextChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(15, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 19);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"�ʶ�Ů";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &��������::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 166);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 19);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->Text = L"TTS";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(38, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(803, 213);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��ѡ����������";
			// 
			// ��������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 428);
			this->Controls->Add(this->groupBox1);
			this->Name = L"��������";
			this->Load += gcnew System::EventHandler(this, &��������::��������_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ��������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked == true) {
			textBox1->Visible = true;
			g_voice.set_voice_engine(VOICE_ENGINE_LANGDUNV);
			cout << "VOICE_ENGINE_LANGDUNV" << endl;
		}
		else if (radioButton1->Checked == false){
			textBox1->Visible = false;
			g_voice.set_voice_engine(VOICE_ENGINE_TTS);
			cout << "VOICE_ENGINE_TTS" << endl;
		}
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	g_voice.set_LangdunvPath(textBox1->Text);
}
};
}

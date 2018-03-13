#pragma once
#include "voice.h"

extern bool 声音配置Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 声音配置 摘要
	/// </summary>
	public ref class 声音配置 : public System::Windows::Forms::Form
	{
	public:
		声音配置(void)
		{
			InitializeComponent();
			声音配置Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~声音配置()
		{
			声音配置Status = false;
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
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
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(120, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(520, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"将朗读女exe路径复制到这里";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &声音配置::textBox1_TextChanged);
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
			this->radioButton1->Text = L"朗读女";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &声音配置::radioButton1_CheckedChanged);
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
			this->groupBox1->Text = L"请选择声音引擎";
			// 
			// 声音配置
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 428);
			this->Controls->Add(this->groupBox1);
			this->Name = L"声音配置";
			this->Load += gcnew System::EventHandler(this, &声音配置::声音配置_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 声音配置_Load(System::Object^  sender, System::EventArgs^  e) {
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

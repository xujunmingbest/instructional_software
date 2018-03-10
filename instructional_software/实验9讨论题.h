#pragma once
extern bool 实验9讨论题Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验9讨论题 摘要
	/// </summary>
	public ref class 实验9讨论题 : public System::Windows::Forms::Form
	{
	public:
		实验9讨论题(void)
		{
			InitializeComponent();
			实验9讨论题Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验9讨论题()
		{
			实验9讨论题Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(31, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(767, 132);
			this->label3->TabIndex = 9;
			this->label3->Text = L"3、画出图8-l9中电动机反转时的反接制动原理流程图，再画出图8－20的原理流程图。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(31, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(756, 89);
			this->label2->TabIndex = 8;
			this->label2->Text = L"2、速度继电器在反接制动中起什么作用？";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(31, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(906, 122);
			this->label1->TabIndex = 7;
			this->label1->Text = L"1、分析反接制动和能耗制动的制动原理各有什么特点？两者适用在哪些场合？";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验9讨论题
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 746);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"实验9讨论题";
			this->Text = L"实验9讨论题";
			this->Load += gcnew System::EventHandler(this, &实验9讨论题::实验9讨论题_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验9讨论题_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

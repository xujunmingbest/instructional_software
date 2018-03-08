#pragma once
extern bool 实验4实验目的Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验4实验目的 摘要
	/// </summary>
	public ref class 实验4实验目的 : public System::Windows::Forms::Form
	{
	public:
		实验4实验目的(void)
		{
			InitializeComponent();
			实验4实验目的Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验4实验目的()
		{
			实验4实验目的Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(250, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 1;
			this->label1->Text = L"一、实验目的";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(125, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(720, 121);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1、通过各种不同顺序控制的接线，加深对一些特殊要求机床控制线路的了解。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(112, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(821, 138);
			this->label3->TabIndex = 3;
			this->label3->Text = L"2、进一步加深学生的动手能力和理解能力，使理论知识和实际经验进行  有效的结合。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// 实验4实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 509);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"实验4实验目的";
			this->Text = L"实验4实验目的";
			this->Load += gcnew System::EventHandler(this, &实验4实验目的::实验4实验目的_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验4实验目的_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

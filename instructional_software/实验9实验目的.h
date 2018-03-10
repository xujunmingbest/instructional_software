#pragma once
extern bool 实验9实验目的Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验9实验目的 摘要
	/// </summary>
	public ref class 实验9实验目的 : public System::Windows::Forms::Form
	{
	public:
		实验9实验目的(void)
		{
			InitializeComponent();
			实验9实验目的Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验9实验目的()
		{
			实验9实验目的Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(203, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(677, 82);
			this->label2->TabIndex = 5;
			this->label2->Text = L"2、充分掌握各种制动的原理。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(203, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 132);
			this->label1->TabIndex = 4;
			this->label1->Text = L"1、通过各种制动的实际接线，了解不同制动的特点和适用的范围。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验9实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1302, 650);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"实验9实验目的";
			this->Text = L"实验9实验目的";
			this->Load += gcnew System::EventHandler(this, &实验9实验目的::实验9实验目的_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验9实验目的_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

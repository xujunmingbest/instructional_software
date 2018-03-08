#pragma once
extern bool 实验4讨论题Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验4讨论题 摘要
	/// </summary>
	public ref class 实验4讨论题 : public System::Windows::Forms::Form
	{
	public:
		实验4讨论题(void)
		{
			InitializeComponent();
			实验4讨论题Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验4讨论题()
		{
			实验4讨论题Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(136, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(720, 121);
			this->label2->TabIndex = 3;
			this->label2->Text = L"1、画出图8－9、8－10、8-1l的运行原理流程图。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(136, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(720, 121);
			this->label1->TabIndex = 4;
			this->label1->Text = L"2、比较图8-9、8-l0、8-11三种线路的不同点和各自的特点。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(136, 309);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(720, 121);
			this->label3->TabIndex = 5;
			this->label3->Text = L"3、例举几个顺序控制的机床控制实例，并说明其用途。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验4讨论题
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 759);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"实验4讨论题";
			this->Text = L"实验4讨论题";
			this->Load += gcnew System::EventHandler(this, &实验4讨论题::实验4讨论题_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验4讨论题_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

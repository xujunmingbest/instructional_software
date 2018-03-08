#pragma once
extern bool 实验1讨论题Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验1讨论题 摘要
	/// </summary>
	public ref class 实验1讨论题 : public System::Windows::Forms::Form
	{
	public:
		实验1讨论题(void)
		{
			InitializeComponent();
			实验1讨论题Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1讨论题()
		{
			实验1讨论题Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	protected:

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(77, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 140);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1、试分析什么叫点动，什么叫自锁，并比较图8-1和图8-2的结构和功能上有什么区别？";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(77, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(906, 189);
			this->label1->TabIndex = 3;
			this->label1->Text = L"2、图中各个电器如Q1、FU1、FU2、FU3、FU4、KM1、FR、SB1、SB2、SB3各起什么作用？己经使用了熔断器为何还要使用热继电器？已经有了开关Q1为"
				L"何还要使用接触器 KM1？";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(77, 433);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(906, 140);
			this->label3->TabIndex = 4;
			this->label3->Text = L"3、图8-2电路能否对电动机实现过流、短路、欠压和失压保护？";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(77, 573);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(906, 140);
			this->label4->TabIndex = 5;
			this->label4->Text = L"4、画出图8－l、8－2、8－3的工作原理流程图。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验1讨论题
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1167, 722);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"实验1讨论题";
			this->Text = L"实验1讨论题";
			this->Load += gcnew System::EventHandler(this, &实验1讨论题::实验1讨论题_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1讨论题_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#pragma once
extern bool 实验11讨论题Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验11讨论题 摘要
	/// </summary>
	public ref class 实验11讨论题 : public System::Windows::Forms::Form
	{
	public:
		实验11讨论题(void)
		{
			InitializeComponent();
			实验11讨论题Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验11讨论题()
		{
			实验11讨论题Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(172, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(844, 105);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2、在真正工厂机床中，电磁吸盘通的应是什么电源？为什么？";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(172, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(906, 116);
			this->label2->TabIndex = 9;
			this->label2->Text = L"l、图中液压泵控制回路属于什么控制线路？";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(532, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 87);
			this->label1->TabIndex = 11;
			this->label1->Text = L"讨论题";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(172, 422);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(844, 103);
			this->label4->TabIndex = 12;
			this->label4->Text = L"3、此电路有哪些具体保护？      ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验11讨论题
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1326, 679);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"实验11讨论题";
			this->Text = L"实验11讨论题";
			this->Load += gcnew System::EventHandler(this, &实验11讨论题::实验11讨论题_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验11讨论题_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

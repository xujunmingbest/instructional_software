#pragma once
extern bool 实验2讨论题Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验2讨论题 摘要
	/// </summary>
	public ref class 实验2讨论题 : public System::Windows::Forms::Form
	{
	public:
		实验2讨论题(void)
		{
			InitializeComponent();
			实验2讨论题Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验2讨论题()
		{
			实验2讨论题Status = false;
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
			this->label2->Location = System::Drawing::Point(92, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(921, 121);
			this->label2->TabIndex = 5;
			this->label2->Text = L"1、在图8－4中，欲使电机反转为什么要把手柄扳到“停止”使电动机M停转后，才能扳向“反转”使之反转，若直接扳至“反转”会造成什么后果？";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(92, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(921, 121);
			this->label1->TabIndex = 6;
			this->label1->Text = L"2、试分析图8-4、8-5、8-6、8-7各有什么特点？并画出运行原理流程图。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(92, 345);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(921, 121);
			this->label3->TabIndex = 7;
			this->label3->Text = L"3、图8-5、8-6虽然也能实现电动机正反转直接控制，但容易产生什么故障，为什么？图8-7比图8-5和 8-6有什么优点？";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(92, 494);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(921, 121);
			this->label4->TabIndex = 8;
			this->label4->Text = L"4、接触器和按钮的联锁触点在继电接触控制中起到什么作用？";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验2讨论题
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 685);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"实验2讨论题";
			this->Text = L"实验2讨论题";
			this->Load += gcnew System::EventHandler(this, &实验2讨论题::实验2讨论题_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验2讨论题_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

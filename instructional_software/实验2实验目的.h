#pragma once

extern bool 实验2实验目的Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验2实验目的 摘要
	/// </summary>
	public ref class 实验2实验目的 : public System::Windows::Forms::Form
	{
	public:
		实验2实验目的(void)
		{
			InitializeComponent();
			实验2实验目的Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验2实验目的()
		{
			实验2实验目的Status = false;
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
			this->label3->Location = System::Drawing::Point(76, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(826, 82);
			this->label3->TabIndex = 5;
			this->label3->Text = L"2、掌握三相异步电动机正反转的原理和方法。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(76, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(921, 115);
			this->label2->TabIndex = 4;
			this->label2->Text = L"1、通过对三相异步电动机正反转控制线路的接线，掌握由电路原理图接成实际操作电路的方法。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(312, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 3;
			this->label1->Text = L"一、实验目的";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(76, 348);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(930, 191);
			this->label4->TabIndex = 6;
			this->label4->Text = L"3、掌握手动控制正反转控制、接触器联锁正反转、按钮联锁正反转控制及按钮和接触器双重联锁正反转控制线路的不同接法，并熟悉在操作过程中有哪些不同之处。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验2实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 611);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"实验2实验目的";
			this->Text = L"实验2实验目的";
			this->Load += gcnew System::EventHandler(this, &实验2实验目的::实验2实验目的_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验2实验目的_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

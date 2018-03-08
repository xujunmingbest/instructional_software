#pragma once
extern bool 实验3实验目的Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验3实验目的 摘要
	/// </summary>
	public ref class 实验3实验目的 : public System::Windows::Forms::Form
	{
	public:
		实验3实验目的(void)
		{
			InitializeComponent();
			实验3实验目的Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验3实验目的()
		{
			实验3实验目的Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(116, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 132);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1、通过对工作台自动往返循环控制线路的实际安装接线、掌握由电气原理图变换成安装接线图的方法、掌握行程控制中行程开关的作用、以及在机床电路中的应用。";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(116, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(677, 82);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2、通过实验进一步加深自动往返循环控制在机床电路中的应用场合。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验3实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1018, 483);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"实验3实验目的";
			this->Text = L"实验3实验目的";
			this->Load += gcnew System::EventHandler(this, &实验3实验目的::实验3实验目的_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验3实验目的_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

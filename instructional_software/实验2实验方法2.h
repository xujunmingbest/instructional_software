#pragma once
extern bool 实验2实验方法2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验2实验方法2 摘要
	/// </summary>
	public ref class 实验2实验方法2 : public System::Windows::Forms::Form
	{
	public:
		实验2实验方法2(void)
		{
			InitializeComponent();
			实验2实验方法2Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验2实验方法2()
		{
			实验2实验方法2Status = false;
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// 实验2实验方法2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 255);
			this->Name = L"实验2实验方法2";
			this->Text = L"实验2实验方法2";
			this->Load += gcnew System::EventHandler(this, &实验2实验方法2::实验2实验方法2_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验2实验方法2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

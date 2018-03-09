#pragma once
#include "实验7实验目的.h"
#include "实验7实验方法.h"
#include "实验7选用组件.h"
#include "实验7讨论题.h"

extern bool 实验7Status ;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验7 摘要
	/// </summary>
	public ref class 实验7 : public System::Windows::Forms::Form
	{
	public:
		实验7(void)
		{
			InitializeComponent();
			实验7Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验7()
		{
			实验7Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  实验目的ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  选用组件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  讨论题ToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验目的ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->选用组件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->讨论题ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->实验目的ToolStripMenuItem,
					this->选用组件ToolStripMenuItem, this->实验方法ToolStripMenuItem, this->讨论题ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(673, 41);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验目的ToolStripMenuItem
			// 
			this->实验目的ToolStripMenuItem->Name = L"实验目的ToolStripMenuItem";
			this->实验目的ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->实验目的ToolStripMenuItem->Text = L"实验目的";
			this->实验目的ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验7::实验目的ToolStripMenuItem_Click);
			// 
			// 选用组件ToolStripMenuItem
			// 
			this->选用组件ToolStripMenuItem->Name = L"选用组件ToolStripMenuItem";
			this->选用组件ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->选用组件ToolStripMenuItem->Text = L"选用组件";
			this->选用组件ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验7::选用组件ToolStripMenuItem_Click);
			// 
			// 实验方法ToolStripMenuItem
			// 
			this->实验方法ToolStripMenuItem->Name = L"实验方法ToolStripMenuItem";
			this->实验方法ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->实验方法ToolStripMenuItem->Text = L"实验方法";
			this->实验方法ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验7::实验方法ToolStripMenuItem_Click);
			// 
			// 讨论题ToolStripMenuItem
			// 
			this->讨论题ToolStripMenuItem->Name = L"讨论题ToolStripMenuItem";
			this->讨论题ToolStripMenuItem->Size = System::Drawing::Size(102, 37);
			this->讨论题ToolStripMenuItem->Text = L"讨论题";
			this->讨论题ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验7::讨论题ToolStripMenuItem_Click);
			// 
			// 实验7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 399);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"实验7";
			this->Text = L"实验7";
			this->Load += gcnew System::EventHandler(this, &实验7::实验7_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验7_Load(System::Object^  sender, System::EventArgs^  e) {
	}
/**********实验7的子窗体指针**********/
			 实验7实验目的 ^实验7实验目的wnd;
			 实验7实验方法 ^实验7实验方法wnd;
			 实验7选用组件 ^实验7选用组件wnd;
			 实验7讨论题^实验7讨论题wnd;
	private: System::Void 实验目的ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (实验7实验目的Status == true)
		{
			实验7实验目的wnd->BringToFront(); //这个可以置于最前面
			实验7实验目的wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验7实验目的wnd = gcnew 实验7实验目的;
		实验7实验目的wnd->MdiParent = this;
		实验7实验目的wnd->Show();
		实验7实验目的wnd->WindowState = FormWindowState::Maximized;
	}
private: System::Void 选用组件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验7选用组件Status == true)
	{
		实验7选用组件wnd->BringToFront(); //这个可以置于最前面
		实验7选用组件wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验7选用组件wnd = gcnew 实验7选用组件;
	实验7选用组件wnd->MdiParent = this;
	实验7选用组件wnd->Show();
	实验7选用组件wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验方法ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (实验7实验方法Status == true)
	{
		实验7实验方法wnd->BringToFront(); //这个可以置于最前面
		实验7实验方法wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验7实验方法wnd = gcnew 实验7实验方法;
	实验7实验方法wnd->MdiParent = this;
	实验7实验方法wnd->Show();
	实验7实验方法wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 讨论题ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验7讨论题Status == true)
	{
		实验7讨论题wnd->BringToFront(); //这个可以置于最前面
		实验7讨论题wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验7讨论题wnd = gcnew 实验7讨论题;
	实验7讨论题wnd->MdiParent = this;
	实验7讨论题wnd->Show();
	实验7讨论题wnd->WindowState = FormWindowState::Maximized;

}
};
}

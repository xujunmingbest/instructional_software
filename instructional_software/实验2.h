#pragma once
#include "实验2实验方法1.h"
#include "实验2实验方法2.h"
#include "实验2实验方法3.h"
#include "实验2实验方法4.h"
#include "实验2实验目的.h"
#include "实验2讨论题.h"
#include "实验2选用组件.h"

extern bool 实验2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验2 摘要
	/// </summary>
	public ref class 实验2 : public System::Windows::Forms::Form
	{
	public:
		实验2(void)
		{
			InitializeComponent();
			实验2Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验2()
		{
			实验2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  实验目的ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  选用组件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  讨论题ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法4ToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验目的ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->选用组件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->讨论题ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->实验目的ToolStripMenuItem,
					this->选用组件ToolStripMenuItem, this->实验方法ToolStripMenuItem, this->讨论题ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(805, 44);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验目的ToolStripMenuItem
			// 
			this->实验目的ToolStripMenuItem->Name = L"实验目的ToolStripMenuItem";
			this->实验目的ToolStripMenuItem->Size = System::Drawing::Size(139, 40);
			this->实验目的ToolStripMenuItem->Text = L"实验目的";
			this->实验目的ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::实验目的ToolStripMenuItem_Click);
			// 
			// 选用组件ToolStripMenuItem
			// 
			this->选用组件ToolStripMenuItem->Name = L"选用组件ToolStripMenuItem";
			this->选用组件ToolStripMenuItem->Size = System::Drawing::Size(139, 40);
			this->选用组件ToolStripMenuItem->Text = L"选用组件";
			this->选用组件ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::选用组件ToolStripMenuItem_Click);
			// 
			// 实验方法ToolStripMenuItem
			// 
			this->实验方法ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->实验方法1ToolStripMenuItem,
					this->实验方法2ToolStripMenuItem, this->实验方法3ToolStripMenuItem, this->实验方法4ToolStripMenuItem
			});
			this->实验方法ToolStripMenuItem->Name = L"实验方法ToolStripMenuItem";
			this->实验方法ToolStripMenuItem->Size = System::Drawing::Size(139, 40);
			this->实验方法ToolStripMenuItem->Text = L"实验方法";
			// 
			// 实验方法1ToolStripMenuItem
			// 
			this->实验方法1ToolStripMenuItem->Name = L"实验方法1ToolStripMenuItem";
			this->实验方法1ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->实验方法1ToolStripMenuItem->Text = L"实验方法1";
			this->实验方法1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::实验方法1ToolStripMenuItem_Click);
			// 
			// 实验方法2ToolStripMenuItem
			// 
			this->实验方法2ToolStripMenuItem->Name = L"实验方法2ToolStripMenuItem";
			this->实验方法2ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->实验方法2ToolStripMenuItem->Text = L"实验方法2";
			this->实验方法2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::实验方法2ToolStripMenuItem_Click);
			// 
			// 实验方法3ToolStripMenuItem
			// 
			this->实验方法3ToolStripMenuItem->Name = L"实验方法3ToolStripMenuItem";
			this->实验方法3ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->实验方法3ToolStripMenuItem->Text = L"实验方法3";
			this->实验方法3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::实验方法3ToolStripMenuItem_Click);
			// 
			// 实验方法4ToolStripMenuItem
			// 
			this->实验方法4ToolStripMenuItem->Name = L"实验方法4ToolStripMenuItem";
			this->实验方法4ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->实验方法4ToolStripMenuItem->Text = L"实验方法4";
			this->实验方法4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::实验方法4ToolStripMenuItem_Click);
			// 
			// 讨论题ToolStripMenuItem
			// 
			this->讨论题ToolStripMenuItem->Name = L"讨论题ToolStripMenuItem";
			this->讨论题ToolStripMenuItem->Size = System::Drawing::Size(111, 40);
			this->讨论题ToolStripMenuItem->Text = L"讨论题";
			this->讨论题ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验2::讨论题ToolStripMenuItem_Click);
			// 
			// 实验2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 397);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"实验2";
			this->Text = L"实验二、三相异步电动机的正反转控制线路";
			this->Load += gcnew System::EventHandler(this, &实验2::实验2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
/**********实验2的子窗体指针************/
			 实验2实验方法1^ 实验2实验方法1wnd;
			 实验2实验方法2^  实验2实验方法2wnd;
			 实验2实验方法3^ 实验2实验方法3wnd;
			 实验2实验方法4^ 实验2实验方法4wnd;
			 实验2实验目的^ 实验2实验目的wnd;
			 实验2讨论题^ 实验2讨论题wnd;
			 实验2选用组件^ 实验2选用组件wnd;
	private: System::Void 实验目的ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (实验2实验目的Status == true)
		{
			实验2实验目的wnd->BringToFront(); //这个可以置于最前面
			实验2实验目的wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验2实验目的wnd = gcnew 实验2实验目的;
		实验2实验目的wnd->MdiParent = this;
		实验2实验目的wnd->Show();
		实验2实验目的wnd->WindowState = FormWindowState::Maximized;
	}

private: System::Void 选用组件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验2选用组件Status == true)
	{
		实验2选用组件wnd->BringToFront(); //这个可以置于最前面
		实验2选用组件wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2选用组件wnd = gcnew 实验2选用组件;
	实验2选用组件wnd->MdiParent = this;
	实验2选用组件wnd->Show();
	实验2选用组件wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验方法1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验2实验方法1Status == true)
	{
		实验2实验方法1wnd->BringToFront(); //这个可以置于最前面
		实验2实验方法1wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2实验方法1wnd = gcnew 实验2实验方法1;
	实验2实验方法1wnd->MdiParent = this;
	实验2实验方法1wnd->Show();
	实验2实验方法1wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验方法2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验2实验方法2Status == true)
	{
		实验2实验方法2wnd->BringToFront(); //这个可以置于最前面
		实验2实验方法2wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2实验方法2wnd = gcnew 实验2实验方法2;
	实验2实验方法2wnd->MdiParent = this;
	实验2实验方法2wnd->Show();
	实验2实验方法2wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验方法3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验2实验方法3Status == true)
	{
		实验2实验方法3wnd->BringToFront(); //这个可以置于最前面
		实验2实验方法3wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2实验方法3wnd = gcnew 实验2实验方法3;
	实验2实验方法3wnd->MdiParent = this;
	实验2实验方法3wnd->Show();
	实验2实验方法3wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验方法4ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验2实验方法4Status == true)
	{
		实验2实验方法4wnd->BringToFront(); //这个可以置于最前面
		实验2实验方法4wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2实验方法4wnd = gcnew 实验2实验方法4;
	实验2实验方法4wnd->MdiParent = this;
	实验2实验方法4wnd->Show();
	实验2实验方法4wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 讨论题ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验2讨论题Status == true)
	{
		实验2讨论题wnd->BringToFront(); //这个可以置于最前面
		实验2讨论题wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2讨论题wnd = gcnew 实验2讨论题;
	实验2讨论题wnd->MdiParent = this;
	实验2讨论题wnd->Show();
	实验2讨论题wnd->WindowState = FormWindowState::Maximized;

}
};
}

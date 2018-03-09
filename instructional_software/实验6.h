#pragma once
#include "实验6实验目的.h"
#include "实验6选用部件.h"
#include "实验6实验方法1.h"
#include "实验6实验方法2.h"
#include "实验6实验方法3.h"
#include "实验6实验方法4.h"
#include "实验6讨论题.h"

extern bool 实验6Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验6 摘要
	/// </summary>
	public ref class 实验6 : public System::Windows::Forms::Form
	{
	public:
		实验6(void)
		{
			InitializeComponent();
			实验6Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验6()
		{
			实验6Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  实验目的ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  选用部件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法一ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法二ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法三ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验方法四ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  讨论题ToolStripMenuItem;
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
			this->选用部件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法一ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法二ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法三ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验方法四ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->选用部件ToolStripMenuItem, this->实验方法ToolStripMenuItem, this->讨论题ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1041, 41);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验目的ToolStripMenuItem
			// 
			this->实验目的ToolStripMenuItem->Name = L"实验目的ToolStripMenuItem";
			this->实验目的ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->实验目的ToolStripMenuItem->Text = L"实验目的";
			this->实验目的ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::实验目的ToolStripMenuItem_Click);
			// 
			// 选用部件ToolStripMenuItem
			// 
			this->选用部件ToolStripMenuItem->Name = L"选用部件ToolStripMenuItem";
			this->选用部件ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->选用部件ToolStripMenuItem->Text = L"选用部件";
			this->选用部件ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::选用部件ToolStripMenuItem_Click);
			// 
			// 实验方法ToolStripMenuItem
			// 
			this->实验方法ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->实验方法一ToolStripMenuItem,
					this->实验方法二ToolStripMenuItem, this->实验方法三ToolStripMenuItem, this->实验方法四ToolStripMenuItem
			});
			this->实验方法ToolStripMenuItem->Name = L"实验方法ToolStripMenuItem";
			this->实验方法ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->实验方法ToolStripMenuItem->Text = L"实验方法";
			// 
			// 实验方法一ToolStripMenuItem
			// 
			this->实验方法一ToolStripMenuItem->Name = L"实验方法一ToolStripMenuItem";
			this->实验方法一ToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->实验方法一ToolStripMenuItem->Text = L"实验方法一";
			this->实验方法一ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::实验方法一ToolStripMenuItem_Click);
			// 
			// 实验方法二ToolStripMenuItem
			// 
			this->实验方法二ToolStripMenuItem->Name = L"实验方法二ToolStripMenuItem";
			this->实验方法二ToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->实验方法二ToolStripMenuItem->Text = L"实验方法二";
			this->实验方法二ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::实验方法二ToolStripMenuItem_Click);
			// 
			// 实验方法三ToolStripMenuItem
			// 
			this->实验方法三ToolStripMenuItem->Name = L"实验方法三ToolStripMenuItem";
			this->实验方法三ToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->实验方法三ToolStripMenuItem->Text = L"实验方法三";
			this->实验方法三ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::实验方法三ToolStripMenuItem_Click);
			// 
			// 实验方法四ToolStripMenuItem
			// 
			this->实验方法四ToolStripMenuItem->Name = L"实验方法四ToolStripMenuItem";
			this->实验方法四ToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->实验方法四ToolStripMenuItem->Text = L"实验方法四";
			this->实验方法四ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::实验方法四ToolStripMenuItem_Click);
			// 
			// 讨论题ToolStripMenuItem
			// 
			this->讨论题ToolStripMenuItem->Name = L"讨论题ToolStripMenuItem";
			this->讨论题ToolStripMenuItem->Size = System::Drawing::Size(102, 37);
			this->讨论题ToolStripMenuItem->Text = L"讨论题";
			this->讨论题ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验6::讨论题ToolStripMenuItem_Click);
			// 
			// 实验6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1041, 440);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"实验6";
			this->Text = L"实验六、三相鼠笼式异步电动机的降压起动控制线路";
			this->Load += gcnew System::EventHandler(this, &实验6::实验6_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验6_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 /*************实验6窗体指针************/
private: 
	实验6实验目的 ^实验6实验目的wnd;
	实验6选用部件 ^实验6选用部件wnd;
	实验6实验方法1 ^实验6实验方法1wnd;
	实验6实验方法2 ^实验6实验方法2wnd;
	实验6实验方法3 ^实验6实验方法3wnd;
	实验6实验方法4 ^实验6实验方法4wnd;
	实验6讨论题 ^实验6讨论题wnd;

	private: System::Void 实验目的ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (实验6实验目的Status == true)
		{
			实验6实验目的wnd->BringToFront(); //这个可以置于最前面
			实验6实验目的wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验6实验目的wnd = gcnew 实验6实验目的;
		实验6实验目的wnd->MdiParent = this;
		实验6实验目的wnd->Show();
		实验6实验目的wnd->WindowState = FormWindowState::Maximized;
	}

private: System::Void 选用部件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6选用部件Status == true)
	{
		实验6选用部件wnd->BringToFront(); //这个可以置于最前面
		实验6选用部件wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6选用部件wnd = gcnew 实验6选用部件;
	实验6选用部件wnd->MdiParent = this;
	实验6选用部件wnd->Show();
	实验6选用部件wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验方法一ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6实验方法1Status == true)
	{
		实验6实验方法1wnd->BringToFront(); //这个可以置于最前面
		实验6实验方法1wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6实验方法1wnd = gcnew 实验6实验方法1;
	实验6实验方法1wnd->MdiParent = this;
	实验6实验方法1wnd->Show();
	实验6实验方法1wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验方法二ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6实验方法2Status == true)
	{
		实验6实验方法2wnd->BringToFront(); //这个可以置于最前面
		实验6实验方法2wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6实验方法2wnd = gcnew 实验6实验方法2;
	实验6实验方法2wnd->MdiParent = this;
	实验6实验方法2wnd->Show();
	实验6实验方法2wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验方法三ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6实验方法3Status == true)
	{
		实验6实验方法3wnd->BringToFront(); //这个可以置于最前面
		实验6实验方法3wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6实验方法3wnd = gcnew 实验6实验方法3;
	实验6实验方法3wnd->MdiParent = this;
	实验6实验方法3wnd->Show();
	实验6实验方法3wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验方法四ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6实验方法4Status == true)
	{
		实验6实验方法4wnd->BringToFront(); //这个可以置于最前面
		实验6实验方法4wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6实验方法4wnd = gcnew 实验6实验方法4;
	实验6实验方法4wnd->MdiParent = this;
	实验6实验方法4wnd->Show();
	实验6实验方法4wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 讨论题ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6讨论题Status == true)
	{
		实验6讨论题wnd->BringToFront(); //这个可以置于最前面
		实验6讨论题wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6讨论题wnd = gcnew 实验6讨论题;
	实验6讨论题wnd->MdiParent = this;
	实验6讨论题wnd->Show();
	实验6讨论题wnd->WindowState = FormWindowState::Maximized;

}
};
}

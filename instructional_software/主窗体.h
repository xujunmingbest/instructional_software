#pragma once
#include "voice.h"
#include "实验1.h"
#include "实验2.h"
#include "实验3.h"
#include "实验4.h"
#include "实验5.h"
#include "实验6.h"
#include "实验7.h"
#include "实验8.h"
#include "实验9.h"
#include "实验10.h"
#include "实验11.h"
#include "实验12.h"
#include "实验13.h"
#include "声音配置.h"
#include "flash.h"
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainWnd 摘要
	/// </summary>
	public ref class MainWnd : public System::Windows::Forms::Form
	{
	public:
		MainWnd(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainWnd()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验一ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  实验二ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验三ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验四ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验五ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验六ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验七ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验八ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  shiyanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验10ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验十一ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验十二ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验十三ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  声音配置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  flash动画演示ToolStripMenuItem;

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
			this->实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验一ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验二ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验三ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验四ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验五ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验六ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验七ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验八ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shiyanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验10ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验十一ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验十二ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验十三ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->声音配置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flash动画演示ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->实验ToolStripMenuItem,
					this->声音配置ToolStripMenuItem, this->flash动画演示ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(677, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验ToolStripMenuItem
			// 
			this->实验ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->实验一ToolStripMenuItem,
					this->实验二ToolStripMenuItem, this->实验三ToolStripMenuItem, this->实验四ToolStripMenuItem, this->实验五ToolStripMenuItem, this->实验六ToolStripMenuItem,
					this->实验七ToolStripMenuItem, this->实验八ToolStripMenuItem, this->shiyanToolStripMenuItem, this->实验10ToolStripMenuItem, this->实验十一ToolStripMenuItem,
					this->实验十二ToolStripMenuItem, this->实验十三ToolStripMenuItem
			});
			this->实验ToolStripMenuItem->Name = L"实验ToolStripMenuItem";
			this->实验ToolStripMenuItem->Size = System::Drawing::Size(77, 36);
			this->实验ToolStripMenuItem->Text = L"实验";
			// 
			// 实验一ToolStripMenuItem
			// 
			this->实验一ToolStripMenuItem->Name = L"实验一ToolStripMenuItem";
			this->实验一ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验一ToolStripMenuItem->Text = L"实验一";
			this->实验一ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验一ToolStripMenuItem_Click);
			// 
			// 实验二ToolStripMenuItem
			// 
			this->实验二ToolStripMenuItem->Name = L"实验二ToolStripMenuItem";
			this->实验二ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验二ToolStripMenuItem->Text = L"实验二";
			this->实验二ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验二ToolStripMenuItem_Click);
			// 
			// 实验三ToolStripMenuItem
			// 
			this->实验三ToolStripMenuItem->Name = L"实验三ToolStripMenuItem";
			this->实验三ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验三ToolStripMenuItem->Text = L"实验三";
			this->实验三ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验三ToolStripMenuItem_Click);
			// 
			// 实验四ToolStripMenuItem
			// 
			this->实验四ToolStripMenuItem->Name = L"实验四ToolStripMenuItem";
			this->实验四ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验四ToolStripMenuItem->Text = L"实验四";
			this->实验四ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验四ToolStripMenuItem_Click);
			// 
			// 实验五ToolStripMenuItem
			// 
			this->实验五ToolStripMenuItem->Name = L"实验五ToolStripMenuItem";
			this->实验五ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验五ToolStripMenuItem->Text = L"实验五";
			this->实验五ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验五ToolStripMenuItem_Click);
			// 
			// 实验六ToolStripMenuItem
			// 
			this->实验六ToolStripMenuItem->Name = L"实验六ToolStripMenuItem";
			this->实验六ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验六ToolStripMenuItem->Text = L"实验六";
			this->实验六ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验六ToolStripMenuItem_Click);
			// 
			// 实验七ToolStripMenuItem
			// 
			this->实验七ToolStripMenuItem->Name = L"实验七ToolStripMenuItem";
			this->实验七ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验七ToolStripMenuItem->Text = L"实验七";
			this->实验七ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验七ToolStripMenuItem_Click);
			// 
			// 实验八ToolStripMenuItem
			// 
			this->实验八ToolStripMenuItem->Name = L"实验八ToolStripMenuItem";
			this->实验八ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验八ToolStripMenuItem->Text = L"实验八";
			this->实验八ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验八ToolStripMenuItem_Click);
			// 
			// shiyanToolStripMenuItem
			// 
			this->shiyanToolStripMenuItem->Name = L"shiyanToolStripMenuItem";
			this->shiyanToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->shiyanToolStripMenuItem->Text = L"实验九";
			this->shiyanToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::shiyanToolStripMenuItem_Click);
			// 
			// 实验10ToolStripMenuItem
			// 
			this->实验10ToolStripMenuItem->Name = L"实验10ToolStripMenuItem";
			this->实验10ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验10ToolStripMenuItem->Text = L"实验十";
			this->实验10ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验10ToolStripMenuItem_Click);
			// 
			// 实验十一ToolStripMenuItem
			// 
			this->实验十一ToolStripMenuItem->Name = L"实验十一ToolStripMenuItem";
			this->实验十一ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验十一ToolStripMenuItem->Text = L"实验十一";
			this->实验十一ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验十一ToolStripMenuItem_Click);
			// 
			// 实验十二ToolStripMenuItem
			// 
			this->实验十二ToolStripMenuItem->Name = L"实验十二ToolStripMenuItem";
			this->实验十二ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验十二ToolStripMenuItem->Text = L"实验十二";
			this->实验十二ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验十二ToolStripMenuItem_Click);
			// 
			// 实验十三ToolStripMenuItem
			// 
			this->实验十三ToolStripMenuItem->Name = L"实验十三ToolStripMenuItem";
			this->实验十三ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验十三ToolStripMenuItem->Text = L"实验十三";
			this->实验十三ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验十三ToolStripMenuItem_Click);
			// 
			// 声音配置ToolStripMenuItem
			// 
			this->声音配置ToolStripMenuItem->Name = L"声音配置ToolStripMenuItem";
			this->声音配置ToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->声音配置ToolStripMenuItem->Text = L"声音配置";
			this->声音配置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::声音配置ToolStripMenuItem_Click);
			// 
			// flash动画演示ToolStripMenuItem
			// 
			this->flash动画演示ToolStripMenuItem->Name = L"flash动画演示ToolStripMenuItem";
			this->flash动画演示ToolStripMenuItem->Size = System::Drawing::Size(184, 36);
			this->flash动画演示ToolStripMenuItem->Text = L"flash动画演示";
			this->flash动画演示ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::flash动画演示ToolStripMenuItem_Click);
			// 
			// MainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 423);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KBE-5001电力拖动";
			this->Load += gcnew System::EventHandler(this, &MainWnd::MainWnd_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private:
/**************实验窗体变量指针*************/
	实验1 ^实验1Wnd;
	实验2 ^实验2Wnd;
	实验3 ^实验3Wnd;
	实验4 ^实验4Wnd;
	实验5 ^实验5Wnd;
	实验6 ^实验6Wnd;
	实验7 ^实验7Wnd;
	实验8 ^实验8Wnd;
	实验9 ^实验9Wnd;
	实验10 ^实验10Wnd;
	实验11 ^实验11Wnd;
	实验12 ^实验12Wnd;
	实验13 ^实验13Wnd;
	声音配置^ 声音配置Wnd;
	flash^ flashWnd;
	private: System::Void 实验一ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (实验1Status == true)
		{
			实验1Wnd->BringToFront(); //这个可以置于最前面
			实验1Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验1Wnd = gcnew 实验1;
		实验1Wnd->Show();
		实验1Wnd->WindowState = FormWindowState::Maximized;
	}
	private: System::Void MainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void 实验二ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (实验2Status == true)
	{
		实验2Wnd->BringToFront(); //这个可以置于最前面
		实验2Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验2Wnd = gcnew 实验2;
	实验2Wnd->Show();
	实验2Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验三ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验3Status == true)
	{
		实验3Wnd->BringToFront(); //这个可以置于最前面
		实验3Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验3Wnd = gcnew 实验3;
	实验3Wnd->Show();
	实验3Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验四ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验4Status == true)
	{
		实验4Wnd->BringToFront(); //这个可以置于最前面
		实验4Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验4Wnd = gcnew 实验4;
	实验4Wnd->Show();
	实验4Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验五ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验5Status == true)
	{
		实验5Wnd->BringToFront(); //这个可以置于最前面
		实验5Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验5Wnd = gcnew 实验5;
	实验5Wnd->Show();
	实验5Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验六ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验6Status == true)
	{
		实验6Wnd->BringToFront(); //这个可以置于最前面
		实验6Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验6Wnd = gcnew 实验6;
	实验6Wnd->Show();
	实验6Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验七ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验7Status == true)
	{
		实验7Wnd->BringToFront(); //这个可以置于最前面
		实验7Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验7Wnd = gcnew 实验7;
	实验7Wnd->Show();
	实验7Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验八ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (实验8Status == true)
	{
		实验8Wnd->BringToFront(); //这个可以置于最前面
		实验8Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验8Wnd = gcnew 实验8;
	实验8Wnd->Show();
	实验8Wnd->WindowState = FormWindowState::Maximized;



}
private: System::Void shiyanToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验9Status == true)
	{
		实验9Wnd->BringToFront(); //这个可以置于最前面
		实验9Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验9Wnd = gcnew 实验9;
	实验9Wnd->Show();
	实验9Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验10ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (实验10Status == true)
	{
		实验10Wnd->BringToFront(); //这个可以置于最前面
		实验10Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验10Wnd = gcnew 实验10;
	实验10Wnd->Show();
	实验10Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验十一ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验11Status == true)
	{
		实验11Wnd->BringToFront(); //这个可以置于最前面
		实验11Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验11Wnd = gcnew 实验11;
	实验11Wnd->Show();
	实验11Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验十二ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验12Status == true)
	{
		实验12Wnd->BringToFront(); //这个可以置于最前面
		实验12Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验12Wnd = gcnew 实验12;
	实验12Wnd->Show();
	实验12Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验十三ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验13Status == true)
	{
		实验13Wnd->BringToFront(); //这个可以置于最前面
		实验13Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验13Wnd = gcnew 实验13;
	实验13Wnd->Show();
	实验13Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 声音配置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (声音配置Status == true)
	{
		声音配置Wnd->BringToFront(); //这个可以置于最前面
		声音配置Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	声音配置Wnd = gcnew 声音配置;
	声音配置Wnd->MdiParent = this;
	声音配置Wnd->Show();
	声音配置Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void flash动画演示ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flashStatus == true)
	{
		flashWnd->BringToFront(); //这个可以置于最前面
		flashWnd->WindowState = FormWindowState::Maximized;
		return;
	}
	flashWnd = gcnew flash;
	flashWnd->MdiParent = this;
	flashWnd->Show();
	flashWnd->WindowState = FormWindowState::Maximized;
	
}
};
}


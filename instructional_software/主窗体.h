#pragma once
#include "source.h"
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验一ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->实验十一ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(96, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(469, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"KBE-5001电力拖动教学软件";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->实验ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(677, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验ToolStripMenuItem
			// 
			this->实验ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->实验一ToolStripMenuItem,
					this->实验二ToolStripMenuItem, this->实验三ToolStripMenuItem, this->实验四ToolStripMenuItem, this->实验五ToolStripMenuItem, this->实验六ToolStripMenuItem,
					this->实验七ToolStripMenuItem, this->实验八ToolStripMenuItem, this->shiyanToolStripMenuItem, this->实验10ToolStripMenuItem, this->实验十一ToolStripMenuItem
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(436, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"设置朗读女路径";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainWnd::textBox1_TextChanged);
			// 
			// 实验十一ToolStripMenuItem
			// 
			this->实验十一ToolStripMenuItem->Name = L"实验十一ToolStripMenuItem";
			this->实验十一ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->实验十一ToolStripMenuItem->Text = L"实验十一";
			this->实验十一ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验十一ToolStripMenuItem_Click);
			// 
			// MainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 423);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
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

		private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			LangdunvPath = T_to_string(textBox1->Text, 1000);
			LangdunvPath.insert(0, "\"");
			LangdunvPath.insert(LangdunvPath.length(), "\" d=");
			cout << LangdunvPath << endl;
		}
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
	//实验12 ^实验12Wnd;
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
};
}

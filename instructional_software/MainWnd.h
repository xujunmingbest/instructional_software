#pragma once
#include "source.h"
#include "实验1.h"
#include "实验2.h"

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->实验二ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->实验ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->实验一ToolStripMenuItem,
					this->实验二ToolStripMenuItem
			});
			this->实验ToolStripMenuItem->Name = L"实验ToolStripMenuItem";
			this->实验ToolStripMenuItem->Size = System::Drawing::Size(77, 36);
			this->实验ToolStripMenuItem->Text = L"实验";
			// 
			// 实验一ToolStripMenuItem
			// 
			this->实验一ToolStripMenuItem->Name = L"实验一ToolStripMenuItem";
			this->实验一ToolStripMenuItem->Size = System::Drawing::Size(181, 36);
			this->实验一ToolStripMenuItem->Text = L"实验一";
			this->实验一ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验一ToolStripMenuItem_Click);
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
			// 实验二ToolStripMenuItem
			// 
			this->实验二ToolStripMenuItem->Name = L"实验二ToolStripMenuItem";
			this->实验二ToolStripMenuItem->Size = System::Drawing::Size(181, 36);
			this->实验二ToolStripMenuItem->Text = L"实验二";
			this->实验二ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::实验二ToolStripMenuItem_Click);
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
};
}

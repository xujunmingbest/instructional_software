#pragma once
#include "voice.h"
#include "ʵ��1.h"
#include "ʵ��2.h"
#include "ʵ��3.h"
#include "ʵ��4.h"
#include "ʵ��5.h"
#include "ʵ��6.h"
#include "ʵ��7.h"
#include "ʵ��8.h"
#include "ʵ��9.h"
#include "ʵ��10.h"
#include "ʵ��11.h"
#include "ʵ��12.h"
#include "ʵ��13.h"
#include "��������.h"
#include "flash.h"
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainWnd ժҪ
	/// </summary>
	public ref class MainWnd : public System::Windows::Forms::Form
	{
	public:
		MainWnd(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��һToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ʵ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  shiyanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��10ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ʮһToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ʮ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ʮ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  flash������ʾToolStripMenuItem;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��һToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shiyanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��10ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��ʮһToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��ʮ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��ʮ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flash������ʾToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ʵ��ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->flash������ʾToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(677, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��ToolStripMenuItem
			// 
			this->ʵ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->ʵ��һToolStripMenuItem,
					this->ʵ���ToolStripMenuItem, this->ʵ����ToolStripMenuItem, this->ʵ����ToolStripMenuItem, this->ʵ����ToolStripMenuItem, this->ʵ����ToolStripMenuItem,
					this->ʵ����ToolStripMenuItem, this->ʵ���ToolStripMenuItem, this->shiyanToolStripMenuItem, this->ʵ��10ToolStripMenuItem, this->ʵ��ʮһToolStripMenuItem,
					this->ʵ��ʮ��ToolStripMenuItem, this->ʵ��ʮ��ToolStripMenuItem
			});
			this->ʵ��ToolStripMenuItem->Name = L"ʵ��ToolStripMenuItem";
			this->ʵ��ToolStripMenuItem->Size = System::Drawing::Size(77, 36);
			this->ʵ��ToolStripMenuItem->Text = L"ʵ��";
			// 
			// ʵ��һToolStripMenuItem
			// 
			this->ʵ��һToolStripMenuItem->Name = L"ʵ��һToolStripMenuItem";
			this->ʵ��һToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ��һToolStripMenuItem->Text = L"ʵ��һ";
			this->ʵ��һToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ��һToolStripMenuItem_Click);
			// 
			// ʵ���ToolStripMenuItem
			// 
			this->ʵ���ToolStripMenuItem->Name = L"ʵ���ToolStripMenuItem";
			this->ʵ���ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ���ToolStripMenuItem->Text = L"ʵ���";
			this->ʵ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ���ToolStripMenuItem_Click);
			// 
			// ʵ����ToolStripMenuItem
			// 
			this->ʵ����ToolStripMenuItem->Name = L"ʵ����ToolStripMenuItem";
			this->ʵ����ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ����ToolStripMenuItem->Text = L"ʵ����";
			this->ʵ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ����ToolStripMenuItem_Click);
			// 
			// ʵ����ToolStripMenuItem
			// 
			this->ʵ����ToolStripMenuItem->Name = L"ʵ����ToolStripMenuItem";
			this->ʵ����ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ����ToolStripMenuItem->Text = L"ʵ����";
			this->ʵ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ����ToolStripMenuItem_Click);
			// 
			// ʵ����ToolStripMenuItem
			// 
			this->ʵ����ToolStripMenuItem->Name = L"ʵ����ToolStripMenuItem";
			this->ʵ����ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ����ToolStripMenuItem->Text = L"ʵ����";
			this->ʵ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ����ToolStripMenuItem_Click);
			// 
			// ʵ����ToolStripMenuItem
			// 
			this->ʵ����ToolStripMenuItem->Name = L"ʵ����ToolStripMenuItem";
			this->ʵ����ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ����ToolStripMenuItem->Text = L"ʵ����";
			this->ʵ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ����ToolStripMenuItem_Click);
			// 
			// ʵ����ToolStripMenuItem
			// 
			this->ʵ����ToolStripMenuItem->Name = L"ʵ����ToolStripMenuItem";
			this->ʵ����ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ����ToolStripMenuItem->Text = L"ʵ����";
			this->ʵ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ����ToolStripMenuItem_Click);
			// 
			// ʵ���ToolStripMenuItem
			// 
			this->ʵ���ToolStripMenuItem->Name = L"ʵ���ToolStripMenuItem";
			this->ʵ���ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ���ToolStripMenuItem->Text = L"ʵ���";
			this->ʵ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ���ToolStripMenuItem_Click);
			// 
			// shiyanToolStripMenuItem
			// 
			this->shiyanToolStripMenuItem->Name = L"shiyanToolStripMenuItem";
			this->shiyanToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->shiyanToolStripMenuItem->Text = L"ʵ���";
			this->shiyanToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::shiyanToolStripMenuItem_Click);
			// 
			// ʵ��10ToolStripMenuItem
			// 
			this->ʵ��10ToolStripMenuItem->Name = L"ʵ��10ToolStripMenuItem";
			this->ʵ��10ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ��10ToolStripMenuItem->Text = L"ʵ��ʮ";
			this->ʵ��10ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ��10ToolStripMenuItem_Click);
			// 
			// ʵ��ʮһToolStripMenuItem
			// 
			this->ʵ��ʮһToolStripMenuItem->Name = L"ʵ��ʮһToolStripMenuItem";
			this->ʵ��ʮһToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ��ʮһToolStripMenuItem->Text = L"ʵ��ʮһ";
			this->ʵ��ʮһToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ��ʮһToolStripMenuItem_Click);
			// 
			// ʵ��ʮ��ToolStripMenuItem
			// 
			this->ʵ��ʮ��ToolStripMenuItem->Name = L"ʵ��ʮ��ToolStripMenuItem";
			this->ʵ��ʮ��ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ��ʮ��ToolStripMenuItem->Text = L"ʵ��ʮ��";
			this->ʵ��ʮ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ��ʮ��ToolStripMenuItem_Click);
			// 
			// ʵ��ʮ��ToolStripMenuItem
			// 
			this->ʵ��ʮ��ToolStripMenuItem->Name = L"ʵ��ʮ��ToolStripMenuItem";
			this->ʵ��ʮ��ToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->ʵ��ʮ��ToolStripMenuItem->Text = L"ʵ��ʮ��";
			this->ʵ��ʮ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ��ʮ��ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::��������ToolStripMenuItem_Click);
			// 
			// flash������ʾToolStripMenuItem
			// 
			this->flash������ʾToolStripMenuItem->Name = L"flash������ʾToolStripMenuItem";
			this->flash������ʾToolStripMenuItem->Size = System::Drawing::Size(184, 36);
			this->flash������ʾToolStripMenuItem->Text = L"flash������ʾ";
			this->flash������ʾToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::flash������ʾToolStripMenuItem_Click);
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
			this->Text = L"KBE-5001�����϶�";
			this->Load += gcnew System::EventHandler(this, &MainWnd::MainWnd_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private:
/**************ʵ�鴰�����ָ��*************/
	ʵ��1 ^ʵ��1Wnd;
	ʵ��2 ^ʵ��2Wnd;
	ʵ��3 ^ʵ��3Wnd;
	ʵ��4 ^ʵ��4Wnd;
	ʵ��5 ^ʵ��5Wnd;
	ʵ��6 ^ʵ��6Wnd;
	ʵ��7 ^ʵ��7Wnd;
	ʵ��8 ^ʵ��8Wnd;
	ʵ��9 ^ʵ��9Wnd;
	ʵ��10 ^ʵ��10Wnd;
	ʵ��11 ^ʵ��11Wnd;
	ʵ��12 ^ʵ��12Wnd;
	ʵ��13 ^ʵ��13Wnd;
	��������^ ��������Wnd;
	flash^ flashWnd;
	private: System::Void ʵ��һToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (ʵ��1Status == true)
		{
			ʵ��1Wnd->BringToFront(); //�������������ǰ��
			ʵ��1Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��1Wnd = gcnew ʵ��1;
		ʵ��1Wnd->Show();
		ʵ��1Wnd->WindowState = FormWindowState::Maximized;
	}
	private: System::Void MainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void ʵ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (ʵ��2Status == true)
	{
		ʵ��2Wnd->BringToFront(); //�������������ǰ��
		ʵ��2Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2Wnd = gcnew ʵ��2;
	ʵ��2Wnd->Show();
	ʵ��2Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��3Status == true)
	{
		ʵ��3Wnd->BringToFront(); //�������������ǰ��
		ʵ��3Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��3Wnd = gcnew ʵ��3;
	ʵ��3Wnd->Show();
	ʵ��3Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��4Status == true)
	{
		ʵ��4Wnd->BringToFront(); //�������������ǰ��
		ʵ��4Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��4Wnd = gcnew ʵ��4;
	ʵ��4Wnd->Show();
	ʵ��4Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��5Status == true)
	{
		ʵ��5Wnd->BringToFront(); //�������������ǰ��
		ʵ��5Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��5Wnd = gcnew ʵ��5;
	ʵ��5Wnd->Show();
	ʵ��5Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��6Status == true)
	{
		ʵ��6Wnd->BringToFront(); //�������������ǰ��
		ʵ��6Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��6Wnd = gcnew ʵ��6;
	ʵ��6Wnd->Show();
	ʵ��6Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��7Status == true)
	{
		ʵ��7Wnd->BringToFront(); //�������������ǰ��
		ʵ��7Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��7Wnd = gcnew ʵ��7;
	ʵ��7Wnd->Show();
	ʵ��7Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (ʵ��8Status == true)
	{
		ʵ��8Wnd->BringToFront(); //�������������ǰ��
		ʵ��8Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��8Wnd = gcnew ʵ��8;
	ʵ��8Wnd->Show();
	ʵ��8Wnd->WindowState = FormWindowState::Maximized;



}
private: System::Void shiyanToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��9Status == true)
	{
		ʵ��9Wnd->BringToFront(); //�������������ǰ��
		ʵ��9Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��9Wnd = gcnew ʵ��9;
	ʵ��9Wnd->Show();
	ʵ��9Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ��10ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (ʵ��10Status == true)
	{
		ʵ��10Wnd->BringToFront(); //�������������ǰ��
		ʵ��10Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��10Wnd = gcnew ʵ��10;
	ʵ��10Wnd->Show();
	ʵ��10Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ��ʮһToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��11Status == true)
	{
		ʵ��11Wnd->BringToFront(); //�������������ǰ��
		ʵ��11Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��11Wnd = gcnew ʵ��11;
	ʵ��11Wnd->Show();
	ʵ��11Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ��ʮ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��12Status == true)
	{
		ʵ��12Wnd->BringToFront(); //�������������ǰ��
		ʵ��12Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��12Wnd = gcnew ʵ��12;
	ʵ��12Wnd->Show();
	ʵ��12Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ��ʮ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13Status == true)
	{
		ʵ��13Wnd->BringToFront(); //�������������ǰ��
		ʵ��13Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13Wnd = gcnew ʵ��13;
	ʵ��13Wnd->Show();
	ʵ��13Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (��������Status == true)
	{
		��������Wnd->BringToFront(); //�������������ǰ��
		��������Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	��������Wnd = gcnew ��������;
	��������Wnd->MdiParent = this;
	��������Wnd->Show();
	��������Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void flash������ʾToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flashStatus == true)
	{
		flashWnd->BringToFront(); //�������������ǰ��
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


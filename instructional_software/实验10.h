#pragma once
#include "ʵ��10ʵ��Ŀ��.h"
#include "ʵ��10ʵ�鷽��.h"
#include "ʵ��10ѡ�����.h"
#include "ʵ��10������.h"

extern bool ʵ��10Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��10 ժҪ
	/// </summary>
	public ref class ʵ��10 : public System::Windows::Forms::Form
	{
	public:
		ʵ��10(void)
		{
			InitializeComponent();
			ʵ��10Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��10()
		{
			ʵ��10Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��Ŀ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ѡ�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;

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
			this->ʵ��Ŀ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ѡ�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"������", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ʵ��Ŀ��ToolStripMenuItem,
					this->ѡ�����ToolStripMenuItem, this->ʵ�鷽��ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1178, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(132, 29);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��10::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ѡ�����ToolStripMenuItem
			// 
			this->ѡ�����ToolStripMenuItem->Name = L"ѡ�����ToolStripMenuItem";
			this->ѡ�����ToolStripMenuItem->Size = System::Drawing::Size(132, 29);
			this->ѡ�����ToolStripMenuItem->Text = L"ѡ�����";
			this->ѡ�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��10::ѡ�����ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(132, 29);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			this->ʵ�鷽��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��10::ʵ�鷽��ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(105, 29);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��10::������ToolStripMenuItem_Click);
			// 
			// ʵ��10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 658);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��10";
			this->Text = L"ʵ��ʮ��C620�����ĵ���������·";
			this->Load += gcnew System::EventHandler(this, &ʵ��10::ʵ��10_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��10_Load(System::Object^  sender, System::EventArgs^  e) {
	}
/**********************ʵ��10���Ӵ���************************/
			 ʵ��10ʵ��Ŀ��^ ʵ��10ʵ��Ŀ��wnd;
			 ʵ��10ʵ�鷽��^ʵ��10ʵ�鷽��wnd;
			 ʵ��10ѡ����� ^ʵ��10ѡ�����wnd;
			 ʵ��10������^ʵ��10������wnd;
	private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��10ʵ��Ŀ��Status == true)
		{
			ʵ��10ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
			ʵ��10ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��10ʵ��Ŀ��wnd = gcnew ʵ��10ʵ��Ŀ��;
		ʵ��10ʵ��Ŀ��wnd->MdiParent = this;
		ʵ��10ʵ��Ŀ��wnd->Show();
		ʵ��10ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
	
	}
private: System::Void ѡ�����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��10ѡ�����Status == true)
	{
		ʵ��10ѡ�����wnd->BringToFront(); //�������������ǰ��
		ʵ��10ѡ�����wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��10ѡ�����wnd = gcnew ʵ��10ѡ�����;
	ʵ��10ѡ�����wnd->MdiParent = this;
	ʵ��10ѡ�����wnd->Show();
	ʵ��10ѡ�����wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��10ʵ�鷽��Status == true)
	{
		ʵ��10ʵ�鷽��wnd->BringToFront(); //�������������ǰ��
		ʵ��10ʵ�鷽��wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��10ʵ�鷽��wnd = gcnew ʵ��10ʵ�鷽��;
	ʵ��10ʵ�鷽��wnd->MdiParent = this;
	ʵ��10ʵ�鷽��wnd->Show();
	ʵ��10ʵ�鷽��wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��10������Status == true)
	{
		ʵ��10������wnd->BringToFront(); //�������������ǰ��
		ʵ��10������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��10������wnd = gcnew ʵ��10������;
	ʵ��10������wnd->MdiParent = this;
	ʵ��10������wnd->Show();
	ʵ��10������wnd->WindowState = FormWindowState::Maximized;
}
};
}

#pragma once
#include "ʵ��13ʵ��Ŀ��.h"
#include "ʵ��13ѡ�����.h"
#include "ʵ��13ʵ�鷽��1.h"
#include "ʵ��13ʵ�鷽��2.h"
#include "ʵ��13ʵ�鷽��3.h"
#include "ʵ��13������.h"
extern bool ʵ��13Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��13 ժҪ
	/// </summary>
	public ref class ʵ��13 : public System::Windows::Forms::Form
	{
	public:
		ʵ��13(void)
		{
			InitializeComponent();
			ʵ��13Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��13()
		{
			ʵ��13Status = false;
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
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��һToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽����ToolStripMenuItem;
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
			this->ʵ�鷽��һToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ʵ��Ŀ��ToolStripMenuItem,
					this->ѡ�����ToolStripMenuItem, this->ʵ�鷽��ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1085, 41);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��13::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ѡ�����ToolStripMenuItem
			// 
			this->ѡ�����ToolStripMenuItem->Name = L"ѡ�����ToolStripMenuItem";
			this->ѡ�����ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ѡ�����ToolStripMenuItem->Text = L"ѡ�����";
			this->ѡ�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��13::ѡ�����ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ʵ�鷽��һToolStripMenuItem,
					this->ʵ�鷽����ToolStripMenuItem, this->ʵ�鷽����ToolStripMenuItem
			});
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			// 
			// ʵ�鷽��һToolStripMenuItem
			// 
			this->ʵ�鷽��һToolStripMenuItem->Name = L"ʵ�鷽��һToolStripMenuItem";
			this->ʵ�鷽��һToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->ʵ�鷽��һToolStripMenuItem->Text = L"ʵ�鷽��һ";
			this->ʵ�鷽��һToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��13::ʵ�鷽��һToolStripMenuItem_Click);
			// 
			// ʵ�鷽����ToolStripMenuItem
			// 
			this->ʵ�鷽����ToolStripMenuItem->Name = L"ʵ�鷽����ToolStripMenuItem";
			this->ʵ�鷽����ToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->ʵ�鷽����ToolStripMenuItem->Text = L"ʵ�鷽����";
			this->ʵ�鷽����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��13::ʵ�鷽����ToolStripMenuItem_Click);
			// 
			// ʵ�鷽����ToolStripMenuItem
			// 
			this->ʵ�鷽����ToolStripMenuItem->Name = L"ʵ�鷽����ToolStripMenuItem";
			this->ʵ�鷽����ToolStripMenuItem->Size = System::Drawing::Size(221, 38);
			this->ʵ�鷽����ToolStripMenuItem->Text = L"ʵ�鷽����";
			this->ʵ�鷽����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��13::ʵ�鷽����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(102, 37);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��13::������ToolStripMenuItem_Click);
			// 
			// ʵ��13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 626);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��13";
			this->Text = L"ʵ��ʮ����X62Wϳ��ģ�������·�ĵ��Է���";
			this->Load += gcnew System::EventHandler(this, &ʵ��13::ʵ��13_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��13_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 ʵ��13ʵ��Ŀ��^ ʵ��13ʵ��Ŀ��wnd;
			 ʵ��13ѡ�����^ ʵ��13ѡ�����wnd;
			 ʵ��13ʵ�鷽��1 ^ʵ��13ʵ�鷽��1wnd;
			 ʵ��13ʵ�鷽��2 ^ʵ��13ʵ�鷽��2wnd;
			 ʵ��13ʵ�鷽��3 ^ʵ��13ʵ�鷽��3wnd;
			 ʵ��13������^ ʵ��13������wnd;
private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13ʵ��Ŀ��Status == true)
	{
		ʵ��13ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
		ʵ��13ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13ʵ��Ŀ��wnd = gcnew ʵ��13ʵ��Ŀ��;
	ʵ��13ʵ��Ŀ��wnd->MdiParent = this;
	ʵ��13ʵ��Ŀ��wnd->Show();
	ʵ��13ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;


}
private: System::Void ѡ�����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13ѡ�����Status == true)
	{
		ʵ��13ѡ�����wnd->BringToFront(); //�������������ǰ��
		ʵ��13ѡ�����wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13ѡ�����wnd = gcnew ʵ��13ѡ�����;
	ʵ��13ѡ�����wnd->MdiParent = this;
	ʵ��13ѡ�����wnd->Show();
	ʵ��13ѡ�����wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ�鷽��һToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13ʵ�鷽��1Status == true)
	{
		ʵ��13ʵ�鷽��1wnd->BringToFront(); //�������������ǰ��
		ʵ��13ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13ʵ�鷽��1wnd = gcnew ʵ��13ʵ�鷽��1;
	ʵ��13ʵ�鷽��1wnd->MdiParent = this;
	ʵ��13ʵ�鷽��1wnd->Show();
	ʵ��13ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ�鷽����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13ʵ�鷽��2Status == true)
	{
		ʵ��13ʵ�鷽��2wnd->BringToFront(); //�������������ǰ��
		ʵ��13ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13ʵ�鷽��2wnd = gcnew ʵ��13ʵ�鷽��2;
	ʵ��13ʵ�鷽��2wnd->MdiParent = this;
	ʵ��13ʵ�鷽��2wnd->Show();
	ʵ��13ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13ʵ�鷽��3Status == true)
	{
		ʵ��13ʵ�鷽��3wnd->BringToFront(); //�������������ǰ��
		ʵ��13ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13ʵ�鷽��3wnd = gcnew ʵ��13ʵ�鷽��3;
	ʵ��13ʵ�鷽��3wnd->MdiParent = this;
	ʵ��13ʵ�鷽��3wnd->Show();
	ʵ��13ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��13������Status == true)
	{
		ʵ��13������wnd->BringToFront(); //�������������ǰ��
		ʵ��13������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��13������wnd = gcnew ʵ��13������;
	ʵ��13������wnd->MdiParent = this;
	ʵ��13������wnd->Show();
	ʵ��13������wnd->WindowState = FormWindowState::Maximized;
}
};
}

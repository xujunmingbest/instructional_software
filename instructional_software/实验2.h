#pragma once
#include "ʵ��2ʵ�鷽��1.h"
#include "ʵ��2ʵ�鷽��2.h"
#include "ʵ��2ʵ�鷽��3.h"
#include "ʵ��2ʵ�鷽��4.h"
#include "ʵ��2ʵ��Ŀ��.h"
#include "ʵ��2������.h"
#include "ʵ��2ѡ�����.h"

extern bool ʵ��2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��2 ժҪ
	/// </summary>
	public ref class ʵ��2 : public System::Windows::Forms::Form
	{
	public:
		ʵ��2(void)
		{
			InitializeComponent();
			ʵ��2Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��2()
		{
			ʵ��2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��Ŀ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ѡ�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��4ToolStripMenuItem;
	protected:

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
			this->ʵ�鷽��1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ʵ��Ŀ��ToolStripMenuItem,
					this->ѡ�����ToolStripMenuItem, this->ʵ�鷽��ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(805, 44);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(139, 40);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ѡ�����ToolStripMenuItem
			// 
			this->ѡ�����ToolStripMenuItem->Name = L"ѡ�����ToolStripMenuItem";
			this->ѡ�����ToolStripMenuItem->Size = System::Drawing::Size(139, 40);
			this->ѡ�����ToolStripMenuItem->Text = L"ѡ�����";
			this->ѡ�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::ѡ�����ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ʵ�鷽��1ToolStripMenuItem,
					this->ʵ�鷽��2ToolStripMenuItem, this->ʵ�鷽��3ToolStripMenuItem, this->ʵ�鷽��4ToolStripMenuItem
			});
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(139, 40);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			// 
			// ʵ�鷽��1ToolStripMenuItem
			// 
			this->ʵ�鷽��1ToolStripMenuItem->Name = L"ʵ�鷽��1ToolStripMenuItem";
			this->ʵ�鷽��1ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->ʵ�鷽��1ToolStripMenuItem->Text = L"ʵ�鷽��1";
			this->ʵ�鷽��1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::ʵ�鷽��1ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��2ToolStripMenuItem
			// 
			this->ʵ�鷽��2ToolStripMenuItem->Name = L"ʵ�鷽��2ToolStripMenuItem";
			this->ʵ�鷽��2ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->ʵ�鷽��2ToolStripMenuItem->Text = L"ʵ�鷽��2";
			this->ʵ�鷽��2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::ʵ�鷽��2ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��3ToolStripMenuItem
			// 
			this->ʵ�鷽��3ToolStripMenuItem->Name = L"ʵ�鷽��3ToolStripMenuItem";
			this->ʵ�鷽��3ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->ʵ�鷽��3ToolStripMenuItem->Text = L"ʵ�鷽��3";
			this->ʵ�鷽��3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::ʵ�鷽��3ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��4ToolStripMenuItem
			// 
			this->ʵ�鷽��4ToolStripMenuItem->Name = L"ʵ�鷽��4ToolStripMenuItem";
			this->ʵ�鷽��4ToolStripMenuItem->Size = System::Drawing::Size(224, 40);
			this->ʵ�鷽��4ToolStripMenuItem->Text = L"ʵ�鷽��4";
			this->ʵ�鷽��4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::ʵ�鷽��4ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(111, 40);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��2::������ToolStripMenuItem_Click);
			// 
			// ʵ��2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 397);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��2";
			this->Text = L"ʵ����������첽�綯��������ת������·";
			this->Load += gcnew System::EventHandler(this, &ʵ��2::ʵ��2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
/**********ʵ��2���Ӵ���ָ��************/
			 ʵ��2ʵ�鷽��1^ ʵ��2ʵ�鷽��1wnd;
			 ʵ��2ʵ�鷽��2^  ʵ��2ʵ�鷽��2wnd;
			 ʵ��2ʵ�鷽��3^ ʵ��2ʵ�鷽��3wnd;
			 ʵ��2ʵ�鷽��4^ ʵ��2ʵ�鷽��4wnd;
			 ʵ��2ʵ��Ŀ��^ ʵ��2ʵ��Ŀ��wnd;
			 ʵ��2������^ ʵ��2������wnd;
			 ʵ��2ѡ�����^ ʵ��2ѡ�����wnd;
	private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��2ʵ��Ŀ��Status == true)
		{
			ʵ��2ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
			ʵ��2ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��2ʵ��Ŀ��wnd = gcnew ʵ��2ʵ��Ŀ��;
		ʵ��2ʵ��Ŀ��wnd->MdiParent = this;
		ʵ��2ʵ��Ŀ��wnd->Show();
		ʵ��2ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
	}

private: System::Void ѡ�����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��2ѡ�����Status == true)
	{
		ʵ��2ѡ�����wnd->BringToFront(); //�������������ǰ��
		ʵ��2ѡ�����wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2ѡ�����wnd = gcnew ʵ��2ѡ�����;
	ʵ��2ѡ�����wnd->MdiParent = this;
	ʵ��2ѡ�����wnd->Show();
	ʵ��2ѡ�����wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��2ʵ�鷽��1Status == true)
	{
		ʵ��2ʵ�鷽��1wnd->BringToFront(); //�������������ǰ��
		ʵ��2ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2ʵ�鷽��1wnd = gcnew ʵ��2ʵ�鷽��1;
	ʵ��2ʵ�鷽��1wnd->MdiParent = this;
	ʵ��2ʵ�鷽��1wnd->Show();
	ʵ��2ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��2ʵ�鷽��2Status == true)
	{
		ʵ��2ʵ�鷽��2wnd->BringToFront(); //�������������ǰ��
		ʵ��2ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2ʵ�鷽��2wnd = gcnew ʵ��2ʵ�鷽��2;
	ʵ��2ʵ�鷽��2wnd->MdiParent = this;
	ʵ��2ʵ�鷽��2wnd->Show();
	ʵ��2ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��2ʵ�鷽��3Status == true)
	{
		ʵ��2ʵ�鷽��3wnd->BringToFront(); //�������������ǰ��
		ʵ��2ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2ʵ�鷽��3wnd = gcnew ʵ��2ʵ�鷽��3;
	ʵ��2ʵ�鷽��3wnd->MdiParent = this;
	ʵ��2ʵ�鷽��3wnd->Show();
	ʵ��2ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��4ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��2ʵ�鷽��4Status == true)
	{
		ʵ��2ʵ�鷽��4wnd->BringToFront(); //�������������ǰ��
		ʵ��2ʵ�鷽��4wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2ʵ�鷽��4wnd = gcnew ʵ��2ʵ�鷽��4;
	ʵ��2ʵ�鷽��4wnd->MdiParent = this;
	ʵ��2ʵ�鷽��4wnd->Show();
	ʵ��2ʵ�鷽��4wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��2������Status == true)
	{
		ʵ��2������wnd->BringToFront(); //�������������ǰ��
		ʵ��2������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��2������wnd = gcnew ʵ��2������;
	ʵ��2������wnd->MdiParent = this;
	ʵ��2������wnd->Show();
	ʵ��2������wnd->WindowState = FormWindowState::Maximized;

}
};
}

#pragma once
#include "ʵ��4ʵ��Ŀ��.h"
#include "ʵ��4ʵ�鲿��.h"
#include "ʵ��4ʵ�鷽��1.h"
#include "ʵ��4ʵ�鷽��2.h"
#include "ʵ��4ʵ�鷽��3.h"
#include "ʵ��4������.h"
extern bool ʵ��4Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��4 ժҪ
	/// </summary>
	public ref class ʵ��4 : public System::Windows::Forms::Form
	{
	public:
		ʵ��4(void)
		{
			InitializeComponent();
			ʵ��4Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��4()
		{
			ʵ��4Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ѡ�ò���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鷽��3ToolStripMenuItem;
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
			this->ʵ��1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ѡ�ò���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ʵ��1ToolStripMenuItem,
					this->ѡ�ò���ToolStripMenuItem, this->ʵ�鷽��ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(966, 40);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��1ToolStripMenuItem
			// 
			this->ʵ��1ToolStripMenuItem->Name = L"ʵ��1ToolStripMenuItem";
			this->ʵ��1ToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->ʵ��1ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��4::ʵ��1ToolStripMenuItem_Click);
			// 
			// ѡ�ò���ToolStripMenuItem
			// 
			this->ѡ�ò���ToolStripMenuItem->Name = L"ѡ�ò���ToolStripMenuItem";
			this->ѡ�ò���ToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->ѡ�ò���ToolStripMenuItem->Text = L"ѡ�ò���";
			this->ѡ�ò���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��4::ѡ�ò���ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ʵ�鷽��1ToolStripMenuItem,
					this->ʵ�鷽��2ToolStripMenuItem, this->ʵ�鷽��3ToolStripMenuItem
			});
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			// 
			// ʵ�鷽��1ToolStripMenuItem
			// 
			this->ʵ�鷽��1ToolStripMenuItem->Name = L"ʵ�鷽��1ToolStripMenuItem";
			this->ʵ�鷽��1ToolStripMenuItem->Size = System::Drawing::Size(211, 36);
			this->ʵ�鷽��1ToolStripMenuItem->Text = L"ʵ�鷽��1";
			this->ʵ�鷽��1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��4::ʵ�鷽��1ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��2ToolStripMenuItem
			// 
			this->ʵ�鷽��2ToolStripMenuItem->Name = L"ʵ�鷽��2ToolStripMenuItem";
			this->ʵ�鷽��2ToolStripMenuItem->Size = System::Drawing::Size(211, 36);
			this->ʵ�鷽��2ToolStripMenuItem->Text = L"ʵ�鷽��2";
			this->ʵ�鷽��2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��4::ʵ�鷽��2ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��3ToolStripMenuItem
			// 
			this->ʵ�鷽��3ToolStripMenuItem->Name = L"ʵ�鷽��3ToolStripMenuItem";
			this->ʵ�鷽��3ToolStripMenuItem->Size = System::Drawing::Size(211, 36);
			this->ʵ�鷽��3ToolStripMenuItem->Text = L"ʵ�鷽��3";
			this->ʵ�鷽��3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��4::ʵ�鷽��3ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(102, 36);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��4::������ToolStripMenuItem_Click);
			// 
			// ʵ��4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 405);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��4";
			this->Text = L"ʵ���ġ�˳�������·";
			this->Load += gcnew System::EventHandler(this, &ʵ��4::ʵ��4_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*********ʵ��4�Ӵ���ָ��*********/
		ʵ��4ʵ��Ŀ��^ ʵ��4ʵ��Ŀ��wnd;
		ʵ��4ʵ�鲿��^ ʵ��4ʵ�鲿��wnd;
		ʵ��4ʵ�鷽��1^ ʵ��4ʵ�鷽��1wnd;
		ʵ��4ʵ�鷽��2^ ʵ��4ʵ�鷽��2wnd;
		ʵ��4ʵ�鷽��3^ ʵ��4ʵ�鷽��3wnd;
		ʵ��4������^ ʵ��4������wnd;

	private: System::Void ʵ��4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ʵ��1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��4ʵ��Ŀ��Status == true)
		{
			ʵ��4ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
			ʵ��4ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��4ʵ��Ŀ��wnd = gcnew ʵ��4ʵ��Ŀ��;
		ʵ��4ʵ��Ŀ��wnd->MdiParent = this;
		ʵ��4ʵ��Ŀ��wnd->Show();
		ʵ��4ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
	}
private: System::Void ѡ�ò���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��4ʵ�鲿��Status == true)
	{
		ʵ��4ʵ�鲿��wnd->BringToFront(); //�������������ǰ��
		ʵ��4ʵ�鲿��wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��4ʵ�鲿��wnd = gcnew ʵ��4ʵ�鲿��;
	ʵ��4ʵ�鲿��wnd->MdiParent = this;
	ʵ��4ʵ�鲿��wnd->Show();
	ʵ��4ʵ�鲿��wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��4ʵ�鷽��1Status == true)
	{
		ʵ��4ʵ�鷽��1wnd->BringToFront(); //�������������ǰ��
		ʵ��4ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��4ʵ�鷽��1wnd = gcnew ʵ��4ʵ�鷽��1;
	ʵ��4ʵ�鷽��1wnd->MdiParent = this;
	ʵ��4ʵ�鷽��1wnd->Show();
	ʵ��4ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ�鷽��2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��4ʵ�鷽��2Status == true)
	{
		ʵ��4ʵ�鷽��2wnd->BringToFront(); //�������������ǰ��
		ʵ��4ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��4ʵ�鷽��2wnd = gcnew ʵ��4ʵ�鷽��2;
	ʵ��4ʵ�鷽��2wnd->MdiParent = this;
	ʵ��4ʵ�鷽��2wnd->Show();
	ʵ��4ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��4ʵ�鷽��3Status == true)
	{
		ʵ��4ʵ�鷽��3wnd->BringToFront(); //�������������ǰ��
		ʵ��4ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��4ʵ�鷽��3wnd = gcnew ʵ��4ʵ�鷽��3;
	ʵ��4ʵ�鷽��3wnd->MdiParent = this;
	ʵ��4ʵ�鷽��3wnd->Show();
	ʵ��4ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��4������Status == true)
	{
		ʵ��4������wnd->BringToFront(); //�������������ǰ��
		ʵ��4������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��4������wnd = gcnew ʵ��4������;
	ʵ��4������wnd->MdiParent = this;
	ʵ��4������wnd->Show();
	ʵ��4������wnd->WindowState = FormWindowState::Maximized;

}
};
}

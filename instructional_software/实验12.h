#pragma once
#include "ʵ��12ʵ��Ŀ��.h"
#include "ʵ��12ʵ�鷽��.h"
#include "ʵ��12ѡ�����.h"
#include "ʵ��12������.h"
extern bool ʵ��12Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��12 ժҪ
	/// </summary>
	public ref class ʵ��12 : public System::Windows::Forms::Form
	{
	public:
		ʵ��12(void)
		{
			InitializeComponent();
			ʵ��12Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��12()
		{
			ʵ��12Status = false;
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
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ʵ��Ŀ��ToolStripMenuItem,
					this->ѡ�����ToolStripMenuItem, this->ʵ�鷽��ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1306, 45);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(141, 41);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��12::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ѡ�����ToolStripMenuItem
			// 
			this->ѡ�����ToolStripMenuItem->Name = L"ѡ�����ToolStripMenuItem";
			this->ѡ�����ToolStripMenuItem->Size = System::Drawing::Size(141, 41);
			this->ѡ�����ToolStripMenuItem->Text = L"ѡ�����";
			this->ѡ�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��12::ѡ�����ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(141, 41);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			this->ʵ�鷽��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��12::ʵ�鷽��ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(113, 41);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��12::������ToolStripMenuItem_Click);
			// 
			// ʵ��12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1306, 645);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��12";
			this->Text = L"ʵ��ʮ�����綯��«�������Ƶ�·ʵ��";
			this->Load += gcnew System::EventHandler(this, &ʵ��12::ʵ��12_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��12_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 ʵ��12ʵ��Ŀ��^ ʵ��12ʵ��Ŀ��wnd;
			 ʵ��12ʵ�鷽��^ ʵ��12ʵ�鷽��wnd;
			 ʵ��12ѡ�����^ ʵ��12ѡ�����wnd;
			 ʵ��12������^ ʵ��12������wnd;

private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��12ʵ��Ŀ��Status == true)
	{
		ʵ��12ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
		ʵ��12ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��12ʵ��Ŀ��wnd = gcnew ʵ��12ʵ��Ŀ��;
	ʵ��12ʵ��Ŀ��wnd->MdiParent = this;
	ʵ��12ʵ��Ŀ��wnd->Show();
	ʵ��12ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ѡ�����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��12ѡ�����Status == true)
	{
		ʵ��12ѡ�����wnd->BringToFront(); //�������������ǰ��
		ʵ��12ѡ�����wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��12ѡ�����wnd = gcnew ʵ��12ѡ�����;
	ʵ��12ѡ�����wnd->MdiParent = this;
	ʵ��12ѡ�����wnd->Show();
	ʵ��12ѡ�����wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ�鷽��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��12ʵ�鷽��Status == true)
	{
		ʵ��12ʵ�鷽��wnd->BringToFront(); //�������������ǰ��
		ʵ��12ʵ�鷽��wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��12ʵ�鷽��wnd = gcnew ʵ��12ʵ�鷽��;
	ʵ��12ʵ�鷽��wnd->MdiParent = this;
	ʵ��12ʵ�鷽��wnd->Show();
	ʵ��12ʵ�鷽��wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��12������Status == true)
	{
		ʵ��12������wnd->BringToFront(); //�������������ǰ��
		ʵ��12������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��12������wnd = gcnew ʵ��12������;
	ʵ��12������wnd->MdiParent = this;
	ʵ��12������wnd->Show();
	ʵ��12������wnd->WindowState = FormWindowState::Maximized;
}
};
}

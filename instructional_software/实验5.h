#pragma once
#include "ʵ��5ʵ��Ŀ��.h"
#include "ʵ��5ѡ�����.h"
#include "ʵ��5ʵ�鷽��.h"
#include "ʵ��5������.h"


extern bool ʵ��5Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��5 ժҪ
	/// </summary>
	public ref class ʵ��5 : public System::Windows::Forms::Form
	{
	public:
		ʵ��5(void)
		{
			InitializeComponent();
			ʵ��5Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��5()
		{
			ʵ��5Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��Ŀ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ԭ��ToolStripMenuItem;
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
			this->ʵ��ԭ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鷽��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->ʵ��ԭ��ToolStripMenuItem, this->ʵ�鷽��ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(534, 41);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��5::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ʵ��ԭ��ToolStripMenuItem
			// 
			this->ʵ��ԭ��ToolStripMenuItem->Name = L"ʵ��ԭ��ToolStripMenuItem";
			this->ʵ��ԭ��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ��ԭ��ToolStripMenuItem->Text = L"ѡ�����";
			this->ʵ��ԭ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��5::ʵ��ԭ��ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			this->ʵ�鷽��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��5::ʵ�鷽��ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(102, 37);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��5::������ToolStripMenuItem_Click);
			// 
			// ʵ��5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 405);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��5";
			this->Text = L"ʵ���塢���ؿ�����·";
			this->Load += gcnew System::EventHandler(this, &ʵ��5::ʵ��5_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��5_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private:
		ʵ��5ʵ��Ŀ�� ^ ʵ��5ʵ��Ŀ��wnd;
		ʵ��5ѡ����� ^ ʵ��5ѡ�����wnd;
		ʵ��5ʵ�鷽�� ^ ʵ��5ʵ�鷽��wnd;
		ʵ��5������ ^ ʵ��5������wnd;

	private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��5ʵ��Ŀ��Status == true)
		{
			ʵ��5ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
			ʵ��5ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��5ʵ��Ŀ��wnd = gcnew ʵ��5ʵ��Ŀ��;
		ʵ��5ʵ��Ŀ��wnd->MdiParent = this;
		ʵ��5ʵ��Ŀ��wnd->Show();
		ʵ��5ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;

	}
private: System::Void ʵ��ԭ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��5ѡ�����Status == true)
	{
		ʵ��5ѡ�����wnd->BringToFront(); //�������������ǰ��
		ʵ��5ѡ�����wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��5ѡ�����wnd = gcnew ʵ��5ѡ�����;
	ʵ��5ѡ�����wnd->MdiParent = this;
	ʵ��5ѡ�����wnd->Show();
	ʵ��5ѡ�����wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ�鷽��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��5ʵ�鷽��Status == true)
	{
		ʵ��5ʵ�鷽��wnd->BringToFront(); //�������������ǰ��
		ʵ��5ʵ�鷽��wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��5ʵ�鷽��wnd = gcnew ʵ��5ʵ�鷽��;
	ʵ��5ʵ�鷽��wnd->MdiParent = this;
	ʵ��5ʵ�鷽��wnd->Show();
	ʵ��5ʵ�鷽��wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��5������Status == true)
	{
		ʵ��5������wnd->BringToFront(); //�������������ǰ��
		ʵ��5������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��5������wnd = gcnew ʵ��5������;
	ʵ��5������wnd->MdiParent = this;
	ʵ��5������wnd->Show();
	ʵ��5������wnd->WindowState = FormWindowState::Maximized;

}
};
}

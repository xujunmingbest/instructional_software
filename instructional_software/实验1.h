#pragma once
#include "ʵ��1ʵ��Ŀ��.h"
#include "ʵ��1ѡ�����.h"
#include "ʵ��1ʵ�鷽��1.h"
#include "ʵ��1ʵ�鷽��2.h"
#include "ʵ��1ʵ�鷽��3.h"
#include "ʵ��1������.h"

extern bool ʵ��1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1 ժҪ
	/// </summary>
	public ref class ʵ��1 : public System::Windows::Forms::Form
	{
	public:
		ʵ��1(void)
		{
			InitializeComponent();
			ʵ��1Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1()
		{
			ʵ��1Status = false;
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
	private: System::Windows::Forms::ToolStripMenuItem^  l�����첽�綯���㶯������·ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����첽�綯������������·ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem;
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
			this->l�����첽�綯���㶯������·ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����첽�綯������������·ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Size = System::Drawing::Size(868, 41);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &ʵ��1::menuStrip1_ItemClicked);
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ѡ�����ToolStripMenuItem
			// 
			this->ѡ�����ToolStripMenuItem->Name = L"ѡ�����ToolStripMenuItem";
			this->ѡ�����ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ѡ�����ToolStripMenuItem->Text = L"ѡ�����";
			this->ѡ�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1::ѡ�����ToolStripMenuItem_Click);
			// 
			// ʵ�鷽��ToolStripMenuItem
			// 
			this->ʵ�鷽��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->l�����첽�綯���㶯������·ToolStripMenuItem,
					this->�����첽�綯������������·ToolStripMenuItem, this->�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem
			});
			this->ʵ�鷽��ToolStripMenuItem->Name = L"ʵ�鷽��ToolStripMenuItem";
			this->ʵ�鷽��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ�鷽��ToolStripMenuItem->Text = L"ʵ�鷽��";
			// 
			// l�����첽�綯���㶯������·ToolStripMenuItem
			// 
			this->l�����첽�綯���㶯������·ToolStripMenuItem->Name = L"l�����첽�綯���㶯������·ToolStripMenuItem";
			this->l�����첽�綯���㶯������·ToolStripMenuItem->Size = System::Drawing::Size(611, 38);
			this->l�����첽�綯���㶯������·ToolStripMenuItem->Text = L"l�������첽�綯���㶯������·";
			this->l�����첽�綯���㶯������·ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1::l�����첽�綯���㶯������·ToolStripMenuItem_Click);
			// 
			// �����첽�綯������������·ToolStripMenuItem
			// 
			this->�����첽�綯������������·ToolStripMenuItem->Name = L"�����첽�綯������������·ToolStripMenuItem";
			this->�����첽�綯������������·ToolStripMenuItem->Size = System::Drawing::Size(611, 38);
			this->�����첽�綯������������·ToolStripMenuItem->Text = L"2�������첽�綯������������·";
			this->�����첽�綯������������·ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1::�����첽�綯������������·ToolStripMenuItem_Click);
			// 
			// �����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem
			// 
			this->�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem->Name = L"�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem";
			this->�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem->Size = System::Drawing::Size(611, 38);
			this->�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem->Text = L"3�������첽�綯���ȿɵ㶯�ֿ�����������·";
			this->�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1::�����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(102, 37);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1::������ToolStripMenuItem_Click);
			// 
			// ʵ��1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 437);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��1";
			this->Text = L"ʵ��һ�������첽�綯���㶯������������·";
			this->Load += gcnew System::EventHandler(this, &ʵ��1::ʵ��1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}

			 /*******�Ӵ������ָ�뼯�ϵ�*********/
private:			 
	ʵ��1ʵ��Ŀ��^ ʵ��1ʵ��Ŀ��wnd;
	ʵ��1ѡ�����^ ʵ��1ѡ�����wnd;
	ʵ��1ʵ�鷽��1^ ʵ��1ʵ�鷽��1wnd;
	ʵ��1ʵ�鷽��2^ ʵ��1ʵ�鷽��2wnd;
	ʵ��1ʵ�鷽��3^ ʵ��1ʵ�鷽��3wnd;
	ʵ��1������^ ʵ��1������wnd;
	private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (ʵ��1ʵ��Ŀ��Status == true)
		{
			ʵ��1ʵ��Ŀ��wnd->BringToFront(); //�������������ǰ��
			ʵ��1ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��1ʵ��Ŀ��wnd = gcnew ʵ��1ʵ��Ŀ��;
		ʵ��1ʵ��Ŀ��wnd->MdiParent = this;
		ʵ��1ʵ��Ŀ��wnd->Show();
		ʵ��1ʵ��Ŀ��wnd->WindowState = FormWindowState::Maximized;
	}
private: System::Void ʵ��1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ѡ�����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ѡ�����Status == true)
	{
		ʵ��1ѡ�����wnd->BringToFront(); //�������������ǰ��
		ʵ��1ѡ�����wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ѡ�����wnd = gcnew ʵ��1ѡ�����;
	ʵ��1ѡ�����wnd->MdiParent = this;
	ʵ��1ѡ�����wnd->Show();
	ʵ��1ѡ�����wnd->WindowState = FormWindowState::Maximized;
}


private: System::Void l�����첽�綯���㶯������·ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ�鷽��1Status == true)
	{
		ʵ��1ʵ�鷽��1wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ�鷽��1wnd = gcnew ʵ��1ʵ�鷽��1;
	ʵ��1ʵ�鷽��1wnd->MdiParent = this;
	ʵ��1ʵ�鷽��1wnd->Show();
	ʵ��1ʵ�鷽��1wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void �����첽�綯������������·ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ�鷽��2Status == true)
	{
		ʵ��1ʵ�鷽��2wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ�鷽��2wnd = gcnew ʵ��1ʵ�鷽��2;
	ʵ��1ʵ�鷽��2wnd->MdiParent = this;
	ʵ��1ʵ�鷽��2wnd->Show();
	ʵ��1ʵ�鷽��2wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void �����첽�綯���ȿɵ㶯�ֿ�����������·ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ�鷽��3Status == true)
	{
		ʵ��1ʵ�鷽��3wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ�鷽��3wnd = gcnew ʵ��1ʵ�鷽��3;
	ʵ��1ʵ�鷽��3wnd->MdiParent = this;
	ʵ��1ʵ�鷽��3wnd->Show();
	ʵ��1ʵ�鷽��3wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1������Status == true)
	{
		ʵ��1������wnd->BringToFront(); //�������������ǰ��
		ʵ��1������wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1������wnd = gcnew ʵ��1������;
	ʵ��1������wnd->MdiParent = this;
	ʵ��1������wnd->Show();
	ʵ��1������wnd->WindowState = FormWindowState::Maximized;

}
};
}

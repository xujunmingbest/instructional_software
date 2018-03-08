#pragma once
#include "source.h"
#include "ʵ��1.h"
#include "ʵ��2.h"

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��һToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ���ToolStripMenuItem;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��һToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ʵ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(96, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(469, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"KBE-5001�����϶���ѧ���";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ʵ��ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(677, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��ToolStripMenuItem
			// 
			this->ʵ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ʵ��һToolStripMenuItem,
					this->ʵ���ToolStripMenuItem
			});
			this->ʵ��ToolStripMenuItem->Name = L"ʵ��ToolStripMenuItem";
			this->ʵ��ToolStripMenuItem->Size = System::Drawing::Size(77, 36);
			this->ʵ��ToolStripMenuItem->Text = L"ʵ��";
			// 
			// ʵ��һToolStripMenuItem
			// 
			this->ʵ��һToolStripMenuItem->Name = L"ʵ��һToolStripMenuItem";
			this->ʵ��һToolStripMenuItem->Size = System::Drawing::Size(181, 36);
			this->ʵ��һToolStripMenuItem->Text = L"ʵ��һ";
			this->ʵ��һToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ��һToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(436, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"�����ʶ�Ů·��";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainWnd::textBox1_TextChanged);
			// 
			// ʵ���ToolStripMenuItem
			// 
			this->ʵ���ToolStripMenuItem->Name = L"ʵ���ToolStripMenuItem";
			this->ʵ���ToolStripMenuItem->Size = System::Drawing::Size(181, 36);
			this->ʵ���ToolStripMenuItem->Text = L"ʵ���";
			this->ʵ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWnd::ʵ���ToolStripMenuItem_Click);
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
			this->Text = L"KBE-5001�����϶�";
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
/**************ʵ�鴰�����ָ��*************/
	ʵ��1 ^ʵ��1Wnd;
	ʵ��2 ^ʵ��2Wnd;
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
};
}

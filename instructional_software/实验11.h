#pragma once
extern bool ʵ��11Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��11 ժҪ
	/// </summary>
	public ref class ʵ��11 : public System::Windows::Forms::Form
	{
	public:
		ʵ��11(void)
		{
			InitializeComponent();
			ʵ��11Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��11()
		{
			ʵ��11Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��Ŀ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ԭ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ԭ��ToolStripMenuItem1;
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
			this->ʵ��ԭ��ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->ʵ��ԭ��ToolStripMenuItem, this->ʵ��ԭ��ToolStripMenuItem1, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1444, 41);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			// 
			// ʵ��ԭ��ToolStripMenuItem
			// 
			this->ʵ��ԭ��ToolStripMenuItem->Name = L"ʵ��ԭ��ToolStripMenuItem";
			this->ʵ��ԭ��ToolStripMenuItem->Size = System::Drawing::Size(127, 37);
			this->ʵ��ԭ��ToolStripMenuItem->Text = L"ѡ�����";
			// 
			// ʵ��ԭ��ToolStripMenuItem1
			// 
			this->ʵ��ԭ��ToolStripMenuItem1->Name = L"ʵ��ԭ��ToolStripMenuItem1";
			this->ʵ��ԭ��ToolStripMenuItem1->Size = System::Drawing::Size(127, 37);
			this->ʵ��ԭ��ToolStripMenuItem1->Text = L"ʵ��ԭ��";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(102, 37);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ʵ��11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 581);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��11";
			this->Text = L"ʵ��ʮһ��M7130ƽ��ĥ���ĵ���������·";
			this->Load += gcnew System::EventHandler(this, &ʵ��11::ʵ��11_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��11_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

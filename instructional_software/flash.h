#pragma once
extern bool flashStatus;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// flash 摘要
	/// </summary>
	public ref class flash : public System::Windows::Forms::Form
	{
	public:
		flash(void)
		{
			InitializeComponent();
			flashStatus = true;
			axShockwaveFlash1->Movie = "E:\\360Downloads\\flash6064\\flash6064.swf";
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~flash()
		{
			flashStatus = false;
			if (components)
			{
				delete components;
			}
		}
	private: AxShockwaveFlashObjects::AxShockwaveFlash^  axShockwaveFlash1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(flash::typeid));
			this->axShockwaveFlash1 = (gcnew AxShockwaveFlashObjects::AxShockwaveFlash());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axShockwaveFlash1))->BeginInit();
			this->SuspendLayout();
			// 
			// axShockwaveFlash1
			// 
			this->axShockwaveFlash1->Enabled = true;
			this->axShockwaveFlash1->Location = System::Drawing::Point(12, 12);
			this->axShockwaveFlash1->Name = L"axShockwaveFlash1";
			this->axShockwaveFlash1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axShockwaveFlash1.OcxState")));
			this->axShockwaveFlash1->Size = System::Drawing::Size(1333, 699);
			this->axShockwaveFlash1->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(106, 733);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(67, 15);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"打开百度";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &flash::linkLabel1_LinkClicked);
			// 
			// flash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1357, 780);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->axShockwaveFlash1);
			this->Name = L"flash";
			this->Text = L"flash";
			this->Load += gcnew System::EventHandler(this, &flash::flash_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axShockwaveFlash1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flash_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		System::Diagnostics::Process::Start("explorer.exe", "http://www.baidu.com");
	}
	};
}

#pragma once
extern bool 实验9实验方法2Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验9实验方法2 摘要
	/// </summary>
	public ref class 实验9实验方法2 : public System::Windows::Forms::Form
	{
	public:
		实验9实验方法2(void)
		{
			InitializeComponent();
			实验9实验方法2Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验9实验方法2()
		{
			实验9实验方法2Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验9实验方法2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(994, 889);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1030, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(645, 50);
			this->label4->TabIndex = 9;
			this->label4->Text = L"（2）调节时间继电器，使延时时间为5秒。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(1030, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(746, 81);
			this->label3->TabIndex = 8;
			this->label3->Text = L"（1）启动控制屏，合上开关Q1，接通 380V三相交流电源。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(1030, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 75);
			this->label2->TabIndex = 7;
			this->label2->Text = L"开启交流电源，将三相输出线电压调至380V，按下“关”按钮，按图8－20接线。经检查无误后，按以下步骤通电操作，";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1030, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 62);
			this->label1->TabIndex = 6;
			this->label1->Text = L"2、异步电动机能耗制动控制线路：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1030, 320);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(645, 50);
			this->label5->TabIndex = 10;
			this->label5->Text = L"（3）按下SB1，使电动机M起动运转。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1030, 398);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(645, 95);
			this->label6->TabIndex = 11;
			this->label6->Text = L"（4）待电动机运转稳定后，按下SB2，观察并记录电动机M从按下SB1起至电动机停止旋转的能耗制动时间。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验9实验方法2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1869, 911);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验9实验方法2";
			this->Text = L"实验9实验方法2";
			this->Load += gcnew System::EventHandler(this, &实验9实验方法2::实验9实验方法2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验9实验方法2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

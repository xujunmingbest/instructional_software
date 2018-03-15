#pragma once
extern bool 实验1实验方法3Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验1实验方法3 摘要
	/// </summary>
	public ref class 实验1实验方法3 : public System::Windows::Forms::Form
	{
	public:
		实验1实验方法3(void)
		{
			InitializeComponent();
			实验1实验方法3Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验方法3()
		{
			实验1实验方法3Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  labelkm1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelsb22;
	private: System::Windows::Forms::Label^  labelsb21;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验方法3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelkm1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelsb22 = (gcnew System::Windows::Forms::Label());
			this->labelsb21 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(418, 504);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(460, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 62);
			this->label1->TabIndex = 2;
			this->label1->Text = L"（1）合上Q1接通三相交流380V电源；";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(460, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 62);
			this->label2->TabIndex = 3;
			this->label2->Text = L"（2）按下起动按钮SB2，松手后观察电机M是否继续运转；";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(460, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(746, 81);
			this->label3->TabIndex = 4;
			this->label3->Text = L"（3）运转半分钟后按下SB3，然后松开，电机M是否停转；连续按下和松开SB3，观察此时属于什么控制状态。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(460, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(645, 50);
			this->label4->TabIndex = 5;
			this->label4->Text = L"（4）按下停止按钮SB1，松手后观察M是否停转。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelkm1
			// 
			this->labelkm1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelkm1->Location = System::Drawing::Point(45, 231);
			this->labelkm1->Name = L"labelkm1";
			this->labelkm1->Size = System::Drawing::Size(19, 10);
			this->labelkm1->TabIndex = 8;
			this->labelkm1->Text = L"label5";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(106, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 10);
			this->label7->TabIndex = 9;
			this->label7->Text = L"label5";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(156, 231);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 10);
			this->label8->TabIndex = 10;
			this->label8->Text = L"label5";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(45, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 10);
			this->label9->TabIndex = 11;
			this->label9->Text = L"label5";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(106, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 10);
			this->label10->TabIndex = 12;
			this->label10->Text = L"label5";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(156, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 10);
			this->label6->TabIndex = 13;
			this->label6->Text = L"label5";
			// 
			// labelsb22
			// 
			this->labelsb22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelsb22->Location = System::Drawing::Point(308, 244);
			this->labelsb22->Name = L"labelsb22";
			this->labelsb22->Size = System::Drawing::Size(10, 21);
			this->labelsb22->TabIndex = 17;
			this->labelsb22->Text = L"label12";
			// 
			// labelsb21
			// 
			this->labelsb21->BackColor = System::Drawing::Color::White;
			this->labelsb21->Location = System::Drawing::Point(301, 244);
			this->labelsb21->Name = L"labelsb21";
			this->labelsb21->Size = System::Drawing::Size(19, 21);
			this->labelsb21->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(297, 187);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 10);
			this->label11->TabIndex = 19;
			this->label11->Text = L"label12";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(303, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 21);
			this->label12->TabIndex = 18;
			// 
			// 实验1实验方法3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1266, 749);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->labelsb22);
			this->Controls->Add(this->labelsb21);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->labelkm1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验1实验方法3";
			this->Text = L"3、三相异步电动机既可点动又可自锁控制线路：";
			this->Load += gcnew System::EventHandler(this, &实验1实验方法3::实验1实验方法3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验1实验方法3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

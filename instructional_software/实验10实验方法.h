#pragma once
extern bool 实验10实验方法Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验10实验方法 摘要
	/// </summary>
	public ref class 实验10实验方法 : public System::Windows::Forms::Form
	{
	public:
		实验10实验方法(void)
		{
			InitializeComponent();
			实验10实验方法Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验10实验方法()
		{
			实验10实验方法Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验10实验方法::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(915, 775);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(235, 803);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(373, 42);
			this->label3->TabIndex = 6;
			this->label3->Text = L"图8-21  C620车床的电气控制线路";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(960, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 107);
			this->label1->TabIndex = 7;
			this->label1->Text = L"1、调节三相输出线电压380V，按下“关”按钮，按图8－21接线。接线完毕后，检查无误后，按以下步骤操作：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(943, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(500, 107);
			this->label2->TabIndex = 8;
			this->label2->Text = L"（1）启动控制屏，合上开关Q1，接通 380V交流电源。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(943, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(500, 87);
			this->label4->TabIndex = 9;
			this->label4->Text = L"（2）按下SB1按钮，KM1通电吸合，主轴电动机M1起动运转。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(943, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(500, 84);
			this->label5->TabIndex = 10;
			this->label5->Text = L"（3）合上开关Q2，冷却泵电动机M2起动运转。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(943, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(500, 84);
			this->label6->TabIndex = 11;
			this->label6->Text = L"（4）按下SB2按钮，KM1线圈断电，主轴电动机M1断电停止运转，同时冷却泵电动机M2也停止运转。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(943, 495);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(500, 84);
			this->label7->TabIndex = 12;
			this->label7->Text = L"（5）图中EL为机床工作灯，由开关Q3控制。";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验10实验方法
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1499, 868);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验10实验方法";
			this->Text = L"实验10实验方法";
			this->Load += gcnew System::EventHandler(this, &实验10实验方法::实验10实验方法_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验10实验方法_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

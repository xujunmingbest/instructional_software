#pragma once
extern bool 实验1实验方法1Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验1实验方法1 摘要
	/// </summary>
	public ref class 实验1实验方法1 : public System::Windows::Forms::Form
	{
	public:
		实验1实验方法1(void)
		{
			InitializeComponent();
			实验1实验方法1Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验方法1()
		{
			实验1实验方法1Status = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验方法1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(428, 520);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(484, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 208);
			this->label1->TabIndex = 1;
			this->label1->Text = L"按图8-1接线 。接线时，先接主电路，它是从380V三相交流电源的输出端 U、V、W开始，经三刀开关 Q1、熔断器FU1、FU2、FU3、接触器KM1主触点到电动"
				L"机M的三个线端A、B、C的电路，用导线按顺序串联起来，有三路。主电路经检查无误后，再接控制电路，从熔断器FU4插孔V开始，经按钮SB1常开、接触器KM1线圈到插"
				L"孔W 。线接好经指导老师检查无误后，按下列步骤进行实验：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(484, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(402, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"（1）按下控制屏上“开”按钮。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(487, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(455, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"（2）先合Q1，接通三相交流380V电源；";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(484, 362);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(662, 68);
			this->label4->TabIndex = 4;
			this->label4->Text = L"（3）按下启动按钮SB1，对电动机M进行点动操作，比较按下SB1和松开SB1时电动机 M的运转情况";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验1实验方法1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1333, 551);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验1实验方法1";
			this->Text = L"实验方法-三相异步电动机点动控制线路";
			this->Load += gcnew System::EventHandler(this, &实验1实验方法1::实验1实验方法1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验1实验方法1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

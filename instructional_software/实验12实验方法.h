#pragma once
extern bool 实验12实验方法Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验12实验方法 摘要
	/// </summary>
	public ref class 实验12实验方法 : public System::Windows::Forms::Form
	{
	public:
		实验12实验方法(void)
		{
			InitializeComponent();
			实验12实验方法Status = true;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验12实验方法()
		{
			实验12实验方法Status = false;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验12实验方法::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox1->Location = System::Drawing::Point(12, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1006, 798);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(261, 813);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 41);
			this->label1->TabIndex = 10;
			this->label1->Text = L"一、实验目的";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1024, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(614, 80);
			this->label2->TabIndex = 11;
			this->label2->Text = L"1、调节三相可调输出线电压380V，按下“关”按钮，按图8-23接线。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1024, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(588, 88);
			this->label3->TabIndex = 12;
			this->label3->Text = L"2、M1异步电动机装在导轨上，M2鼠笼电动机放在实验桌的台面上，分别模拟升降、移行电动机。";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1024, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(748, 126);
			this->label4->TabIndex = 13;
			this->label4->Text = L"3、线路连接完成，经指导教师检查无误后，方可按下列步骤进行通电实验。假定电动机M1提升为顺时针转向，电动机M2向前移行为顺时针转向，则按SB1及SB3应符合转向要"
				L"求，若不符合要求，应调整相序使电机转向符合顺时针的假定要求。";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1024, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(748, 118);
			this->label5->TabIndex = 14;
			this->label5->Text = L"4、按SB2及SB4、M1及M2的转问应符合逆时针转向要求，在电机M1运转的状态下，按ST1即对电机能耗制动，观察电机应很快停转，以模拟实际电葫芦的升降电动机停机"
				L"时，必须有制动磁铁（即抱闸）将其轴卡住，能使重物悬挂在空中。";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1024, 455);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(748, 180);
			this->label6->TabIndex = 15;
			this->label6->Text = L"5、再次操作各按钮，先按SB2，M1电机逆时针转向（下降），再按SB3，M2电机顺时针转向（向前），改为按SB4、M2电机逆时针转向（向后），松开各按钮，电机应停"
				L"止运转；按SB1，M1电机顺时针运转（提升），按10秒钟（模 拟电机己提升到最高位），此时按ST1（模拟提升到最高位碰撞限位开关ST1），电机应很快停止运转。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1024, 650);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(737, 92);
			this->label7->TabIndex = 16;
			this->label7->Text = L"6、为了在实际操作中保证安全，要求每次只按下一个按钮，以使重物升降时不作移行运行，或在移行运行时不使重物作升降运动。也可设想在电路中加联锁使操作更安全。";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 实验12实验方法
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1793, 886);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"实验12实验方法";
			this->Text = L"实验12实验方法";
			this->Load += gcnew System::EventHandler(this, &实验12实验方法::实验12实验方法_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验12实验方法_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

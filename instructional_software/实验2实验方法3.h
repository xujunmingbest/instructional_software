#pragma once
extern bool ʵ��2ʵ�鷽��3Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��2ʵ�鷽��3 ժҪ
	/// </summary>
	public ref class ʵ��2ʵ�鷽��3 : public System::Windows::Forms::Form
	{
	public:
		ʵ��2ʵ�鷽��3(void)
		{
			InitializeComponent();
			ʵ��2ʵ�鷽��3Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��2ʵ�鷽��3()
		{
			ʵ��2ʵ�鷽��3Status = false;
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// ʵ��2ʵ�鷽��3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 255);
			this->Name = L"ʵ��2ʵ�鷽��3";
			this->Text = L"ʵ��2ʵ�鷽��3";
			this->Load += gcnew System::EventHandler(this, &ʵ��2ʵ�鷽��3::ʵ��2ʵ�鷽��3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��2ʵ�鷽��3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

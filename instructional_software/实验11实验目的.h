#pragma once
extern bool ʵ��11ʵ��Ŀ��Status;
namespace instructional_software {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��11ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ʵ��11ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��11ʵ��Ŀ��(void)
		{
			InitializeComponent();
			ʵ��11ʵ��Ŀ��Status = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��11ʵ��Ŀ��()
		{
			ʵ��11ʵ��Ŀ��Status = false;
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
			// ʵ��11ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 255);
			this->Name = L"ʵ��11ʵ��Ŀ��";
			this->Text = L"ʵ��11ʵ��Ŀ��";
			this->Load += gcnew System::EventHandler(this, &ʵ��11ʵ��Ŀ��::ʵ��11ʵ��Ŀ��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��11ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

#include <windows.h>
#include <iostream>
#include <sapi.h>

#include "MainWnd.h"

using namespace std;
using namespace instructional_software;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

int main()
{
	String ^ a;
	//system(" \"C:\\Program Files (x86)\\�ʶ�Ů\\�ʶ�Ů.exe\" d=����ҽ������");
	//system(" \"C:\\Program Files (x86)\\�ʶ�Ů\\�ʶ�Ů.exe\" d=����ҽ������");
	Application::EnableVisualStyles();  //���ÿ��ӻ�����
	Application::Run(gcnew MainWnd()); //�����û�����ģ��



}
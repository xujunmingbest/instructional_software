#include <windows.h>
#include <iostream>
#include <sapi.h>

#include "������.h"


using namespace std;
using namespace instructional_software;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

int main()
{
	Application::EnableVisualStyles();  //���ÿ��ӻ�����
	Application::Run(gcnew MainWnd()); //�����û�����ģ��

}

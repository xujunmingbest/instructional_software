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
	//system(" \"C:\\Program Files (x86)\\朗读女\\朗读女.exe\" d=你好我叫徐军明");
	//system(" \"C:\\Program Files (x86)\\朗读女\\朗读女.exe\" d=你好我叫徐军明");
	Application::EnableVisualStyles();  //启用可视化界面
	Application::Run(gcnew MainWnd()); //启动用户登入模块



}
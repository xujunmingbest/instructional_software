#include <windows.h>
#include <iostream>
#include <sapi.h>

#include "主窗体.h"


using namespace std;
using namespace instructional_software;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

int main()
{
	Application::EnableVisualStyles();  //启用可视化界面
	Application::Run(gcnew MainWnd()); //启动用户登入模块

}

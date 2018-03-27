#include <windows.h>
#include <iostream>
#include <sapi.h>
#include "xml/xml.h"
#include "主窗体.h"


using namespace std;
using namespace instructional_software;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

int main()
{
/**********配置文件读取***********/
	readXmlConfigFile(configXml);
	g_voice.set_LangdunvPath(configXml.LangDuNvPath);
	g_voice.set_voice_engine(atoi(configXml.VoiceEngine.c_str()));

	Application::EnableVisualStyles();  //启用可视化界面
	Application::Run(gcnew MainWnd()); //启动用户登入模块
}

#include <windows.h>
#include <iostream>
#include <sapi.h>
#include "xml/xml.h"
#include "������.h"


using namespace std;
using namespace instructional_software;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

int main()
{
/**********�����ļ���ȡ***********/
	readXmlConfigFile(configXml);
	g_voice.set_LangdunvPath(configXml.LangDuNvPath);
	g_voice.set_voice_engine(atoi(configXml.VoiceEngine.c_str()));

	Application::EnableVisualStyles();  //���ÿ��ӻ�����
	Application::Run(gcnew MainWnd()); //�����û�����ģ��
}

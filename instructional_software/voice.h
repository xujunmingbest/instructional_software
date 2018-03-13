#pragma once
#include <string>
#include <iostream>
#include <sapi.h>


#include "source.h"
using namespace std;
using namespace instructional_software;


#pragma comment(lib,"ole32.lib")   //CoInitialize CoCreateInstance需要调用ole32.dll    
#pragma comment(lib,"sapi.lib")    //sapi.lib在SDK的lib目录,必需正确配置   

extern string LangdunvPath;


#define VOICE_ENGINE_LANGDUNV 0
#define VOICE_ENGINE_TTS 1

class voice;  //类的声明

class voice { //类的定义
private:
	int Voice_engine_selection = VOICE_ENGINE_LANGDUNV;
	string LangdunvPath;
	HRESULT hr;
	ISpVoice *pVoice;
public:
	voice();
	~voice();
	void set_voice_engine(int flag);
	void set_LangdunvPath(String ^path);
	void voice_speek(String^ in);
	void voice_speek(const string &in);
};

extern voice g_voice;
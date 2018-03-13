#pragma once
#include <string>
#include <iostream>
#include <sapi.h>


#include "source.h"
using namespace std;
using namespace instructional_software;


#pragma comment(lib,"ole32.lib")   //CoInitialize CoCreateInstance��Ҫ����ole32.dll    
#pragma comment(lib,"sapi.lib")    //sapi.lib��SDK��libĿ¼,������ȷ����   

extern string LangdunvPath;


#define VOICE_ENGINE_LANGDUNV 0
#define VOICE_ENGINE_TTS 1

class voice;  //�������

class voice { //��Ķ���
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
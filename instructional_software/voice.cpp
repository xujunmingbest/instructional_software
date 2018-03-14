#include "voice.h"


voice::voice() {
	pVoice = nullptr;

	if (FAILED(::CoInitialize(NULL)))
	{
		cout << "TTS���������ʼ��ʧ��" << endl;
		return;
	}
	hr = CoCreateInstance(CLSID_SpVoice, nullptr, CLSCTX_ALL /*CLSCTX_ALL*/, IID_ISpVoice, reinterpret_cast<void **>(&pVoice));
	if (SUCCEEDED(hr))
	{
		cout << "TTS���������ʼ���ɹ�" << endl;
	}
	else {
		cout << "TTS���������ʼ��ʧ��" << endl;
		pVoice = nullptr;
	}
	
	wchar_t *TTStest = multiByteToWideChar("����TTS��������");
	pVoice->Speak(TTStest, SPF_DEFAULT, nullptr);
	delete[] TTStest;
	return;
}

voice::~voice()
{
	if (pVoice != nullptr) {
		pVoice->Release();
		pVoice = nullptr;
	}
	::CoUninitialize();
}

void voice::set_voice_engine(int flag)
{
	Voice_engine_selection = flag;
}

void voice::set_LangdunvPath(String ^path)
{
	LangdunvPath = T_to_string(path, path->Length * 2);
	LangdunvPath.insert(0, "\"");
	LangdunvPath.insert(LangdunvPath.length(), "\" d=");
}

void voice::voice_speek(string &in)
{
	try {
		if (Voice_engine_selection != VOICE_ENGINE_LANGDUNV
			&& Voice_engine_selection != VOICE_ENGINE_TTS)
		{
			throw "��������ѡ�����";
		}
	}
	catch(string &e){
		cout << e << endl;
		return;
	}
	trim(in);
	if (Voice_engine_selection == VOICE_ENGINE_LANGDUNV) {
		system((LangdunvPath + in).c_str());
	}
	else if (Voice_engine_selection == VOICE_ENGINE_TTS)
	{
		wchar_t *content = multiByteToWideChar(in);
		pVoice->Speak(content, SPF_DEFAULT, nullptr);
		delete[] content;
	}
	return;
}

void voice::voice_speek(String^ in)
{
	voice_speek(T_to_string(in, in->Length * 2));
}

voice g_voice;
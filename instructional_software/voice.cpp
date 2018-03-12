#include "voice.h"


int Voice_engine_selection = VOICE_ENGINE_LANGDUNV;


string LangdunvPath;

void LangDuNvSpeek(String^ in) {
	string speek_string = T_to_string(in, in->Length*2);
	LangDuNvSpeek(speek_string);
}

void LangDuNvSpeek(const string &in) {
	if (Voice_engine_selection == VOICE_ENGINE_LANGDUNV)
	system((LangdunvPath + in).c_str());
	else if (Voice_engine_selection == VOICE_ENGINE_TTS){
		//³õÊ¼»¯ TTS c++ ÒýÇæ
	
	}
}

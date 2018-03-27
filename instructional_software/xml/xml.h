#pragma once
#include <stdio.h>  
#include "tinyxml.h"  
#include <iostream>  
#include <cstring>  
using namespace std;

struct ConfigXml {
	string LangDuNvPath;
	string VoiceEngine;
};


extern ConfigXml configXml;
bool writeXmlConfigFile(ConfigXml &configXml);
bool readXmlConfigFile(ConfigXml &configXml);
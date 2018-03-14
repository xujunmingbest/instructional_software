#pragma once
#include <string>
#include <iostream>
#include <windows.h>

#include "base.h"
using namespace std;
using namespace instructional_software;

string T_to_string(const String^in, int len);

wchar_t *multiByteToWideChar(const string& pKey);

void trim(string &s);


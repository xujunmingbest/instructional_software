#include "source.h"

string LangdunvPath;

string T_to_string(const String^in, int len)
{
	char *buff = new char[len + 1];
	snprintf(buff, len + 1, "%s", in);
	string temp = buff;
	delete[] buff;
	return temp;
}
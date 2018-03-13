#include "source.h"


string T_to_string(const String^in, int len)
{
	char *buff = new char[len + 1];
	memset(buff, 0x00, len + 1);
	snprintf(buff, len + 1, "%s", in);
	string temp = buff;
	delete[] buff;
	return temp;
}


wchar_t *multiByteToWideChar(const string& pKey)
{
	const char* pCStrKey = pKey.c_str();
	//第一次调用返回转换后的字符串长度，用于确认为wchar_t*开辟多大的内存空间
	int pSize = MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, NULL, 0);
	wchar_t *pWCStrKey = new wchar_t[pSize];
	//第二次调用将单字节字符串转换成双字节字符串
	MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, pWCStrKey, pSize);
	return pWCStrKey;
}
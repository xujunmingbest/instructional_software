#include "xml.h"

ConfigXml configXml;

//����xml�ļ�  
bool readXmlConfigFile(ConfigXml &configXml)
{
	TiXmlDocument mydoc("pz.xml");//xml�ĵ�����  
	bool loadOk = mydoc.LoadFile();//�����ĵ�  
	if (!loadOk)
	{
		cout << "could not load the test file.Error:" << mydoc.ErrorDesc() << endl;
		return false;
	}

	TiXmlElement *RootElement = mydoc.RootElement();  //��Ԫ��, Info  
	TiXmlElement *pEle = RootElement;

	//�����ý��  
	for (TiXmlElement *CldElement = pEle->FirstChildElement();//��һ����Ԫ��  
		CldElement != NULL;
		CldElement = CldElement->NextSiblingElement())//��һ���ֵ�Ԫ��  
	{
		// StuElement->Value() �ڵ�����  
		string zd(CldElement->Value());
		string value(CldElement->FirstChild()->Value());
		if (zd == "LangDuNvPath") {
			configXml.LangDuNvPath = value;
		}
		else if (zd == "VoiceEngine") {
			configXml.VoiceEngine = value;
		}
	}
	return true;
}


bool writeXmlConfigFile(ConfigXml &configXml) {

	TiXmlDocument *writeDoc = new TiXmlDocument; //xml�ĵ�ָ��  

												 //�ĵ���ʽ����  
	TiXmlDeclaration *decl = new TiXmlDeclaration("1.0", "gb2312", "yes");
	writeDoc->LinkEndChild(decl); //д���ĵ�  
	TiXmlElement *RootElement = new TiXmlElement("Info");//��Ԫ��  													
	writeDoc->LinkEndChild(RootElement);

	/******����ֶκ�ֵ******/
	TiXmlElement *pz1 = new TiXmlElement("LangDuNvPath");
	RootElement->LinkEndChild(pz1);//���ڵ�д���ĵ�  
	TiXmlText *pz1Text = new TiXmlText(configXml.LangDuNvPath.c_str());//Stu  //��������  
	pz1->LinkEndChild(pz1Text);

	TiXmlElement *pz2 = new TiXmlElement("VoiceEngine");
	RootElement->LinkEndChild(pz2);//���ڵ�д���ĵ�
	TiXmlText *pz2Text = new TiXmlText(configXml.VoiceEngine.c_str());//Stu  //��������  
	pz2->LinkEndChild(pz2Text);

	writeDoc->SaveFile("pz.xml");
	delete writeDoc;
	return true;
}


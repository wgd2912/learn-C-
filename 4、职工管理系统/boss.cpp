#include "boss.h"

//���캯��
boss::boss(int id, string name, string did, string jobcontent, string jobproperties)
{
	this->name = name;	//����
	this->id = id;		//ְ�����
	this->DeptId = did;	//���ű��
	this->jobcontent = jobcontent;//��������
	this->jobproperties = jobproperties;//��λ����
}

//��д����ʾ��Ϣ����
void boss::showmassage()
{
	cout << "ְ����ţ�" << this->id
		<< "\tְ��������" << this->name
		<< "\t��λ��" << this->getjobname()
		<< "\t��λְ��" << this->jobcontent;
}
string boss::getjobname()
{
	return "�ϰ�";
}

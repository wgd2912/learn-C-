#pragma once
#include <iostream>
using namespace std;

//����ְ��������
class worker
{
public:
	//�������麯��---��ʾ��Ϣ
	virtual void showmassage() = 0;
	//�������麯��---��ȡ��λ����
	virtual string getjobname() = 0;
public:
	string jobproperties;//��λ���ԣ��ϰ塢������ͨԱ��
	string name;		 //����
	string jobcontent;	 //��������
	string DeptId;		 //���ڲ�������
	int id;				 //Ա�����
	
};







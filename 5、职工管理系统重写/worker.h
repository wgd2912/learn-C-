#pragma once
#include <iostream>
using namespace std;

class worker
{
public:
	virtual void showmassage() = 0;//��ӡ�����Ϣ

public:
	string name;		//����
	int idnum;		    //���
	string jobtitle;	//ְλ����
	string jobcontent;	//��������
	string department;	//��������
};


class employee :public worker
{
	employee(string name, int idnun, string jobtitle, string jobcontent, string department);
	void showmassage();
};
class manager :public worker
{
	manager(string name, int idnun, string jobtitle, string jobcontent, string department);
	void showmassage();
};
class boss :public worker
{
	boss(string name, int idnun, string jobtitle, string jobcontent, string department);
	void showmassage();
};

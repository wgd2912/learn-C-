#pragma once
#include <iostream>
using namespace std;

class worker
{
public:
	virtual void showmassage() = 0;//打印相关信息

public:
	string name;		//姓名
	int idnum;		    //编号
	string jobtitle;	//职位名称
	string jobcontent;	//工作内容
	string department;	//所属部门
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

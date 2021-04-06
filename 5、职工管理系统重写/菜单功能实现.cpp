#include "菜单功能实现.h"

menufuncrealize::menufuncrealize()
{
	this->empnum = 0;
	this->emparr = NULL;
}

menufuncrealize::~menufuncrealize()
{
	if (this->emparr != NULL)
	{
		delete[]emparr;
		this->empnum = 0;
		this->emparr = NULL;
	}
}

void menufuncrealize::ShowMenu(void)
{
	cout << "**************************************" << endl;
	cout << "*************0、退出管理系统**********" << endl;
	cout << "*************1、添加职工信息**********" << endl;
	cout << "*************2、显示职工信息**********" << endl;
	cout << "*************3、删除职工信息**********" << endl;
	cout << "*************4、修改职工信息**********" << endl;
	cout << "*************5、查找职工信息**********" << endl;
	cout << "*************6、按照编号排序**********" << endl;
	cout << "*************7、清空职工信息**********" << endl;
	cout << "**************************************" << endl;
}
void menufuncrealize::exit_system(void)
{
	cout << "感谢您的使用！！！" << endl;
}
void menufuncrealize::add_employee(void)
{
	string name;		//姓名
	int idnum;		    //编号
	string jobtitle;	//职位名称
	string jobcontent;	//工作内容
	string department;	//所属部门

	worker* wk = new ;

	cout << "请输入姓名：";
	cin >> name;
	cout << "请输入编号：";
	cin >> idnum;
	cout << "请输入职位名称：";
	cin >> jobtitle;
	cout << "请输入工作内容：";
	cin >> jobcontent;
	cout << "请输入所属部门：";
	cin >> department;
	if (jobtitle == "普通员工")
	{

	}


}
void menufuncrealize::show_employee(void)
{
	cout << "暂无功能" << endl;
}
void menufuncrealize::del_employee(void)
{
	cout << "暂无功能" << endl;
}
void menufuncrealize::change_employee(void)
{
	cout << "暂无功能" << endl;
}
void menufuncrealize::seek_employee(void)
{
	cout << "暂无功能" << endl;
}
void menufuncrealize::sort_employee(void)
{
	cout << "暂无功能" << endl;
}
void menufuncrealize::clear_employee(void)
{
	cout << "暂无功能" << endl;
}


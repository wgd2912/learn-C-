#include "employee.h"

//构造函数
employee::employee(int id, string name, string did, string jobcontent, string jobproperties)
{
	this->name = name;	//姓名
	this->id = id;		//职工编号
	this->DeptId = did;	//部门编号
	this->jobcontent = jobcontent;//工作内容
	this->jobproperties = jobproperties;//岗位属性
}

//重写：显示信息函数
void employee::showmassage()
{
	cout << "职工编号：" << this->id 
		<< "\t职工姓名：" << this->name 
		<< "\t岗位" << this->getjobname() 
		<< "\t岗位职责" << this->jobcontent;
}
string employee::getjobname()
{
	return "普通员工";
}
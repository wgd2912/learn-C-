#pragma once
#include <iostream>
using namespace std;

//创建职工抽象类
class worker
{
public:
	//创建纯虚函数---显示信息
	virtual void showmassage() = 0;
	//创建纯虚函数---获取岗位名字
	virtual string getjobname() = 0;
public:
	string jobproperties;//岗位属性：老板、经理、普通员工
	string name;		 //名称
	string jobcontent;	 //工作内容
	string DeptId;		 //所在部门名称
	int id;				 //员工编号
	
};







#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class manager:public worker
{
public:
	//员工构造函数
	manager(int id, string name, string did, string jobcontent, string jobproperties);
	//显示信息
	void showmassage();
	//获取岗位名称
	string getjobname();
};




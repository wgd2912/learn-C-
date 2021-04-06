#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//菜单功能实现--包括添加删除更改等等等等操作
class menufuncrealize
{
public:
	menufuncrealize();
	~menufuncrealize();

	/*menufuncrealize();*/
	void ShowMenu(void);

	//辅助功能区域




	//菜单功能实现区域
	void exit_system(void);
	void add_employee(void);
	void show_employee(void);
	void del_employee(void);
	void change_employee(void);
	void seek_employee(void);
	void sort_employee(void);
	void clear_employee(void);


public:
	int empnum;//员工数量
	worker** emparr;//存放员工信息的二维数组
};




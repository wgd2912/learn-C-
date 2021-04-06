#include <iostream>
using namespace std;
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "worker.h"


class workspace
{
public:
	workspace();
	~workspace();

	void Menu_Display();
	

	int getempnum();
	void initemparr();
	void filesave();//保存文件

	int seekemp(int id);

	//菜单功能区
	void exitsystem();		//退出系统
	void addemp();			//添加职工
	void display_emp_info();
	void deleteemp();
	void modificatemp();
	void seekempinfo();
	void sorkempid();
	void deleteempfile();



public:
	//初始化员工的数量
	int empnum;
	//存放员工信息的二级指针，存放的是职工（worker*）地址
	worker** emparr;
};


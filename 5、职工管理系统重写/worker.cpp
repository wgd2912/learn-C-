#include "worker.h"


employee::employee(string name, int idnun, string jobtitle, string jobcontent, string department)
{
	this->name = name;				//姓名
	this->idnum = idnum;			//编号
	this->jobtitle = jobtitle;		//职位名称
	this->jobcontent = jobcontent;	//工作内容
	this->department = department;	//所属部门	
}
void employee::showmassage()
{
	cout << this->name << "\t"
		<< this->idnum << "\t"
		<< this->jobtitle << "\t"
		<< this->jobcontent << "\t"
		<< this->department << "\t"
		<< endl;
}
manager::manager(string name, int idnun, string jobtitle, string jobcontent, string department)
{
	this->name = name;				//姓名
	this->idnum = idnum;			//编号
	this->jobtitle = jobtitle;		//职位名称
	this->jobcontent = jobcontent;	//工作内容
	this->department = department;	//所属部门	
}
void manager::showmassage()
{
	cout << this->name << "\t"
		<< this->idnum << "\t"
		<< this->jobtitle << "\t"
		<< this->jobcontent << "\t"
		<< this->department << "\t"
		<< endl;
}
boss::boss(string name, int idnun, string jobtitle, string jobcontent, string department)
{
	this->name = name;				//姓名
	this->idnum = idnum;			//编号
	this->jobtitle = jobtitle;		//职位名称
	this->jobcontent = jobcontent;	//工作内容
	this->department = department;	//所属部门	
}
void boss::showmassage()
{
	cout << this->name << "\t"
		<< this->idnum << "\t"
		<< this->jobtitle << "\t"
		<< this->jobcontent << "\t"
		<< this->department << "\t"
		<< endl;
}
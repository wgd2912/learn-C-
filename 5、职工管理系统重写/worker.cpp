#include "worker.h"


employee::employee(string name, int idnun, string jobtitle, string jobcontent, string department)
{
	this->name = name;				//����
	this->idnum = idnum;			//���
	this->jobtitle = jobtitle;		//ְλ����
	this->jobcontent = jobcontent;	//��������
	this->department = department;	//��������	
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
	this->name = name;				//����
	this->idnum = idnum;			//���
	this->jobtitle = jobtitle;		//ְλ����
	this->jobcontent = jobcontent;	//��������
	this->department = department;	//��������	
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
	this->name = name;				//����
	this->idnum = idnum;			//���
	this->jobtitle = jobtitle;		//ְλ����
	this->jobcontent = jobcontent;	//��������
	this->department = department;	//��������	
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
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
	void filesave();//�����ļ�

	int seekemp(int id);

	//�˵�������
	void exitsystem();		//�˳�ϵͳ
	void addemp();			//���ְ��
	void display_emp_info();
	void deleteemp();
	void modificatemp();
	void seekempinfo();
	void sorkempid();
	void deleteempfile();



public:
	//��ʼ��Ա��������
	int empnum;
	//���Ա����Ϣ�Ķ���ָ�룬��ŵ���ְ����worker*����ַ
	worker** emparr;
};


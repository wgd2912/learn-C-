#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//�˵�����ʵ��--�������ɾ�����ĵȵȵȵȲ���
class menufuncrealize
{
public:
	menufuncrealize();
	~menufuncrealize();

	/*menufuncrealize();*/
	void ShowMenu(void);

	//������������




	//�˵�����ʵ������
	void exit_system(void);
	void add_employee(void);
	void show_employee(void);
	void del_employee(void);
	void change_employee(void);
	void seek_employee(void);
	void sort_employee(void);
	void clear_employee(void);


public:
	int empnum;//Ա������
	worker** emparr;//���Ա����Ϣ�Ķ�ά����
};




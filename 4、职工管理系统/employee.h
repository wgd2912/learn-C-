#pragma once

#include <iostream>
using namespace std;
#include "worker.h"


class employee :public worker
{
public:
	//Ա�����캯��
	employee(int id, string name, string did, string jobcontent, string jobproperties);
	//��ʾ��Ϣ
	void showmassage();
	//��ȡ��λ����
	string getjobname();
};

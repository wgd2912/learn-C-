#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class boss :public worker
{
public:
	//Ա�����캯��
	boss(int id, string name, string did, string jobcontent, string jobproperties);
	//��ʾ��Ϣ
	void showmassage();
	//��ȡ��λ����
	string getjobname();
};
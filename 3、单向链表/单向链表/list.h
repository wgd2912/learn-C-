#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;

//��Ϣ��
struct INFO
{
	string name;
	int age;
};

//������
struct LIST
{
	INFO info;
	struct LIST* next;
};




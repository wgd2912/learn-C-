#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;

//信息区
struct INFO
{
	string name;
	int age;
};

//链表部分
struct LIST
{
	INFO info;
	struct LIST* next;
};




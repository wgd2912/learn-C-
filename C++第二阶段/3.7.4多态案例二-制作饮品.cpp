#include <iostream>

using namespace std;

//制作流程
class makingprocess
{
public:
	//烧水
	virtual void boil() = 0;
	//冲泡咖啡
	virtual void brew() = 0;
	//倒入杯中
	virtual void pour() = 0;
	//加入辅料
	virtual void addaccessories() = 0;
	
	void allprocess()
	{
		boil();
		brew();
		pour();
		addaccessories();
	}	
};
class makecoffee : public makingprocess
{
public:
	void boil()
	{
		cout << "烧水" << endl;
	}
	void brew()
	{
		cout << "冲泡" << endl;
	}
	void pour()
	{
		cout << "倒入" << endl;
	}
	void addaccessories()
	{
		cout << "加入牛奶" << endl;
	}
};
class maketea : public makingprocess
{
public:
	void boil()
	{
		cout << "烧水" << endl;
	}
	void brew()
	{
		cout << "冲泡" << endl;
	}
	void pour()
	{
		cout << "倒入" << endl;
	}
	void addaccessories()
	{
		cout << "加入柠檬" << endl;
	}
};

void makingdrink(void)
{
	makingprocess* drink = new makecoffee;
	drink->allprocess();
	delete drink;
	cout << "-----------------------------" << endl;
	drink = new maketea;
	drink->allprocess();
	delete drink;
}
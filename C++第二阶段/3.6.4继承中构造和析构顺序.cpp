#include <iostream>
using namespace std;

class base1
{
public:
	base1()
	{
		cout << "父类base1---无参构造函数" << endl;
	}
	~base1()
	{
		cout << "父类base1---无参析构函数" << endl;
	}
};

class son4 :public base1
{
public:
	son4()
	{
		cout << "子类son4---无参构造函数" << endl;
	}
	~son4()
	{
		cout << "子类son4---无参析构函数" << endl;
	}
	
};

void inherit_order(void)
{
	son4 s1;
}

#include <iostream>
using namespace std;

/*
-函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
-函数对象超出普通函数的概念，函数对象可以有自己的状态
-函数对象可以作为参数传递
*/

class myprintf
{
public:
	myprintf()
	{
		count = 0;
	}

	int operator()(int a, int b)
	{
		return a + b;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}

public:
	int count;
};

void test03func(myprintf& mp, string ddd)
{
	mp(ddd);
}

void func_obj(void)
{
	myprintf mp1;
	cout << mp1(3, 5) << endl;

	mp1("4656565");
	mp1("4df6565");
	mp1("4355465");
	mp1("46dfhfg");
	test03func(mp1, "65656");
	cout << "调用次数是：" << mp1.count << endl;



}





#include <iostream>

using namespace std;


class base3
{
public:
	base3()
	{
		cout << "父类base3---无参构造函数" << endl;
		m_a = 438975754390;
		m_b = 0;
	}
	void func()
	{
		cout << "父类base3---func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类base3---func(int a)函数调用" << endl;
		
	}
public:
	int m_a;
	int m_b;
};

class son6: public base3
{
public:
	son6()
	{
		cout << "子类son6---无参构造函数" << endl;
		m_a = 100;
		m_b = 46456l;
	}

	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数 
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	void func()
	{
		cout << "子类son6---func()函数调用" << endl;
	}
public:
	int m_a;
	int m_b;
};

void inherit_samename(void)
{
	son6 s;
	cout << "子类son6的m_a：" << s.m_a << endl;
	cout << "父类base3的m_a：" << s.base3::m_a << endl;

	s.func();
	s.base3::func();
	s.base3::func(4545);
}

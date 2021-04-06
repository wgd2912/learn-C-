#include <iostream>

using namespace std;


class base4
{
public:
	base4()
	{
		cout << "父类base4---无参构造函数" << endl;
		/*m_a = 454390;
		m_b = 0;*/
	}
	static void func()
	{
		cout << "父类base4---func()函数调用" << endl;
	}
	static void func(int a)
	{
		cout << "父类base4---func(int a)函数调用" << endl;
	}
public:
	static int m_a;
	static int m_b;
};
int base4::m_a = 34;
int base4::m_b = 89;

class son7 : public base4
{
public:
	son7()
	{
		cout << "子类son7---无参构造函数" << endl;
		/*m_a = 100;
		m_b = 46456l;*/
	}

	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数 
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	static void func()
	{
		cout << "子类son7---func()函数调用" << endl;
	}
public:
	static int m_a;
	static int m_b;
};

int son7::m_a = 5465;
int son7::m_b = 4354;

void inherit_samename_static(void)
{
	cout << "通过对象访问" << endl;
	son7 s;
	cout << "子类son7的m_a：" << s.m_a << endl;
	cout << "父类base4的m_a：" << s.base4::m_a << endl;
	s.func();
	s.base4::func();
	s.base4::func(4545);

	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
	cout << "通过类名访问" << endl;
	cout << "子类son7的m_a：" << son7::m_a << endl;
	cout << "父类base4的m_a：" << son7::base4::m_a << endl;
	son7::func();
	son7::base4::func();
	son7::base4::func(676);
}

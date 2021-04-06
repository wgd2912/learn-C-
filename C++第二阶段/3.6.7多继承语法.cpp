#include <iostream>

using namespace std;


class base5
{
public:
	base5()
	{
		cout << "父类base5---无参构造函数" << endl;
		m_a = 43897;
		m_b = 890;
	}
	~base5()
	{
		cout << "父类base5---无参析构函数" << endl;
	}
	void func()
	{
		cout << "父类base5---func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类base5---func(int a)函数调用" << endl;

	}
public:
	int m_a;
	int m_b;
};
class base6
{
public:
	base6()
	{
		cout << "父类base6---无参构造函数" << endl;
		m_a = 234;
		m_b = 56;
	}
	~base6()
	{
		cout << "父类base6---无参析构函数" << endl;
	}
	void func()
	{
		cout << "父类base6---func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类base6---func(int a)函数调用" << endl;

	}
public:
	int m_a;
	int m_b;
};

class son8 : public base5, public base6
{
public:
	son8()
	{
		cout << "子类son8---无参构造函数" << endl;
		m_a = 100;
		m_b = 56l;
	}
	~son8()
	{
		cout << "子类son8---无参析构函数" << endl;
	}
	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数 
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	void func()
	{
		cout << "子类son8---func()函数调用" << endl;
	}
public:
	int m_a;
	int m_b;
};

void inherit_samename_more(void)
{
	son8 s;
	cout << "子类son8的m_a：" << s.m_a << endl;
	cout << "父类base5的m_a：" << s.base5::m_a << endl;
	cout << "父类base6的m_a：" << s.base6::m_a << endl;
	s.func();
	s.base5::func();
	s.base5::func(4545);
	s.base6::func();
	s.base6::func(78);
}

#include <iostream>

using namespace std;

//动物
class animal
{
public:
	animal()
	{
		cout << "父类animal---无参构造函数" << endl;
		m_age = 345;
	}
	~animal()
	{
		cout << "父类animal---无参析构函数" << endl;
	}
	void func()
	{
		cout << "父类animal---func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类animal---func(int a)函数调用" << endl;

	}
public:
	int m_age;
};
//继承前加virtual关键字后，变为虚继承 
//此时公共的父类Animal称为虚基类
class tuo : virtual public animal
{
public:
	tuo()
	{
		cout << "父类tuo---无参构造函数" << endl;
		m_age = 234;
	}
	~tuo()
	{
		cout << "父类tuo---无参析构函数" << endl;
	}
	void func()
	{
		cout << "父类tuo---func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类tuo---func(int a)函数调用" << endl;

	}
public:
	int m_age;
};
//继承前加virtual关键字后，变为虚继承 
//此时公共的父类Animal称为虚基类
class sheep : virtual public animal
{
public:
	sheep()
	{
		cout << "父类sheep---无参构造函数" << endl;
		m_age = 234;
	}
	~sheep()
	{
		cout << "父类sheep---无参析构函数" << endl;
	}
	void func()
	{
		cout << "父类sheep---func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类sheep---func(int a)函数调用" << endl;

	}
public:
	int m_age;
};


class sheeptuo : public sheep, public tuo
{
public:
	sheeptuo()
	{
		cout << "子类sheeptuo---无参构造函数" << endl;
		m_age = 100;
	}
	~sheeptuo()
	{
		cout << "子类sheeptuo---无参析构函数" << endl;
	}
	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数 
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	void func()
	{
		cout << "子类sheeptuo---func()函数调用" << endl;
	}
public:
	int m_age;
};

void diamond_inheritance(void)
{
	sheeptuo s;

	s.m_age = 85;
	s.sheep::m_age = 13;
	s.tuo::m_age = 38;
	s.sheep::animal::m_age = 67;
	s.tuo::animal::m_age = 47;

	cout << "子类---s.m_age：" << s.m_age << endl;
	cout << "小父类---s.sheep::m_age：" << s.sheep::m_age << endl;
	cout << "小父类---s.tuo::m_age：" << s.tuo::m_age << endl;
	
	cout << "总父类--动物--s.sheep::animal::m_age：" << s.sheep::animal::m_age << endl;
	cout << "总父类--动物--s.tuo::animal::m_age：" << s.tuo::animal::m_age << endl;



	s.func();
	s.sheep::func();
	s.sheep::func(56);
	s.tuo::func();
	s.tuo::func(78);

	s.sheep::animal::func();
	s.sheep::animal::func(497);
	s.tuo::animal::func();
	s.tuo::animal::func(245);

}

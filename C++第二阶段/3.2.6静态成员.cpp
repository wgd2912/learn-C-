#include <iostream>
using namespace std;

//所有对象共享同一份数据
//在编译阶段分配内存
//类内声明，类外初始化

//静态变量
class staticmemvar
{
public:
	//类内声明，类外初始化
	//staticmemvar(int a) :m_a(a){}

	staticmemvar()
	{
		cout << "静态成员变量---staticmemvar---有参构造函数" << endl;
		cout << "静态成员变量---所有对象共享同一份数据" << endl;
		cout << "静态成员变量---也有权限之分" << endl;
	}
	~staticmemvar()
	{
		cout << "staticmemvar---有参析构函数" << endl;
	}

public:
	static int m_a;
private:
	static int m_b;
};
int staticmemvar::m_a = 100;
int staticmemvar::m_b = 189;

//1 程序共享一个函数
//2 静态成员函数只能访问静态成员变量
//静态函数
class staticmemfun
{
public:

	static void func()
	{
		m_a = 45;
//		m_b = 5355;
//		m_c = 10;
		cout << "公共权限----func调用" << endl;
		cout << "静态成员函数---所有对象共享一个函数" << endl;
		cout << "静态成员函数---也有权限之分" << endl;
		cout << "静态成员函数---只能访问静态成员变量" << endl;
	}
	~staticmemfun()
	{
		cout << "staticmemvar---有参析构函数" << endl;
	}

public:
	static int m_a;
	int m_c;
private:
	//静态成员函数也是有访问权限的 
	static void func2() 
	{ 
		cout << "私有权限----func2调用" << endl;
	}
	static int m_b;
};
int staticmemfun::m_a = 1089;
int staticmemfun::m_b = 199;

void staticfunc(void)
{
	staticmemvar p1;
	p1.m_a = 5632;
	cout << "p1.m_a = " << p1.m_a << endl;
//	cout << "p1.m_b = " << p1.m_b << endl;//无权限
	staticmemvar p2;
	p2.m_a = 896454;
	cout << "p1.m_a = " << p1.m_a << endl;//共享同一份数据
//	cout << "p1.m_b = " << p1.m_b << endl; //无权限 
	cout << "p2.m_a = " << p2.m_a << endl;
//	cout << "p2.m_b = " << p2.m_b << endl;//无权限

	//2、通过类名 
	cout << "m_a = " << staticmemvar::m_a << endl;
//	cout << "m_b = " << staticmemvar::m_b << endl;//无权限



	staticmemfun f1;
	f1.func();
	//通过类名
	staticmemfun::func();
//	staticmemfun::func2();//无权限
}
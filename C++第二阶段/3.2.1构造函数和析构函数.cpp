#include <iostream>

using namespace std;

class person1
{
public:
	person1()
	{
		cout << "person1的构造函数" << endl;
	}
	~person1()
	{
		cout << "person1的析构函数" << endl;
	}
};
void func1()
{
	person1 per1;
}

/*
构造函数的分类及调用
两种分类方式：
1、按参数分为： 有参构造和无参构造
2、按类型分为： 普通构造和拷贝构造
三种调用方式：
1、括号法
2、显示法
3、隐式转换法*/
class person2
{
public:
	//无惨构造
	person2()
	{
		cout << "person2无参构造函数" << endl;
	}
	person2(int age)
	{
		cout << "括号法----person2有参构造函数" << endl;
		m_age = age;
	}
	person2(const person2 &p)
	{
		cout << "person2拷贝构造函数" << endl;
		m_age = p.m_age;
	}
	~person2()
	{
		cout << "person2析构函数" << endl;
	}
public:
	int m_age;
};
void func2()
{

	person2 p1;//调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
	person2 p2(40); //2.1 括号法，常用
	person2 p3(p2);

	person2 p4 = person2(80);
	person2 p5 = person2(p4);

	//注意：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明 
	//Person p5(p4);
}




void construc_destruc(void)
{
	func1();
	func2();
}





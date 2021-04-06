#include <iostream>

using namespace std;


/*
C++中拷贝构造函数调用时机通常有三种情况
1、使用一个已经创建完毕的对象来初始化一个新对象
2、值传递的方式给函数参数传值
3、以值方式返回局部对象
*/

class person3
{
public:
	//无惨构造
	person3()
	{
		cout << "person3无参构造函数" << endl;
	}
	person3(int age)
	{
		cout << "括号法----person3有参构造函数    ";
		m_age = age;
		cout << "年龄 = " << m_age << endl;
	}
	person3(const person3& p)
	{
		cout << "person3拷贝构造函数  ";
		m_age = p.m_age;
		cout << "年龄 = " << m_age << endl;
	}
	~person3()
	{
		cout << "person3析构函数" << endl;
	}
public:
	int m_age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void func4()
{
	person3 man(100);
	person3 newman(man);	//调用拷贝构造函数
	person3 newman2 = man;	//调用拷贝构造函数
	cout << "1、使用一个已经创建完毕的对象来初始化一个新对象" << endl;
}

//2、值传递的方式给函数参数传值
void dowork(person3 p1)
{
	cout << "2、值传递的方式给函数参数传值" << endl;
}
void func5()
{
	person3 man(100);
	dowork(man);	
}

//3、以值方式返回局部对象
person3 dowork1()
{
	person3 p1(56);
	cout << "局部变量p1的地址是：" << (int*)&p1 << endl;
	return p1;
}
void func6()
{
	person3 man = dowork1();
	cout << "返回值---局部变量p1的地址是：" << (int*)&man << endl;
	cout << "3、以值方式返回局部对象--age = " << man.m_age << endl;
}


void copytime(void)
{
	func4();
	func5();
	func6(); 
}




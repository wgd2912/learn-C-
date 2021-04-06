#include <iostream>

using namespace std;

//作用：函数名可以相同，提高复用性
//函数重载满足条件：
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同 或者 个数不同 或者 顺序不同
//注意 : 函数的返回值不可以作为函数重载的条件

//函数重载需要函数都在同一个作用域下 
void func() 
{ 
	cout << "函数重载---func 的调用！" << endl; 
}
void func(int a) 
{ 
	cout << "函数重载---func (int a) 的调用！" << endl; 
}
void func(double a) 
{ 
	cout << "函数重载---func (double a)的调用！" << endl; 
}
void func(int a ,double b)
{
	cout << "函数重载---func (int a ,double b) 的调用！" << endl;
}
void func(double a, int b) 
{ 
	cout << "函数重载---func (double a ,int b)的调用！" << endl; 
}

//函数重载时遇到----引用
void func1(int& a) 
{ 
	cout << "函数重载---引用---func1 (int &a) 调用 " << endl; 
}
void func1(const int& a)
{
	cout << "函数重载---引用---func1 (const int &a) 调用 " << endl;
}



//函数重载
void func_overload(void)
{

	func(); 
	func(10); 
	func(3.14); 
	func(10, 3.14); 
	func(3.14, 10);

	int a = 10;
	func1(a); //调用无const 
	func1(10);//调用有const
}


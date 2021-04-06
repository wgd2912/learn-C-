#include <iostream>

using namespace std;

/*
在C++中，函数的形参列表中的形参是可以有默认值的
语法： 返回值类型 函数名 （参数= 默认值）{}
*/

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值 
int func1(int a, int b = 2, int c = 56)
{
	return a + b + c;
}

//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a, int b, int c = 56, int d = 10);
int func2(int a, int b, int c, int d)
{
	return a + b + c + d;
}

//函数占位参数
//C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法： 返回值类型 函数名(数据类型) {}
void func3(int a, int) 
{ 
	cout << "函数占位功能栗子：" << "占位参数必须填补" << endl; 
}


void func_default_para(void)
{
	int a = 54;
	int b = 10;
	//func1和func2函数参数可以补齐、也可以只写变量部分

	//func1只写变量部分
	cout << "函数默认参数-----" << func1(a) << endl;
	//func2全部补全-默认参数部分也是可以进行更改的
	//声明是int func2(int a, int b, int c = 56, int d = 10)
	//默认参数C和D可以写成50和90
	cout << "函数默认参数-----" << func2(a,b,50,90) << endl;

	
	func3(10, 10); //占位参数必须填补
 }



#include <iostream>
using namespace std;

/*
1. 如果函数模板和普通函数都可以实现，优先调用普通函数
2. 可以通过空模板参数列表来强制调用函数模板
3. 函数模板也可以发生重载
4. 如果函数模板可以产生更好的匹配,优先调用函数模板
*/
//普通函数
int func1(int &a,int &b)
{
	cout << "普通函数func1--调用" << endl;
	return a + b;
}
//函数模板
template <typename T>
T func1(T& a, T& b)
{
	cout << "函数模板func2--调用" << endl;
	return a + b;
}
template <typename T>
T func1(T& a, T& b, T& c)
{
	cout << "重载函数模板func2--调用" << endl;
	return a + b + c;
}
void Callrules(void)
{
	int a = 89;
	int b = 11;
	int c = 50;
	//普通函数
	cout << "func1 = " << func1(a, b) << endl;

	//函数模板--可以通过空模板参数列表来强制调用函数模板
	cout << "func1 = " << func1<>(a, b) << endl;

	//调用重载的函数模板
	cout << "func1 = " << func1<>(a, b, c) << endl;
}


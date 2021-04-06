#include <iostream>
using namespace std;

class function1
{
public:
	void operator()(string massage)//也可以发生重载--参数不一样即可
	{
		cout << massage << endl;
	}
	int operator()(int a,int b)
	{
		return (a + b);
	}
};

void Func(string massage)
{
	cout << massage << endl;
}

void func_operator(void)
{
	function1 f1;
	f1("函数调用运算符重载--大家好！我叫王二毛");
	Func("函数调用--大家好！我叫王三毛");
	cout << f1(34, 56) << endl;

	//匿名对象调用
	cout << function1()(69, 31) << endl;
}

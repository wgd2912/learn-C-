#include <iostream>


using namespace std;

void constpare(const int& ref)
{
	cout << "常量引用--函数参数引用参量" << "ref = " << ref << endl;
}

//常量引用
void quote_const(void)
{
	//int& a = 100;//错误的原因是没有进行添加const标识符
	const int& a = 100;

	//加入const之后就不能再次修改常量的值
	//a = 555;
	constpare(a);
}

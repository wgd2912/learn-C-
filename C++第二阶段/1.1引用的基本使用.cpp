#include <iostream>

using namespace std;
//作用： 给变量起别名
//语法： 数据类型& 别名 = 原名
//注意：
//引用必须初始化
//引用在初始化后，不可以改变

void quote(void)
{
	cout << "当前区域是“引用”部分-----start" << endl;
	int a = 100;
	int& b = a;
	b = 10000;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}



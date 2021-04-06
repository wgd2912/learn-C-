#include <iostream>
using namespace std;


/*纯虚函数的写法：virtual 数据类型 函数名 = 0;*/
class base7
{
public:
	//纯虚函数 
	//类中只要有一个纯虚函数就称为抽象类 
	//抽象类无法实例化对象 
	//子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void fun() = 0;
public:
	int num;
};

class son9 :public base7
{
public:
	void fun()
	{
		cout << "纯虚函数--抽象类--bsae7--son9--func函数调用" << endl;
	}
};
void Purevirtual_func(void)
{
	base7*s = NULL;
	//base = new Base; // 错误，抽象类无法实例化对象
	s = new son9;
	s->fun();
	delete s;
}
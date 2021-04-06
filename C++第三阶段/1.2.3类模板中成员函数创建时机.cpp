#include <iostream>
using namespace std;

class person03
{
public:
	person03()
	{
		cout << "person03---无参构造函数" << endl;
	}
	void show03()
	{
		cout << "person03---show03函数调用" << endl;
	}
};
class person04
{
public:
	person04()
	{
		cout << "person04---无参构造函数" << endl;
	}
	void show04()
	{
		cout << "person04---show04函数调用" << endl;
	}
};

template <class T>
class person05
{
public:
	person05()
	{
		cout << "person05---无参构造函数" << endl;
	}

	void func1()
	{
		name.show03();
	}
	void func2()
	{
		name.show04();
	}
public:
	T name;
};

////2、类模板在模板参数列表中可以有默认参数
void classtemplate02(void)
{
	cout << 89898989 << endl;
	// 指定TypeName 为string类型，TypeAge 为 int类型
	person05 <person03> p1;//类模板中的模板参数列表 可以指定默认参数	
	cout << 8989898888989899 << endl;
	p1.func1();
	//p1.func2();
}



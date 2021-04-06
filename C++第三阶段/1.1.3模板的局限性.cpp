#include <iostream>
using namespace std;

template <class T>
bool func01(T a, T b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

class person
{
public:
	person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
public:
	string name;
	int age;
};
/*
在上述代码中，如果T的数据类型传入的是像Person这样的自定义数据类型，也无法正常运行
因此C++为了解决这种问题，提供模板的重载，可以为这些特定的类型提供具体化的模板
*/

//具体化，显示具体化的原型和定意思以template<>开头，并通过名称来指出类型 
//具体化优先于常规模板
template<> bool func01(person p1, person p2)
{
	if (p1.name == p2.name && p1.age == p2.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void boundedness(void)
{
	int a = 45;
	int b = 96;
	person p1("王二毛", 45);
	person p2("王二毛", 45);

	bool ret;
	ret = func01(a, b);
	if (ret)
		cout << "a == b" << endl;
	else
		cout << "a != b" << endl;

	ret = func01(p1, p2);
	if (ret)
		cout << "p1 == p2" << endl;
	else
		cout << "p1 != p2" << endl;
}
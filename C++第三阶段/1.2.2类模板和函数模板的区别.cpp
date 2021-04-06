#include <iostream>
using namespace std;

template <class Typename, class Typeage = int>
class person02
{
public:
	person02(Typename name, Typeage age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout << "姓名：" << name << endl;
		cout << "年龄：" << age << endl;
	}
public:
	Typename name;
	Typeage age;
};

////2、类模板在模板参数列表中可以有默认参数
void classtemplate01(void)
{
	// 指定TypeName 为string类型，TypeAge 为 int类型
	person02 <string> p1("小壮", 999);//类模板中的模板参数列表 可以指定默认参数		
	p1.show();
}


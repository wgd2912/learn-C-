#include <iostream>
using namespace std;

template <typename Typename, typename Typeage>
class person01
{
public:
	person01(Typename name,Typeage age)
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

void classtemplate(void)
{
	// 指定TypeName 为string类型，TypeAge 为 int类型
	person01<string, int>p1("大壮",52);
	p1.show();
}


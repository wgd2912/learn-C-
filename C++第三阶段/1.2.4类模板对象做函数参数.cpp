#include "iostream"
using namespace std;

//3种方式
//1：指定传入类型---直接显示对象的数据类型
//2：参数模板化-----将对象的参数变为模板进行传递
//3：整个类模板化---将这个对象类型模板化进行传递

template <class Typename,class Typeage>
class person06
{
public:
	person06(Typename name,Typeage age)
	{
		this->name = name;
		this->age = age;
	}

	void showmassage()
	{
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
	}

public:
	Typename name;
	Typeage age;
};

//指定传入类型
void func1_person06(person06<string, int>& p)
{
	p.showmassage();
}

//参数模板化
template <class T1,class T2>
void func2_person06(person06<T1, T2>& p)
{
	p.showmassage();
	cout << "T1的类型为： " << typeid(T1).name() << endl;
	cout << "T2的类型为： " << typeid(T2).name() << endl;
}

//整个类模板化
template <class T>
void func3_person06(T & p)
{
	p.showmassage();
	cout << "T的类型为： " << typeid(T).name() << endl;
}

void classmakefuncpara(void)
{
	person06 <string, int>p1("王一毛", 20);
	person06 <string, int>p2("王二毛", 30);
	person06 <string, int>p3("王三毛", 40);

	func1_person06(p1);
	func2_person06(p2);
	func3_person06(p3);
}
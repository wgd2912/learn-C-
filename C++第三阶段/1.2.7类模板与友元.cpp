#include "iostream"
using namespace std;


/*
两种方式：
1、类内实现---常用、比较简单、编译器可以直接识别
2、类外实现
*/

template <class T1, class T2>class person08;//全局函数配合友元 类外实现 - 先做类模板声明、函数声明、下方再做函数模板定义，再做友元

template <class T1,class T2>
void personfriend02(person08<T1, T2>& p)//类外全局函数做友元---要提前声明类
{
	cout << "类外实现友元--姓名：" << p.name << "--年龄：" << p.age << endl;
}



template <class T1,class T2>
class person08
{
	//类内实现
	friend void personfriend01(person08<T1, T2>& p)
	{
		cout << "类内实现友元--姓名：" << p.name << "--年龄：" << p.age << endl;
	}
	//类外实现
	friend void personfriend02<>(person08<T1, T2>& p);


public:
	person08(T1 name, T2 age);
	void showinfo();
private:
	T1 name;
	T2 age;
};

template <class T1,class T2>
person08<T1, T2>::person08(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template <class T1,class T2>
void person08<T1, T2>::showinfo()
{
	cout << "姓名：" << this->name << endl;
	cout << "年龄：" << this->age << endl;
}

void classandfriend(void)
{
	//类内友元--实现
	person08<string, int> p1("联合国", 89);
	p1.showinfo();
	personfriend01(p1);


	//类外友元--实现
	person08<string, int> p2("黑寡妇", 784);
	p2.showinfo();
	personfriend02(p2);
}


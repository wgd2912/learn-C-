#include "iostream"
using namespace std;


/*
当类模板碰到继承时，需要注意一下几点：
1、当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
2、如果不指定，编译器无法给子类分配内存
3、如果想灵活指定出父类中T的类型，子类也需变为类模板
*/

template <class T>
class base01
{
public:
	base01()
	{
		cout << "类模板与继承---父类--有参构造函数" << endl;
	/*	this->name = name;*/
	}
	void show()
	{
		cout << "父类--姓名：" << this->name << endl;
	}
public:
	T name;
};

//子类继承-要指定出父类中T的类型
class son1 :public base01<string>
{
public:
	son1(string name)
	{
		cout << "类模板与继承---子类son1--有参构造函数" << endl;
		this->name = name;
	}
	void show()
	{
		cout << "子类son1--姓名：" << this->name << endl;
	}
};

template <class T1,class T2>
class son2 :public base01<T2>
{
public:
	son2(int age)
	{
		cout << "类模板与继承---子类son2--有参构造函数" << endl;
		this->age = age;
	}
	void show()
	{
		cout << "子类son2--姓名：" << this->name << endl;
		cout << "子类son2--年龄：" << this->age << endl;
	}
public:
	T1 age;
};

void classandinherit(void)
{
	son1 s1("大锤");
//	s1.base01::name = "7787987";
	s1.base01::show();
	s1.show();
	
	son2<int,string>s2(89);
	s2.name = "阿三";
	s2.base01<string>::name = "fsfsf";//访问父类模板的成员（函数或者变量），需要加上<string>参数列表
	s2.base01<string>::show();
	s2.show();

}
#include <iostream>
using namespace std;

class objectthis
{
public:
	objectthis(int a)
	{
		cout << "objectthis---有参析构函数" << endl;
		ma = a;
	}
	//非静态成员变量占对象空间 
	int ma;
	//静态成员变量不占对象空间 
	static int mb;
	//函数也不占对象空间，所有函数共享一个函数实例 
	void func()
	{
		cout << "mA:" << this->ma << endl;
	}
	//静态成员函数也不占对象空间 
	static void sfunc()
	{
	}
};

class person7
{
public:
	person7(int age)
	{
		cout << "this--person7--有参构造函数" << endl;
		this->age = age;
	}
	person7 &personaddperson(person7 p)
	{
		this->age += p.age;
		//返回自身地址
		return *this;
	}
public:
	int age;
};

class person8
{
public:
	int age;

public:
	void show1()
	{
		cout << "show1" << endl;
	}
	void show2()
	{
		if (this == NULL)//如果没有添加判断，就会报错
			return;
		cout << "age = " << age << endl;
	}
};

class person9
{
public:
	int ma;
	mutable int mb;
public:
	person9()
	{
		cout << "person9--无参构造函数" << endl;
		ma = 0;
		mb = 0;
	}
	void show1() const {
		//ma = 100;//ma在定义时没有使用mutable关键字，常函数不能修改成员的属性
		//this = NULL;//
		mb = 345;//mb在定义时使用了mutable关键字，在常函数中是可以进行修改的
		cout << "show1常函数 的 ma = " << this->ma << endl;
		cout << "show1常函数 的 mb = " << this->mb << endl;
	}
	void show2(){
		ma = 5547;
		mb = 67679;
		cout << "show2函数 的 ma = " << this->ma << endl;
		cout << "show2函数 的 mb = " << this->mb << endl;
	}
};

void objeck_this(void)
{
	objectthis p(6);
	cout << sizeof(objectthis) << endl;

	person7 p1(45);
	cout << "p1.age = " << p1.age << endl;
	person7 p2(78);
	p2.personaddperson(p1).personaddperson(p1).personaddperson(p1);
	cout << "p2.age = " << p2.age << endl;

	person8* p3 = NULL;
	p3->show1();
	p3->show2();

	const person9 p4;//常对象
	person9 p5;//常对象
	cout << "person9.ma = " << p4.ma << endl;
	cout << "person9.ma = " << p4.mb << endl;
	//p4.ma = 2245;//常对象不能修改成员变量的值,但是可以访问
	p4.mb = 5657;////但是常对象可以修改mutable修饰成员变量
	//常对象访问成员函数
	
	//p4.show2();//常对象只能调用常函数
	p5.show2();
	p4.show1();
}
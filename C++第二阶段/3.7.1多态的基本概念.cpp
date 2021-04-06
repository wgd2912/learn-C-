#include <iostream>

using namespace std;


class animal1
{
public:
	//Speak函数就是虚函数 
	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。

	//如果没有使用virtual关键字，本节内容打印的就是：
	//动物在说话
	//动物在说话
	virtual void speak()
	{
		cout << "动物正在说话" << endl;
	}
};
class cat : public animal1
{
public: 
	void speak()
	{
		cout << "猫正在说话" << endl;
	}
};
class dog : public animal1
{
public:
	void speak()
	{
		cout << "狗正在说话" << endl;
	}
};
//我们希望传入什么对象，那么就调用什么对象的函数 
//如果函数地址在编译阶段就能确定，那么静态联编：父类中--speak--没有添加--virtual--就是静态的
//如果函数地址在运行阶段才能确定，就是动态联编：父类中--speak--添加--virtual--就是动态的
void dospeak(animal1 &a)
{
	a.speak();
}

void test(void)
{
	cout << "sizeof animal1 = " << sizeof(animal1) << endl;
}


//多态满足条件： 
//1、有继承关系 
//2、子类重写父类中的虚函数 
//多态使用： 
//父类指针或引用指向子类对象
void polymorphic_base(void)
{
	cat c;
	dospeak(c);

	dog d;
	dospeak(d);

	test();
}

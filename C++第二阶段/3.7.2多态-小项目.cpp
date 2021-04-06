#include <iostream>
using namespace std;

//父类

//多态实现 
//抽象计算器类
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
class calculator
{
public:
	virtual int result()
	{
		return 0;
	}
public:
	int num1;
	int num2;
};

class addcalculator : public calculator
{
public:
	int result()
	{
		return num1 + num2;
	}
};
class subcalculator : public calculator
{
public:
	int result()
	{
		return num1 - num2;
	}
};
class mulcalculator : public calculator
{
public:
	int result()
	{
		return num1 * num2;
	}
};

class divcalculator : public calculator
{
public:
	int result()
	{
		return num1 / num2;
	}
};

void polymorphic_project1(void)
{
	//加法
	calculator* abc = new addcalculator;
	abc->num1 = 34;
	abc->num2 = 78;
	cout << abc->num1 << "+" << abc->num2 << "=" << abc->result() << endl;
	delete abc;

	//减法
	abc = new subcalculator;
	abc->num1 = 34;
	abc->num2 = 78;
	cout << abc->num1 << "-" << abc->num2 << "=" << abc->result() << endl;
	delete abc;

	//乘法
	abc = new mulcalculator;
	abc->num1 = 24;
	abc->num2 = 5;
	cout << abc->num1 << "*" << abc->num2 << "=" << abc->result() << endl;
	delete abc;

	//除法
	abc = new divcalculator;
	abc->num1 = 100;
	abc->num2 = 23;
	cout << abc->num1 << "/" << abc->num2 << "=" << abc->result() << endl;
	delete abc;
}

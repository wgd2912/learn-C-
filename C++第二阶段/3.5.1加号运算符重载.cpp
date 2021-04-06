#include <iostream>
using namespace std;

class person10
{
public:
	person10()
	{
		cout << "perosn10--加号运算符重载--无参构造函数" << endl;
	}

	person10(int a, int b)
	{
		cout << "perosn10--加号运算符重载--有参构造函数" << endl;
		this->m_a = a;
		this->m_b = b;
	}


	/*person10 operator+(person10& p)
	{
		person10 temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}*/

public:
	int m_a;
	int m_b;
};

person10 operator+(person10 &p1, person10 &p2)
{
	person10 temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
person10 operator+(person10& p1, int num)
{
	person10 temp;
	temp.m_a = p1.m_a + num;
	temp.m_b = p1.m_b + num;
	return temp;
}


void add_operator_overloading(void)
{
	person10 p1(10, 56);
	person10 p2(20, 86);
	person10 p3 = p1 + p2;
	//成员函数加号运算符重载调用本质
	//person10 p3 = p1.operator+(p2);

	//全局函数加号运算符重载调用本质
	//person10 p4 = operator+(p1, p2);

	//运算符重载、也可以发生函数重载
	//person10 p4 = operator+(p1, 100);
	person10 p4 = p1 + 100;
	
	
	cout << "加号运算符重载--p3.m_a = " << p3.m_a << endl;
	cout << "加号运算符重载--p3.m_b = " << p3.m_b << endl;
	cout << "加号运算符重载--p4.m_a = " << p4.m_a << endl;
	cout << "加号运算符重载--p4.m_b = " << p4.m_b << endl;
}
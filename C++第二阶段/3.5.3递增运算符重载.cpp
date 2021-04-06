#include <iostream>
using namespace std;

class person12
{
	friend ostream& operator<<(ostream& out, person12 p);

public:
	person12()
	{
		cout << "person12--递增运算符重载--无参构造函数" << endl;
		m_num = 5;
	}

	//前缀递增++
	person12& operator++()
	{
		m_num++;
		return *this;
	}
	//后缀递增++
	person12 operator++(int)
	{
		//记录当前本身的值
		person12 temp = *this;
		//然后让本身的值加1
		m_num++;
		//但是返回的是以前的值，达到先返回后++；
		return temp;
	}
	
	//前缀递减--
	person12& operator--()
	{
		m_num--;
		return *this;
	}
	//后缀递增++
	person12 operator--(int)
	{
		//记录当前本身的值
		person12 temp = *this;
		//然后让本身的值减1
		m_num--;
		//但是返回的是以前的值，达到先返回后++
		return temp;
	}

private:
	int m_num;
};

//左移运算符
ostream& operator<<(ostream& out, person12 p)
{
	out << "p.m_num = " << p.m_num;
	return out;
}


void increase_operator_overloading(void)
{
	person12 p1;
	person12 p2;
	person12 p3;
	person12 p4;
	cout << "p1.m_num = " << ++p1 << endl;
	cout << "p1.m_num = " << p1 << endl;

	cout << "p2.m_num = " << p2++ << endl;
	cout << "p2.m_num = " << p2 << endl;

	cout << "p3.m_num = " << --p3 << endl;
	cout << "p3.m_num = " << p3 << endl;

	cout << "p4.m_num = " << p4-- << endl;
	cout << "p4.m_num = " << p4 << endl;
}

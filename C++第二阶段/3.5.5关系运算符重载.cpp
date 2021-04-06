#include <iostream>
using namespace std;

class person14
{
public:
	person14(string name, int age)
	{
		cout << "person14--关系运算符重载--有参构造函数" << endl;
		m_name = name;
		m_age = age;
	}
	~person14()
	{
		cout << "person14--关系运算符重载--析构函数" << endl;
	}


	bool operator==(person14 &p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
			return true;
		else
			return false;
	}
	bool operator!=(person14& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
			return false;
		else
			return true;
	}

public:
	string m_name;
	int m_age;
};

void relational_operator(void)
{
	person14 p1("王二毛", 5986);
	person14 p2("王二毛", 5986);
	person14 p3("王二毛", 34);
	person14 p4("王二毛", 596);
	if (p1 == p2)
		cout << "p1和p2相等" << endl;
	else
		cout << "p1和p2不相等" << endl;

	if (p3 == p4)
		cout << "p3和p4相等" << endl;
	else
		cout << "p3和p4不相等" << endl;
}

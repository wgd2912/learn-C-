#include <iostream>
using namespace std;

class person14
{
public:
	person14(string name, int age)
	{
		cout << "person14--��ϵ���������--�вι��캯��" << endl;
		m_name = name;
		m_age = age;
	}
	~person14()
	{
		cout << "person14--��ϵ���������--��������" << endl;
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
	person14 p1("����ë", 5986);
	person14 p2("����ë", 5986);
	person14 p3("����ë", 34);
	person14 p4("����ë", 596);
	if (p1 == p2)
		cout << "p1��p2���" << endl;
	else
		cout << "p1��p2�����" << endl;

	if (p3 == p4)
		cout << "p3��p4���" << endl;
	else
		cout << "p3��p4�����" << endl;
}

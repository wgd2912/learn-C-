#include <iostream>
using namespace std;

class phone
{
public:
	phone(string pname)
	{
		cout << "phone---�вι��캯��" << endl;
		m_phone = pname;
	}
	~phone()
	{
		cout << "phone---�в���������" << endl;
	}
public:
	string m_phone;
};

class person6
{
public:
	person6(int age, string name, string pname) :m_age(age), m_name(name), m_pname(pname)
	{
		cout << "person6---�вι��캯��" << endl;
		cout << m_age << "���" << m_name << "ʹ�õ���" << m_pname.m_phone << "���ֻ�" << endl;

	}
	~person6()
	{
		cout << "person6---�в���������" << endl;
	}

public:
	string m_name;
	int m_age;
	phone m_pname;
};

void object_member(void)
{
	person6 p(56, "����ë", "ŵ����");
}


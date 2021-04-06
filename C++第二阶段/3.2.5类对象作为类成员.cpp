#include <iostream>
using namespace std;

class phone
{
public:
	phone(string pname)
	{
		cout << "phone---有参构造函数" << endl;
		m_phone = pname;
	}
	~phone()
	{
		cout << "phone---有参析构函数" << endl;
	}
public:
	string m_phone;
};

class person6
{
public:
	person6(int age, string name, string pname) :m_age(age), m_name(name), m_pname(pname)
	{
		cout << "person6---有参构造函数" << endl;
		cout << m_age << "岁的" << m_name << "使用的是" << m_pname.m_phone << "牌手机" << endl;

	}
	~person6()
	{
		cout << "person6---有参析构函数" << endl;
	}

public:
	string m_name;
	int m_age;
	phone m_pname;
};

void object_member(void)
{
	person6 p(56, "王二毛", "诺基亚");
}


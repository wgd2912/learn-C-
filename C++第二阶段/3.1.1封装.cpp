#include <iostream>

using namespace std;

class student
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	void setnum(int num)
	{
		m_num = num;
	}
	string getname()
	{
		return m_name;
	}
	int getnum()
	{
		return m_num;
	}
	void showmassage()
	{
		cout << "封装----姓名：" << m_name << endl;
		cout << "封装----学号：" << m_num << endl;
	}
public:
	string m_name;
	int m_num;
};

//三种保护权限
//1、public		公共权限 类内外都可访问
//2、private	私有权限 类内可以访问，类外不可访问
//3、protected	保护权限 类内可以访问，类外不可访问

//成员属性设置为私有
class person
{
public:
	//m_name---可读可写
	void setname(string name)
	{
		m_name = name;
	}
	string getname(void)
	{
		return m_name;
	}
	//年龄---只读
	int getage(void)
	{
		return m_age;
	}
	void setage(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "你个老怪物!" << endl;
			return;
		}
		m_age = age;
	}
	//情人设置为只写
	void setlover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;
	int m_age;
	string m_lover;
};



//封装
void capsulation()
{
	student stu;
	stu.setname("王二毛");
	stu.setnum(4545);
	stu.showmassage();
	person per;
	per.setname("王大毛");
	cout << "封装--可读可写--姓名：" << per.getname() << endl;
	per.setage(12);
	cout << "封装--只读--年龄：" << per.getage() << endl;
	per.setlover("王大妈");
}









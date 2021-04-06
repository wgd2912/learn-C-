#include <iostream>

using namespace std;


class person13
{
public:
	person13(int age)
	{
		cout << "person13--赋值运算符重载--有参构造函数" << endl;
		
		m_age = new int(age);
	}
	~person13()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		cout << "person13--赋值运算符重载--有参析构函数" << endl;
	}
	//赋值操作-返回的是引用
	person13& operator=(person13 &p)
	{
		//先判断堆区的地址中是不是空
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//编译器提供的代码是浅拷贝--会出现地址重复delete，错误
		//m_age = p.m_age;


		//提供深拷贝 解决浅拷贝的问题
		m_age = new int(*p.m_age);
		return *this;
	}

public:
	int* m_age;
};


void assigning_operator(void)
{
	person13 p1(89);
	person13 p2(45);
	person13 p3(989);

	p3 = p2 = p1;
	cout << "p1的年龄为：" << *p1.m_age << endl;
	cout << "p2的年龄为：" << *p2.m_age << endl;
	cout << "p3的年龄为：" << *p3.m_age << endl;
}


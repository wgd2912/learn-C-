#include <iostream>
using namespace std;

//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

class person4
{
public:
	person4()
	{
		cout << "person4---无参构造函数!" << endl;
	}
	person4(int age, int height)
	{

		cout << "person4---有参构造函数!" << endl;
		m_age = age;
		m_height = new int(height);
	}
	person4(const person4 &p)
	{
		cout << "person4---拷贝构造函数！" << endl;
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}

	//构造函数
	~person4()
	{
		cout << "person4---析构函数" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
public:
	int m_age;
	int* m_height;
};

void Deep_and_shallow_copy(void)
{
	person4 p1(50, 96);
	person4 p2(p1);
	cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;
	cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;

}
//总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题




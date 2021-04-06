#include <iostream>
using namespace std;

class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

//公共继承
class son1 :public base
{
public:
	void func()
	{
		m_a = 100;//m_a在父类中是公共权限，子类中是公共权限
		m_b = 200;//m_b在父类中是保护权限，子类中是保护权限
		//m_c = 300;//m_c在父类中是私有权限，子类不可访问
	}
};


//保护继承
class son2 :protected base
{
public:
	void func()
	{
		m_a = 100;//m_a在父类中是公共权限，子类中变成保护权限
		m_b = 200;//m_b在父类中是保护权限，子类中变成保护权限
		//m_c = 300;//m_c在父类中是私有权限，子类不可访问
	}
};

//私有继承
class son3 :private base
{
public:
	void func()
	{
		m_a = 100;//m_a在父类中是公共权限，子类中变成私有权限
		m_b = 200;//m_b在父类中是保护权限，子类中变成私有权限
		//m_c = 300;//m_c在父类中是私有权限，子类不可访问
	}
};
//子类grandsun3 公共继承 父类sun3
class grandsun3 :public son3
{
public:
	void func()
	{
		//m_a = 21000;//m_a在sun3中是私有权限，所有子类grandsun3是没有权限访问的
		//m_b = 324424;//m_b在sun3中是私有权限，所有子类grandsun3是没有权限访问的
	}
};



void inherit_method(void)
{
	//公共继承
	son1 s1;
	s1.m_a = 10000;//sun1中的m_a是公共权限，类外可以访问
	//s1.m_b = 10000;//sun1中的m_b是保护权限，类外不可以访问
	//s1.m_c = 10000;//sun1中的m_c是私有权限，类外不可以访问

	//保护继承
	son2 s2;
	//s2.m_a = 10000;//sun2中的m_a是保护权限，类外不能访问
	//s2.m_b = 10000;//sun2中的m_b是保护权限，类外不能访问
	//s2.m_c = 10000;//sun2中的m_c是私有权限，类外不能访问


	//私有继承
	son3 s3;
	//s3.m_a = 10000;//sun3中的m_a是私有权限，类外不能访问
	//s3.m_b = 10000;//sun3中的m_b是私有权限，类外不能访问
	//s3.m_c = 10000;//sun3中的m_c是私有权限，类外不能访问
}

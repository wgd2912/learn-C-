#include <iostream>

using namespace std;

class person5
{
public:
	person5(int i, float f, string name) :m_i(i), m_f(f), m_name(name)
	{
		cout << "person5---有参构造函数---初始化列表" << endl;
		cout << "person5---m_i = " << m_i << endl;
		cout << "person5---m_f = " << m_f << endl;
		cout << "person5---m_name = " << m_name << endl;
	}
	~person5()
	{
		cout << "person5---有参析构函数---初始化列表" << endl;
	}

private:
	int m_i;
	float m_f;
	string m_name;
};

void configlist(void)
{
	person5 p(1, 56.65, "王二毛");
}

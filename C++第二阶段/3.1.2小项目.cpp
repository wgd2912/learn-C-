#include <iostream>

using namespace std;

class CUBE
{
public:
	void set_l(int l)
	{
		m_l = l;
	}
	void set_w(int w)
	{
		m_w = w;
	}
	void set_h(int h)
	{
		m_h = h;
	}


	int S()
	{
		return (2 * (m_l * m_w + m_l * m_h + m_w * m_h));
	}
	int V()
	{
		return m_l * m_h * m_w;
	}

	bool equality(CUBE c1)
	{
		if (c1.S() == S() && c1.V() == V())
			return true;
		return false;
	}


public:
	int m_l, m_w, m_h;
};

bool equalityout(CUBE c1, CUBE c2)
{
	if (c1.S() == c2.S() && c1.V() == c2.V())
		return true;
	return false;
}

void cube_project(void)
{
	CUBE c1,c2;
	c1.set_l(100);
	c1.set_w(100);
	c1.set_h(100);

	c2.set_l(100);
	c2.set_w(100);
	c2.set_h(100);

	cout << "小项目--c1-长方体的面积是：" << c1.S() << endl;
	cout << "小项目--c1-长方体的体积是：" << c1.V() << endl;
	if(c1.equality(c2))
		cout << "小项目--类内判断--C1和C2是相等的" << endl;
	else
		cout << "小项目--类内判断--C1和C2是不相等的" << endl;
	if (equalityout(c1,c2))
		cout << "小项目--类外判断--C1和C2是相等的" << endl;
	else
		cout << "小项目--类外判断--C1和C2是不相等的" << endl;
}




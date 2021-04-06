#include <iostream>
using namespace std;


class person11
{
	friend ostream& operator<<(ostream& out, person11& p);

public:
	person11(int a, int b)
	{
		cout << "person11--左移运算符重载--有参构造函数" << endl;
		m_a = a;
		m_b = b;
	}
	//成员函数实现不了 p << cout 不是我们想要的效果 
	//void operator<<(Person& p){ 
	
	//}
private:
	int m_a;
	int m_b;
};
  
ostream& operator<<(ostream &out, person11 &p)
{
	out << "a = " << p.m_a << endl;
	out << "b = " << p.m_b;
	return out;
}

void leftshift_operator_overloading(void)
{
	person11 p(45,798);
	cout << p << endl << "hello" << endl;
}
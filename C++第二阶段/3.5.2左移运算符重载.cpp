#include <iostream>
using namespace std;


class person11
{
	friend ostream& operator<<(ostream& out, person11& p);

public:
	person11(int a, int b)
	{
		cout << "person11--�������������--�вι��캯��" << endl;
		m_a = a;
		m_b = b;
	}
	//��Ա����ʵ�ֲ��� p << cout ����������Ҫ��Ч�� 
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
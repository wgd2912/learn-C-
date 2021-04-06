#include <iostream>
using namespace std;

class person12
{
	friend ostream& operator<<(ostream& out, person12 p);

public:
	person12()
	{
		cout << "person12--�������������--�޲ι��캯��" << endl;
		m_num = 5;
	}

	//ǰ׺����++
	person12& operator++()
	{
		m_num++;
		return *this;
	}
	//��׺����++
	person12 operator++(int)
	{
		//��¼��ǰ�����ֵ
		person12 temp = *this;
		//Ȼ���ñ����ֵ��1
		m_num++;
		//���Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
		return temp;
	}
	
	//ǰ׺�ݼ�--
	person12& operator--()
	{
		m_num--;
		return *this;
	}
	//��׺����++
	person12 operator--(int)
	{
		//��¼��ǰ�����ֵ
		person12 temp = *this;
		//Ȼ���ñ����ֵ��1
		m_num--;
		//���Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++
		return temp;
	}

private:
	int m_num;
};

//���������
ostream& operator<<(ostream& out, person12 p)
{
	out << "p.m_num = " << p.m_num;
	return out;
}


void increase_operator_overloading(void)
{
	person12 p1;
	person12 p2;
	person12 p3;
	person12 p4;
	cout << "p1.m_num = " << ++p1 << endl;
	cout << "p1.m_num = " << p1 << endl;

	cout << "p2.m_num = " << p2++ << endl;
	cout << "p2.m_num = " << p2 << endl;

	cout << "p3.m_num = " << --p3 << endl;
	cout << "p3.m_num = " << p3 << endl;

	cout << "p4.m_num = " << p4-- << endl;
	cout << "p4.m_num = " << p4 << endl;
}

#include <iostream>

using namespace std;


class base3
{
public:
	base3()
	{
		cout << "����base3---�޲ι��캯��" << endl;
		m_a = 438975754390;
		m_b = 0;
	}
	void func()
	{
		cout << "����base3---func()��������" << endl;
	}
	void func(int a)
	{
		cout << "����base3---func(int a)��������" << endl;
		
	}
public:
	int m_a;
	int m_b;
};

class son6: public base3
{
public:
	son6()
	{
		cout << "����son6---�޲ι��캯��" << endl;
		m_a = 100;
		m_b = 46456l;
	}

	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա���� 
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	void func()
	{
		cout << "����son6---func()��������" << endl;
	}
public:
	int m_a;
	int m_b;
};

void inherit_samename(void)
{
	son6 s;
	cout << "����son6��m_a��" << s.m_a << endl;
	cout << "����base3��m_a��" << s.base3::m_a << endl;

	s.func();
	s.base3::func();
	s.base3::func(4545);
}

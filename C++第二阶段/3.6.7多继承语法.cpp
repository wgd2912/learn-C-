#include <iostream>

using namespace std;


class base5
{
public:
	base5()
	{
		cout << "����base5---�޲ι��캯��" << endl;
		m_a = 43897;
		m_b = 890;
	}
	~base5()
	{
		cout << "����base5---�޲���������" << endl;
	}
	void func()
	{
		cout << "����base5---func()��������" << endl;
	}
	void func(int a)
	{
		cout << "����base5---func(int a)��������" << endl;

	}
public:
	int m_a;
	int m_b;
};
class base6
{
public:
	base6()
	{
		cout << "����base6---�޲ι��캯��" << endl;
		m_a = 234;
		m_b = 56;
	}
	~base6()
	{
		cout << "����base6---�޲���������" << endl;
	}
	void func()
	{
		cout << "����base6---func()��������" << endl;
	}
	void func(int a)
	{
		cout << "����base6---func(int a)��������" << endl;

	}
public:
	int m_a;
	int m_b;
};

class son8 : public base5, public base6
{
public:
	son8()
	{
		cout << "����son8---�޲ι��캯��" << endl;
		m_a = 100;
		m_b = 56l;
	}
	~son8()
	{
		cout << "����son8---�޲���������" << endl;
	}
	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա���� 
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	void func()
	{
		cout << "����son8---func()��������" << endl;
	}
public:
	int m_a;
	int m_b;
};

void inherit_samename_more(void)
{
	son8 s;
	cout << "����son8��m_a��" << s.m_a << endl;
	cout << "����base5��m_a��" << s.base5::m_a << endl;
	cout << "����base6��m_a��" << s.base6::m_a << endl;
	s.func();
	s.base5::func();
	s.base5::func(4545);
	s.base6::func();
	s.base6::func(78);
}

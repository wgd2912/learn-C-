#include <iostream>

using namespace std;


class base4
{
public:
	base4()
	{
		cout << "����base4---�޲ι��캯��" << endl;
		/*m_a = 454390;
		m_b = 0;*/
	}
	static void func()
	{
		cout << "����base4---func()��������" << endl;
	}
	static void func(int a)
	{
		cout << "����base4---func(int a)��������" << endl;
	}
public:
	static int m_a;
	static int m_b;
};
int base4::m_a = 34;
int base4::m_b = 89;

class son7 : public base4
{
public:
	son7()
	{
		cout << "����son7---�޲ι��캯��" << endl;
		/*m_a = 100;
		m_b = 46456l;*/
	}

	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա���� 
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	static void func()
	{
		cout << "����son7---func()��������" << endl;
	}
public:
	static int m_a;
	static int m_b;
};

int son7::m_a = 5465;
int son7::m_b = 4354;

void inherit_samename_static(void)
{
	cout << "ͨ���������" << endl;
	son7 s;
	cout << "����son7��m_a��" << s.m_a << endl;
	cout << "����base4��m_a��" << s.base4::m_a << endl;
	s.func();
	s.base4::func();
	s.base4::func(4545);

	//����ͬ������������ص�����������ͬ����Ա��������Ҫ�������������
	cout << "ͨ����������" << endl;
	cout << "����son7��m_a��" << son7::m_a << endl;
	cout << "����base4��m_a��" << son7::base4::m_a << endl;
	son7::func();
	son7::base4::func();
	son7::base4::func(676);
}

#include <iostream>

using namespace std;

//����
class animal
{
public:
	animal()
	{
		cout << "����animal---�޲ι��캯��" << endl;
		m_age = 345;
	}
	~animal()
	{
		cout << "����animal---�޲���������" << endl;
	}
	void func()
	{
		cout << "����animal---func()��������" << endl;
	}
	void func(int a)
	{
		cout << "����animal---func(int a)��������" << endl;

	}
public:
	int m_age;
};
//�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳� 
//��ʱ�����ĸ���Animal��Ϊ�����
class tuo : virtual public animal
{
public:
	tuo()
	{
		cout << "����tuo---�޲ι��캯��" << endl;
		m_age = 234;
	}
	~tuo()
	{
		cout << "����tuo---�޲���������" << endl;
	}
	void func()
	{
		cout << "����tuo---func()��������" << endl;
	}
	void func(int a)
	{
		cout << "����tuo---func(int a)��������" << endl;

	}
public:
	int m_age;
};
//�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳� 
//��ʱ�����ĸ���Animal��Ϊ�����
class sheep : virtual public animal
{
public:
	sheep()
	{
		cout << "����sheep---�޲ι��캯��" << endl;
		m_age = 234;
	}
	~sheep()
	{
		cout << "����sheep---�޲���������" << endl;
	}
	void func()
	{
		cout << "����sheep---func()��������" << endl;
	}
	void func(int a)
	{
		cout << "����sheep---func(int a)��������" << endl;

	}
public:
	int m_age;
};


class sheeptuo : public sheep, public tuo
{
public:
	sheeptuo()
	{
		cout << "����sheeptuo---�޲ι��캯��" << endl;
		m_age = 100;
	}
	~sheeptuo()
	{
		cout << "����sheeptuo---�޲���������" << endl;
	}
	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա���� 
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	void func()
	{
		cout << "����sheeptuo---func()��������" << endl;
	}
public:
	int m_age;
};

void diamond_inheritance(void)
{
	sheeptuo s;

	s.m_age = 85;
	s.sheep::m_age = 13;
	s.tuo::m_age = 38;
	s.sheep::animal::m_age = 67;
	s.tuo::animal::m_age = 47;

	cout << "����---s.m_age��" << s.m_age << endl;
	cout << "С����---s.sheep::m_age��" << s.sheep::m_age << endl;
	cout << "С����---s.tuo::m_age��" << s.tuo::m_age << endl;
	
	cout << "�ܸ���--����--s.sheep::animal::m_age��" << s.sheep::animal::m_age << endl;
	cout << "�ܸ���--����--s.tuo::animal::m_age��" << s.tuo::animal::m_age << endl;



	s.func();
	s.sheep::func();
	s.sheep::func(56);
	s.tuo::func();
	s.tuo::func(78);

	s.sheep::animal::func();
	s.sheep::animal::func(497);
	s.tuo::animal::func();
	s.tuo::animal::func(245);

}

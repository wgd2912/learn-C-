#include <iostream>

using namespace std;


class person13
{
public:
	person13(int age)
	{
		cout << "person13--��ֵ���������--�вι��캯��" << endl;
		
		m_age = new int(age);
	}
	~person13()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		cout << "person13--��ֵ���������--�в���������" << endl;
	}
	//��ֵ����-���ص�������
	person13& operator=(person13 &p)
	{
		//���ж϶����ĵ�ַ���ǲ��ǿ�
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//�������ṩ�Ĵ�����ǳ����--����ֵ�ַ�ظ�delete������
		//m_age = p.m_age;


		//�ṩ��� ���ǳ����������
		m_age = new int(*p.m_age);
		return *this;
	}

public:
	int* m_age;
};


void assigning_operator(void)
{
	person13 p1(89);
	person13 p2(45);
	person13 p3(989);

	p3 = p2 = p1;
	cout << "p1������Ϊ��" << *p1.m_age << endl;
	cout << "p2������Ϊ��" << *p2.m_age << endl;
	cout << "p3������Ϊ��" << *p3.m_age << endl;
}


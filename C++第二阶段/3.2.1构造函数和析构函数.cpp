#include <iostream>

using namespace std;

class person1
{
public:
	person1()
	{
		cout << "person1�Ĺ��캯��" << endl;
	}
	~person1()
	{
		cout << "person1����������" << endl;
	}
};
void func1()
{
	person1 per1;
}

/*
���캯���ķ��༰����
���ַ��෽ʽ��
1����������Ϊ�� �вι�����޲ι���
2�������ͷ�Ϊ�� ��ͨ����Ϳ�������
���ֵ��÷�ʽ��
1�����ŷ�
2����ʾ��
3����ʽת����*/
class person2
{
public:
	//�޲ҹ���
	person2()
	{
		cout << "person2�޲ι��캯��" << endl;
	}
	person2(int age)
	{
		cout << "���ŷ�----person2�вι��캯��" << endl;
		m_age = age;
	}
	person2(const person2 &p)
	{
		cout << "person2�������캯��" << endl;
		m_age = p.m_age;
	}
	~person2()
	{
		cout << "person2��������" << endl;
	}
public:
	int m_age;
};
void func2()
{

	person2 p1;//�����޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������
	person2 p2(40); //2.1 ���ŷ�������
	person2 p3(p2);

	person2 p4 = person2(80);
	person2 p5 = person2(p4);

	//ע�⣺�������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ������� 
	//Person p5(p4);
}




void construc_destruc(void)
{
	func1();
	func2();
}





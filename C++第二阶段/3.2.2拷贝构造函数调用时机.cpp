#include <iostream>

using namespace std;


/*
C++�п������캯������ʱ��ͨ�����������
1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
2��ֵ���ݵķ�ʽ������������ֵ
3����ֵ��ʽ���ؾֲ�����
*/

class person3
{
public:
	//�޲ҹ���
	person3()
	{
		cout << "person3�޲ι��캯��" << endl;
	}
	person3(int age)
	{
		cout << "���ŷ�----person3�вι��캯��    ";
		m_age = age;
		cout << "���� = " << m_age << endl;
	}
	person3(const person3& p)
	{
		cout << "person3�������캯��  ";
		m_age = p.m_age;
		cout << "���� = " << m_age << endl;
	}
	~person3()
	{
		cout << "person3��������" << endl;
	}
public:
	int m_age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void func4()
{
	person3 man(100);
	person3 newman(man);	//���ÿ������캯��
	person3 newman2 = man;	//���ÿ������캯��
	cout << "1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���" << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void dowork(person3 p1)
{
	cout << "2��ֵ���ݵķ�ʽ������������ֵ" << endl;
}
void func5()
{
	person3 man(100);
	dowork(man);	
}

//3����ֵ��ʽ���ؾֲ�����
person3 dowork1()
{
	person3 p1(56);
	cout << "�ֲ�����p1�ĵ�ַ�ǣ�" << (int*)&p1 << endl;
	return p1;
}
void func6()
{
	person3 man = dowork1();
	cout << "����ֵ---�ֲ�����p1�ĵ�ַ�ǣ�" << (int*)&man << endl;
	cout << "3����ֵ��ʽ���ؾֲ�����--age = " << man.m_age << endl;
}


void copytime(void)
{
	func4();
	func5();
	func6(); 
}




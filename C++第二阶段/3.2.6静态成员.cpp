#include <iostream>
using namespace std;

//���ж�����ͬһ������
//�ڱ���׶η����ڴ�
//���������������ʼ��

//��̬����
class staticmemvar
{
public:
	//���������������ʼ��
	//staticmemvar(int a) :m_a(a){}

	staticmemvar()
	{
		cout << "��̬��Ա����---staticmemvar---�вι��캯��" << endl;
		cout << "��̬��Ա����---���ж�����ͬһ������" << endl;
		cout << "��̬��Ա����---Ҳ��Ȩ��֮��" << endl;
	}
	~staticmemvar()
	{
		cout << "staticmemvar---�в���������" << endl;
	}

public:
	static int m_a;
private:
	static int m_b;
};
int staticmemvar::m_a = 100;
int staticmemvar::m_b = 189;

//1 ������һ������
//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//��̬����
class staticmemfun
{
public:

	static void func()
	{
		m_a = 45;
//		m_b = 5355;
//		m_c = 10;
		cout << "����Ȩ��----func����" << endl;
		cout << "��̬��Ա����---���ж�����һ������" << endl;
		cout << "��̬��Ա����---Ҳ��Ȩ��֮��" << endl;
		cout << "��̬��Ա����---ֻ�ܷ��ʾ�̬��Ա����" << endl;
	}
	~staticmemfun()
	{
		cout << "staticmemvar---�в���������" << endl;
	}

public:
	static int m_a;
	int m_c;
private:
	//��̬��Ա����Ҳ���з���Ȩ�޵� 
	static void func2() 
	{ 
		cout << "˽��Ȩ��----func2����" << endl;
	}
	static int m_b;
};
int staticmemfun::m_a = 1089;
int staticmemfun::m_b = 199;

void staticfunc(void)
{
	staticmemvar p1;
	p1.m_a = 5632;
	cout << "p1.m_a = " << p1.m_a << endl;
//	cout << "p1.m_b = " << p1.m_b << endl;//��Ȩ��
	staticmemvar p2;
	p2.m_a = 896454;
	cout << "p1.m_a = " << p1.m_a << endl;//����ͬһ������
//	cout << "p1.m_b = " << p1.m_b << endl; //��Ȩ�� 
	cout << "p2.m_a = " << p2.m_a << endl;
//	cout << "p2.m_b = " << p2.m_b << endl;//��Ȩ��

	//2��ͨ������ 
	cout << "m_a = " << staticmemvar::m_a << endl;
//	cout << "m_b = " << staticmemvar::m_b << endl;//��Ȩ��



	staticmemfun f1;
	f1.func();
	//ͨ������
	staticmemfun::func();
//	staticmemfun::func2();//��Ȩ��
}
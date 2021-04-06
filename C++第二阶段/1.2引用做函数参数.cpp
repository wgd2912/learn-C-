#include <iostream>


using namespace std;

/*ֵ����*/
void swap01(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*��ַ����*/
void swap02(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void swap03(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨�������*/
void quote_func(void)
{
	int a = 50;
	int b = 89;

	swap01(a, b);
	cout << "������Ϊ��������---ֵ���� " << "a = " << a << endl;
	cout << "������Ϊ��������---ֵ���� " << "b = " << b << endl;
	swap02(&a, &b);
	cout << "������Ϊ��������---��ַ���� " << "a = " << a << endl;
	cout << "������Ϊ��������---��ַ���� " << "b = " << b << endl;
	swap03(a, b);
	cout << "������Ϊ��������---���ô��� " << "a = " << a << endl;
	cout << "������Ϊ��������---���ô��� " << "b = " << b << endl;
}



//������Ϊ��������ֵ
int& test01()
{
	int a = 100;//�ֲ�����--ע�ⲻҪ���ؾֲ�����
	return a;
}

int& test02()
{
	static int a = 45;
	return a;
}
//
void quote_return(void)
{
	int& a = test01();
	cout << "������Ϊ��������ֵ---�ֲ�����" << "a = " << a << endl;
	cout << "������Ϊ��������ֵ---�ֲ�����" << "a = " << a << endl;

	int &b = test02();
	cout << "������Ϊ��������ֵ---��̬����" << "b = " << b << endl;
	cout << "������Ϊ��������ֵ---��̬����" << "b = " << b << endl;

	test02() = 526;//ʵ���Ͼ��� b = 526
	cout << "������Ϊ��������ֵ---��̬����" << "b = " << b << endl;
	cout << "������Ϊ��������ֵ---��̬����" << "b = " << b << endl;
}


//C++�Ƽ������ü�������Ϊ�﷨���㣬���ñ�����ָ�볣�����������е�ָ�����������������������
//int a = 10; 
//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
//int& ref = a;
//ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

#include <iostream>
using namespace std;

/*
1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
3. ����ģ��Ҳ���Է�������
4. �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
*/
//��ͨ����
int func1(int &a,int &b)
{
	cout << "��ͨ����func1--����" << endl;
	return a + b;
}
//����ģ��
template <typename T>
T func1(T& a, T& b)
{
	cout << "����ģ��func2--����" << endl;
	return a + b;
}
template <typename T>
T func1(T& a, T& b, T& c)
{
	cout << "���غ���ģ��func2--����" << endl;
	return a + b + c;
}
void Callrules(void)
{
	int a = 89;
	int b = 11;
	int c = 50;
	//��ͨ����
	cout << "func1 = " << func1(a, b) << endl;

	//����ģ��--����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
	cout << "func1 = " << func1<>(a, b) << endl;

	//�������صĺ���ģ��
	cout << "func1 = " << func1<>(a, b, c) << endl;
}


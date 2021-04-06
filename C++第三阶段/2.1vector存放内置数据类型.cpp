#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>


void vectorprintf(int val)
{
	cout << val << " ";
}

void vectortest(void)
{
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ���������
	vector<int> v;

	//�������д������
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i * 10);
	}

	//ÿ�����������Լ��ĵ����������������������������е�Ԫ�ص�
	//v.begin()���ص����������������ָ����������е�һ������
	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
	//vector<int>::iterator �õ�vector<int>���������ĵ���������

	//��һ�ֱ�����ʽ
	vector<int>::iterator pbegin = v.begin();
	vector<int>::iterator pend = v.end();
	while (pbegin != pend)
	{
		cout << *pbegin << " ";
		pbegin++;
	}
	cout << endl;
	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//�����ֱ�����ʽ
	//ʹ��STL�ṩ�ı�׼�����㷨 ��Ҫ����ͷ�ļ� algorithm
	for_each(v.begin(), v.end(), vectorprintf);
	cout << endl;
}
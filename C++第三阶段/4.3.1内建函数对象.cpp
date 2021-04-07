#include <iostream>
using namespace std;

#include <functional>
#include <algorithm>
#include <vector>


void functionaltest(void)
{
	/*
	�����º���
	
	template<class T> T plus<T> //�ӷ��º���
	template<class T> T minus<T> //�����º���
	template<class T> T multiplies<T> //�˷��º���
	template<class T> T divides<T> //�����º���
	template<class T> T modulus<T> //ȡģ�º���
	template<class T> T negate<T> //ȡ���º���
	*/
	negate<int>n;
	cout << "ȡ���º�����negate��:" << n(80) << endl;
	plus<int>p;
	cout << "�ӷ��º�����plus��:" << p(80, 20) << endl;
	minus<int>mi;
	cout << "�����º�����minus��:" << mi(80, 20) << endl;
	multiplies<int>mu;
	cout << "�˷��º�����multiplies��:" << mu(80, 20) << endl;
	divides<int>d;
	cout << "�����º�����divides��:" << d(80, 35) << endl;
	modulus<int>mo;
	cout << "ȡģ�º���������modulus��:" << mo(80, 30) << endl;


	/*
	��ϵ�º���

	template<class T> bool equal_to<T> //����
	template<class T> bool not_equal_to<T> //������
	template<class T> bool greater<T> //����
	template<class T> bool greater_equal<T> //���ڵ���
	template<class T> bool less<T> //С��
	template<class T> bool less_equal<T> //С�ڵ���
	*/
	vector<int>v1;
	int num;
	for (int i = 0; i < 10; i++)
	{
		num = rand() % 50;
		v1.push_back(num);
	}
	cout << "����ǰ";
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	sort(v1.begin(), v1.end(), greater<int>());

	cout << "�����";
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	/*
	�߼��º���

	template<class T> bool logical_and<T> //�߼���
	template<class T> bool logical_or<T> //�߼���
	template<class T> bool logical_not<T> //�߼���
	*/
	vector<bool>v2;
	v2.push_back(true);
	v2.push_back(false);
	v2.push_back(true);
	v2.push_back(false);

	for (vector<bool>::iterator i = v2.begin(); i != v2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//�߼���
	//��Ҫ���� �㷨���ڽ���algorithm��functional�� ͷ�ļ�
	vector<bool>v3;
	v3.resize(v2.size());
	transform(v2.begin(), v2.end(), v3.begin(), logical_not<bool>());
	for (vector<bool>::iterator i = v3.begin(); i != v3.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}




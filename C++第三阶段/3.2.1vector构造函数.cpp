#include <iostream>
using namespace std;
#include <vector>

/*
vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(), v.end()); //��v[begin(), end())�����е�Ԫ�ؿ���������
vector(n, elem); //���캯����n��elem����������
vector(const vector &vec); //�������캯����
*/
void vectorprintf01(vector<int>&v)
{
	if (v.size() == 0)
	{
		cout << "vector������СΪ0" << endl;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void vectorconstructor(void)
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vectorprintf01(v1);

	vector<int >v2(v1.begin(), v1.end());
	vectorprintf01(v2);

	vector<int > v3(10, 100); //���캯����10��100����������
	vectorprintf01(v3);

	vector<int >v4(v2);
	vectorprintf01(v4);


	/*��ֵ����*/
	vector<int >v5;
	v5 = v1;//��ֵ����
	vectorprintf01(v5);
	vector<int> v6;
	v6.assign(v1.begin(), v1.end());
	vectorprintf01(v6);
	vector<int >v7;
	v7.assign(5, 99);
	vectorprintf01(v7);
	// vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operator=������assign������


	//vector�����ʹ�С
	/*
	empty(); //�ж������Ƿ�Ϊ��
	capacity(); //����������
	size(); //����������Ԫ�صĸ���
	resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�---ָ������v.size()�Ĵ�С
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
	//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	*/
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}
	//����ָ�������ĳ���Ϊnum
	v1.resize(15,88);///resize ����ָ����С ����ָ���ĸ���Ĭ����0�����λ�ã������������ذ汾�滻Ĭ�����
	vectorprintf01(v1);
	cout << "v1������Ϊ��" << v1.capacity() << endl;
	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	//����ָ�������ĳ���Ϊnum
	v1.resize(5);
	vectorprintf01(v1);
	cout << "v1������Ϊ��" << v1.capacity() << endl;
	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	/*
	�ж��Ƿ�Ϊ�� --- empty
	����Ԫ�ظ��� --- size
	������������ --- capacity
	����ָ����С --- resize
	*/
}



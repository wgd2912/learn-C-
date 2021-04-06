#include <iostream>
using namespace std;
#include <vector>

/*vector�����ɾ��*/
	/*
	push_back(ele); //β������Ԫ��ele
	pop_back(); //ɾ�����һ��Ԫ��
	insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
	insert(const_iterator pos, int count,ele); //������ָ��λ��pos����count��Ԫ��ele
	erase(const_iterator pos); //ɾ��������ָ���Ԫ��
	erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
	clear(); //ɾ������������Ԫ��
	*/

void vectorprintf01(vector<int>& v);

void vectorinsertanderase(void)
{
	vector<int> v1;
	//���롪push_back()-β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	vectorprintf01(v1);
	//ɾ��--pop_back()-βɾ
	v1.pop_back();
	vectorprintf01(v1);

	//������ָ��λ��pos����Ԫ��ele
	v1.insert(v1.begin() + 1, 520);
	vectorprintf01(v1);

	//������ָ��λ��pos����count��Ԫ��ele
	v1.insert(v1.begin() + 2, 2,1314);
	vectorprintf01(v1);

	//ɾ��������ָ���Ԫ��
	v1.erase(v1.begin() + 1);
	vectorprintf01(v1);

	//ɾ����������start��end֮���Ԫ��
	v1.erase(v1.begin() + 1, v1.begin() + 3);
	vectorprintf01(v1);

	//ɾ������������Ԫ��
	v1.clear();
	vectorprintf01(v1);

	/*
	β�� --- push_back
	βɾ --- pop_back
	���� --- insert (λ�õ�����)
	ɾ�� --- erase ��λ�õ�������
	��� --- clear
	*/


	/*vector���ݴ�ȡ*/
	/*
	at(int idx); //��������idx��ָ������
	operator[]; //��������idx��ָ������
	front(); //���������е�һ������Ԫ��
	back(); //�������������һ������Ԫ��
	*/
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i+10);
	}
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";//operator[]
	}
	cout << endl;
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";//operator[]
	}
	cout << endl;
	cout << "v2�����еĵ�һ��Ԫ���ǣ�" << v2.front() << endl;
	cout << "v2�����е����һ��Ԫ���ǣ�" << v2.back() << endl;

	/*vector��������*/
	//ʵ������������Ԫ�ؽ��л���
	//swap(vec); // ��vec�뱾���Ԫ�ػ���

	vector<int> v3;
	for (int i = 10; i > 0; i--)
	{
		v3.push_back(i + 100);
	}
	cout << "v3 = ";
	vectorprintf01(v3);
	cout << "v2��v3����֮��" << endl;
	v2.swap(v3);
	cout << "v2 = ";
	vectorprintf01(v2);
	cout << "v3 = ";
	vectorprintf01(v3);


	vector<int> v4; 
	for (int i = 0; i < 100000; i++) 
	{ 
		v4.push_back(i);
	}
	cout << "v4������Ϊ��" << v4.capacity() << endl; 
	cout << "v4�Ĵ�СΪ��" << v4.size() << endl;
	v4.resize(3);
	cout << "v4������Ϊ��" << v4.capacity() << endl;
	cout << "v4�Ĵ�СΪ��" << v4.size() << endl;
	//����������ڴ��˷�--ʹ��swap����-�����ڴ�
	vector<int>(v4).swap(v4);//��������
	cout << "v4������Ϊ��" << v4.capacity() << endl;
	cout << "v4�Ĵ�СΪ��" << v4.size() << endl;


	/*
	vectorԤ���ռ�
	��������������vector�ڶ�̬��չ����ʱ����չ����
	����ԭ�ͣ�reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
	*/
	vector<int> v5; 
	//Ԥ���ռ� 
	v5.reserve(100000);
	int num = 0; 
	int* p = NULL; 
	for (int i = 0; i < 100000; i++)
	{
		v5.push_back(i); 
		if (p != &v5[0]) 
		{ 
			p = &v5[0]; 
			num++; 
		}
	}
	cout << "num = " << num << endl;


}


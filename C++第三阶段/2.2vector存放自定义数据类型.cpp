#include <iostream>
using namespace std;

#include <vector>

class person10
{
public:
	person10(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

public:
	string name;
	int age;
};
/*
1��person10 ��
2��person10* ��
3��vector<int> ��
*/

void userdefinedvector(void)
{
	/*1��person10 ��*/
	//��������
	cout << "person10  �ಿ��-----------*****" << endl;
	vector<person10> v1;
	//����������Ա
	person10 p1("���", 2);
	person10 p2("��", 22);
	person10 p3("����", 222);
	person10 p4("��ɵ", 2222);
	//���
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	//��ӡ
	for (vector<person10>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		//cout << "������" << (*it).name << " ���䣺" << (*it).age << endl;
		cout << "������" << it->name << " ���䣺" << it->age << endl;
	}

	/*2��person10* ��*/
	cout << "person10 * �ಿ��-----------*****" << endl;
	vector<person10*> v2;
	person10 p5("���", 5);
	person10 p6("����", 55);
	person10 p7("����", 555);
	person10 p8("����", 5555);
	//���
	v2.push_back(&p5);
	v2.push_back(&p6);
	v2.push_back(&p7);
	v2.push_back(&p8);
	//��ӡ
	for (vector<person10*>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		//cout << "������" << (*it).name << " ���䣺" << (*it).age << endl;
		cout << "������" << (*it)->name << " ���䣺" << (*it)->age << endl;
	}

	/*3��vector<int> �� ����*/
	cout << "Ƕ�� vector<int> �ಿ��-----------*****" << endl;
	vector <vector<int>> v3;
	//����������Ա
	vector<int> son1;
	vector<int> son2;
	vector<int> son3;
	vector<int> son4;
	//��ֵ
	for (int i = 0; i < 10; i++)
	{
		son1.push_back(i + 10);
		son2.push_back(i + 100);
		son3.push_back(i + 1000);
		son4.push_back(i + 10000);
	}
	//��ӵ�������
	v3.push_back(son1);
	v3.push_back(son2);
	v3.push_back(son3);
	v3.push_back(son4);

	//��ӡ
	for (vector < vector<int> >::iterator it = v3.begin(); it != v3.end(); it++)
	{
		for (vector< int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}

	cout << "Ƕ�� vector<person10> �ಿ��-----------*****" << endl;
	vector <vector<person10>> v4;
	vector<person10> son5;
	vector<person10> son6;
	vector<person10> son7;

	person10 son5_1("aaa", 111);
	person10 son5_2("bbb", 222);
	person10 son5_3("ccc", 333);

	person10 son6_1("ddd", 444);
	person10 son6_2("eee", 555);
	person10 son6_3("fff", 666); 

	person10 son7_1("ggg", 777);
	person10 son7_2("hhh", 888);
	person10 son7_3("iii", 999);

	//���
	son5.push_back(son5_1);
	son5.push_back(son5_2);
	son5.push_back(son5_3);

	son6.push_back(son6_1);
	son6.push_back(son6_2);
	son6.push_back(son6_3);

	son7.push_back(son7_1);
	son7.push_back(son7_2);
	son7.push_back(son7_3);

	v4.push_back(son5);
	v4.push_back(son6);
	v4.push_back(son7);

	for (vector<vector<person10>>::iterator it = v4.begin(); it != v4.end(); it++)
	{
		for (vector<person10>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << "������" << vit->name << " ���䣺" << vit->age << endl;
		}
		cout << endl;
	}
}


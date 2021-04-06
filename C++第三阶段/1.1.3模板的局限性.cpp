#include <iostream>
using namespace std;

template <class T>
bool func01(T a, T b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

class person
{
public:
	person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
public:
	string name;
	int age;
};
/*
�����������У����T���������ʹ��������Person�������Զ����������ͣ�Ҳ�޷���������
���C++Ϊ�˽���������⣬�ṩģ������أ�����Ϊ��Щ�ض��������ṩ���廯��ģ��
*/

//���廯����ʾ���廯��ԭ�ͺͶ���˼��template<>��ͷ����ͨ��������ָ������ 
//���廯�����ڳ���ģ��
template<> bool func01(person p1, person p2)
{
	if (p1.name == p2.name && p1.age == p2.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void boundedness(void)
{
	int a = 45;
	int b = 96;
	person p1("����ë", 45);
	person p2("����ë", 45);

	bool ret;
	ret = func01(a, b);
	if (ret)
		cout << "a == b" << endl;
	else
		cout << "a != b" << endl;

	ret = func01(p1, p2);
	if (ret)
		cout << "p1 == p2" << endl;
	else
		cout << "p1 != p2" << endl;
}
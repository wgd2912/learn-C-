#include <iostream>
using namespace std;

/*
-����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
-�������󳬳���ͨ�����ĸ����������������Լ���״̬
-�������������Ϊ��������
*/

class myprintf
{
public:
	myprintf()
	{
		count = 0;
	}

	int operator()(int a, int b)
	{
		return a + b;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}

public:
	int count;
};

void test03func(myprintf& mp, string ddd)
{
	mp(ddd);
}

void func_obj(void)
{
	myprintf mp1;
	cout << mp1(3, 5) << endl;

	mp1("4656565");
	mp1("4df6565");
	mp1("4355465");
	mp1("46dfhfg");
	test03func(mp1, "65656");
	cout << "���ô����ǣ�" << mp1.count << endl;



}





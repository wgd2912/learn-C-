#include <iostream>
using namespace std;

class function1
{
public:
	void operator()(string massage)//Ҳ���Է�������--������һ������
	{
		cout << massage << endl;
	}
	int operator()(int a,int b)
	{
		return (a + b);
	}
};

void Func(string massage)
{
	cout << massage << endl;
}

void func_operator(void)
{
	function1 f1;
	f1("�����������������--��Һã��ҽ�����ë");
	Func("��������--��Һã��ҽ�����ë");
	cout << f1(34, 56) << endl;

	//�����������
	cout << function1()(69, 31) << endl;
}

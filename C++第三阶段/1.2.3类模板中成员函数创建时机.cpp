#include <iostream>
using namespace std;

class person03
{
public:
	person03()
	{
		cout << "person03---�޲ι��캯��" << endl;
	}
	void show03()
	{
		cout << "person03---show03��������" << endl;
	}
};
class person04
{
public:
	person04()
	{
		cout << "person04---�޲ι��캯��" << endl;
	}
	void show04()
	{
		cout << "person04---show04��������" << endl;
	}
};

template <class T>
class person05
{
public:
	person05()
	{
		cout << "person05---�޲ι��캯��" << endl;
	}

	void func1()
	{
		name.show03();
	}
	void func2()
	{
		name.show04();
	}
public:
	T name;
};

////2����ģ����ģ������б��п�����Ĭ�ϲ���
void classtemplate02(void)
{
	cout << 89898989 << endl;
	// ָ��TypeName Ϊstring���ͣ�TypeAge Ϊ int����
	person05 <person03> p1;//��ģ���е�ģ������б� ����ָ��Ĭ�ϲ���	
	cout << 8989898888989899 << endl;
	p1.func1();
	//p1.func2();
}



#include <iostream>
using namespace std;

template <class Typename, class Typeage = int>
class person02
{
public:
	person02(Typename name, Typeage age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout << "������" << name << endl;
		cout << "���䣺" << age << endl;
	}
public:
	Typename name;
	Typeage age;
};

////2����ģ����ģ������б��п�����Ĭ�ϲ���
void classtemplate01(void)
{
	// ָ��TypeName Ϊstring���ͣ�TypeAge Ϊ int����
	person02 <string> p1("С׳", 999);//��ģ���е�ģ������б� ����ָ��Ĭ�ϲ���		
	p1.show();
}


#include <iostream>
using namespace std;

template <typename Typename, typename Typeage>
class person01
{
public:
	person01(Typename name,Typeage age)
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

void classtemplate(void)
{
	// ָ��TypeName Ϊstring���ͣ�TypeAge Ϊ int����
	person01<string, int>p1("��׳",52);
	p1.show();
}


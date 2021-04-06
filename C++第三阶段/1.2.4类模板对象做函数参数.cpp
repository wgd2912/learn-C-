#include "iostream"
using namespace std;

//3�ַ�ʽ
//1��ָ����������---ֱ����ʾ�������������
//2������ģ�廯-----������Ĳ�����Ϊģ����д���
//3��������ģ�廯---�������������ģ�廯���д���

template <class Typename,class Typeage>
class person06
{
public:
	person06(Typename name,Typeage age)
	{
		this->name = name;
		this->age = age;
	}

	void showmassage()
	{
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
	}

public:
	Typename name;
	Typeage age;
};

//ָ����������
void func1_person06(person06<string, int>& p)
{
	p.showmassage();
}

//����ģ�廯
template <class T1,class T2>
void func2_person06(person06<T1, T2>& p)
{
	p.showmassage();
	cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
	cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
}

//������ģ�廯
template <class T>
void func3_person06(T & p)
{
	p.showmassage();
	cout << "T������Ϊ�� " << typeid(T).name() << endl;
}

void classmakefuncpara(void)
{
	person06 <string, int>p1("��һë", 20);
	person06 <string, int>p2("����ë", 30);
	person06 <string, int>p3("����ë", 40);

	func1_person06(p1);
	func2_person06(p2);
	func3_person06(p3);
}
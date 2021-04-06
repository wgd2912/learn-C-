#include "iostream"
using namespace std;


/*
���ַ�ʽ��
1������ʵ��---���á��Ƚϼ򵥡�����������ֱ��ʶ��
2������ʵ��
*/

template <class T1, class T2>class person08;//ȫ�ֺ��������Ԫ ����ʵ�� - ������ģ�������������������·���������ģ�嶨�壬������Ԫ

template <class T1,class T2>
void personfriend02(person08<T1, T2>& p)//����ȫ�ֺ�������Ԫ---Ҫ��ǰ������
{
	cout << "����ʵ����Ԫ--������" << p.name << "--���䣺" << p.age << endl;
}



template <class T1,class T2>
class person08
{
	//����ʵ��
	friend void personfriend01(person08<T1, T2>& p)
	{
		cout << "����ʵ����Ԫ--������" << p.name << "--���䣺" << p.age << endl;
	}
	//����ʵ��
	friend void personfriend02<>(person08<T1, T2>& p);


public:
	person08(T1 name, T2 age);
	void showinfo();
private:
	T1 name;
	T2 age;
};

template <class T1,class T2>
person08<T1, T2>::person08(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template <class T1,class T2>
void person08<T1, T2>::showinfo()
{
	cout << "������" << this->name << endl;
	cout << "���䣺" << this->age << endl;
}

void classandfriend(void)
{
	//������Ԫ--ʵ��
	person08<string, int> p1("���Ϲ�", 89);
	p1.showinfo();
	personfriend01(p1);


	//������Ԫ--ʵ��
	person08<string, int> p2("�ڹѸ�", 784);
	p2.showinfo();
	personfriend02(p2);
}


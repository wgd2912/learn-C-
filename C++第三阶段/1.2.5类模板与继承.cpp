#include "iostream"
using namespace std;


/*
����ģ�������̳�ʱ����Ҫע��һ�¼��㣺
1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
2�������ָ�����������޷�����������ڴ�
3����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
*/

template <class T>
class base01
{
public:
	base01()
	{
		cout << "��ģ����̳�---����--�вι��캯��" << endl;
	/*	this->name = name;*/
	}
	void show()
	{
		cout << "����--������" << this->name << endl;
	}
public:
	T name;
};

//����̳�-Ҫָ����������T������
class son1 :public base01<string>
{
public:
	son1(string name)
	{
		cout << "��ģ����̳�---����son1--�вι��캯��" << endl;
		this->name = name;
	}
	void show()
	{
		cout << "����son1--������" << this->name << endl;
	}
};

template <class T1,class T2>
class son2 :public base01<T2>
{
public:
	son2(int age)
	{
		cout << "��ģ����̳�---����son2--�вι��캯��" << endl;
		this->age = age;
	}
	void show()
	{
		cout << "����son2--������" << this->name << endl;
		cout << "����son2--���䣺" << this->age << endl;
	}
public:
	T1 age;
};

void classandinherit(void)
{
	son1 s1("��");
//	s1.base01::name = "7787987";
	s1.base01::show();
	s1.show();
	
	son2<int,string>s2(89);
	s2.name = "����";
	s2.base01<string>::name = "fsfsf";//���ʸ���ģ��ĳ�Ա���������߱���������Ҫ����<string>�����б�
	s2.base01<string>::show();
	s2.show();

}
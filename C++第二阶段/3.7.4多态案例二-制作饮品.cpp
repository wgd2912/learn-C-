#include <iostream>

using namespace std;

//��������
class makingprocess
{
public:
	//��ˮ
	virtual void boil() = 0;
	//���ݿ���
	virtual void brew() = 0;
	//���뱭��
	virtual void pour() = 0;
	//���븨��
	virtual void addaccessories() = 0;
	
	void allprocess()
	{
		boil();
		brew();
		pour();
		addaccessories();
	}	
};
class makecoffee : public makingprocess
{
public:
	void boil()
	{
		cout << "��ˮ" << endl;
	}
	void brew()
	{
		cout << "����" << endl;
	}
	void pour()
	{
		cout << "����" << endl;
	}
	void addaccessories()
	{
		cout << "����ţ��" << endl;
	}
};
class maketea : public makingprocess
{
public:
	void boil()
	{
		cout << "��ˮ" << endl;
	}
	void brew()
	{
		cout << "����" << endl;
	}
	void pour()
	{
		cout << "����" << endl;
	}
	void addaccessories()
	{
		cout << "��������" << endl;
	}
};

void makingdrink(void)
{
	makingprocess* drink = new makecoffee;
	drink->allprocess();
	delete drink;
	cout << "-----------------------------" << endl;
	drink = new maketea;
	drink->allprocess();
	delete drink;
}
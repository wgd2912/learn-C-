#include <iostream>
using namespace std;

//����

//��̬ʵ�� 
//�����������
//��̬�ŵ㣺������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
class calculator
{
public:
	virtual int result()
	{
		return 0;
	}
public:
	int num1;
	int num2;
};

class addcalculator : public calculator
{
public:
	int result()
	{
		return num1 + num2;
	}
};
class subcalculator : public calculator
{
public:
	int result()
	{
		return num1 - num2;
	}
};
class mulcalculator : public calculator
{
public:
	int result()
	{
		return num1 * num2;
	}
};

class divcalculator : public calculator
{
public:
	int result()
	{
		return num1 / num2;
	}
};

void polymorphic_project1(void)
{
	//�ӷ�
	calculator* abc = new addcalculator;
	abc->num1 = 34;
	abc->num2 = 78;
	cout << abc->num1 << "+" << abc->num2 << "=" << abc->result() << endl;
	delete abc;

	//����
	abc = new subcalculator;
	abc->num1 = 34;
	abc->num2 = 78;
	cout << abc->num1 << "-" << abc->num2 << "=" << abc->result() << endl;
	delete abc;

	//�˷�
	abc = new mulcalculator;
	abc->num1 = 24;
	abc->num2 = 5;
	cout << abc->num1 << "*" << abc->num2 << "=" << abc->result() << endl;
	delete abc;

	//����
	abc = new divcalculator;
	abc->num1 = 100;
	abc->num2 = 23;
	cout << abc->num1 << "/" << abc->num2 << "=" << abc->result() << endl;
	delete abc;
}

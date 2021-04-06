#include <iostream>

using namespace std;


class animal1
{
public:
	//Speak���������麯�� 
	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�

	//���û��ʹ��virtual�ؼ��֣��������ݴ�ӡ�ľ��ǣ�
	//������˵��
	//������˵��
	virtual void speak()
	{
		cout << "��������˵��" << endl;
	}
};
class cat : public animal1
{
public: 
	void speak()
	{
		cout << "è����˵��" << endl;
	}
};
class dog : public animal1
{
public:
	void speak()
	{
		cout << "������˵��" << endl;
	}
};
//����ϣ������ʲô������ô�͵���ʲô����ĺ��� 
//���������ַ�ڱ���׶ξ���ȷ������ô��̬���ࣺ������--speak--û�����--virtual--���Ǿ�̬��
//���������ַ�����н׶β���ȷ�������Ƕ�̬���ࣺ������--speak--���--virtual--���Ƕ�̬��
void dospeak(animal1 &a)
{
	a.speak();
}

void test(void)
{
	cout << "sizeof animal1 = " << sizeof(animal1) << endl;
}


//��̬���������� 
//1���м̳й�ϵ 
//2��������д�����е��麯�� 
//��̬ʹ�ã� 
//����ָ�������ָ���������
void polymorphic_base(void)
{
	cat c;
	dospeak(c);

	dog d;
	dospeak(d);

	test();
}

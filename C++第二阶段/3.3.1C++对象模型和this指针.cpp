#include <iostream>
using namespace std;

class objectthis
{
public:
	objectthis(int a)
	{
		cout << "objectthis---�в���������" << endl;
		ma = a;
	}
	//�Ǿ�̬��Ա����ռ����ռ� 
	int ma;
	//��̬��Ա������ռ����ռ� 
	static int mb;
	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ�� 
	void func()
	{
		cout << "mA:" << this->ma << endl;
	}
	//��̬��Ա����Ҳ��ռ����ռ� 
	static void sfunc()
	{
	}
};

class person7
{
public:
	person7(int age)
	{
		cout << "this--person7--�вι��캯��" << endl;
		this->age = age;
	}
	person7 &personaddperson(person7 p)
	{
		this->age += p.age;
		//���������ַ
		return *this;
	}
public:
	int age;
};

class person8
{
public:
	int age;

public:
	void show1()
	{
		cout << "show1" << endl;
	}
	void show2()
	{
		if (this == NULL)//���û������жϣ��ͻᱨ��
			return;
		cout << "age = " << age << endl;
	}
};

class person9
{
public:
	int ma;
	mutable int mb;
public:
	person9()
	{
		cout << "person9--�޲ι��캯��" << endl;
		ma = 0;
		mb = 0;
	}
	void show1() const {
		//ma = 100;//ma�ڶ���ʱû��ʹ��mutable�ؼ��֣������������޸ĳ�Ա������
		//this = NULL;//
		mb = 345;//mb�ڶ���ʱʹ����mutable�ؼ��֣��ڳ��������ǿ��Խ����޸ĵ�
		cout << "show1������ �� ma = " << this->ma << endl;
		cout << "show1������ �� mb = " << this->mb << endl;
	}
	void show2(){
		ma = 5547;
		mb = 67679;
		cout << "show2���� �� ma = " << this->ma << endl;
		cout << "show2���� �� mb = " << this->mb << endl;
	}
};

void objeck_this(void)
{
	objectthis p(6);
	cout << sizeof(objectthis) << endl;

	person7 p1(45);
	cout << "p1.age = " << p1.age << endl;
	person7 p2(78);
	p2.personaddperson(p1).personaddperson(p1).personaddperson(p1);
	cout << "p2.age = " << p2.age << endl;

	person8* p3 = NULL;
	p3->show1();
	p3->show2();

	const person9 p4;//������
	person9 p5;//������
	cout << "person9.ma = " << p4.ma << endl;
	cout << "person9.ma = " << p4.mb << endl;
	//p4.ma = 2245;//���������޸ĳ�Ա������ֵ,���ǿ��Է���
	p4.mb = 5657;////���ǳ���������޸�mutable���γ�Ա����
	//��������ʳ�Ա����
	
	//p4.show2();//������ֻ�ܵ��ó�����
	p5.show2();
	p4.show1();
}
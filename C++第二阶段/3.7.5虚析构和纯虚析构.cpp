#include <iostream>
using namespace std;


class animal2
{
public:
	animal2()
	{
		cout << "animal2--�޲ι��캯������" << endl;
	}
	virtual ~animal2() = 0;

	virtual void speak() = 0;
	//������������virtual�ؼ��֣��������������
	/*virtual ~animal2() 
	{ 
		cout << "animal2�������������ã�" << endl; 
	}*/

};

animal2::~animal2()
{
	cout << "animal2--����������������" << endl;
}
//�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������
class cow :public animal2
{
public:
	cow(string name)
	{
		cout << "cow--�вι��캯��" << endl;
		this->name = new string(name);
	}
	~cow()
	{
		cout << "cow--�޲���������" << endl;
		if (name != NULL)
		{
			delete name;
			name = NULL;
		}
	}
	
	void speak()
	{
		cout << *name << "����˵��" << endl;
	}

public:
	string* name;
};

void purevirtual_destructor(void)
{
	animal2 *a = NULL;
	a = new cow("����ë");
	a->speak();

	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й© 
	//��ô���������������һ������������ 
	//���������������������ͨ������ָ���ͷ��������
	delete a;
}
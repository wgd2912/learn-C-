#include <iostream>
using namespace std;

//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������

class person4
{
public:
	person4()
	{
		cout << "person4---�޲ι��캯��!" << endl;
	}
	person4(int age, int height)
	{

		cout << "person4---�вι��캯��!" << endl;
		m_age = age;
		m_height = new int(height);
	}
	person4(const person4 &p)
	{
		cout << "person4---�������캯����" << endl;
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}

	//���캯��
	~person4()
	{
		cout << "person4---��������" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
public:
	int m_age;
	int* m_height;
};

void Deep_and_shallow_copy(void)
{
	person4 p1(50, 96);
	person4 p2(p1);
	cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;
	cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;

}
//�ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������




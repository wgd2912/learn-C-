#include <iostream>

using namespace std;

class student
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	void setnum(int num)
	{
		m_num = num;
	}
	string getname()
	{
		return m_name;
	}
	int getnum()
	{
		return m_num;
	}
	void showmassage()
	{
		cout << "��װ----������" << m_name << endl;
		cout << "��װ----ѧ�ţ�" << m_num << endl;
	}
public:
	string m_name;
	int m_num;
};

//���ֱ���Ȩ��
//1��public		����Ȩ�� �����ⶼ�ɷ���
//2��private	˽��Ȩ�� ���ڿ��Է��ʣ����ⲻ�ɷ���
//3��protected	����Ȩ�� ���ڿ��Է��ʣ����ⲻ�ɷ���

//��Ա��������Ϊ˽��
class person
{
public:
	//m_name---�ɶ���д
	void setname(string name)
	{
		m_name = name;
	}
	string getname(void)
	{
		return m_name;
	}
	//����---ֻ��
	int getage(void)
	{
		return m_age;
	}
	void setage(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "����Ϲ���!" << endl;
			return;
		}
		m_age = age;
	}
	//��������Ϊֻд
	void setlover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;
	int m_age;
	string m_lover;
};



//��װ
void capsulation()
{
	student stu;
	stu.setname("����ë");
	stu.setnum(4545);
	stu.showmassage();
	person per;
	per.setname("����ë");
	cout << "��װ--�ɶ���д--������" << per.getname() << endl;
	per.setage(12);
	cout << "��װ--ֻ��--���䣺" << per.getage() << endl;
	per.setlover("������");
}









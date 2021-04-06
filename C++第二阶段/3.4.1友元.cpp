#include <iostream>
using namespace std;

/*
��Ԫ������ʵ��
	1��ȫ�ֺ�������Ԫ
	2��������Ԫ
	3����Ա��������Ԫ
*/


class mybuilding;
class goodfriend1
{
public:
	goodfriend1(mybuilding *bulid, string name);
	void visit();

private:
	mybuilding *build;
	string m_name;
};

class goodfriend2
{
public:
	goodfriend2(mybuilding* bulid, string name);
	void visit1();
	void visit2();

private:
	mybuilding* build;
	string m_name;
};

class mybuilding
{
	//ʹ��friend�ؼ��֣�˵��myfriendȫ�ֺ�����mybuilding�ĺ�����
	friend void myfriend(mybuilding& building);	//1��ȫ�ֺ���-����Ԫ
	friend class goodfriend1;					//2����-����Ԫ
	friend void goodfriend2::visit1();			//3����Ա��������Ԫ--visit1���Է��ʣ�visit2�����Է���
public:
	mybuilding(string sittingroom,string bedroom)
	{
		cout << "mybuilding--��Ԫ--�вι��캯��" << endl;
		cout << "1��ȫ�ֺ���-����Ԫ" << endl;
		cout << "2����-����Ԫ" << endl;
		cout << "3����Ա��������Ԫ--visit1���Է��ʣ�visit2�����Է���" << endl;
		this->m_bedroom = bedroom;
		this->m_sittingroom = sittingroom;
	}
public:
	string m_sittingroom;//����
private:
	string m_bedroom;//����
};

//1
void myfriend(mybuilding& building)
{
	cout << "**********************************************************" << endl;
	cout << "myfriend--ȫ�ֺ���--����Ԫ" << endl;
	cout << "myfriend--ȫ�ֺ���--���ڷ��ʣ�" << building.m_bedroom << endl;
	cout << "myfriend--ȫ�ֺ���--���ڷ��ʣ�" << building.m_sittingroom << endl;
}

//2
goodfriend1::goodfriend1(mybuilding *bulid, string name)
{
	this->build = bulid;
	cout << "**********************************************************" << endl;
	cout << "goodfriend1--" << name << "--�вι��캯��" << endl;
	cout << "goodfriend1--" << name << "--��--����Ԫ" << endl;
	this->m_name = name;
}
void goodfriend1::visit()
{
	cout << "goodfriend1--visit--" << this->m_name << "--��--���ڷ��ʣ�" << build->m_bedroom << endl;
	cout << "goodfriend1--visit--" << this->m_name << "--��--���ڷ��ʣ�" << build->m_sittingroom << endl;
}

//3
goodfriend2::goodfriend2(mybuilding* bulid, string name)
{
	this->build = bulid;
	cout << "**********************************************************" << endl;
	cout << "goodfriend2--" << name << "--�вι��캯��" << endl;
	cout << "goodfriend2--" << name << "--��Ա����--����Ԫ" << endl;
	this->m_name = name;

}
void goodfriend2::visit1()
{
	cout << "goodfriend2--visit1--" << this->m_name << "--��Ա����--���ڷ��ʣ�" << build->m_bedroom << endl;
	cout << "goodfriend2--visit1--" << this->m_name << "--��Ա����--���ڷ��ʣ�" << build->m_sittingroom << endl;
}
void goodfriend2::visit2()
{
//	cout << "goodfriend2--visit2--" << this->m_name << "--��Ա����--���ڷ��ʣ�" << build->m_bedroom << endl;
	cout << "goodfriend2--visit2--" << this->m_name << "--��Ա����--���ڷ��ʣ�" << build->m_sittingroom << endl;
}

void friendtest(void)
{
	mybuilding b1("����","����");//����

	//1
	myfriend(b1);//ȫ�ֺ�������Ԫ

	//2
	goodfriend1 g1(&b1, "����ë");//������Ԫ
	g1.visit();

	//3
	goodfriend2 g2(&b1, "����ë");//��Ա��������Ԫ
	g2.visit1();
	g2.visit2();
}
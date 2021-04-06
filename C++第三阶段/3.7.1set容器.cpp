#include <iostream>
using namespace std;
#include <set>


void setprintf(set<int>& s)
{
	if (s.empty())//�ж��Ƿ�Ϊ��
	{
		cout << "������Ϊ��" << endl;
		return;
	}

	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//�����º���
class mycampare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};
class person13
{
public:
	person13(string name, int age, int height)
	{
		this->name = name;
		this->age = age;
		this->height = height;
	}

public:
	string name;
	int age;
	int height;
};
class mycampareperson13
{
public:
	bool operator()(const person13 &p1, const person13 &p2)const
	{
		return p1.age > p2.age;
	}
};





//����Ԫ�ض����ڲ���ʱ�Զ�������
//set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//set��multiset����
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��
void setest(void)
{
	/*���캯��*/
	//���죺
	//set<T> st; //Ĭ�Ϲ��캯����
	//set(const set & st); //�������캯��
	//��ֵ��set& operator=(const set & st); //���صȺŲ�����

	set<int>s1;


	//����11�����ݣ�����������89
	s1.insert(89);
	s1.insert(47);
	s1.insert(86);
	s1.insert(35);
	s1.insert(59);
	s1.insert(46);
	s1.insert(73);
	s1.insert(64);
	s1.insert(21);
	s1.insert(89);
	s1.insert(36);

	cout << "s1�Ĵ�С�ǣ�" << s1.size() << endl;
	setprintf(s1);
	set<int>s2(s1);
	setprintf(s2);
	set<int>s3;
	s3 = s1;
	setprintf(s3);
	/*
	set������������ʱ��insert
	set�����������ݵ����ݻ��Զ�����
	*/


	/*set��С�ͽ���*/
	//ͳ��set������С�Լ�����set����
	//size(); //����������Ԫ�ص���Ŀ
	//empty(); //�ж������Ƿ�Ϊ��
	//swap(st); //����������������
	s1.swap(s3);
	setprintf(s1);
	setprintf(s3);

	/* set�����ɾ��*/
	//insert(elem); //�������в���Ԫ�ء�
	//clear(); //�������Ԫ��
	//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
	//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
	//erase(elem); //ɾ��������ֵΪelem��Ԫ�ء�
	s1.erase(++s1.begin());
	setprintf(s1);

	/*set���Һ�ͳ��*/
	//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
	//count(key); //ͳ��key��Ԫ�ظ���
	set<int>::iterator pos = s1.find(73);
	if (pos != s1.end())
	{
		cout << "���ݲ��ҳɹ���" << *pos << endl;
	}
	else
	{
		cout << "���޸�����" << endl;
	}
	int num = s1.count(86); 
	cout << "num = " << num << endl;

	//set�����Բ����ظ����ݣ���multiset����
	//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
	//multiset���������ݣ���˿��Բ����ظ�����
	s1.insert(89);

	pair<set<int>::iterator, bool> ret = s1.insert(89);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
		cout << "����ʧ��" << endl;
	
	multiset<int> m1;
	m1.insert(10);
	m1.insert(10);
	for (multiset<int>::iterator it = m1.begin(); it != m1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	/*����pair*/
	/*���ַ�ʽ*/
	//��һ�ַ�ʽ
	pair<string, int> p1("��", 52);
	cout << "������" << p1.first << " ���䣺" << p1.second << endl;

	pair<string, int>p2 = make_pair("��è", 20);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;

	/*set����*/
	//Ĭ������
	//����ʵ�֣�ʹ�÷º�����
	set<int, mycampare> s4;
	s4.insert(89);
	s4.insert(47);
	s4.insert(86);
	s4.insert(35);
	s4.insert(59);
	s4.insert(46);
	s4.insert(73);
	s4.insert(64);
	s4.insert(21);
	s4.insert(89);
	s4.insert(36);
	for (set<int, mycampare>::iterator it = s4.begin(); it != s4.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//�Զ�����������--�����Զ����������ͣ�set����ָ���������ſ��Բ�������
	set<person13,mycampareperson13>s5;
	person13 p4("���", 1825, 18000);
	person13 p5("��", 25, 25);
	person13 p6("����", 8741, 1589);
	s5.insert(p4);
	s5.insert(p5);
	s5.insert(p6);
	for (set<person13, mycampareperson13>::iterator it = s5.begin(); it != s5.end(); it++)
	{
		cout << "������" << it->name << " ���䣺" << it->age << " ��ߣ�" << it->height << endl;
	}
	cout << endl;
}




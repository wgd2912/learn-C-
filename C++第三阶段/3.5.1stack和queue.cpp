#include <iostream>
using namespace std;
#include <stack>
#include <queue>
class person11
{
public:
	person11(string name, string task)
	{
		this->name = name;
		this->task = task;
	}

public:
	string name;
	string task;
};

/*�Ѻ�ջ*/
void stackandqueue(void)
{
	/*stack*/
	/*
	��ֵ������
	stack& operator=(const stack &stk); //���صȺŲ�����
	���ݴ�ȡ��
	push(elem); //��ջ�����Ԫ��
	pop(); //��ջ���Ƴ���һ��Ԫ��
	top(); //����ջ��Ԫ��
	��С������
	empty(); //�ж϶�ջ�Ƿ�Ϊ��
	size(); //����ջ�Ĵ�С
	*/
	stack<int> s;
	if (s.empty())
	{
		cout << "s-ջ�ǿյģ����������" << endl;
	}

	//��ջ--��������
	for (int i = 0; i < 10; i++)
	{
		s.push(i * 10);
	}
	if (s.empty())
	{
		cout << "s-ջ�ǿյģ����������" << endl;
		return;
	}
	else
		cout << "��ջ�Ĵ�С�ǣ�" << s.size() << endl;
	//��ջ
	cout << "ջ����Ԫ���ǣ�";
	while (!s.empty())
	{
		cout << s.top() << " ";//����ջ����Ԫ��
		s.pop(); //�Ƴ�ջ����Ԫ��
	}
	cout << endl;
	cout << "ջ�Ĵ�С�ǣ�" << s.size() << endl;



	/*queue--����*/
	queue<person11>q;
	//�����Ա
	person11 p1("���", "��������");
	person11 p2("��", "����");
	person11 p3("����", "��");
	person11 p4("����", "�װ���");

	//��ӵ�����
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	//��ӡ
	cout << "���д�С�ǣ�" << q.size() << endl;
	while (!q.empty())
	{
		cout << "���ض��е��׸�Ԫ�ص�������" << q.front().name << " ����" << q.front().task << endl;
		
		cout << "���ض��е����һ��Ԫ�ص�������" << q.back().name << " ����" << q.back().task << endl;
		cout  << endl;
		q.pop();//�Ƴ��׸�Ԫ��
	}
	cout << "���д�С�ǣ�" << q.size() << endl;
}




#include <iostream>
using namespace std;


/*���麯����д����virtual �������� ������ = 0;*/
class base7
{
public:
	//���麯�� 
	//����ֻҪ��һ�����麯���ͳ�Ϊ������ 
	//�������޷�ʵ�������� 
	//���������д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void fun() = 0;
public:
	int num;
};

class son9 :public base7
{
public:
	void fun()
	{
		cout << "���麯��--������--bsae7--son9--func��������" << endl;
	}
};
void Purevirtual_func(void)
{
	base7*s = NULL;
	//base = new Base; // ���󣬳������޷�ʵ��������
	s = new son9;
	s->fun();
	delete s;
}
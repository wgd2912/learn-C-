#include <iostream>
using namespace std;

class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

//�����̳�
class son1 :public base
{
public:
	void func()
	{
		m_a = 100;//m_a�ڸ������ǹ���Ȩ�ޣ��������ǹ���Ȩ��
		m_b = 200;//m_b�ڸ������Ǳ���Ȩ�ޣ��������Ǳ���Ȩ��
		//m_c = 300;//m_c�ڸ�������˽��Ȩ�ޣ����಻�ɷ���
	}
};


//�����̳�
class son2 :protected base
{
public:
	void func()
	{
		m_a = 100;//m_a�ڸ������ǹ���Ȩ�ޣ������б�ɱ���Ȩ��
		m_b = 200;//m_b�ڸ������Ǳ���Ȩ�ޣ������б�ɱ���Ȩ��
		//m_c = 300;//m_c�ڸ�������˽��Ȩ�ޣ����಻�ɷ���
	}
};

//˽�м̳�
class son3 :private base
{
public:
	void func()
	{
		m_a = 100;//m_a�ڸ������ǹ���Ȩ�ޣ������б��˽��Ȩ��
		m_b = 200;//m_b�ڸ������Ǳ���Ȩ�ޣ������б��˽��Ȩ��
		//m_c = 300;//m_c�ڸ�������˽��Ȩ�ޣ����಻�ɷ���
	}
};
//����grandsun3 �����̳� ����sun3
class grandsun3 :public son3
{
public:
	void func()
	{
		//m_a = 21000;//m_a��sun3����˽��Ȩ�ޣ���������grandsun3��û��Ȩ�޷��ʵ�
		//m_b = 324424;//m_b��sun3����˽��Ȩ�ޣ���������grandsun3��û��Ȩ�޷��ʵ�
	}
};



void inherit_method(void)
{
	//�����̳�
	son1 s1;
	s1.m_a = 10000;//sun1�е�m_a�ǹ���Ȩ�ޣ�������Է���
	//s1.m_b = 10000;//sun1�е�m_b�Ǳ���Ȩ�ޣ����ⲻ���Է���
	//s1.m_c = 10000;//sun1�е�m_c��˽��Ȩ�ޣ����ⲻ���Է���

	//�����̳�
	son2 s2;
	//s2.m_a = 10000;//sun2�е�m_a�Ǳ���Ȩ�ޣ����ⲻ�ܷ���
	//s2.m_b = 10000;//sun2�е�m_b�Ǳ���Ȩ�ޣ����ⲻ�ܷ���
	//s2.m_c = 10000;//sun2�е�m_c��˽��Ȩ�ޣ����ⲻ�ܷ���


	//˽�м̳�
	son3 s3;
	//s3.m_a = 10000;//sun3�е�m_a��˽��Ȩ�ޣ����ⲻ�ܷ���
	//s3.m_b = 10000;//sun3�е�m_b��˽��Ȩ�ޣ����ⲻ�ܷ���
	//s3.m_c = 10000;//sun3�е�m_c��˽��Ȩ�ޣ����ⲻ�ܷ���
}

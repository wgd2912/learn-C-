#include <iostream>
using namespace std;

//cpu �Կ� �ڴ�
class cpu
{
public:
	virtual void calculator() = 0;
};
class card
{
public:
	virtual void display() = 0;
};
class memory
{
public:
	virtual void storage() = 0;
};

//�̳�--��̬--ʵ��
class intercpu :public cpu
{
public:
	void calculator()
	{
		cout << "inter��CPU���ڼ���" << endl;
	}
};
class intercard :public card
{
public:
	void display()
	{
		cout << "inter���Կ�������ʾͼ��" << endl;
	}
};
class intermemory :public memory
{
public:
	void storage()
	{
		cout << "inter���ڴ����ڴ洢�ļ�" << endl;
	}
};

class amdcpu :public cpu
{
public:
	void calculator()
	{
		cout << "amd��CPU���ڼ���" << endl;
	}
};
class amdcard :public card
{
public:
	void display()
	{
		cout << "amd���Կ�������ʾͼ��" << endl;
	}
};
class amdmemory :public memory
{
public:
	void storage()
	{
		cout << "amd���ڴ����ڴ洢�ļ�" << endl;
	}
};

//��������
class computer
{
public:
	computer(cpu *cpuname, card *cardname, memory *memoryname)
	{
		cout << "computer--�вι��캯��" << endl;
		this->cpuname = cpuname;
		this->cardname = cardname;
		this->memoryname = memoryname;
	}
	~computer()
	{
		cout << "computer--��������" << endl;
		if (cpuname != NULL)
		{
			delete cpuname;
			cpuname = NULL;
		}
		if (cardname != NULL)
		{
			delete cardname;
			cardname = NULL;
		}
		if (memoryname != NULL)
		{
			delete memoryname;
			memoryname = NULL;
		}
	}
	void computerwork()
	{
		cpuname->calculator();
		cardname->display();
		memoryname->storage();
	}

private:
	cpu *cpuname;
	card* cardname;
	memory *memoryname;
};


void computer_package(void)
{
	computer *com = NULL;
	//��һ̨����
	cpu *cpu1 = new intercpu;
	card *card1 = new intercard;
	memory *memory1 = new intermemory;
	com = new computer(cpu1, card1, memory1);
	com->computerwork();
	delete com;

	cout << "----------------------------------------" << endl;
	//�ڶ�̨����
	cpu* cpu2 = new intercpu;
	card* card2 = new amdcard;
	memory* memory2 = new amdmemory;
	com = new computer(cpu2, card2, memory2);
	com->computerwork();
	delete com;


}



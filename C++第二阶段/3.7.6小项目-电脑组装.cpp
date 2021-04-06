#include <iostream>
using namespace std;

//cpu 显卡 内存
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

//继承--多态--实现
class intercpu :public cpu
{
public:
	void calculator()
	{
		cout << "inter的CPU正在计算" << endl;
	}
};
class intercard :public card
{
public:
	void display()
	{
		cout << "inter的显卡正在显示图像" << endl;
	}
};
class intermemory :public memory
{
public:
	void storage()
	{
		cout << "inter的内存正在存储文件" << endl;
	}
};

class amdcpu :public cpu
{
public:
	void calculator()
	{
		cout << "amd的CPU正在计算" << endl;
	}
};
class amdcard :public card
{
public:
	void display()
	{
		cout << "amd的显卡正在显示图像" << endl;
	}
};
class amdmemory :public memory
{
public:
	void storage()
	{
		cout << "amd的内存正在存储文件" << endl;
	}
};

//电脑主体
class computer
{
public:
	computer(cpu *cpuname, card *cardname, memory *memoryname)
	{
		cout << "computer--有参构造函数" << endl;
		this->cpuname = cpuname;
		this->cardname = cardname;
		this->memoryname = memoryname;
	}
	~computer()
	{
		cout << "computer--析构函数" << endl;
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
	//第一台电脑
	cpu *cpu1 = new intercpu;
	card *card1 = new intercard;
	memory *memory1 = new intermemory;
	com = new computer(cpu1, card1, memory1);
	com->computerwork();
	delete com;

	cout << "----------------------------------------" << endl;
	//第二台电脑
	cpu* cpu2 = new intercpu;
	card* card2 = new amdcard;
	memory* memory2 = new amdmemory;
	com = new computer(cpu2, card2, memory2);
	com->computerwork();
	delete com;


}



#include <iostream>
using namespace std;

class base1
{
public:
	base1()
	{
		cout << "����base1---�޲ι��캯��" << endl;
	}
	~base1()
	{
		cout << "����base1---�޲���������" << endl;
	}
};

class son4 :public base1
{
public:
	son4()
	{
		cout << "����son4---�޲ι��캯��" << endl;
	}
	~son4()
	{
		cout << "����son4---�޲���������" << endl;
	}
	
};

void inherit_order(void)
{
	son4 s1;
}

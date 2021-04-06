#include <iostream>
using namespace std;


class animal2
{
public:
	animal2()
	{
		cout << "animal2--无参构造函数调用" << endl;
	}
	virtual ~animal2() = 0;

	virtual void speak() = 0;
	//析构函数加上virtual关键字，变成虚析构函数
	/*virtual ~animal2() 
	{ 
		cout << "animal2虚析构函数调用！" << endl; 
	}*/

};

animal2::~animal2()
{
	cout << "animal2--纯虚析构函数调用" << endl;
}
//和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
class cow :public animal2
{
public:
	cow(string name)
	{
		cout << "cow--有参构造函数" << endl;
		this->name = new string(name);
	}
	~cow()
	{
		cout << "cow--无参析构函数" << endl;
		if (name != NULL)
		{
			delete name;
			name = NULL;
		}
	}
	
	void speak()
	{
		cout << *name << "正在说话" << endl;
	}

public:
	string* name;
};

void purevirtual_destructor(void)
{
	animal2 *a = NULL;
	a = new cow("王二毛");
	a->speak();

	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏 
	//怎么解决？给基类增加一个虚析构函数 
	//虚析构函数就是用来解决通过父类指针释放子类对象
	delete a;
}
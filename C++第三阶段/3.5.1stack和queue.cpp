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

/*堆和栈*/
void stackandqueue(void)
{
	/*stack*/
	/*
	赋值操作：
	stack& operator=(const stack &stk); //重载等号操作符
	数据存取：
	push(elem); //向栈顶添加元素
	pop(); //从栈顶移除第一个元素
	top(); //返回栈顶元素
	大小操作：
	empty(); //判断堆栈是否为空
	size(); //返回栈的大小
	*/
	stack<int> s;
	if (s.empty())
	{
		cout << "s-栈是空的，清插入数据" << endl;
	}

	//入栈--插入数据
	for (int i = 0; i < 10; i++)
	{
		s.push(i * 10);
	}
	if (s.empty())
	{
		cout << "s-栈是空的，清插入数据" << endl;
		return;
	}
	else
		cout << "堆栈的大小是：" << s.size() << endl;
	//出栈
	cout << "栈顶的元素是：";
	while (!s.empty())
	{
		cout << s.top() << " ";//返回栈顶的元素
		s.pop(); //移除栈顶的元素
	}
	cout << endl;
	cout << "栈的大小是：" << s.size() << endl;



	/*queue--队列*/
	queue<person11>q;
	//定义成员
	person11 p1("悟空", "保护唐曾");
	person11 p2("悟净", "挑担");
	person11 p3("悟能", "吃");
	person11 p4("唐曾", "献爱心");

	//添加到队列
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	//打印
	cout << "队列大小是：" << q.size() << endl;
	while (!q.empty())
	{
		cout << "返回队列的首个元素的姓名：" << q.front().name << " 任务：" << q.front().task << endl;
		
		cout << "返回队列的最后一个元素的姓名：" << q.back().name << " 任务：" << q.back().task << endl;
		cout  << endl;
		q.pop();//移除首个元素
	}
	cout << "队列大小是：" << q.size() << endl;
}




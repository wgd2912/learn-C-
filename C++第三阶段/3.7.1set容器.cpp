#include <iostream>
using namespace std;
#include <set>


void setprintf(set<int>& s)
{
	if (s.empty())//判断是否为空
	{
		cout << "该容器为空" << endl;
		return;
	}

	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//创建仿函数
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





//所有元素都会在插入时自动被排序
//set/multiset属于关联式容器，底层结构是用二叉树实现
//set和multiset区别：
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素
void setest(void)
{
	/*构造函数*/
	//构造：
	//set<T> st; //默认构造函数：
	//set(const set & st); //拷贝构造函数
	//赋值：set& operator=(const set & st); //重载等号操作符

	set<int>s1;


	//插入11个数据，其中有两个89
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

	cout << "s1的大小是：" << s1.size() << endl;
	setprintf(s1);
	set<int>s2(s1);
	setprintf(s2);
	set<int>s3;
	s3 = s1;
	setprintf(s3);
	/*
	set容器插入数据时用insert
	set容器插入数据的数据会自动排序
	*/


	/*set大小和交换*/
	//统计set容器大小以及交换set容器
	//size(); //返回容器中元素的数目
	//empty(); //判断容器是否为空
	//swap(st); //交换两个集合容器
	s1.swap(s3);
	setprintf(s1);
	setprintf(s3);

	/* set插入和删除*/
	//insert(elem); //在容器中插入元素。
	//clear(); //清除所有元素
	//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
	//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
	//erase(elem); //删除容器中值为elem的元素。
	s1.erase(++s1.begin());
	setprintf(s1);

	/*set查找和统计*/
	//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
	//count(key); //统计key的元素个数
	set<int>::iterator pos = s1.find(73);
	if (pos != s1.end())
	{
		cout << "数据查找成功：" << *pos << endl;
	}
	else
	{
		cout << "暂无该数据" << endl;
	}
	int num = s1.count(86); 
	cout << "num = " << num << endl;

	//set不可以插入重复数据，而multiset可以
	//set插入数据的同时会返回插入结果，表示插入是否成功
	//multiset不会检测数据，因此可以插入重复数据
	s1.insert(89);

	pair<set<int>::iterator, bool> ret = s1.insert(89);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
		cout << "插入失败" << endl;
	
	multiset<int> m1;
	m1.insert(10);
	m1.insert(10);
	for (multiset<int>::iterator it = m1.begin(); it != m1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	/*对组pair*/
	/*两种方式*/
	//第一种方式
	pair<string, int> p1("大锤", 52);
	cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;

	pair<string, int>p2 = make_pair("大猫", 20);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;

	/*set排序*/
	//默认升序
	//降序实现（使用仿函数）
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
	//自定义数据类型--对于自定义数据类型，set必须指定排序规则才可以插入数据
	set<person13,mycampareperson13>s5;
	person13 p4("悟空", 1825, 18000);
	person13 p5("悟净", 25, 25);
	person13 p6("悟能", 8741, 1589);
	s5.insert(p4);
	s5.insert(p5);
	s5.insert(p6);
	for (set<person13, mycampareperson13>::iterator it = s5.begin(); it != s5.end(); it++)
	{
		cout << "姓名：" << it->name << " 年龄：" << it->age << " 身高：" << it->height << endl;
	}
	cout << endl;
}




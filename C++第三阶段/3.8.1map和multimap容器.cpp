#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <time.h>

void empgroup(void);

void mapprintf(map<int, int>& m)
{
	if (m.empty())
	{
		cout << "该容器为空" << endl;
		return;
	}

	for (map<int, int>::iterator i = m.begin(); i != m.end(); i++)
	{
		cout << i->second << " ";
	}
	cout << endl;
}

class mapcampare
{
public:
	bool operator()(int a, int b)const
	{
		return a > b;
	}
};

void maptest(void)
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(10, 80));
	m1.insert(pair<int, int>(2, 50));
	m1.insert(pair<int, int>(4, 20));
	m1.insert(pair<int, int>(3, 70));
	mapprintf(m1);


	/*
	size(); //返回容器中元素的数目
	empty(); //判断容器是否为空
	swap(st); //交换两个集合容器
	*/
	cout << "map容器的大小是：" << m1.size() << endl;
	map<int, int>m2;
	m2.insert(make_pair(24,678));
	m2.insert(make_pair(2,34));
	m2.insert(make_pair(45,670));
	m2.insert(make_pair(89,3456));
	m2.insert(make_pair(20,531));
	mapprintf(m2);
	/*m2.swap(m1);
	mapprintf(m1);
	mapprintf(m2);*/
	m2.erase(m2.begin());
	m2.erase(20); 
	mapprintf(m2);

	map<int, int>::iterator pos = m2.find(89);
	if (pos != m2.end())
	{
		cout << "查找成功：" << "key = " << pos->first << "  value = " << pos->second << endl;
	}
	else
	{
		cout << "查找失败" << endl;
	}


	//map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则
	map<int, int, mapcampare> m3;
	m3.insert(make_pair(1, 56));
	m3.insert(make_pair(2, 48));
	m3.insert(make_pair(3, 23));
	for (map<int, int, mapcampare>::iterator it = m3.begin(); it != m3.end(); it++)
	{
		cout << it->second << " ";
	}
	cout << endl;

	empgroup();

}


class mapworker
{
public:
	/*mapworker() {};
	mapworker(string name, int salary)
	{
		this->name = name;
		this->salary = salary;
	}*/

public:
	string name;
	int salary;
};

void creatworkermassage(vector<mapworker>&v)
{
	string allname = "abcdefghij";
	
	for (int i = 0; i < 10; i++)
	{
		mapworker worker;
		worker.name = "员工";
		worker.name += allname[i];
		worker.salary = rand() % 10000 + 10000;


		v.push_back(worker);

	}
}

void insertworker(vector<mapworker>& v, multimap<int, mapworker>& m)
{

	for (vector<mapworker>::iterator i = v.begin(); i != v.end(); i++)
	{
		int num = rand() % 3;
		cout << " " << num;
		m.insert(make_pair(num, *i));
	}
	cout << endl;
}

void showmapmassage(multimap<int,mapworker>&m)
{
	int count = 0;
	multimap<int, mapworker>::iterator pos;
	cout << "市场部" << endl;
	pos = m.find(0);
	count = m.count(0);
 	for (int i=0;pos!=m.end()&&i<count; i++, pos++)
	{
		cout << "姓名：" << pos->second.name << " 工资：" << pos->second.salary << endl;
	}

	cout << "工程部" << endl;
	pos = m.find(1);
	count = m.count(1);
	for (int i = 0; pos != m.end() && i < count; i++, pos++)
	{
		cout << "姓名：" << pos->second.name << " 工资：" << pos->second.salary << endl;
	}

	cout << "董事办" << endl;
	pos = m.find(2);
	count = m.count(2);
	for (int i = 0; pos != m.end() && i < count; i++, pos++)
	{
		cout << "姓名：" << pos->second.name << " 工资：" << pos->second.salary << endl;
	}
}

void empgroup(void)
{
	/*srand((unsigned int)time(NULL));*/

	vector<mapworker> v;
	multimap<int, mapworker> m;

	creatworkermassage(v);

	insertworker(v, m);

	showmapmassage(m);
}






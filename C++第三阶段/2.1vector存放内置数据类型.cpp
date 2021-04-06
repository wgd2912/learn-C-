#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>


void vectorprintf(int val)
{
	cout << val << " ";
}

void vectortest(void)
{
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据类型
	vector<int> v;

	//向容器中存放数据
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i * 10);
	}

	//每个容器都有自己的迭代器，迭代器是用来遍历容器中的元素的
	//v.begin()返回迭代器，这个迭代器指向的是容器中第一个数据
	//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型

	//第一种遍历方式
	vector<int>::iterator pbegin = v.begin();
	vector<int>::iterator pend = v.end();
	while (pbegin != pend)
	{
		cout << *pbegin << " ";
		pbegin++;
	}
	cout << endl;
	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//第三种遍历方式
	//使用STL提供的标准遍历算法 需要包含头文件 algorithm
	for_each(v.begin(), v.end(), vectorprintf);
	cout << endl;
}
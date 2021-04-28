#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//函数
void printf01(int val)
{
	cout << val << " ";
}

//仿函数
class printf02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

//搬运仿函数
class transform01
{
public:
	int operator()(int val)
	{
		return val;
	}
};


void com_use_algorithm(void)
{
	/*
	常用遍历算法
	for_each(iterator beg, iterator end, _func)//遍历算法 遍历容器元素
	beg 开始迭代器
	end 结束迭代器
	 _func 函数或者函数对象

	transform(iterator beg1, iterator end1, iterator beg2, _func);//搬运容器到另一个容器中
	beg1 源容器开始迭代器
	end1 源容器结束迭代器
	beg2 目标容器开始迭代器
	_func 函数或者函数对象

	*/
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back((rand() % 100));
	}
	cout << "for_each（）--使用正常函数遍历：";
	for_each(v1.begin(), v1.end(), printf01);
	cout << endl;
	cout << "for_each（）----使用仿函数遍历：";
	for_each(v1.begin(), v1.end(), printf02());
	cout << endl;

	vector<int>v2;
	v2.resize(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), transform01());
	cout << "transform（）---搬运容器之后，使用仿函数遍历：";
	for_each(v2.begin(), v2.end(), printf02());
	cout << endl;

	//常用查找算法-find()
	//查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
	//函数原型-find(iterator beg,iterator end,value);
	// beg 开始迭代器   end 结束迭代器   value 查找的元素





}


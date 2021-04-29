#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>




class findperson
{
public:
	findperson()
	{

	}
	findperson(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	bool operator==(const findperson& p)
	{
		if (p.name == this->name && p.age == this->age)
		{
			return true;
		}
		return false;
	}

public:
	string name;
	int age;
};

class findif
{
public :
	bool operator()(int val)
	{
		return val > 20;
	}
};

class findprintf
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class findifperson
{
public:
	bool operator()(findperson fp)
	{
		return fp.age > 700;
	}
};


void comment_seek(void)
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back((rand() % 100));
	}
	cout << "for_each（）--使用正常函数遍历：";
	for_each(v1.begin(), v1.end(), findprintf());
	cout << endl;
	//常用查找算法-find()
	//查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
	//函数原型-find(iterator beg,iterator end,value);
	// beg 开始迭代器   end 结束迭代器   value 查找的元素
	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
	if (it == v1.end())
	{
		cout << "查找元素算法find（）没有找到该元素" << endl;
	}
	else
	{
		cout << "查找元素算法find（）找到该元素 : " << *it << endl;
	}

	vector<findperson>v3;

	findperson fp1("aaa", 374);
	findperson fp2("bbb", 364);
	findperson fp3("ccc", 687);
	findperson fp4("ddd", 785);
	findperson fp5("fff", 432);

	v3.push_back(fp1);
	v3.push_back(fp2);
	v3.push_back(fp3);
	v3.push_back(fp4);
	v3.push_back(fp5);

	vector<findperson>::iterator fpit = find(v3.begin(), v3.end(), fp2);
	if (fpit == v3.end())
	{
		cout << "自定义数据类型--查找元素算法find（）没有找到该元素" << endl;
	}
	else
	{
		cout << "自定义数据类型--查找元素算法find（）找到该元素--姓名：" << fpit->name << " 年龄：" << fpit->age << endl;
	}
	//按条件查找元素
	//函数原型：find_if(iterator beg, iterator end, _Pred);
	// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
	// beg 开始迭代器
	// end 结束迭代器
	// _Pred 函数或者谓词（返回bool类型的仿函数）
	vector<int>::iterator fif = find_if(v1.begin(), v1.end(), findif());
	if (fif == v1.end())
	{
		cout << "查找元素算法find_if（）没有找到该元素" << endl;
	}
	else
	{
		cout << "查找元素算法find_if（）找到该元素：" << *fif << endl;
	}

	vector<findperson>::iterator fdper = find_if(v3.begin(), v3.end(), findifperson());
	if (fpit == v3.end())
	{
		cout << "自定义数据类型--查找元素算法find_if（）没有找到该元素" << endl;
	}
	else
	{
		cout << "自定义数据类型--查找元素算法find_if（）找到该元素--姓名：" << fdper->name << " 年龄：" << fdper->age << endl;
	}
}


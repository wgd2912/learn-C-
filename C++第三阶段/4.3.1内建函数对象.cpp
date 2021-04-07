#include <iostream>
using namespace std;

#include <functional>
#include <algorithm>
#include <vector>


void functionaltest(void)
{
	/*
	算数仿函数
	
	template<class T> T plus<T> //加法仿函数
	template<class T> T minus<T> //减法仿函数
	template<class T> T multiplies<T> //乘法仿函数
	template<class T> T divides<T> //除法仿函数
	template<class T> T modulus<T> //取模仿函数
	template<class T> T negate<T> //取反仿函数
	*/
	negate<int>n;
	cout << "取反仿函数（negate）:" << n(80) << endl;
	plus<int>p;
	cout << "加法仿函数（plus）:" << p(80, 20) << endl;
	minus<int>mi;
	cout << "减法仿函数（minus）:" << mi(80, 20) << endl;
	multiplies<int>mu;
	cout << "乘法仿函数（multiplies）:" << mu(80, 20) << endl;
	divides<int>d;
	cout << "除法仿函数（divides）:" << d(80, 35) << endl;
	modulus<int>mo;
	cout << "取模仿函数（余数modulus）:" << mo(80, 30) << endl;


	/*
	关系仿函数

	template<class T> bool equal_to<T> //等于
	template<class T> bool not_equal_to<T> //不等于
	template<class T> bool greater<T> //大于
	template<class T> bool greater_equal<T> //大于等于
	template<class T> bool less<T> //小于
	template<class T> bool less_equal<T> //小于等于
	*/
	vector<int>v1;
	int num;
	for (int i = 0; i < 10; i++)
	{
		num = rand() % 50;
		v1.push_back(num);
	}
	cout << "排序前";
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	sort(v1.begin(), v1.end(), greater<int>());

	cout << "排序后";
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	/*
	逻辑仿函数

	template<class T> bool logical_and<T> //逻辑与
	template<class T> bool logical_or<T> //逻辑或
	template<class T> bool logical_not<T> //逻辑非
	*/
	vector<bool>v2;
	v2.push_back(true);
	v2.push_back(false);
	v2.push_back(true);
	v2.push_back(false);

	for (vector<bool>::iterator i = v2.begin(); i != v2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//逻辑非
	//需要包含 算法和内建（algorithm和functional） 头文件
	vector<bool>v3;
	v3.resize(v2.size());
	transform(v2.begin(), v2.end(), v3.begin(), logical_not<bool>());
	for (vector<bool>::iterator i = v3.begin(); i != v3.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}




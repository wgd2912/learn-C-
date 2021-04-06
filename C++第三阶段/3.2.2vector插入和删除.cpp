#include <iostream>
using namespace std;
#include <vector>

/*vector插入和删除*/
	/*
	push_back(ele); //尾部插入元素ele
	pop_back(); //删除最后一个元素
	insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
	insert(const_iterator pos, int count,ele); //迭代器指向位置pos插入count个元素ele
	erase(const_iterator pos); //删除迭代器指向的元素
	erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
	clear(); //删除容器中所有元素
	*/

void vectorprintf01(vector<int>& v);

void vectorinsertanderase(void)
{
	vector<int> v1;
	//插入—push_back()-尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	vectorprintf01(v1);
	//删除--pop_back()-尾删
	v1.pop_back();
	vectorprintf01(v1);

	//迭代器指向位置pos插入元素ele
	v1.insert(v1.begin() + 1, 520);
	vectorprintf01(v1);

	//迭代器指向位置pos插入count个元素ele
	v1.insert(v1.begin() + 2, 2,1314);
	vectorprintf01(v1);

	//删除迭代器指向的元素
	v1.erase(v1.begin() + 1);
	vectorprintf01(v1);

	//删除迭代器从start到end之间的元素
	v1.erase(v1.begin() + 1, v1.begin() + 3);
	vectorprintf01(v1);

	//删除容器中所有元素
	v1.clear();
	vectorprintf01(v1);

	/*
	尾插 --- push_back
	尾删 --- pop_back
	插入 --- insert (位置迭代器)
	删除 --- erase （位置迭代器）
	清空 --- clear
	*/


	/*vector数据存取*/
	/*
	at(int idx); //返回索引idx所指的数据
	operator[]; //返回索引idx所指的数据
	front(); //返回容器中第一个数据元素
	back(); //返回容器中最后一个数据元素
	*/
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i+10);
	}
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";//operator[]
	}
	cout << endl;
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";//operator[]
	}
	cout << endl;
	cout << "v2容器中的第一个元素是：" << v2.front() << endl;
	cout << "v2容器中的最后一个元素是：" << v2.back() << endl;

	/*vector容器互换*/
	//实现两个容器内元素进行互换
	//swap(vec); // 将vec与本身的元素互换

	vector<int> v3;
	for (int i = 10; i > 0; i--)
	{
		v3.push_back(i + 100);
	}
	cout << "v3 = ";
	vectorprintf01(v3);
	cout << "v2与v3互换之后：" << endl;
	v2.swap(v3);
	cout << "v2 = ";
	vectorprintf01(v2);
	cout << "v3 = ";
	vectorprintf01(v3);


	vector<int> v4; 
	for (int i = 0; i < 100000; i++) 
	{ 
		v4.push_back(i);
	}
	cout << "v4的容量为：" << v4.capacity() << endl; 
	cout << "v4的大小为：" << v4.size() << endl;
	v4.resize(3);
	cout << "v4的容量为：" << v4.capacity() << endl;
	cout << "v4的大小为：" << v4.size() << endl;
	//这样会造成内存浪费--使用swap进行-收缩内存
	vector<int>(v4).swap(v4);//匿名对象
	cout << "v4的容量为：" << v4.capacity() << endl;
	cout << "v4的大小为：" << v4.size() << endl;


	/*
	vector预留空间
	功能描述：减少vector在动态扩展容量时的扩展次数
	函数原型：reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问。
	*/
	vector<int> v5; 
	//预留空间 
	v5.reserve(100000);
	int num = 0; 
	int* p = NULL; 
	for (int i = 0; i < 100000; i++)
	{
		v5.push_back(i); 
		if (p != &v5[0]) 
		{ 
			p = &v5[0]; 
			num++; 
		}
	}
	cout << "num = " << num << endl;


}


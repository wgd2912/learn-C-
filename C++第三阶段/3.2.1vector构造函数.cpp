#include <iostream>
using namespace std;
#include <vector>

/*
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem); //构造函数将n个elem拷贝给本身。
vector(const vector &vec); //拷贝构造函数。
*/
void vectorprintf01(vector<int>&v)
{
	if (v.size() == 0)
	{
		cout << "vector容器大小为0" << endl;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void vectorconstructor(void)
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vectorprintf01(v1);

	vector<int >v2(v1.begin(), v1.end());
	vectorprintf01(v2);

	vector<int > v3(10, 100); //构造函数将10个100拷贝给本身
	vectorprintf01(v3);

	vector<int >v4(v2);
	vectorprintf01(v4);


	/*赋值操作*/
	vector<int >v5;
	v5 = v1;//赋值操作
	vectorprintf01(v5);
	vector<int> v6;
	v6.assign(v1.begin(), v1.end());
	vectorprintf01(v6);
	vector<int >v7;
	v7.assign(5, 99);
	vectorprintf01(v7);
	// vector赋值方式比较简单，使用operator=，或者assign都可以


	//vector容量和大小
	/*
	empty(); //判断容器是否为空
	capacity(); //容器的容量
	size(); //返回容器中元素的个数
	resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。---指定的是v.size()的大小
	//如果容器变短，则末尾超出容器长度的元素被删除。
	resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
	//如果容器变短，则末尾超出容器长度的元素被删除
	*/
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}
	//重新指定容器的长度为num
	v1.resize(15,88);///resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
	vectorprintf01(v1);
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;
	//重新指定容器的长度为num
	v1.resize(5);
	vectorprintf01(v1);
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;
	/*
	判断是否为空 --- empty
	返回元素个数 --- size
	返回容器容量 --- capacity
	重新指定大小 --- resize
	*/
}



#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

/*

*/

void dequeprintf(int dnum, deque<int>& d)
{
	if (d.empty())
	{
		cout << "d" << dnum <<"为空" << endl;
		return;
	}

	cout << "d" << dnum << " = ";
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

void dequeuse(void)
{
	//deque<T> deqT; //默认构造形式
	//deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
	//deque(n, elem); //构造函数将n个elem拷贝给本身。
	//deque(const deque & deq); //拷贝构造函数
	cout << endl << "deque构造函数部分" << endl;
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i + 10);
	}
	dequeprintf(1, d1);

	deque<int> d2(d1.begin(), d1.end());
	dequeprintf(2, d2);

	deque<int> d3(10, 99);
	dequeprintf(3, d3);

	deque<int> d4(d3);
	//或者deque<int> d4 = d3;
	dequeprintf(4, d4);

	cout << endl << "deque赋值操作部分" << endl;
	//deque& operator=(const deque & deq); //重载等号操作符
	//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
	//assign(n, elem); //将n个elem拷贝赋值给本身。

	deque<int> d5;
	d5 = d1;
	dequeprintf(5, d5);

	deque<int> d6;
	d6.assign(d1.begin(), d1.end());
	dequeprintf(6, d6);

	deque<int> d7;
	d7.assign(10, 55);
	dequeprintf(7, d7);

	
	//deque.empty();判断容器是否为空
	//deque.size();返回容器中元素的个数
	//deque.resize(num);重新指定容器的长度为num,若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
	//deque.resize(num, elem);重新指定容器的长度为num,若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
cout << endl << "deque大小操作部分" << endl;
	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1的大小是：" << d1.size() << endl;
	}
	d1.resize(15);//重新指定容器d1的大小
	cout << "d1的大小是：" << d1.size() << endl;
	dequeprintf(1,d1);

	d1.resize(20, 42);//重新指定容器d1的大小,容器变长，变长部分使用42进行填充
	cout << "d1的大小是：" << d1.size() << endl;
	dequeprintf(1,d1);

	//两端插入操作：
	//push_back(elem); //在容器尾部添加一个数据
	//push_front(elem); //在容器头部插入一个数据
	//pop_back(); //删除容器最后一个数据
	//pop_front(); //删除容器第一个数据

	//指定位置操作：
	//insert(pos, elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
	//insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值。
	//insert(pos, beg, end); //在pos位置插入[beg,end)区间的数据，无返回值。
	//clear(); //清空容器的所有数据
	//erase(beg, end); //删除[beg,end)区间的数据，返回下一个数据的位置。
	//erase(pos); //删除pos位置的数据，返回下一个数据的位置。
	cout << endl << "deque插入和删除部分" << endl;

	d1.push_back(7525);//尾插
	d1.push_front(456);//头插
	dequeprintf(1, d1);

	d1.pop_back();//尾删
	d1.pop_front();//头删
	dequeprintf(1, d1);

	d1.insert(d1.begin()+2, 8845);
	d1.insert(d1.begin() + 5, 2, 321);
	dequeprintf(1, d1);

	d1.erase(d1.begin() + 5, d1.begin() + 7);
	d1.erase(d1.begin() + 2);
	dequeprintf(1, d1);

	/*d1.clear();
	dequeprintf(1, d1);*/


	//at(int idx); //返回索引idx所指的数据
	//operator[]; //返回索引idx所指的数据
	//front(); //返回容器中第一个数据元素
	//back(); //返回容器中最后一个数据元素
	cout << endl << "deque 数据存取部分" << endl;
	
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	cout << "d1容器中的第一个数据元素是：" << d1.front() << endl;
	cout << "d1容器中的最后一个数据元素是：" << d1.back() << endl;

	//利用算法实现对deque容器进行排序
	//sort(iterator beg, iterator end) //对beg和end区间内元素进行排序
	//总结：sort算法非常实用，使用时包含头文件 algorithm即可
	cout << endl << "deque 排序部分" << endl;
	sort(d1.begin(), d1.end());
	cout << "d1进行sort()排序之后的结果是：";
	dequeprintf(1, d1);
}

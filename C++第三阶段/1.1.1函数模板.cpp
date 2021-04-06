#include <iostream>
using namespace std;


/*
模板特点：
1、模板不可以直接使用，它只是一个框架
2、模板的通用并不是万能的
*/

/*比如：简单的交换函数*/
void intSwap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void doubleSwap(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}
//使用函数模板
template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <typename T>
void func()
{
	cout << "func()函数调用" << endl;
}

template <typename T>
void arrsork(T arr[], int& len)
{
	int i, j;
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				Swap(arr[i], arr[j]);
			}
		}
	}
}

template <typename T>
T addtest(T a, T b)
{
	return a + b;
}

void mytemplate(void)
{
	int a = 56;
	int b = 89;
	char c = 40;
	int arr[10] = { 4,58,1,0,89,56854,4568,23,56,40 };
	int arrint = sizeof(arr)/sizeof(int);
	//	intSwap(a, b);

	//两种方式
	//1、自动类型推导--必须推导出一致的数据类型T,才可以使用
	Swap(a, b);//正确--可以推导出一直的T类型
	addtest<int>(a, c);//显示指定类型--
	//  Swap(a, c);//错误--推导不出一致的T类型

	//2、显示指定类型--模板必须要确定出T的数据类型，才可以使用
	
	Swap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	addtest<int>(a, c);//显示指定类型--可以发生隐藏式类型转换
	//func(); //错误，模板不能独立使用，必须确定出T的类型 
	func<int>(); //利用显示指定类型的方式，给T一个类型，才可以使用该模板

	arrsork(arr, arrint);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
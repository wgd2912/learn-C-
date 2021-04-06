#include <iostream>


using namespace std;

/*值传递*/
void swap01(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*地址传递*/
void swap02(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
void swap03(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*通过引用参数产生的效果同按地址传递是一样的、引用的语法更清楚简单*/
void quote_func(void)
{
	int a = 50;
	int b = 89;

	swap01(a, b);
	cout << "引用作为函数参数---值传递 " << "a = " << a << endl;
	cout << "引用作为函数参数---值传递 " << "b = " << b << endl;
	swap02(&a, &b);
	cout << "引用作为函数参数---地址传递 " << "a = " << a << endl;
	cout << "引用作为函数参数---地址传递 " << "b = " << b << endl;
	swap03(a, b);
	cout << "引用作为函数参数---引用传递 " << "a = " << a << endl;
	cout << "引用作为函数参数---引用传递 " << "b = " << b << endl;
}



//引用作为函数返回值
int& test01()
{
	int a = 100;//局部变量--注意不要返回局部变量
	return a;
}

int& test02()
{
	static int a = 45;
	return a;
}
//
void quote_return(void)
{
	int& a = test01();
	cout << "引用作为函数返回值---局部变量" << "a = " << a << endl;
	cout << "引用作为函数返回值---局部变量" << "a = " << a << endl;

	int &b = test02();
	cout << "引用作为函数返回值---静态变量" << "b = " << b << endl;
	cout << "引用作为函数返回值---静态变量" << "b = " << b << endl;

	test02() = 526;//实际上就是 b = 526
	cout << "引用作为函数返回值---静态变量" << "b = " << b << endl;
	cout << "引用作为函数返回值---静态变量" << "b = " << b << endl;
}


//C++推荐用引用技术，因为语法方便，引用本质是指针常量，但是所有的指针操作编译器都帮我们做了
//int a = 10; 
//自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
//int& ref = a;
//ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;

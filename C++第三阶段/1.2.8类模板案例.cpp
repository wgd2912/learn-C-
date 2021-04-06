#include "1.2.8类模板案例.hpp"

void printfarray(myarray<int>&arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << " ";//需要--[]--运算符重载
	}
	cout << endl;
}

void printfarrayperson09(myarray<person09>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "姓名：" << arr[i].name << "  年龄：" << arr[i].age << endl;
	}
}



void classtemplatecase(void)
{
	myarray<int> a1(5);
	for (int i = 0; i < 5; i++)
	{
		a1.add_back(i);
	}
	cout << "a1容量：" << a1.getcapacity() << endl;
	cout << "a1大小：" << a1.getsize() << endl;
	printfarray(a1);
	myarray<int> a2(a1);
	cout << "a2容量：" << a2.getcapacity() << endl;
	cout << "a2大小：" << a2.getsize() << endl;
	myarray<int> a3(10);
	cout << "a3容量：" << a3.getcapacity() << endl;
	cout << "a3大小：" << a3.getsize() << endl;
	a3 = a2;
	cout << "a3容量：" << a2.getcapacity() << endl;
	cout << "a3大小：" << a2.getsize() << endl;



	//自定义数据类型
	myarray<person09> p(5);

	person09 p1("悟空", 56);
	person09 p2("悟净", 156);
	person09 p3("悟能", 1156);
	person09 p4("如来", 11156);
	person09 p5("观音", 111156);

	p.add_back(p1);
	p.add_back(p2);
	p.add_back(p3);
	p.add_back(p4);
	p.add_back(p5);

	printfarrayperson09(p);
}


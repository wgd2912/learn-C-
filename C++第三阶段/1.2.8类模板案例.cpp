#include "1.2.8��ģ�尸��.hpp"

void printfarray(myarray<int>&arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << " ";//��Ҫ--[]--���������
	}
	cout << endl;
}

void printfarrayperson09(myarray<person09>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "������" << arr[i].name << "  ���䣺" << arr[i].age << endl;
	}
}



void classtemplatecase(void)
{
	myarray<int> a1(5);
	for (int i = 0; i < 5; i++)
	{
		a1.add_back(i);
	}
	cout << "a1������" << a1.getcapacity() << endl;
	cout << "a1��С��" << a1.getsize() << endl;
	printfarray(a1);
	myarray<int> a2(a1);
	cout << "a2������" << a2.getcapacity() << endl;
	cout << "a2��С��" << a2.getsize() << endl;
	myarray<int> a3(10);
	cout << "a3������" << a3.getcapacity() << endl;
	cout << "a3��С��" << a3.getsize() << endl;
	a3 = a2;
	cout << "a3������" << a2.getcapacity() << endl;
	cout << "a3��С��" << a2.getsize() << endl;



	//�Զ�����������
	myarray<person09> p(5);

	person09 p1("���", 56);
	person09 p2("��", 156);
	person09 p3("����", 1156);
	person09 p4("����", 11156);
	person09 p5("����", 111156);

	p.add_back(p1);
	p.add_back(p2);
	p.add_back(p3);
	p.add_back(p4);
	p.add_back(p5);

	printfarrayperson09(p);
}


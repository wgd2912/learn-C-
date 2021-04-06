#pragma once
#include "iostream"
using namespace std;


template <class T1, class T2>
class person07
{
public:
	person07(T1 name, T2 age);
	void showinfo();

public:
	T1 name;
	T2 age;
};
template<class T1, class T2>
person07<T1, T2>::person07(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template<class T1, class T2>
void person07<T1, T2>::showinfo()
{
	cout << "ÐÕÃû£º" << this->name << endl;
	cout << "ÄêÁä£º" << this->age << endl;
}

#include <iostream>
using namespace std;

/*
友元的三种实现
	1、全局函数做友元
	2、类做友元
	3、成员函数做友元
*/


class mybuilding;
class goodfriend1
{
public:
	goodfriend1(mybuilding *bulid, string name);
	void visit();

private:
	mybuilding *build;
	string m_name;
};

class goodfriend2
{
public:
	goodfriend2(mybuilding* bulid, string name);
	void visit1();
	void visit2();

private:
	mybuilding* build;
	string m_name;
};

class mybuilding
{
	//使用friend关键字，说明myfriend全局函数是mybuilding的好朋友
	friend void myfriend(mybuilding& building);	//1、全局函数-做友元
	friend class goodfriend1;					//2、类-做友元
	friend void goodfriend2::visit1();			//3、成员函数做友元--visit1可以访问，visit2不可以访问
public:
	mybuilding(string sittingroom,string bedroom)
	{
		cout << "mybuilding--友元--有参构造函数" << endl;
		cout << "1、全局函数-做友元" << endl;
		cout << "2、类-做友元" << endl;
		cout << "3、成员函数做友元--visit1可以访问，visit2不可以访问" << endl;
		this->m_bedroom = bedroom;
		this->m_sittingroom = sittingroom;
	}
public:
	string m_sittingroom;//客厅
private:
	string m_bedroom;//卧室
};

//1
void myfriend(mybuilding& building)
{
	cout << "**********************************************************" << endl;
	cout << "myfriend--全局函数--做友元" << endl;
	cout << "myfriend--全局函数--正在访问：" << building.m_bedroom << endl;
	cout << "myfriend--全局函数--正在访问：" << building.m_sittingroom << endl;
}

//2
goodfriend1::goodfriend1(mybuilding *bulid, string name)
{
	this->build = bulid;
	cout << "**********************************************************" << endl;
	cout << "goodfriend1--" << name << "--有参构造函数" << endl;
	cout << "goodfriend1--" << name << "--类--做友元" << endl;
	this->m_name = name;
}
void goodfriend1::visit()
{
	cout << "goodfriend1--visit--" << this->m_name << "--类--正在访问：" << build->m_bedroom << endl;
	cout << "goodfriend1--visit--" << this->m_name << "--类--正在访问：" << build->m_sittingroom << endl;
}

//3
goodfriend2::goodfriend2(mybuilding* bulid, string name)
{
	this->build = bulid;
	cout << "**********************************************************" << endl;
	cout << "goodfriend2--" << name << "--有参构造函数" << endl;
	cout << "goodfriend2--" << name << "--成员函数--做友元" << endl;
	this->m_name = name;

}
void goodfriend2::visit1()
{
	cout << "goodfriend2--visit1--" << this->m_name << "--成员函数--正在访问：" << build->m_bedroom << endl;
	cout << "goodfriend2--visit1--" << this->m_name << "--成员函数--正在访问：" << build->m_sittingroom << endl;
}
void goodfriend2::visit2()
{
//	cout << "goodfriend2--visit2--" << this->m_name << "--成员函数--正在访问：" << build->m_bedroom << endl;
	cout << "goodfriend2--visit2--" << this->m_name << "--成员函数--正在访问：" << build->m_sittingroom << endl;
}

void friendtest(void)
{
	mybuilding b1("客厅","卧室");//定义

	//1
	myfriend(b1);//全局函数做友元

	//2
	goodfriend1 g1(&b1, "王二毛");//类做友元
	g1.visit();

	//3
	goodfriend2 g2(&b1, "王三毛");//成员函数做友元
	g2.visit1();
	g2.visit2();
}
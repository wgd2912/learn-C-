#include <iostream>
using namespace std;
#include <list>

void listproject(void);

void listprintf(list<int>& l)
{
	if (l.empty())//判断是否为空
	{
		cout << "该容器为空" << endl;
		return;
	}

	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	return val1 > val2;
}

void listtest(void)
{
	/*构造函数*/
	//list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
	//list(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
	//list(n, elem); //构造函数将n个elem拷贝给本身。
	//list(const list & lst); //拷贝构造函数。
	list <int> l1;
	//尾插
	for (int i = 0; i < 10; i++)
	{
		l1.push_back(i*10);
	}
	//头插
	for (int i = 0; i < 10; i++)
	{
		l1.push_front(i+10);
	}
	cout << "l1 = ";
	listprintf(l1);
	
	list<int>l2(l1.begin(),l1.end());
	cout << "l2 = ";
	listprintf(l2);

	list <int>l3(10, 999);
	cout << "l3 = ";
	listprintf(l3);

	list <int>l4(l3);
	cout << "l4 = ";
	listprintf(l4);

	/*赋值和交换*/
	//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
	//assign(n, elem); //将n个elem拷贝赋值给本身。
	//list& operator=(const list & lst); //重载等号操作符
	//swap(lst); //将lst与本身的元素互换。
	list<int>l5;
	l5.assign(l1.begin(), l1.end());
	cout << "l5 = ";
	listprintf(l5);

	list<int>l6;
	l6.assign(10,88);
	cout << "l6 = ";
	listprintf(l6);

	list<int>l7;
	l7 = l6;
	cout << "l7 = ";
	listprintf(l7);

	cout << "l4与l6交换以后:" << endl;
	l6.swap(l4);
	cout << "l4 = ";
	listprintf(l4);
	cout << "l6 = ";
	listprintf(l6);

	/*容器大小*/
	//size(); //返回容器中元素的个数
	//empty(); //判断容器是否为空
	//resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
	////如果容器变短，则末尾超出容器长度的元素被删除。
	//resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
	////如果容器变短，则末尾超出容器长度的元素被删除。
	cout << "l1的大小是：" << l1.size() << endl;
	l2.resize(10);
	cout << "重新指定l2的大小：= ";
	listprintf(l2);

	/*list 插入和删除*/
	//push_back(elem);//在容器尾部加入一个元素
	//pop_back();//删除容器中最后一个元素
	//push_front(elem);//在容器开头插入一个元素
	//pop_front();//从容器开头移除第一个元素
	//insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
	//insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
	//insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
	//clear();//移除容器的所有数据
	//erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
	//erase(pos);//删除pos位置的数据，返回下一个数据的位置。
	//remove(elem);//删除容器中所有与elem值匹配的元素。
	list<int>::iterator it = l5.begin();
	it++;
	it++;
	l5.insert(it, 8888);
	cout << "l5 = ";
	listprintf(l5);

	l5.insert(++l5.begin(), 2, 77777);
	cout << "l5 = ";
	listprintf(l5);
	l5.erase(++l5.begin(), it);
	cout << "l5 = ";
	listprintf(l5);
	l5.clear();
	cout << "l5 = ";
	listprintf(l5);

	/*list 数据存取*/
	//front(); //返回第一个元素。
	//back(); //返回最后一个元素。
	cout << "l1的第一个元素是：" << l1.front() << endl;
	cout << "l1的最后一个元素是：" << l1.back() << endl;

	/*list的反转和排序*/
	//reverse(); //反转链表
	//sort(); //链表排序--默认从小到大
	cout << "l2反转之后的内容是：";
	l2.reverse();
	listprintf(l2);

	cout << "l1 = ";
	l1.sort();//从小到大
	listprintf(l1);

	cout << "l1 = ";
	l1.sort(myCompare);//从大到小
	listprintf(l1);

	listproject();

}

class person12
{
public:
	person12(string name, int age, int height)
	{
		this->name = name;
		this->age = age;
		this->height = height;
	}

public:
	string name;
	int age;
	int height;

};

bool campareperson12(person12& p1, person12& p2)
{
	if (p1.age == p2.age)
		return p1.height > p2.height;
	else
		return p1.age < p2.age;
}


void listproject(void)
{
	int tempage = 0;
	int tempheight = 0;

	list<person12>p;
	person12 p1("悟空", 1825, 18000);
	person12 p2("悟净", 25, 25);
	person12 p3("悟能", 8741, 1589);
	person12 p4("唐曾", 25, 12);
	person12 p5("如来", 25, 188000);
	person12 p6("观音", 48595, 2895);
	person12 p7("二郎神", 1024, 7859);
	person12 p8("哮天犬", 25, 4564);
	person12 p9("雷震子", 763210, 7859);
	person12 p10("哪吒", 25, 74582);

	//添加进列表
	
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	p.push_back(p5);
	p.push_back(p6);
	p.push_back(p7);
	p.push_back(p8);
	p.push_back(p9);
	p.push_back(p10);

	for (list<person12>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "姓名：" << it->name << "\t年龄：" << it->age << "\t身高：" << it->height << endl;
	}

	cout << "-----------------------------------------------" << endl;
	p.sort(campareperson12);
	for (list<person12>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "姓名：" << it->name << "\t年龄：" << it->age << "\t身高：" << it->height << endl;
	}

}










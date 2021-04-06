#include <iostream>
using namespace std;



void stringinsertanderase(void)
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl; 
	str.erase(1, 3); //从1号位置开始删除3个字符 
	cout << str << endl;
}
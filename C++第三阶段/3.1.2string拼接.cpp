#include <iostream>
using namespace std;

/*
string& operator+=(const char* str); //重载+=操作符
string& operator+=(const char c); //重载+=操作符
string& operator+=(const string& str); //重载+=操作符
string& append(const char *s); //把字符串s连接到当前字符串结尾
string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s); //同operator+=(const string& str)
string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾
*/

//字符串拼接
void stringappend(void)
{
	string s1 = "我";
	s1 += "是";
	cout << s1 << endl;
	s1 += ':';
	cout << s1 << endl;
	string s2 = "王大锤";
	s1 += s2;
	cout << s1 << endl;
	s1.append(",我今年");
	cout << s1 << endl;
	s1.append("12568912",2);
	cout << s1 << endl;
	s1.append("腻害岁了。", 4, 6);//从第4个字符开始，截取6个字符（注意一个汉字占用两个字符）---拼接到s1尾部
	cout << s1 << endl;
}

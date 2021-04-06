#include <iostream>
using namespace std;

/*
int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n,const char* s); //替换从pos开始的n个字符为字符串s
*/

void stringfindandreplace(void)
{
	string str = "abcdefggfedcba";
	int pos = str.find("de");
	if (pos == -1)
		cout << "未找到" << endl;
	else
		cout << "pos = " << pos << endl;

	//从str字符串的8位置开始查找，查找字符串"abc"前两个字符(ab)在str字符串中出现的位置
	pos = str.find("cba",8,2);
	if (pos == -1)
		cout << "未找到" << endl;
	else
		cout << "pos = " << pos << endl;

	pos = str.rfind("de"); 
	if (pos == -1)
		cout << "未找到" << endl;
	else
		cout << "pos = " << pos << endl;
	//从str字符串的第1个位置开始的后2个字符使用1111进行替换-->a1111defde(也就是把bc替换成1111)
	str.replace(1,2,"1111");
	cout << str << endl;

}


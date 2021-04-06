#include <iostream>
using namespace std;

/*
string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
string& operator=(const string &s); //把字符串s赋给当前的字符串
string& operator=(char c); //字符赋值给当前的字符串
string& assign(const char *s); //把字符串s赋给当前的字符串
string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s); //把字符串s赋给当前字符串
string& assign(int n, char c); //用n个字符c赋给当前字符串
*/

void stringbase(void)
{
	string s1;
	s1.assign("hello world", 5);
	cout << s1 << endl;
	
	s1.assign("5655656");
	cout << s1 << endl;

	s1.assign(10, '6');
	cout << s1 << endl;
}



#include <iostream>
using namespace std;

void stringson(void)
{
	string str = "abcdefg"; 
	string subStr = str.substr(1, 3);//从1位置开始向后数3个，返回 
	cout << "subStr = " << subStr << endl; 
	string email = " hello@sina.com"; 
	int pos = email.find("@"); 
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;
}
#include <iostream>
using namespace std;

void stringson(void)
{
	string str = "abcdefg"; 
	string subStr = str.substr(1, 3);//��1λ�ÿ�ʼ�����3�������� 
	cout << "subStr = " << subStr << endl; 
	string email = " hello@sina.com"; 
	int pos = email.find("@"); 
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;
}
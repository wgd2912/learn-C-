#include <iostream>
using namespace std;

/*
string& operator=(const char* s); //char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string &s); //���ַ���s������ǰ���ַ���
string& operator=(char c); //�ַ���ֵ����ǰ���ַ���
string& assign(const char *s); //���ַ���s������ǰ���ַ���
string& assign(const char *s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s); //���ַ���s������ǰ�ַ���
string& assign(int n, char c); //��n���ַ�c������ǰ�ַ���
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



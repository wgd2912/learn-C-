#include <iostream>
using namespace std;

/*
int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n,const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

void stringfindandreplace(void)
{
	string str = "abcdefggfedcba";
	int pos = str.find("de");
	if (pos == -1)
		cout << "δ�ҵ�" << endl;
	else
		cout << "pos = " << pos << endl;

	//��str�ַ�����8λ�ÿ�ʼ���ң������ַ���"abc"ǰ�����ַ�(ab)��str�ַ����г��ֵ�λ��
	pos = str.find("cba",8,2);
	if (pos == -1)
		cout << "δ�ҵ�" << endl;
	else
		cout << "pos = " << pos << endl;

	pos = str.rfind("de"); 
	if (pos == -1)
		cout << "δ�ҵ�" << endl;
	else
		cout << "pos = " << pos << endl;
	//��str�ַ����ĵ�1��λ�ÿ�ʼ�ĺ�2���ַ�ʹ��1111�����滻-->a1111defde(Ҳ���ǰ�bc�滻��1111)
	str.replace(1,2,"1111");
	cout << str << endl;

}


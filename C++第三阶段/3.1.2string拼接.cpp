#include <iostream>
using namespace std;

/*
string& operator+=(const char* str); //����+=������
string& operator+=(const char c); //����+=������
string& operator+=(const string& str); //����+=������
string& append(const char *s); //���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s); //ͬoperator+=(const string& str)
string& append(const string &s, int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

//�ַ���ƴ��
void stringappend(void)
{
	string s1 = "��";
	s1 += "��";
	cout << s1 << endl;
	s1 += ':';
	cout << s1 << endl;
	string s2 = "����";
	s1 += s2;
	cout << s1 << endl;
	s1.append(",�ҽ���");
	cout << s1 << endl;
	s1.append("12568912",2);
	cout << s1 << endl;
	s1.append("�度���ˡ�", 4, 6);//�ӵ�4���ַ���ʼ����ȡ6���ַ���ע��һ������ռ�������ַ���---ƴ�ӵ�s1β��
	cout << s1 << endl;
}

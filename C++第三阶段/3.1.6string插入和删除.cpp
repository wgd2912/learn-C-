#include <iostream>
using namespace std;



void stringinsertanderase(void)
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl; 
	str.erase(1, 3); //��1��λ�ÿ�ʼɾ��3���ַ� 
	cout << str << endl;
}
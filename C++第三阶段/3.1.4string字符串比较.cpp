#include <iostream>
using namespace std;


void stringcmp(void)
{
	string s1 = "hello"; 
	string s2 = "aello"; 
	int ret = s1.compare(s2); 
	if (ret == 0) 
	{ 
		cout << "s1 ���� s2" << endl; 
	}
	else if (ret > 0) 
	{
		cout << "s1 ���� s2" << endl;
	}
	else
	{ 
		cout << "s1 С�� s2" << endl;
	}
}



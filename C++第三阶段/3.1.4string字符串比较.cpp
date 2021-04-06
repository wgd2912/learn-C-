#include <iostream>
using namespace std;


void stringcmp(void)
{
	string s1 = "hello"; 
	string s2 = "aello"; 
	int ret = s1.compare(s2); 
	if (ret == 0) 
	{ 
		cout << "s1 等于 s2" << endl; 
	}
	else if (ret > 0) 
	{
		cout << "s1 大于 s2" << endl;
	}
	else
	{ 
		cout << "s1 小于 s2" << endl;
	}
}



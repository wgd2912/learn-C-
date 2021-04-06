#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
#include <time.h>
/*
���
����bool���͵ķº�����Ϊν��
���operator()����һ����������ô����һԪν��
���operator()����������������ô������Ԫν��
*/

//����ν��
class predicate
{
public:
	bool operator()(int val)//һԪν��
	{
		return val > 5;
	}
	bool operator()(int v1, int v2)//��Ԫν��
	{
		return v1 > v2;
	}
};

void predicateprintf(vector<int>& v)
{
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

void predicatetest(void)
{
	//srand((unsigned int)time(NULL));
	int score = 0;
	vector<int> v1;
	for (int i = 0; i < 15; i++)
	{
		
		score = rand() % 20;
		v1.push_back(score);
	}

	//һԪν��
	vector<int>::iterator pos = find_if(v1.begin(),v1.end(), predicate());
	if (pos != v1.end())
	{
		cout << "�ҵ�����5����" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
	cout << "����ǰ��";
	predicateprintf(v1);

	cout << "�����";
	sort(v1.begin(),v1.end());
	predicateprintf(v1);

	cout << "�����";
	sort(v1.begin(), v1.end(),predicate());
	predicateprintf(v1);
}
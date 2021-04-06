#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
#include <time.h>
/*
概念：
返回bool类型的仿函数称为谓词
如果operator()接受一个参数，那么叫做一元谓词
如果operator()接受两个参数，那么叫做二元谓词
*/

//创建谓词
class predicate
{
public:
	bool operator()(int val)//一元谓词
	{
		return val > 5;
	}
	bool operator()(int v1, int v2)//二元谓词
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

	//一元谓词
	vector<int>::iterator pos = find_if(v1.begin(),v1.end(), predicate());
	if (pos != v1.end())
	{
		cout << "找到大于5的数" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
	cout << "排序前：";
	predicateprintf(v1);

	cout << "排序后：";
	sort(v1.begin(),v1.end());
	predicateprintf(v1);

	cout << "排序后：";
	sort(v1.begin(), v1.end(),predicate());
	predicateprintf(v1);
}
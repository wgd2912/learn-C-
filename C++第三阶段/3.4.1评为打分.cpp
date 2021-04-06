#include <iostream>
using namespace std;

#include <vector>
#include <deque>
#include <algorithm>
#include <time.h>

class player
{
public:
	player(string name, int score);

public:
	string name;
	int score;
};
player::player(string name, int score)
{
	this->name = name;
	this->score = score;
}

void createplayer(vector<player>& p)
{
	string allname = "ABCDE";
	string name;
	for (int i = 0; i < 5; i++)//五名选手
	{
		name = allname[i];
		player pl(name, 0);
		p.push_back(pl);
	}
}

//打分
void getscore(vector<player>& p)
{
	deque<int> d;//相当于二维
	int score = 0;
	int sum = 0;

	for (vector<player>::iterator it = p.begin(); it != p.end(); it++)
	{
		sum = 0;
		//打分
		for (int i = 0; i < 10; i++)
		{
			score = rand() % 41 + 60;
			d.push_back(score);
		}
		//排序
		sort(d.begin(), d.end());
		//掐头去尾
		d.pop_front();
		d.pop_back();
		//取平均值
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}

		cout << it->name << "的分数是：";
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		it->score = sum / d.size();
		cout << "数组容量：" << d.size() << endl;
		d.clear();
	}
}

void shownameandscore(vector<player>& p)
{
	for (vector<player>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "姓名：" << it->name << " 得分：" << it->score << endl;
		//cout << "--------------------------------------------------------" << endl;
	}
}

void score_competition(void)
{
	vector<player> p;
	//创建选手
	createplayer(p);
	//打分
	getscore(p);
	//显示姓名和得分
	shownameandscore(p);
}





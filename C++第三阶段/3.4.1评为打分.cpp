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
	for (int i = 0; i < 5; i++)//����ѡ��
	{
		name = allname[i];
		player pl(name, 0);
		p.push_back(pl);
	}
}

//���
void getscore(vector<player>& p)
{
	deque<int> d;//�൱�ڶ�ά
	int score = 0;
	int sum = 0;

	for (vector<player>::iterator it = p.begin(); it != p.end(); it++)
	{
		sum = 0;
		//���
		for (int i = 0; i < 10; i++)
		{
			score = rand() % 41 + 60;
			d.push_back(score);
		}
		//����
		sort(d.begin(), d.end());
		//��ͷȥβ
		d.pop_front();
		d.pop_back();
		//ȡƽ��ֵ
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}

		cout << it->name << "�ķ����ǣ�";
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		it->score = sum / d.size();
		cout << "����������" << d.size() << endl;
		d.clear();
	}
}

void shownameandscore(vector<player>& p)
{
	for (vector<player>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "������" << it->name << " �÷֣�" << it->score << endl;
		//cout << "--------------------------------------------------------" << endl;
	}
}

void score_competition(void)
{
	vector<player> p;
	//����ѡ��
	createplayer(p);
	//���
	getscore(p);
	//��ʾ�����͵÷�
	shownameandscore(p);
}





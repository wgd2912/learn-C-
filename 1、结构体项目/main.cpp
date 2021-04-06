#include <iostream>

using namespace std;

struct student
{
	string name;
	int score;
};
struct teacher
{
	string name;
	student stuarr[5];
};

void allocateSpace(teacher tarr[], int len)
{
	string tname = "教师";
	string sname = "学生";
	string namesp = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tarr[i].name = tname + namesp[i];
		for (int j = 0; j < 5; j++)
		{
			tarr[i].stuarr[j].name = sname + namesp[j];
			tarr[i].stuarr[j].score = rand() % 61 + 40;
		}
	}

}

void allprintf(teacher tarr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tarr[i].name;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t姓名：" << tarr[i].stuarr[j].name << "\t分数" << tarr[i].stuarr[j].score << endl;
		}
	}
}


int main()
{
	teacher tarr[3];
	int len = sizeof(tarr) / sizeof(teacher);
	allocateSpace(tarr, len);
	allprintf(tarr, len);

	system("pause");
	return 0;
}

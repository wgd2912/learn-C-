#include <iostream>
using namespace std;
#include "菜单功能实现.h"

int main()
{
	int select = 0;
	menufuncrealize mfr;
	while (1)
	{
		mfr.ShowMenu();
		cout << "请输入您的选择：";
		cin >> select;
		switch (select)
		{
		case 0:
			mfr.exit_system();
			return 0;
			break;
		case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cout << "请输入正确的编号" << endl;
		}
	}

	system("pause");
	return 0;
}





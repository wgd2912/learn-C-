#include <iostream>
#include "workspace.h"
using namespace std;

int main()
{
	workspace ws;
	int option;
	while (1)
	{
		ws.Menu_Display();
		cout << "请输入序列号：";
		cin >> option;

		switch (option)
		{
		case 0:
			ws.exitsystem();
			break;
		case 1:
			ws.addemp();
			break;
		case 2:
			ws.display_emp_info();
			break;
		case 3:
			ws.deleteemp();
			break;
		case 4:
			ws.modificatemp();
			break;
		case 5:
			ws.seekempinfo();
			break;
		case 6:
			ws.sorkempid();
			break;
		case 7:
			ws.deleteempfile();
			break;
		default:
			cout << "请重新输入" << endl;
		}
	}
	
}




#include <iostream>
using namespace std;
#include "�˵�����ʵ��.h"

int main()
{
	int select = 0;
	menufuncrealize mfr;
	while (1)
	{
		mfr.ShowMenu();
		cout << "����������ѡ��";
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
			cout << "��������ȷ�ı��" << endl;
		}
	}

	system("pause");
	return 0;
}





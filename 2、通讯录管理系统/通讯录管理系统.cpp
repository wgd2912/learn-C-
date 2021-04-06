#include <iostream>
#include "function.h"
#include "Linkedlist.h"

using namespace std;

void Menu_Display(void)
{
	cout << "***************************" << endl; 
	cout << "****** 1、添加联系人 ******" << endl; 
	cout << "****** 2、显示联系人 ******" << endl; 
	cout << "****** 3、删除联系人 ******" << endl; 
	cout << "****** 4、查找联系人 ******" << endl; 
	cout << "****** 5、修改联系人 ******" << endl; 
	cout << "****** 6、清空联系人 ******" << endl; 
	cout << "****** 0、退出通讯录 ******" << endl; 
	cout << "***************************" << endl;
}


int main()
{
	Creation_Head();

	int select = 100;//功能选项

	while (1)
	{
		p2:
		Menu_Display();
		cin >> select;
		if (select < 0 || select > 6)
		{
			cout << "请输入正确指令" << endl;
			goto p2;
		}
		switch (select)
		{
			case 0://退出通讯录
				cout << "欢迎下次使用" << endl;
				goto p1;
			case 1://添加联系人
				Add_Contacts();
				break;
			case 2://显示联系人
				Show_Contacts();
				break;
			case 3://删除联系人
				Delete_Contacts();
				break;
			case 4://查找联系人
				Seek_Contacts();
				break;
			case 5://修改联系人
				Change_Contacts();
				break;
			case 6://清空联系人
				Empty_Conatacts();
				break;
			default:break;
		}
		select = 7;
	}
	
	p1:
	system("pause");
	return 0;
}


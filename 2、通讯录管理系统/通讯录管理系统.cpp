#include <iostream>
#include "function.h"
#include "Linkedlist.h"

using namespace std;

void Menu_Display(void)
{
	cout << "***************************" << endl; 
	cout << "****** 1�������ϵ�� ******" << endl; 
	cout << "****** 2����ʾ��ϵ�� ******" << endl; 
	cout << "****** 3��ɾ����ϵ�� ******" << endl; 
	cout << "****** 4��������ϵ�� ******" << endl; 
	cout << "****** 5���޸���ϵ�� ******" << endl; 
	cout << "****** 6�������ϵ�� ******" << endl; 
	cout << "****** 0���˳�ͨѶ¼ ******" << endl; 
	cout << "***************************" << endl;
}


int main()
{
	Creation_Head();

	int select = 100;//����ѡ��

	while (1)
	{
		p2:
		Menu_Display();
		cin >> select;
		if (select < 0 || select > 6)
		{
			cout << "��������ȷָ��" << endl;
			goto p2;
		}
		switch (select)
		{
			case 0://�˳�ͨѶ¼
				cout << "��ӭ�´�ʹ��" << endl;
				goto p1;
			case 1://�����ϵ��
				Add_Contacts();
				break;
			case 2://��ʾ��ϵ��
				Show_Contacts();
				break;
			case 3://ɾ����ϵ��
				Delete_Contacts();
				break;
			case 4://������ϵ��
				Seek_Contacts();
				break;
			case 5://�޸���ϵ��
				Change_Contacts();
				break;
			case 6://�����ϵ��
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


#include "function.h"
#include "Linkedlist.h"

//添加联系人操作，包括姓名、性别、年龄、电话、住址
void Add_Contacts(void)
{
	int state;

p1:
	CONTACTS newcontacts;

	cout << "请输入姓名：";
	cin >> newcontacts.name;

	cout << "请输入性别：";
	cin >> newcontacts.sex;

	cout << "请输入年龄：";
	cin >> newcontacts.age;

	cout << "请输入电话：";
	cin >> newcontacts.tel;

	cout << "请输入住址：";
	cin >> newcontacts.address;

	cout << "请再次确认你将要添加的信息：" << newcontacts.name << " " << newcontacts.sex << " " << newcontacts.age << " " << newcontacts.tel << " " << newcontacts.address << endl;

	cout << "确认请按1、重新输入请按2、退出请按3" << endl;

	cin >> state;

	if (state == 1)
	{
		if (NULL == Seek_Linkedlist(head, newcontacts.name))
		{
			AddList_End(head, newcontacts);
			cout << "添加成功" << endl;
			return;
		}
		else
		{
			cout << "联系人已经存在，添加失败" << endl;
			return;
		}
	}	
	else if (state == 2)
	{
//		memset(newcontacts,0,sizeof(newcontacts));
		goto p1;
	}
	else
		return;	
}
//显示联系人
void Show_Contacts(void)
{
	if (Show_List_Content(head))
	{
		cout << "联系人显示完毕" << endl;
	}
	else
	{
		cout << "通讯录还没有联系人" << endl;
	}
	
}

//删除联系人
void Delete_Contacts(void)
{
	string del_name;
	cout << "请输入想要删除的联系人的姓名：";
	cin >> del_name;
	cout << del_name << endl;
	Del_Linkedlist(head, del_name);
}

void Seek_Contacts(void)
{
	string seekname;
	LINKEDLIST* seek_result;
	cout << "请输入想要查找联系人的姓名：";
	cin >> seekname;
	seek_result = Seek_Linkedlist(head, seekname);
	if (seek_result)
	{
		cout << "查找成功" << endl;
		cout << seek_result->contacts.name << "\t" << seek_result->contacts.sex << "\t" << seek_result->contacts.age << "\t" << seek_result->contacts.tel << "\t" << seek_result->contacts.address << endl;
	}
	else
	{
		cout << "查找失败，没有该联系人" << endl;
	}
}


void Change_Contacts(void)
{
	string target_name;
	string change_name;
	cout << "请输入你要修改的姓名：";
	cin >> target_name;
	cout << "修改成什么：";
	cin >> change_name;
	Change_List(head, target_name, change_name);
}

void Empty_Conatacts(void)
{
	head->next = NULL;
}




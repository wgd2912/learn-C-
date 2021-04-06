#include "Linkedlist.h"

LINKEDLIST* head;

//创建头
LINKEDLIST* Creation_Head(void)
{
	head = new LINKEDLIST;
	head->next = NULL;
	return head;
}
//创建新节点
LINKEDLIST* Create_List(CONTACTS data)
{
	LINKEDLIST* newlist = new LINKEDLIST;
	newlist->contacts = data;
	newlist->next = NULL;
	return newlist;
}

//添加新节点 
void AddList_End(LINKEDLIST *head,CONTACTS data)
{
	LINKEDLIST* temphead = head;
	LINKEDLIST *newlist = Create_List(data);
	while (temphead->next != NULL)
	{
		temphead = temphead->next;
	}
	temphead->next = newlist;
//	temphead = newlist;
	newlist->next = NULL;
}

int Show_List_Content(LINKEDLIST* head)
{
	int num = 0;
	LINKEDLIST* temphead = head->next;
	while (temphead)
	{
		cout << temphead->contacts.name << "\t" << temphead->contacts.sex << "\t" << temphead->contacts.age << "\t" << temphead->contacts.tel << "\t" << temphead->contacts.address << endl;
		temphead = temphead->next;
		num++;
	}
	return num;
}
//查找节点
LINKEDLIST* Seek_Linkedlist(LINKEDLIST* head, string& target)
{
	int flag = 0;
	LINKEDLIST* temphead = head->next;

	while (temphead != NULL)
	{
		if (temphead->contacts.name == target)
		{
			flag = 1;
			break;
		}
		temphead = temphead->next;
	}
	if (flag == 1)
		return temphead;
	return NULL;
}

void Change_List(LINKEDLIST* head, string& target,string &changename)
{
	LINKEDLIST* templist = Seek_Linkedlist(head, target);
	if (templist)
	{
		templist->contacts.name = changename;
		cout << "修改成功" << endl;
		return;
	}
	cout << "没有该联系人，修改失败" << endl;
}


//删除链表操作，参数target表示目标地址，head表示链表头
void Del_Linkedlist(LINKEDLIST* head, string& target)
{
	int flag = 0;

	LINKEDLIST* temphead1 = head;
	LINKEDLIST* temphead2 = head->next;
	while (temphead2 != NULL)
	{
		if (temphead2->contacts.name == target)
		{
			flag = 1;
			break;
		}
		temphead1 = temphead2;
		temphead2 = temphead2->next;
	}
	if (flag == 1)
	{
		temphead1->next = temphead2->next;
		delete temphead2;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
}




#include "list.h"

LIST *listhead;//创建链表头

/*创建链表头*/
void create_head(void)
{
	listhead = new LIST;
	listhead->next = NULL;
}
/*创建新链表*/
LIST* create_newlist(INFO data)
{
	LIST* newlist = new LIST;
	newlist->info = data;
	newlist->next = NULL;
	return newlist;
}
/*添加新链表--头插 or 尾插*/
void add_newlist(LIST* head, INFO data)
{
	LIST* temphead = head;
	LIST* newlist = create_newlist(data);
	/*头插----start*/
	while (temphead->next != NULL)
	{
		temphead = temphead->next;
	}
	temphead->next = newlist;
	newlist->next = NULL;
	/*头插----end*/

	///*尾插----start*/
	//head->next = newlist;
	//newlist->next = temphead->next;
	///*尾插----end*/
}

/*显示链表*/
int show_list(LIST* head)
{
	int num = 0;
	LIST* temphead = head->next;
	while (temphead)
	{
		cout << temphead->info.name << "\t" << temphead->info.age << endl;
		temphead = temphead->next;
		num++;
	}
	return num;
}
/*查找链表*/
LIST* seek_list(LIST* head, char* name)
{
	int flag = 0;
	LIST* temphead = head->next;
	while (temphead != NULL)
	{
		if (name == temphead->info.name)
		{
			flag = 1;
			break;
		}
		temphead = temphead->next;		
	}
	if(flag == 1)
		return temphead;
	return NULL;
}

/*更改链表*/
void change_list(LIST* head, char* name, char *newname)
{
	LIST* temphead = seek_list(head, name);
	if (temphead)
	{
		temphead->info.name = newname;
		cout << "修改成功" << endl;
		return;
	}
	cout << "没有该联系人，修改失败" << endl;
}
/*删除链表*/
void delete_list(LIST* head, char* name)
{
	int flag = 0;
	LIST* temphead1 = head;
	LIST* temphead2 = head->next;

	while (temphead2 != NULL)
	{
		if (temphead2->info.name == name)
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





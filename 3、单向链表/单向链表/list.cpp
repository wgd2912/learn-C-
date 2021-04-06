#include "list.h"

LIST *listhead;//��������ͷ

/*��������ͷ*/
void create_head(void)
{
	listhead = new LIST;
	listhead->next = NULL;
}
/*����������*/
LIST* create_newlist(INFO data)
{
	LIST* newlist = new LIST;
	newlist->info = data;
	newlist->next = NULL;
	return newlist;
}
/*���������--ͷ�� or β��*/
void add_newlist(LIST* head, INFO data)
{
	LIST* temphead = head;
	LIST* newlist = create_newlist(data);
	/*ͷ��----start*/
	while (temphead->next != NULL)
	{
		temphead = temphead->next;
	}
	temphead->next = newlist;
	newlist->next = NULL;
	/*ͷ��----end*/

	///*β��----start*/
	//head->next = newlist;
	//newlist->next = temphead->next;
	///*β��----end*/
}

/*��ʾ����*/
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
/*��������*/
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

/*��������*/
void change_list(LIST* head, char* name, char *newname)
{
	LIST* temphead = seek_list(head, name);
	if (temphead)
	{
		temphead->info.name = newname;
		cout << "�޸ĳɹ�" << endl;
		return;
	}
	cout << "û�и���ϵ�ˣ��޸�ʧ��" << endl;
}
/*ɾ������*/
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
}





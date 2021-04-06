#include "Linkedlist.h"

LINKEDLIST* head;

//����ͷ
LINKEDLIST* Creation_Head(void)
{
	head = new LINKEDLIST;
	head->next = NULL;
	return head;
}
//�����½ڵ�
LINKEDLIST* Create_List(CONTACTS data)
{
	LINKEDLIST* newlist = new LINKEDLIST;
	newlist->contacts = data;
	newlist->next = NULL;
	return newlist;
}

//����½ڵ� 
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
//���ҽڵ�
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
		cout << "�޸ĳɹ�" << endl;
		return;
	}
	cout << "û�и���ϵ�ˣ��޸�ʧ��" << endl;
}


//ɾ���������������target��ʾĿ���ַ��head��ʾ����ͷ
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
}




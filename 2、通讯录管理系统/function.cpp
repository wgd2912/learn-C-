#include "function.h"
#include "Linkedlist.h"

//�����ϵ�˲����������������Ա����䡢�绰��סַ
void Add_Contacts(void)
{
	int state;

p1:
	CONTACTS newcontacts;

	cout << "������������";
	cin >> newcontacts.name;

	cout << "�������Ա�";
	cin >> newcontacts.sex;

	cout << "���������䣺";
	cin >> newcontacts.age;

	cout << "������绰��";
	cin >> newcontacts.tel;

	cout << "������סַ��";
	cin >> newcontacts.address;

	cout << "���ٴ�ȷ���㽫Ҫ��ӵ���Ϣ��" << newcontacts.name << " " << newcontacts.sex << " " << newcontacts.age << " " << newcontacts.tel << " " << newcontacts.address << endl;

	cout << "ȷ���밴1�����������밴2���˳��밴3" << endl;

	cin >> state;

	if (state == 1)
	{
		if (NULL == Seek_Linkedlist(head, newcontacts.name))
		{
			AddList_End(head, newcontacts);
			cout << "��ӳɹ�" << endl;
			return;
		}
		else
		{
			cout << "��ϵ���Ѿ����ڣ����ʧ��" << endl;
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
//��ʾ��ϵ��
void Show_Contacts(void)
{
	if (Show_List_Content(head))
	{
		cout << "��ϵ����ʾ���" << endl;
	}
	else
	{
		cout << "ͨѶ¼��û����ϵ��" << endl;
	}
	
}

//ɾ����ϵ��
void Delete_Contacts(void)
{
	string del_name;
	cout << "��������Ҫɾ������ϵ�˵�������";
	cin >> del_name;
	cout << del_name << endl;
	Del_Linkedlist(head, del_name);
}

void Seek_Contacts(void)
{
	string seekname;
	LINKEDLIST* seek_result;
	cout << "��������Ҫ������ϵ�˵�������";
	cin >> seekname;
	seek_result = Seek_Linkedlist(head, seekname);
	if (seek_result)
	{
		cout << "���ҳɹ�" << endl;
		cout << seek_result->contacts.name << "\t" << seek_result->contacts.sex << "\t" << seek_result->contacts.age << "\t" << seek_result->contacts.tel << "\t" << seek_result->contacts.address << endl;
	}
	else
	{
		cout << "����ʧ�ܣ�û�и���ϵ��" << endl;
	}
}


void Change_Contacts(void)
{
	string target_name;
	string change_name;
	cout << "��������Ҫ�޸ĵ�������";
	cin >> target_name;
	cout << "�޸ĳ�ʲô��";
	cin >> change_name;
	Change_List(head, target_name, change_name);
}

void Empty_Conatacts(void)
{
	head->next = NULL;
}




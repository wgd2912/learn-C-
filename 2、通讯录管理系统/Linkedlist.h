#include <iostream>

using namespace std;

struct CONTACTS
{
	string name;
	string sex;
	int age;
	string tel;
	string address;
};

struct LINKEDLIST
{
	CONTACTS contacts;
	struct LINKEDLIST *next;
};

extern LINKEDLIST* head;


LINKEDLIST* Creation_Head(void);
LINKEDLIST* Create_List(CONTACTS data);
void AddList_End(LINKEDLIST* head, CONTACTS data);
int Show_List_Content(LINKEDLIST* head);
LINKEDLIST* Seek_Linkedlist(LINKEDLIST* head, string& target); 
void Change_List(LINKEDLIST* head, string& target, string& changename);
void Del_Linkedlist(LINKEDLIST* head, string& target);

#include "�˵�����ʵ��.h"

menufuncrealize::menufuncrealize()
{
	this->empnum = 0;
	this->emparr = NULL;
}

menufuncrealize::~menufuncrealize()
{
	if (this->emparr != NULL)
	{
		delete[]emparr;
		this->empnum = 0;
		this->emparr = NULL;
	}
}

void menufuncrealize::ShowMenu(void)
{
	cout << "**************************************" << endl;
	cout << "*************0���˳�����ϵͳ**********" << endl;
	cout << "*************1�����ְ����Ϣ**********" << endl;
	cout << "*************2����ʾְ����Ϣ**********" << endl;
	cout << "*************3��ɾ��ְ����Ϣ**********" << endl;
	cout << "*************4���޸�ְ����Ϣ**********" << endl;
	cout << "*************5������ְ����Ϣ**********" << endl;
	cout << "*************6�����ձ������**********" << endl;
	cout << "*************7�����ְ����Ϣ**********" << endl;
	cout << "**************************************" << endl;
}
void menufuncrealize::exit_system(void)
{
	cout << "��л����ʹ�ã�����" << endl;
}
void menufuncrealize::add_employee(void)
{
	string name;		//����
	int idnum;		    //���
	string jobtitle;	//ְλ����
	string jobcontent;	//��������
	string department;	//��������

	worker* wk = new ;

	cout << "������������";
	cin >> name;
	cout << "�������ţ�";
	cin >> idnum;
	cout << "������ְλ���ƣ�";
	cin >> jobtitle;
	cout << "�����빤�����ݣ�";
	cin >> jobcontent;
	cout << "�������������ţ�";
	cin >> department;
	if (jobtitle == "��ͨԱ��")
	{

	}


}
void menufuncrealize::show_employee(void)
{
	cout << "���޹���" << endl;
}
void menufuncrealize::del_employee(void)
{
	cout << "���޹���" << endl;
}
void menufuncrealize::change_employee(void)
{
	cout << "���޹���" << endl;
}
void menufuncrealize::seek_employee(void)
{
	cout << "���޹���" << endl;
}
void menufuncrealize::sort_employee(void)
{
	cout << "���޹���" << endl;
}
void menufuncrealize::clear_employee(void)
{
	cout << "���޹���" << endl;
}


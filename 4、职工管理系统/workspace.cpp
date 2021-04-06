#include "workspace.h"
#include <fstream>//�ļ�ͷ�ļ�

#define filename "empfile.txt"
workspace::workspace()
{
	this->initemparr();
}
workspace::~workspace()
{
	if (this->emparr != NULL)
	{
		delete[] this->emparr;
	}
}

int workspace::getempnum()
{
	int tempnum = 0;
	string t_jobproperties;
	string t_name;
	string t_jobcontent;
	string t_DeptId;
	int t_id;
	ifstream ifs;
	ifs.open(filename, ios::in);
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		this->emparr = NULL;//��ʼ��Ա����Ϣ
		ifs.close();
		return 0;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->emparr = NULL;//��ʼ��Ա����Ϣ
		ifs.close();
		return 0;
	}
	while (ifs >> t_jobproperties && ifs >> t_id && ifs >> t_DeptId && ifs >> t_name && ifs >> t_jobcontent)
	{
		tempnum++;
	}
	ifs.close();
	return tempnum;
}

void workspace::initemparr()
{
	//����������
	this->empnum = getempnum();
	if (this->empnum == 0)
	{
		//cout << "�ļ���û��Ա��" << endl;
		this->emparr = NULL;
		return;
	}
	//cout << "�Ѿ��� " << this->empnum << " ��" << endl;

	this->emparr = new worker * [this->empnum];
	ifstream ifs;
	//���ļ�
	ifs.open(filename, ios::in);

	int tempnum = 0;
	string t_jobproperties;
	string t_name;
	string t_jobcontent;
	string t_DeptId;
	int t_id;
	while (ifs >> t_jobproperties && ifs >> t_id && ifs >> t_DeptId && ifs >> t_name && ifs >> t_jobcontent)
	{
		worker* wk = NULL;
		if (t_jobproperties == "��ͨԱ��")
		{
			wk = new employee(t_id, t_name, t_DeptId, t_jobcontent, "��ͨԱ��");
		}
		else if (t_jobproperties == "����")
		{
			wk = new manager(t_id, t_name, t_DeptId, t_jobcontent, "����");
		}
		else if (t_jobproperties == "�ϰ�")
		{
			wk = new boss(t_id, t_name, t_DeptId, t_jobcontent, "�ϰ�");
		}
		this->emparr[tempnum++] = wk;
	}
	ifs.close();
}

//�����ݱ�����ļ�
void workspace::filesave()
{
	//����������
	ofstream ofs;
	//���ļ�--׷�ӵķ�ʽ
	ofs.open(filename,ios::out);
	//���ļ��������
	for (int i = 0; i < this->empnum; i++)
	{
		ofs << this->emparr[i]->jobproperties << "\t"//��λ����
			<< this->emparr[i]->id << "\t"			//Ա�����
			<< this->emparr[i]->DeptId << "\t"		//���ڲ�������
			<< this->emparr[i]->name << "\t"		//Ա������
			<< this->emparr[i]->jobcontent << "\n";	//��������
	}
	//�ر��ļ�
	ofs.close();
}

void workspace::Menu_Display()
{
	cout << "*****************************" << endl;
	cout << "****** 0���˳�������� ******" << endl;
	cout << "****** 1������ְ����Ϣ ******" << endl;
	cout << "****** 2����ʾְ����Ϣ ******" << endl;
	cout << "****** 3��ɾ����ְԱ�� ******" << endl;
	cout << "****** 4���޸�ְ����Ϣ ******" << endl;
	cout << "****** 5������ְ����Ϣ ******" << endl;
	cout << "****** 6�����ձ������ ******" << endl;
	cout << "****** 7����������ĵ� ******" << endl;
	cout << "*****************************" << endl;
}
void workspace::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
//����ĳһλԱ��������Ա�����ڵľ���λ��
int workspace::seekemp(int id)
{
	int index = -1;
	for (int i = 0; i < this->empnum; i++)
	{
		if (id == this->emparr[i]->id)
		{
			index = i;
			break;
		}	
	}
	return index;
}

//���ְ��
void workspace::addemp()
{
	int staffnum;
	string name;
	int *id;
	string DeptId;
	string jobcontent;

	int dselect;

	cout << "���������ְ����������";
	cin >> staffnum;
	if (staffnum > 0)
	{
		//����Ա��������
		int newstaffnum = staffnum + this->empnum;
		//������Ա���б��ַ
		worker** newspace = new worker * [newstaffnum];
		id = new int[newstaffnum];
		if (this->emparr != NULL)
		{
			for (int i = 0; i < this->empnum; i++)
			{
				newspace[i] = this->emparr[i];
			}
		}


		for (int i = 0; i < staffnum; i++)
		{
			cout << "������� " << i + 1 << " λְ������Ϣ" << endl;
			cout << "������";
			cin >> name;

			
			cout << "��ţ�";
		p1:
			cin >> id[i];

			for (int j = 0; j < this->empnum; j++)
			{
				if (id[i] == this->emparr[j]->id)
				{
					cout << "ְ������Ѿ���ʹ�ã����������룺";
					goto p1;
				}
			}
			for (int k = 0; k < i; k++)
			{
				if (id[i] == id[k])
				{
					cout << "ְ������Ѿ���ʹ�ã����������룺";
					goto p1;
				}
			}

			cout << "�������ţ�";
			cin >> DeptId;

			cout << "�������ݣ�";
			cin >> jobcontent;

			cout << "��ѡ���λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dselect;
			worker* wk = NULL;
			switch (dselect)
			{
			case 1:
				wk = new employee(id[i], name, DeptId, jobcontent, "��ͨԱ��");
				break;
			case 2:
				wk = new manager(id[i], name, DeptId, jobcontent, "����");
				break;
			case 3:
				wk = new boss(id[i], name, DeptId, jobcontent, "�ϰ�");
				break;
			}

			newspace[this->empnum + i] = wk;
		}
		//ɾ��ԭ���ռ�
		delete [] id;
		delete this->emparr;
		this->emparr = newspace;
		this->empnum = newstaffnum;
		//��ʾ��Ϣ 
		cout << "�ɹ����" << staffnum << "����ְ����" << endl;

		//������ļ�
		filesave();
	}
	else
	{
		cout << "��������" << endl;
	}
	//system("pause"); 
	//system("cls");
}
//��ʾԱ����Ϣ
void workspace::display_emp_info()
{
	int i = 0;
	if (this->empnum == 0)
	{
		cout << "�ù�˾��û��Ա��" << endl;
		return;
	}
	while (i != this->empnum)
	{
		cout << "��λ��" << this->emparr[i]->jobproperties << " \t"
			<< "ְ����ţ�" << this->emparr[i]->id << " \t"
			<< "ְ��������" << this->emparr[i]->name << " \t"
			<< "���ڲ��ţ�" << this->emparr[i]->DeptId << " \t"
			<< "�������ݣ�" << this->emparr[i]->jobcontent << endl;
		i++;
	}
}

//ɾ����ְԱ��
void workspace::deleteemp()
{
	if (this->empnum == 0)
	{
		cout << "�ù�˾��û��Ա��" << endl;
		return;
	}

	int delempnum;
	int index = 0;
	string y_n;
	cout << "������Ҫɾ��Ա����ţ�";
	p2:
	cin >> delempnum;
	index = seekemp(delempnum);
	if (index == -1)//
	{
		cout << "���޴��ˣ�������һ����ȷ��Ա����ţ�";
		goto p2;
	}
	else
	{
		cout << "�ٴ�ȷ���Ƿ�ɾ����Ա����Ϣ�� (y or n)";
		cin >> y_n;
		if (y_n == "y" || y_n == "Y")
		{
			for (int i = index; i < this->empnum - 1; i++)
			{
				this->emparr[i] = this->emparr[i + 1];
			}
			cout << "ɾ��Ա���ɹ�" << endl;
			this->empnum = this->empnum - 1;
			filesave();
		}
		else
		{
			cout << "ɾ��ʧ�ܣ����޴���" << endl;
		}
				
	}	
}
//�޸�ְ��
void workspace::modificatemp()
{
	if (this->empnum == 0)
	{
		cout << "�ù�˾��û��Ա��" << endl;
		return;
	}

	int modempid;
	int index;
	string name;
	int* id;
	string DeptId;
	string jobcontent;
	int dselect;

	cout << "��������Ҫ�޸�Ա����ְ���ţ�";
	cin >> modempid;
	index = seekemp(modempid);
	if (index != -1)//��ѯ�ɹ�
	{
		delete this->emparr[index];
		worker* wk = NULL;
		cout << "��������������";
		cin >> name;

		cout << "���������������ţ�";
		cin >> DeptId;

		cout << "�������¹������ݣ�";
		cin >> jobcontent;

		cout << "�������¸�λ��" << endl;
		cout << "1����ְͨ��" << endl;
		cout << "2������" << endl;
		cout << "3���ϰ�" << endl;
		cin >> dselect;
		switch (dselect)
		{
		case 1:
			wk = new employee(modempid, name, DeptId, jobcontent, "��ͨԱ��");
			break;
		case 2:
			wk = new manager(modempid, name, DeptId, jobcontent, "����");
			break;
		case 3:
			wk = new boss(modempid, name, DeptId, jobcontent, "�ϰ�");
			break;
		}
		this->emparr[index] = wk;
		cout << "�޸ĳɹ�" << endl;
		//������ļ�
		filesave();

	}
	else
	{
		cout << "�޸�ʧ�ܣ����޴���" << endl;
	}
}

void workspace::seekempinfo()
{
	if (this->empnum == 0)
	{
		cout << "�ù�˾��û��Ա��" << endl;
		return;
	}
	int seekempid;
	int index;
	cout << "��������Ҫ����Ա����ְ���ţ�";
	cin >> seekempid;
	index = seekemp(seekempid);
	if (index != -1)
	{
		cout << "��λ��" << this->emparr[index]->jobproperties << " \t"
			<< "ְ����ţ�" << this->emparr[index]->id << " \t"
			<< "ְ��������" << this->emparr[index]->name << " \t"
			<< "���ڲ��ţ�" << this->emparr[index]->DeptId << " \t"
			<< "�������ݣ�" << this->emparr[index]->jobcontent << endl;
	}
	else
	{
		cout << "����ʧ�ܣ�û�и���ϵ��" << endl;
	}
}
//���ձ�Ž�������
void workspace::sorkempid()
{
	int select;
	int tempid;
	worker* wk = NULL;
	cout << "��ѡ�������ǽ���" << endl;
	cout << "1������" << endl;
	cout << "2������" << endl;
	cin >> select;
	for (int i = 0; i < this->empnum-1; i++)
	{
		for (int j = i + 1; j < this->empnum; j++)
		{
			if (select == 1)//����
			{
				if (this->emparr[i]->id > this->emparr[j]->id)
				{
					wk = this->emparr[j];
					this->emparr[j] = this->emparr[i];
					this->emparr[i] = wk;
				}
			}
			else if (select == 2)//����
			{
				if (this->emparr[i]->id < this->emparr[j]->id)
				{
					wk = this->emparr[j];
					this->emparr[j] = this->emparr[i];
					this->emparr[i] = wk;
				}
			}
			
		}
	}
	cout << "������ɣ��������" << endl;
	this->display_emp_info();
	this->filesave();
}
//����ļ�
void workspace::deleteempfile()
{
	string y_n;
	cout << "��ȷ���Ƿ�����ļ�����y or n��";
	cin >> y_n;
	if (y_n == "y" || y_n == "Y")
	{
		//����ļ�--�������ɾ���ļ������´���--ios::trunc 
		ofstream ofs(filename, ios::trunc);
		ofs.close();

		if (this->emparr != NULL)//ɾ������ָ���д�ŵ�workerָ��ĵ�ַ
		{
			for (int i = 0; i < this->empnum; i++)
			{
				delete this->emparr[i];
			}
		}
		this->empnum = 0;
		delete [] this->emparr;
		this->emparr = NULL;
		cout << "����ļ��ɹ�" << endl;
	}
	else
	{
		cout << "����ļ�ʧ��" << endl;
	}
}
#include<iostream>
#include<fstream>


using namespace std;

class person15
{
public:
	char m_name[64];
	int m_age;
};
void write_binary(void)
{
	//1������ͷ�ļ�

	//2���������������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	person15 p = { "����ë",456 };

	//4��д�ļ�
	ofs.write((const char *)&p,sizeof(p));

	//5���ر��ļ� 
	ofs.close();
}


void read_binary(void)
{
	//1������ͷ�ļ�

	//2���������������
	ifstream ifs("person.txt", ios::in | ios::binary);

	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	if (!ifs.is_open()) 
	{ 
		cout << "�ļ���ʧ��" << endl; 
	}

	person15 p1;

	//4��д�ļ�
	ifs.read((char*)&p1, sizeof(p1));

	cout << "������ " << p1.m_name << " ���䣺 " << p1.m_age << endl;
	//5���ر��ļ� 
	ifs.close();
}






#include<iostream>
#include<fstream>
#include <string>
using namespace std;

void files_write(void)
{
	//����������
	ofstream ofs;
	ofs.open("F:\OneDrive\filestest01.txt", ios::out);
	ofs << "��Һã���������ë��"<<endl;
	ofs.close();
}

void files_read(void)
{
	//����������
	ifstream ifs;
	ifs.open("filestest01.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//��һ�ַ�ʽ
	/*char buf[1024] = {0};
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�ڶ��� 
	/*char buf[1024] = { 0 }; 
	while (ifs.getline(buf,sizeof(buf))) 
	{ 
		cout << buf << endl; 
	}*/

	//������
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//������
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
	ifs.close();
}

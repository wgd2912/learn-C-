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
	//1、包含头文件

	//2、创建输出流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3、打开文件
	//ofs.open("person.txt", ios::out | ios::binary);

	person15 p = { "王二毛",456 };

	//4、写文件
	ofs.write((const char *)&p,sizeof(p));

	//5、关闭文件 
	ofs.close();
}


void read_binary(void)
{
	//1、包含头文件

	//2、创建输出流对象
	ifstream ifs("person.txt", ios::in | ios::binary);

	//3、打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	if (!ifs.is_open()) 
	{ 
		cout << "文件打开失败" << endl; 
	}

	person15 p1;

	//4、写文件
	ifs.read((char*)&p1, sizeof(p1));

	cout << "姓名： " << p1.m_name << " 年龄： " << p1.m_age << endl;
	//5、关闭文件 
	ifs.close();
}






#include<iostream>
#include<fstream>
#include <string>
using namespace std;

void files_write(void)
{
	//创建流对象
	ofstream ofs;
	ofs.open("F:\OneDrive\filestest01.txt", ios::out);
	ofs << "大家好！我是王二毛！"<<endl;
	ofs.close();
}

void files_read(void)
{
	//创建流对象
	ifstream ifs;
	ifs.open("filestest01.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//第一种方式
	/*char buf[1024] = {0};
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//第二种 
	/*char buf[1024] = { 0 }; 
	while (ifs.getline(buf,sizeof(buf))) 
	{ 
		cout << buf << endl; 
	}*/

	//第三种
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//第四种
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
	ifs.close();
}

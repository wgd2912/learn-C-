#include "workspace.h"
#include <fstream>//文件头文件

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
		//cout << "文件不存在" << endl;
		this->emparr = NULL;//初始化员工信息
		ifs.close();
		return 0;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->emparr = NULL;//初始化员工信息
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
	//创建流对象
	this->empnum = getempnum();
	if (this->empnum == 0)
	{
		//cout << "文件中没有员工" << endl;
		this->emparr = NULL;
		return;
	}
	//cout << "已经有 " << this->empnum << " 人" << endl;

	this->emparr = new worker * [this->empnum];
	ifstream ifs;
	//打开文件
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
		if (t_jobproperties == "普通员工")
		{
			wk = new employee(t_id, t_name, t_DeptId, t_jobcontent, "普通员工");
		}
		else if (t_jobproperties == "经理")
		{
			wk = new manager(t_id, t_name, t_DeptId, t_jobcontent, "经理");
		}
		else if (t_jobproperties == "老板")
		{
			wk = new boss(t_id, t_name, t_DeptId, t_jobcontent, "老板");
		}
		this->emparr[tempnum++] = wk;
	}
	ifs.close();
}

//将数据保存成文件
void workspace::filesave()
{
	//创建流对象
	ofstream ofs;
	//打开文件--追加的方式
	ofs.open(filename,ios::out);
	//向文件输出内容
	for (int i = 0; i < this->empnum; i++)
	{
		ofs << this->emparr[i]->jobproperties << "\t"//岗位属性
			<< this->emparr[i]->id << "\t"			//员工编号
			<< this->emparr[i]->DeptId << "\t"		//所在部门名称
			<< this->emparr[i]->name << "\t"		//员工姓名
			<< this->emparr[i]->jobcontent << "\n";	//工作内容
	}
	//关闭文件
	ofs.close();
}

void workspace::Menu_Display()
{
	cout << "*****************************" << endl;
	cout << "****** 0、退出管理程序 ******" << endl;
	cout << "****** 1、增加职工信息 ******" << endl;
	cout << "****** 2、显示职工信息 ******" << endl;
	cout << "****** 3、删除离职员工 ******" << endl;
	cout << "****** 4、修改职工信息 ******" << endl;
	cout << "****** 5、查找职工信息 ******" << endl;
	cout << "****** 6、按照编号排序 ******" << endl;
	cout << "****** 7、清空所有文档 ******" << endl;
	cout << "*****************************" << endl;
}
void workspace::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
//查找某一位员工，返回员工存在的具体位置
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

//添加职工
void workspace::addemp()
{
	int staffnum;
	string name;
	int *id;
	string DeptId;
	string jobcontent;

	int dselect;

	cout << "请输入添加职工的数量：";
	cin >> staffnum;
	if (staffnum > 0)
	{
		//更新员工总人数
		int newstaffnum = staffnum + this->empnum;
		//开辟新员工列表地址
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
			cout << "请输入第 " << i + 1 << " 位职工的信息" << endl;
			cout << "姓名：";
			cin >> name;

			
			cout << "编号：";
		p1:
			cin >> id[i];

			for (int j = 0; j < this->empnum; j++)
			{
				if (id[i] == this->emparr[j]->id)
				{
					cout << "职工编号已经被使用，请重新输入：";
					goto p1;
				}
			}
			for (int k = 0; k < i; k++)
			{
				if (id[i] == id[k])
				{
					cout << "职工编号已经被使用，请重新输入：";
					goto p1;
				}
			}

			cout << "所属部门：";
			cin >> DeptId;

			cout << "工作内容：";
			cin >> jobcontent;

			cout << "请选择岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dselect;
			worker* wk = NULL;
			switch (dselect)
			{
			case 1:
				wk = new employee(id[i], name, DeptId, jobcontent, "普通员工");
				break;
			case 2:
				wk = new manager(id[i], name, DeptId, jobcontent, "经理");
				break;
			case 3:
				wk = new boss(id[i], name, DeptId, jobcontent, "老板");
				break;
			}

			newspace[this->empnum + i] = wk;
		}
		//删除原本空间
		delete [] id;
		delete this->emparr;
		this->emparr = newspace;
		this->empnum = newstaffnum;
		//提示信息 
		cout << "成功添加" << staffnum << "名新职工！" << endl;

		//保存成文件
		filesave();
	}
	else
	{
		cout << "输入有误" << endl;
	}
	//system("pause"); 
	//system("cls");
}
//显示员工信息
void workspace::display_emp_info()
{
	int i = 0;
	if (this->empnum == 0)
	{
		cout << "该公司还没有员工" << endl;
		return;
	}
	while (i != this->empnum)
	{
		cout << "岗位：" << this->emparr[i]->jobproperties << " \t"
			<< "职工编号：" << this->emparr[i]->id << " \t"
			<< "职工姓名：" << this->emparr[i]->name << " \t"
			<< "所在部门：" << this->emparr[i]->DeptId << " \t"
			<< "工作内容：" << this->emparr[i]->jobcontent << endl;
		i++;
	}
}

//删除离职员工
void workspace::deleteemp()
{
	if (this->empnum == 0)
	{
		cout << "该公司还没有员工" << endl;
		return;
	}

	int delempnum;
	int index = 0;
	string y_n;
	cout << "请输入要删除员工编号：";
	p2:
	cin >> delempnum;
	index = seekemp(delempnum);
	if (index == -1)//
	{
		cout << "查无此人，请输入一个正确的员工编号：";
		goto p2;
	}
	else
	{
		cout << "再次确认是否删除该员工信息： (y or n)";
		cin >> y_n;
		if (y_n == "y" || y_n == "Y")
		{
			for (int i = index; i < this->empnum - 1; i++)
			{
				this->emparr[i] = this->emparr[i + 1];
			}
			cout << "删除员工成功" << endl;
			this->empnum = this->empnum - 1;
			filesave();
		}
		else
		{
			cout << "删除失败，查无此人" << endl;
		}
				
	}	
}
//修改职工
void workspace::modificatemp()
{
	if (this->empnum == 0)
	{
		cout << "该公司还没有员工" << endl;
		return;
	}

	int modempid;
	int index;
	string name;
	int* id;
	string DeptId;
	string jobcontent;
	int dselect;

	cout << "请输入想要修改员工的职工号：";
	cin >> modempid;
	index = seekemp(modempid);
	if (index != -1)//查询成功
	{
		delete this->emparr[index];
		worker* wk = NULL;
		cout << "请输入新姓名：";
		cin >> name;

		cout << "请输入新所属部门：";
		cin >> DeptId;

		cout << "请输入新工作内容：";
		cin >> jobcontent;

		cout << "请输入新岗位：" << endl;
		cout << "1、普通职工" << endl;
		cout << "2、经理" << endl;
		cout << "3、老板" << endl;
		cin >> dselect;
		switch (dselect)
		{
		case 1:
			wk = new employee(modempid, name, DeptId, jobcontent, "普通员工");
			break;
		case 2:
			wk = new manager(modempid, name, DeptId, jobcontent, "经理");
			break;
		case 3:
			wk = new boss(modempid, name, DeptId, jobcontent, "老板");
			break;
		}
		this->emparr[index] = wk;
		cout << "修改成功" << endl;
		//保存成文件
		filesave();

	}
	else
	{
		cout << "修改失败，查无此人" << endl;
	}
}

void workspace::seekempinfo()
{
	if (this->empnum == 0)
	{
		cout << "该公司还没有员工" << endl;
		return;
	}
	int seekempid;
	int index;
	cout << "请输入想要查找员工的职工号：";
	cin >> seekempid;
	index = seekemp(seekempid);
	if (index != -1)
	{
		cout << "岗位：" << this->emparr[index]->jobproperties << " \t"
			<< "职工编号：" << this->emparr[index]->id << " \t"
			<< "职工姓名：" << this->emparr[index]->name << " \t"
			<< "所在部门：" << this->emparr[index]->DeptId << " \t"
			<< "工作内容：" << this->emparr[index]->jobcontent << endl;
	}
	else
	{
		cout << "查找失败，没有该联系人" << endl;
	}
}
//按照编号进行排序
void workspace::sorkempid()
{
	int select;
	int tempid;
	worker* wk = NULL;
	cout << "请选择升序还是降序" << endl;
	cout << "1：升序" << endl;
	cout << "2：降序" << endl;
	cin >> select;
	for (int i = 0; i < this->empnum-1; i++)
	{
		for (int j = i + 1; j < this->empnum; j++)
		{
			if (select == 1)//升序
			{
				if (this->emparr[i]->id > this->emparr[j]->id)
				{
					wk = this->emparr[j];
					this->emparr[j] = this->emparr[i];
					this->emparr[i] = wk;
				}
			}
			else if (select == 2)//降序
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
	cout << "排序完成，结果如下" << endl;
	this->display_emp_info();
	this->filesave();
}
//清空文件
void workspace::deleteempfile()
{
	string y_n;
	cout << "请确认是否清空文件：（y or n）";
	cin >> y_n;
	if (y_n == "y" || y_n == "Y")
	{
		//清空文件--如果存在删除文件并重新创建--ios::trunc 
		ofstream ofs(filename, ios::trunc);
		ofs.close();

		if (this->emparr != NULL)//删除二级指针中存放的worker指针的地址
		{
			for (int i = 0; i < this->empnum; i++)
			{
				delete this->emparr[i];
			}
		}
		this->empnum = 0;
		delete [] this->emparr;
		this->emparr = NULL;
		cout << "清空文件成功" << endl;
	}
	else
	{
		cout << "清空文件失败" << endl;
	}
}
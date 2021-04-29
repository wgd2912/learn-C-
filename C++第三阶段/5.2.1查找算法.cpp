#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>




class findperson
{
public:
	findperson()
	{

	}
	findperson(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	bool operator==(const findperson& p)
	{
		if (p.name == this->name && p.age == this->age)
		{
			return true;
		}
		return false;
	}

public:
	string name;
	int age;
};

class findif
{
public :
	bool operator()(int val)
	{
		return val > 20;
	}
};

class findprintf
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class findifperson
{
public:
	bool operator()(findperson fp)
	{
		return fp.age > 700;
	}
};


void comment_seek(void)
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back((rand() % 100));
	}
	cout << "for_each����--ʹ����������������";
	for_each(v1.begin(), v1.end(), findprintf());
	cout << endl;
	//���ò����㷨-find()
	//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
	//����ԭ��-find(iterator beg,iterator end,value);
	// beg ��ʼ������   end ����������   value ���ҵ�Ԫ��
	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
	if (it == v1.end())
	{
		cout << "����Ԫ���㷨find����û���ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "����Ԫ���㷨find�����ҵ���Ԫ�� : " << *it << endl;
	}

	vector<findperson>v3;

	findperson fp1("aaa", 374);
	findperson fp2("bbb", 364);
	findperson fp3("ccc", 687);
	findperson fp4("ddd", 785);
	findperson fp5("fff", 432);

	v3.push_back(fp1);
	v3.push_back(fp2);
	v3.push_back(fp3);
	v3.push_back(fp4);
	v3.push_back(fp5);

	vector<findperson>::iterator fpit = find(v3.begin(), v3.end(), fp2);
	if (fpit == v3.end())
	{
		cout << "�Զ�����������--����Ԫ���㷨find����û���ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "�Զ�����������--����Ԫ���㷨find�����ҵ���Ԫ��--������" << fpit->name << " ���䣺" << fpit->age << endl;
	}
	//����������Ԫ��
	//����ԭ�ͣ�find_if(iterator beg, iterator end, _Pred);
	// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
	// beg ��ʼ������
	// end ����������
	// _Pred ��������ν�ʣ�����bool���͵ķº�����
	vector<int>::iterator fif = find_if(v1.begin(), v1.end(), findif());
	if (fif == v1.end())
	{
		cout << "����Ԫ���㷨find_if����û���ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "����Ԫ���㷨find_if�����ҵ���Ԫ�أ�" << *fif << endl;
	}

	vector<findperson>::iterator fdper = find_if(v3.begin(), v3.end(), findifperson());
	if (fpit == v3.end())
	{
		cout << "�Զ�����������--����Ԫ���㷨find_if����û���ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "�Զ�����������--����Ԫ���㷨find_if�����ҵ���Ԫ��--������" << fdper->name << " ���䣺" << fdper->age << endl;
	}
}


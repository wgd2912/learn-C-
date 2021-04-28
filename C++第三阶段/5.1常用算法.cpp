#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//����
void printf01(int val)
{
	cout << val << " ";
}

//�º���
class printf02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

//���˷º���
class transform01
{
public:
	int operator()(int val)
	{
		return val;
	}
};


void com_use_algorithm(void)
{
	/*
	���ñ����㷨
	for_each(iterator beg, iterator end, _func)//�����㷨 ��������Ԫ��
	beg ��ʼ������
	end ����������
	 _func �������ߺ�������

	transform(iterator beg1, iterator end1, iterator beg2, _func);//������������һ��������
	beg1 Դ������ʼ������
	end1 Դ��������������
	beg2 Ŀ��������ʼ������
	_func �������ߺ�������

	*/
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back((rand() % 100));
	}
	cout << "for_each����--ʹ����������������";
	for_each(v1.begin(), v1.end(), printf01);
	cout << endl;
	cout << "for_each����----ʹ�÷º���������";
	for_each(v1.begin(), v1.end(), printf02());
	cout << endl;

	vector<int>v2;
	v2.resize(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), transform01());
	cout << "transform����---��������֮��ʹ�÷º���������";
	for_each(v2.begin(), v2.end(), printf02());
	cout << endl;

	//���ò����㷨-find()
	//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
	//����ԭ��-find(iterator beg,iterator end,value);
	// beg ��ʼ������   end ����������   value ���ҵ�Ԫ��





}


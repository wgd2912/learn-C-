#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

/*

*/

void dequeprintf(int dnum, deque<int>& d)
{
	if (d.empty())
	{
		cout << "d" << dnum <<"Ϊ��" << endl;
		return;
	}

	cout << "d" << dnum << " = ";
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

void dequeuse(void)
{
	//deque<T> deqT; //Ĭ�Ϲ�����ʽ
	//deque(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
	//deque(n, elem); //���캯����n��elem����������
	//deque(const deque & deq); //�������캯��
	cout << endl << "deque���캯������" << endl;
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i + 10);
	}
	dequeprintf(1, d1);

	deque<int> d2(d1.begin(), d1.end());
	dequeprintf(2, d2);

	deque<int> d3(10, 99);
	dequeprintf(3, d3);

	deque<int> d4(d3);
	//����deque<int> d4 = d3;
	dequeprintf(4, d4);

	cout << endl << "deque��ֵ��������" << endl;
	//deque& operator=(const deque & deq); //���صȺŲ�����
	//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
	//assign(n, elem); //��n��elem������ֵ������

	deque<int> d5;
	d5 = d1;
	dequeprintf(5, d5);

	deque<int> d6;
	d6.assign(d1.begin(), d1.end());
	dequeprintf(6, d6);

	deque<int> d7;
	d7.assign(10, 55);
	dequeprintf(7, d7);

	
	//deque.empty();�ж������Ƿ�Ϊ��
	//deque.size();����������Ԫ�صĸ���
	//deque.resize(num);����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	//deque.resize(num, elem);����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
cout << endl << "deque��С��������" << endl;
	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1�Ĵ�С�ǣ�" << d1.size() << endl;
	}
	d1.resize(15);//����ָ������d1�Ĵ�С
	cout << "d1�Ĵ�С�ǣ�" << d1.size() << endl;
	dequeprintf(1,d1);

	d1.resize(20, 42);//����ָ������d1�Ĵ�С,�����䳤���䳤����ʹ��42�������
	cout << "d1�Ĵ�С�ǣ�" << d1.size() << endl;
	dequeprintf(1,d1);

	//���˲��������
	//push_back(elem); //������β�����һ������
	//push_front(elem); //������ͷ������һ������
	//pop_back(); //ɾ���������һ������
	//pop_front(); //ɾ��������һ������

	//ָ��λ�ò�����
	//insert(pos, elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
	//insert(pos, n, elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
	//insert(pos, beg, end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
	//clear(); //�����������������
	//erase(beg, end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	//erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
	cout << endl << "deque�����ɾ������" << endl;

	d1.push_back(7525);//β��
	d1.push_front(456);//ͷ��
	dequeprintf(1, d1);

	d1.pop_back();//βɾ
	d1.pop_front();//ͷɾ
	dequeprintf(1, d1);

	d1.insert(d1.begin()+2, 8845);
	d1.insert(d1.begin() + 5, 2, 321);
	dequeprintf(1, d1);

	d1.erase(d1.begin() + 5, d1.begin() + 7);
	d1.erase(d1.begin() + 2);
	dequeprintf(1, d1);

	/*d1.clear();
	dequeprintf(1, d1);*/


	//at(int idx); //��������idx��ָ������
	//operator[]; //��������idx��ָ������
	//front(); //���������е�һ������Ԫ��
	//back(); //�������������һ������Ԫ��
	cout << endl << "deque ���ݴ�ȡ����" << endl;
	
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	cout << "d1�����еĵ�һ������Ԫ���ǣ�" << d1.front() << endl;
	cout << "d1�����е����һ������Ԫ���ǣ�" << d1.back() << endl;

	//�����㷨ʵ�ֶ�deque������������
	//sort(iterator beg, iterator end) //��beg��end������Ԫ�ؽ�������
	//�ܽ᣺sort�㷨�ǳ�ʵ�ã�ʹ��ʱ����ͷ�ļ� algorithm����
	cout << endl << "deque ���򲿷�" << endl;
	sort(d1.begin(), d1.end());
	cout << "d1����sort()����֮��Ľ���ǣ�";
	dequeprintf(1, d1);
}

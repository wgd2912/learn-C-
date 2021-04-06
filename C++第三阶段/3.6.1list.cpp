#include <iostream>
using namespace std;
#include <list>

void listproject(void);

void listprintf(list<int>& l)
{
	if (l.empty())//�ж��Ƿ�Ϊ��
	{
		cout << "������Ϊ��" << endl;
		return;
	}

	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	return val1 > val2;
}

void listtest(void)
{
	/*���캯��*/
	//list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
	//list(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
	//list(n, elem); //���캯����n��elem����������
	//list(const list & lst); //�������캯����
	list <int> l1;
	//β��
	for (int i = 0; i < 10; i++)
	{
		l1.push_back(i*10);
	}
	//ͷ��
	for (int i = 0; i < 10; i++)
	{
		l1.push_front(i+10);
	}
	cout << "l1 = ";
	listprintf(l1);
	
	list<int>l2(l1.begin(),l1.end());
	cout << "l2 = ";
	listprintf(l2);

	list <int>l3(10, 999);
	cout << "l3 = ";
	listprintf(l3);

	list <int>l4(l3);
	cout << "l4 = ";
	listprintf(l4);

	/*��ֵ�ͽ���*/
	//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
	//assign(n, elem); //��n��elem������ֵ������
	//list& operator=(const list & lst); //���صȺŲ�����
	//swap(lst); //��lst�뱾���Ԫ�ػ�����
	list<int>l5;
	l5.assign(l1.begin(), l1.end());
	cout << "l5 = ";
	listprintf(l5);

	list<int>l6;
	l6.assign(10,88);
	cout << "l6 = ";
	listprintf(l6);

	list<int>l7;
	l7 = l6;
	cout << "l7 = ";
	listprintf(l7);

	cout << "l4��l6�����Ժ�:" << endl;
	l6.swap(l4);
	cout << "l4 = ";
	listprintf(l4);
	cout << "l6 = ";
	listprintf(l6);

	/*������С*/
	//size(); //����������Ԫ�صĸ���
	//empty(); //�ж������Ƿ�Ϊ��
	//resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
	////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	//resize(num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
	////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	cout << "l1�Ĵ�С�ǣ�" << l1.size() << endl;
	l2.resize(10);
	cout << "����ָ��l2�Ĵ�С��= ";
	listprintf(l2);

	/*list �����ɾ��*/
	//push_back(elem);//������β������һ��Ԫ��
	//pop_back();//ɾ�����������һ��Ԫ��
	//push_front(elem);//��������ͷ����һ��Ԫ��
	//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
	//insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
	//insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
	//insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
	//clear();//�Ƴ���������������
	//erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	//erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
	//remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
	list<int>::iterator it = l5.begin();
	it++;
	it++;
	l5.insert(it, 8888);
	cout << "l5 = ";
	listprintf(l5);

	l5.insert(++l5.begin(), 2, 77777);
	cout << "l5 = ";
	listprintf(l5);
	l5.erase(++l5.begin(), it);
	cout << "l5 = ";
	listprintf(l5);
	l5.clear();
	cout << "l5 = ";
	listprintf(l5);

	/*list ���ݴ�ȡ*/
	//front(); //���ص�һ��Ԫ�ء�
	//back(); //�������һ��Ԫ�ء�
	cout << "l1�ĵ�һ��Ԫ���ǣ�" << l1.front() << endl;
	cout << "l1�����һ��Ԫ���ǣ�" << l1.back() << endl;

	/*list�ķ�ת������*/
	//reverse(); //��ת����
	//sort(); //��������--Ĭ�ϴ�С����
	cout << "l2��ת֮��������ǣ�";
	l2.reverse();
	listprintf(l2);

	cout << "l1 = ";
	l1.sort();//��С����
	listprintf(l1);

	cout << "l1 = ";
	l1.sort(myCompare);//�Ӵ�С
	listprintf(l1);

	listproject();

}

class person12
{
public:
	person12(string name, int age, int height)
	{
		this->name = name;
		this->age = age;
		this->height = height;
	}

public:
	string name;
	int age;
	int height;

};

bool campareperson12(person12& p1, person12& p2)
{
	if (p1.age == p2.age)
		return p1.height > p2.height;
	else
		return p1.age < p2.age;
}


void listproject(void)
{
	int tempage = 0;
	int tempheight = 0;

	list<person12>p;
	person12 p1("���", 1825, 18000);
	person12 p2("��", 25, 25);
	person12 p3("����", 8741, 1589);
	person12 p4("����", 25, 12);
	person12 p5("����", 25, 188000);
	person12 p6("����", 48595, 2895);
	person12 p7("������", 1024, 7859);
	person12 p8("����Ȯ", 25, 4564);
	person12 p9("������", 763210, 7859);
	person12 p10("��߸", 25, 74582);

	//��ӽ��б�
	
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	p.push_back(p5);
	p.push_back(p6);
	p.push_back(p7);
	p.push_back(p8);
	p.push_back(p9);
	p.push_back(p10);

	for (list<person12>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "������" << it->name << "\t���䣺" << it->age << "\t��ߣ�" << it->height << endl;
	}

	cout << "-----------------------------------------------" << endl;
	p.sort(campareperson12);
	for (list<person12>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "������" << it->name << "\t���䣺" << it->age << "\t��ߣ�" << it->height << endl;
	}

}










#include <iostream>


using namespace std;

void constpare(const int& ref)
{
	cout << "��������--�����������ò���" << "ref = " << ref << endl;
}

//��������
void quote_const(void)
{
	//int& a = 100;//�����ԭ����û�н������const��ʶ��
	const int& a = 100;

	//����const֮��Ͳ����ٴ��޸ĳ�����ֵ
	//a = 555;
	constpare(a);
}

#include <iostream>

using namespace std;
//���ã� �����������
//�﷨�� ��������& ���� = ԭ��
//ע�⣺
//���ñ����ʼ��
//�����ڳ�ʼ���󣬲����Ըı�

void quote(void)
{
	cout << "��ǰ�����ǡ����á�����-----start" << endl;
	int a = 100;
	int& b = a;
	b = 10000;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}



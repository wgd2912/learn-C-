#include <iostream>
using namespace std;


/*
ģ���ص㣺
1��ģ�岻����ֱ��ʹ�ã���ֻ��һ�����
2��ģ���ͨ�ò��������ܵ�
*/

/*���磺�򵥵Ľ�������*/
void intSwap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void doubleSwap(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}
//ʹ�ú���ģ��
template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <typename T>
void func()
{
	cout << "func()��������" << endl;
}

template <typename T>
void arrsork(T arr[], int& len)
{
	int i, j;
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				Swap(arr[i], arr[j]);
			}
		}
	}
}

template <typename T>
T addtest(T a, T b)
{
	return a + b;
}

void mytemplate(void)
{
	int a = 56;
	int b = 89;
	char c = 40;
	int arr[10] = { 4,58,1,0,89,56854,4568,23,56,40 };
	int arrint = sizeof(arr)/sizeof(int);
	//	intSwap(a, b);

	//���ַ�ʽ
	//1���Զ������Ƶ�--�����Ƶ���һ�µ���������T,�ſ���ʹ��
	Swap(a, b);//��ȷ--�����Ƶ���һֱ��T����
	addtest<int>(a, c);//��ʾָ������--
	//  Swap(a, c);//����--�Ƶ�����һ�µ�T����

	//2����ʾָ������--ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
	
	Swap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	addtest<int>(a, c);//��ʾָ������--���Է�������ʽ����ת��
	//func(); //����ģ�岻�ܶ���ʹ�ã�����ȷ����T������ 
	func<int>(); //������ʾָ�����͵ķ�ʽ����Tһ�����ͣ��ſ���ʹ�ø�ģ��

	arrsork(arr, arrint);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
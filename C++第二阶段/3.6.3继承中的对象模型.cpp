#include <iostream>
using namespace std;


class base2 {
public: 
	int m_A; 
protected: 
	int m_B; 
private:
	int m_C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ 
};
			 
//�����̳� 
class son5 :public base2 
{
public: 
	int m_D; 
};
void Inherited_object_model(void)
{
	cout << "sizeof Son = " << sizeof(son5) << endl; 
}
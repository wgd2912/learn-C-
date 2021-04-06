#include <iostream>
using namespace std;


class base2 {
public: 
	int m_A; 
protected: 
	int m_B; 
private:
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去 
};
			 
//公共继承 
class son5 :public base2 
{
public: 
	int m_D; 
};
void Inherited_object_model(void)
{
	cout << "sizeof Son = " << sizeof(son5) << endl; 
}
#include <iostream>
using namespace std;

//Javaҳ�� 
class Java 
{
public: 
	void header() 
	{ 
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl; 
	}
	void footer() 
	{ 
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left() 
	{ 
		cout << "Java,Python,C++...(���������б�)" << endl; 
	}
	void content() 
	{ 
		cout << "JAVAѧ����Ƶ" << endl; 
	} 
};

//Pythonҳ�� 
class Python 
{
public: 
	void header() 
	{ 
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl; 
	}
	void footer() 
	{ 
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}void left() 
	{ 
		cout << "Java,Python,C++...(���������б�)" << endl; 
	}
	void content() 
	{ cout << "Pythonѧ����Ƶ" << endl; 
	} 
};
//C++ҳ��
class CPP 
{
public: 
	void header() 
	{ 
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl; 
	}
	void footer() 
	{ 
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl; 
	}
	void left() 
	{ 
		cout << "Java,Python,C++...(���������б�)" << endl; 
	}
	void content() 
	{ 
		cout << "C++ѧ����Ƶ" << endl; 
	}
};



void ordinary_basic(void)
{
	//Javaҳ�� 
	cout << "Java������Ƶҳ�����£� " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;
	//Pythonҳ�� 
	cout << "Python������Ƶҳ�����£� " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;
	//C++ҳ�� 
	cout << "C++������Ƶҳ�����£� " << endl;
	CPP cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
}

//����ҳ��
 class BasePage
 {
 public: 
	 void header() 
	 { 
		 cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl; 
	 }
	 void footer() 
	 { 
		 cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl; 
	 }
	 void left() 
	 {
		 cout << "Java,Python,C++...(���������б�)" << endl; 
	 }
 };
 //Javaҳ�� 
 class java : public BasePage 
 {
 public: 
	 void content() 
	 { 
		 cout << "JAVAѧ����Ƶ" << endl;
	 } 
 };

 //python����
 class python : public BasePage
 {
 public:
	 void content()
	 {
		 cout << "Python��ѧ��Ƶ" << endl;
	 }
 };

 //C++����
 class cpp : public BasePage
 {
 public:
	 void content()
	 {
		 cout << "C++��ѧ��Ƶ" << endl;
	 }
 };


 void inherit_basic(void)
 {
	 //Javaҳ�� 
	 cout << "Java������Ƶҳ�����£� " << endl;
	 java ja;
	 ja.header();
	 ja.footer();
	 ja.left();
	 ja.content();
	 cout << "--------------------" << endl;
	 //Pythonҳ�� 
	 cout << "Python������Ƶҳ�����£� " << endl;
	 python py;
	 py.header();
	 py.footer();
	 py.left();
	 py.content();
	 cout << "--------------------" << endl;
	 //C++ҳ�� 
	 cout << "C++������Ƶҳ�����£� " << endl;
	 cpp cp;
	 cp.header();
	 cp.footer();
	 cp.left();
	 cp.content();
 }

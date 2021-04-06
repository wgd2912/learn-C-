#include <iostream>
#include <string>

using namespace std;


template <class T>
class myarray
{
public:
	//�вι���--����������
	myarray(int capacity)
	{
		cout << "�вι��캯��" << endl;
		this->capacity = capacity;
		this->size = 0;
		this->arraddr = new T[this->capacity];
	}
	//��������--
	myarray(const myarray& arr)
	{
		cout << "�������캯��" << endl;
		this->capacity = arr.capacity;
		this->size = arr.size;
		this->arraddr = new T[this->capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->arraddr[i] = arr.arraddr[i];
		}
	}
	//�Ⱥ����������
	myarray& operator=(const myarray& arr)
	{
		if (this->arraddr != NULL)
		{
			delete[]this->arraddr;
			this->arraddr = NULL;
		}
		this->capacity = arr.capacity;
		this->size = arr.size;
		this->arraddr = new T[this->capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->arraddr[i] = arr.arraddr[i];
		}
		return *this;
	}

	//����[]
	T& operator[](int index)
	{
		return this->arraddr[index];
	}



	//��ȡ�����ʹ�С
	int getcapacity(void)
	{
		return this->capacity;
	}
	int getsize(void)
	{
		return this->size;
	}

	//β��
	void add_back(const T& val)
	{
		if (this->capacity == this->size)
			return;
		this->arraddr[this->size++] = val;
	}
	//βɾ
	void del_back(void)
	{
		if (this->size == 0)
			return;
		this->size--;
	}


	~myarray()
	{
		cout << "��������" << endl;
		if (this->arraddr != NULL)
		{
			delete[]this->arraddr;
			this->arraddr = NULL;
			this->capacity = 0;
			this->size = 0;
		}
	}

private:
	T* arraddr;
	int capacity;
	int size;
};

//�Զ�����������
class person09
{
public:
	person09() {}

	person09(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

public:
	string name;
	int age;
};






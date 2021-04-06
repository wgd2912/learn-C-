#include <iostream>
#include <string>

using namespace std;


template <class T>
class myarray
{
public:
	//有参构造--参数：容量
	myarray(int capacity)
	{
		cout << "有参构造函数" << endl;
		this->capacity = capacity;
		this->size = 0;
		this->arraddr = new T[this->capacity];
	}
	//拷贝构造--
	myarray(const myarray& arr)
	{
		cout << "拷贝构造函数" << endl;
		this->capacity = arr.capacity;
		this->size = arr.size;
		this->arraddr = new T[this->capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->arraddr[i] = arr.arraddr[i];
		}
	}
	//等号重载运算符
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

	//重载[]
	T& operator[](int index)
	{
		return this->arraddr[index];
	}



	//获取容量和大小
	int getcapacity(void)
	{
		return this->capacity;
	}
	int getsize(void)
	{
		return this->size;
	}

	//尾插
	void add_back(const T& val)
	{
		if (this->capacity == this->size)
			return;
		this->arraddr[this->size++] = val;
	}
	//尾删
	void del_back(void)
	{
		if (this->size == 0)
			return;
		this->size--;
	}


	~myarray()
	{
		cout << "析构函数" << endl;
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

//自定义数据类型
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






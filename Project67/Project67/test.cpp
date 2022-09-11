#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//拷贝构造函数的使用情形
// 1.对原有的构造函数的拷贝
//2.值传递的方式给函数形参传值
//3.以值方式返回局部对象
class person
{
public:
	person()
	{
		cout << "构造函数" << endl;
	}
	person(const person& p)
	{
		cout << "拷贝构造函数" << endl;
	}
	~person()
	{
		cout << "析构函数" << endl;
	}
	int m_age;
};
//值传递的方式给函数形参传值
//void mywork(person p)
//{
//	;
//}
//void test1()
//{
//	person p;
//	mywork(p);
//}

//以值方式返回局部对象(因为返回的局部对象是以值传递的，是一份临时拷贝所以会调用拷贝构造函数
person mywork()
{
	person p;
	cout << &p << endl;
	return p;
}
void test2()
{
	person p2 = mywork();
	cout << &p2 << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}


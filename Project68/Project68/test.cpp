#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//这是错误案例（浅拷贝存在的问题,重复释放空间）
//当你没有写拷贝构造函数时，系统会自动创建，但构建的是浅拷贝
//class person
//{
//public:
//	person()
//	{
//		cout << "这是构造函数" << endl;
//	}
//	person(int age,int num)
//	{
//		m_age = age;
//		m_num = new int(num);
//		cout << "the age is " << m_age << endl;
//	}
//	~person()
//	{
//		if (m_num)
//			delete m_num;
//		cout << "这是析构函数" << endl;
//	}
//	int m_age;
//	int* m_num;
//};
//void test01()
//{
//	person p1(18,160);
//	person p2(p1);//拷贝构造函数的调用，没有创造拷贝函数系统自动创造；
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//解决方案（使用深拷贝，为指针变量分配不同的空间，重新分配空间）
//class person
//{
//public:
//	person()
//	{
//		cout << "这是构造函数" << endl;
//	}
//	person(int age, int num)
//	{
//		m_age = age;
//		m_num = new int(num);
//		cout << "the age is " << m_age << endl;
//	}
//	person(const person& p)
//	{
//		cout << "拷贝构造函数的调用 " << endl;
//		m_age = p.m_age;
//		m_num = new int(*p.m_num);
//
//	}
//	~person()
//	{
//		if (m_num)
//			delete m_num;
//		cout << "这是析构函数" << endl;
//	}
//	int m_age;
//	int* m_num;
//};
//void test01()
//{
//	person p1(18, 160);
//	person p2(p1);//拷贝构造函数的调用，没有创造拷贝函数系统自动创造；
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//初始化列表（构造函数）
class person
{
public:
	//person():m_a(10),m_b(20),m_c(20)
	//{

	//}
	//或者形式可以
	person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
	{

	}
	int m_a;
	int m_b;
	int m_c;
};
void test()
{
	//person p;
	person p(10, 20, 30);
	cout << "m_a is " << p.m_a << endl;
	cout << "m_b is " << p.m_b << endl;
	cout << "m_c is " << p.m_c << endl;
}
int main()
{
	test();
	return 0;
}
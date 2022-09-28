#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//<<运算符重载
//class person
//{
//	friend ostream& operator<<(ostream& cout, person& p);
//public:
//	person(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//ostream& operator<<(ostream& cout, person& p)//在类内运算符重载只能有一个参数，所以在类外实现
//{
//	cout << "m_a= " <<p.m_a<< " m_b= " << p.m_b ;
//	return cout;
//}
//void test()
//{
//	person p(10,20);
//	cout << p << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}


//+号运算符重载
//通过成员函数实现
//class person
//{
//	friend void operator+(person& p);
//	friend void test();
//public:
//	person(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//	person operator+(person& p)
//	{
//		person temp(0,0);
//		temp.m_a=this->m_a + p.m_a;
//		temp.m_b=this->m_b + p.m_b;
//		return temp;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//void test()
//{
//	person p(10,20);
//	person p2(20, 30);
//	person p3 = p + p2;
//	cout << p3.m_a << ' '<<p3.m_b << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//通过全局函数实现
class person
{
	friend person operator+(person& p1, person& p2);
	friend void test();
public:
	person(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
private:
	int m_a;
	int m_b;
};
person operator+(person& p1, person& p2)
{
	person temp(0, 0);
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
void test()
{
	person p1(10, 20);
	person p2(20, 30);
	person p3 = p1 + p2;
	cout << p3.m_a << ' ' << p3.m_b << endl;
}
int main()
{
	test();
	return 0;
}
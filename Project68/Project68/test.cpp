#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//���Ǵ�������ǳ�������ڵ�����,�ظ��ͷſռ䣩
//����û��д�������캯��ʱ��ϵͳ���Զ�����������������ǳ����
//class person
//{
//public:
//	person()
//	{
//		cout << "���ǹ��캯��" << endl;
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
//		cout << "������������" << endl;
//	}
//	int m_age;
//	int* m_num;
//};
//void test01()
//{
//	person p1(18,160);
//	person p2(p1);//�������캯���ĵ��ã�û�д��쿽������ϵͳ�Զ����죻
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//���������ʹ�������Ϊָ��������䲻ͬ�Ŀռ䣬���·���ռ䣩
//class person
//{
//public:
//	person()
//	{
//		cout << "���ǹ��캯��" << endl;
//	}
//	person(int age, int num)
//	{
//		m_age = age;
//		m_num = new int(num);
//		cout << "the age is " << m_age << endl;
//	}
//	person(const person& p)
//	{
//		cout << "�������캯���ĵ��� " << endl;
//		m_age = p.m_age;
//		m_num = new int(*p.m_num);
//
//	}
//	~person()
//	{
//		if (m_num)
//			delete m_num;
//		cout << "������������" << endl;
//	}
//	int m_age;
//	int* m_num;
//};
//void test01()
//{
//	person p1(18, 160);
//	person p2(p1);//�������캯���ĵ��ã�û�д��쿽������ϵͳ�Զ����죻
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//��ʼ���б����캯����
class person
{
public:
	//person():m_a(10),m_b(20),m_c(20)
	//{

	//}
	//������ʽ����
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
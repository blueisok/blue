#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�������캯����ʹ������
// 1.��ԭ�еĹ��캯���Ŀ���
//2.ֵ���ݵķ�ʽ�������βδ�ֵ
//3.��ֵ��ʽ���ؾֲ�����
class person
{
public:
	person()
	{
		cout << "���캯��" << endl;
	}
	person(const person& p)
	{
		cout << "�������캯��" << endl;
	}
	~person()
	{
		cout << "��������" << endl;
	}
	int m_age;
};
//ֵ���ݵķ�ʽ�������βδ�ֵ
//void mywork(person p)
//{
//	;
//}
//void test1()
//{
//	person p;
//	mywork(p);
//}

//��ֵ��ʽ���ؾֲ�����(��Ϊ���صľֲ���������ֵ���ݵģ���һ����ʱ�������Ի���ÿ������캯��
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


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������İ���
class cube  //����һ����������
{
public :
	//��������
	void setl(int l)
	{
		m_l = l;
	}
	//��ó���
	int getl()
	{
		return m_l;
	}
	void setw(int w)
	{
		m_w = w;
	}
	int getw()
	{
		return m_w;
	}
	void seth(int h)
	{
		m_h = h;
	}
	int geth()
	{
		return m_h;
	}
	//��ó���������
	int getcals()
	{
		return 2*m_h * m_w +2* m_h * m_l + 2*m_w * m_l;
	}
	//��ó���������
	int getcalv()
	{
		return m_h * m_w * m_l;
	}
	bool issamebyclass(cube c2)
	{
		if (m_l == c2.getl() && m_w == c2.getw() && m_h == c2.geth())
		{
			return true;
		}
		else
			return false;
	}
private :
	int m_l;
	int m_w;
	int m_h;

};
//����ȫ�ֺ����жϳ������Ƿ����
bool issame(cube &c1, cube& c2)
{
	if (c1.geth() == c2.geth() && c1.getw() == c2.getw() && c1.getl() == c2.getl())
	{
		return true;
	}
	return false;
}
int main()
{
	cube c1;
	c1.seth(5);
	c1.setl(6);
	c1.setw(10);
	cout << "���������Ϊ " << c1.getcals() << endl;
	cout << "����������Ϊ " << c1.getcalv() << endl;
	cube c2;
	c2.seth(7);
	c2.setl(6);
	c2.setw(10);
	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "��������� " << endl;
	}
	else
	cout << "�����岻��� " << endl;
	ret = c1.issamebyclass(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ���������� " << endl;
	}
	else
		cout << "��Ա�����жϣ������岻��� " << endl;
	return 0;
}

//���캯��
// 1 ��ʽ ����������û�з������ͣ�����дvoid
//2 �����в��������Կ���������
//3 ��������������ͬ
//4 ��������ʱ�����캯�����Զ������ҵ���һ��
//class person
//{
//public:
//	person()
//	{
//		cout << "���캯���ĵ���" << endl;
//	}
//};
//void test()
//{
//	person p1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//��������
// 1 ��ʽ  ~����������û�з������ͣ�����дvoid
//2 û�в��������Բ�����������
//3 ��������������ͬ
//4 ���ٶ���ʱ�������������Զ������ҵ���һ��

//class person
//{
//public:
//	person()
//	{
//		cout << "���캯���ĵ���" << endl;
//	}
//	~person()
//	{
//		cout << "���������ĵ��� " << endl;
//	}
//};
//void test()
//{
//	person p1;
//}
//int main()
//{
//	test();
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
//��װ
#include<iostream>
#include<string>
using namespace std;
//class studens
//{
//public:
//	//����
//	string name;
//	int id;
//	//��Ϊ
//	void stu()
//	{
//		cout << "the name is " << name << endl;
//		cout << "the id is " << id << endl;
//	}
//
//};
//int main()
//{
//	studens cl;
//	cout << "please input name " << endl;
//	cin >> cl.name;
//	cout << "please input id " << endl;
//	cin >> cl.id;
//	cl.stu();
//	return 0;
//}

class person
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	 string showname()
	{
		 return m_name;
	}
	 int showage()
	 {
		 m_age = 10;
		 return m_age;
	 }
	 void setid(int id)
	 {
		 m_id = id;
	 }

private:
	string m_name;//����Ϊ�ɶ���д��Ȩ��
	int m_age;//����Ϊ�ɶ�
	int m_id;//����Ϊ��д
};
int main()
{
	person p1;
	p1.setname("����");
	p1.setid(123456);
	cout << "the name is " << p1.showname() << endl;
	cout << "the age is " << p1.showage() << endl;
	return 0;
}




//���õİ���
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << "the a is " << a << endl;
//	return 0;
//}
// 
//void changer(int& a, int& b)//���ú�������ֱ��ͨ���βο���ʵ�ε�ֵ
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	changer(a, b);
//	cout << "the a is " << a << endl;
//	cout << "the b is " << b << endl;
//
//	return 0;
//}

//���صİ�����������������ͬ��
//void fun(int a, int b)
//{
//	cout << "this is fun(a,b)" << endl;
//}
//void fun(int a)
//{
//	cout << "this is fun(a)" << endl;
//}
//int main()
//{
//	//fun(10);
//	fun(2, 3);
//	return 0;
//}
//����Ҫ��
//1.�����ı������Ͳ�ͬ���������������ͬ�������˳��ͬ
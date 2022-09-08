#define _CRT_SECURE_NO_WARNINGS
//封装
#include<iostream>
#include<string>
using namespace std;
//class studens
//{
//public:
//	//属性
//	string name;
//	int id;
//	//行为
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
	string m_name;//设置为可读可写的权限
	int m_age;//设置为可读
	int m_id;//设置为可写
};
int main()
{
	person p1;
	p1.setname("张三");
	p1.setid(123456);
	cout << "the name is " << p1.showname() << endl;
	cout << "the age is " << p1.showage() << endl;
	return 0;
}




//引用的案例
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << "the a is " << a << endl;
//	return 0;
//}
// 
//void changer(int& a, int& b)//引用函数可以直接通过形参控制实参的值
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

//重载的案例（函数名可以相同）
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
//重载要求
//1.函数的变量类型不同，或变量的数量不同或变量的顺序不同
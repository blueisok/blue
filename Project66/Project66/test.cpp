#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//对象类的案例
class cube  //创建一个长方体类
{
public :
	//创建长度
	void setl(int l)
	{
		m_l = l;
	}
	//获得长度
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
	//获得长方体的面积
	int getcals()
	{
		return 2*m_h * m_w +2* m_h * m_l + 2*m_w * m_l;
	}
	//获得长方体的体积
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
//利用全局函数判断长方体是否相等
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
	cout << "长方体面积为 " << c1.getcals() << endl;
	cout << "长方体的体积为 " << c1.getcalv() << endl;
	cube c2;
	c2.seth(7);
	c2.setl(6);
	c2.setw(10);
	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "长方体相等 " << endl;
	}
	else
	cout << "长方体不相等 " << endl;
	ret = c1.issamebyclass(c2);
	if (ret)
	{
		cout << "成员函数判断：长方体相等 " << endl;
	}
	else
		cout << "成员函数判断：长方体不相等 " << endl;
	return 0;
}

//构造函数
// 1 形式 类名（），没有返回类型，不用写void
//2 可以有参数，所以可以有重载
//3 函数名与类名相同
//4 创建对象时，构造函数会自动调用且调用一次
//class person
//{
//public:
//	person()
//	{
//		cout << "构造函数的调用" << endl;
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

//析构函数
// 1 形式  ~类名（），没有返回类型，不用写void
//2 没有参数，所以不可以有重载
//3 函数名与类名相同
//4 销毁对象时，析构函数会自动调用且调用一次

//class person
//{
//public:
//	person()
//	{
//		cout << "构造函数的调用" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数的调用 " << endl;
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
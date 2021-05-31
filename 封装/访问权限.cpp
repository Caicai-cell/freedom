#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//三种权限
//class Person
//{
//public://公共权限
//	string m_Name;
//
//protected://保护权限
//	string m_Car;
//
//private://私有权限
//	int m_Password;
//
//public:
//	void func()	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123457;
//	}
//};
//int main() {
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car= "奔驰";//保护权限内容，在类外无法访问
//	//p1.m_Pssword = 123;//私有权限内容，类外无法访问
//	p1.func();
//	return 0;
//}
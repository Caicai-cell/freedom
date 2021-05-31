#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

//成员属性设置为私有
// 可以控制读写权限
//对于写可以检测数据的有效性
//class Person{
//public:
//	//设置姓名
//	void setName(string name){
//		m_Name = name;
//	}
//	//获取姓名
//	string getName(){
//		return m_Name;
//	}
//	
//	//设置年龄   可读可写 修改范围为0~150
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			m_Age = 0;
//			cout << "老妖精！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//获取年龄  
//	int getAge() {
//		return m_Age;
//	}
//	
//	//设置情人   只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //可读可写
//	int m_Age;     //可读可写
//	string m_Lover;//只写
//};
//int main(){
//	Person p;
//	p.setName("张三");
//	cout << "姓名为： " << p.getName() << endl;
//	p.setAge(18);
//	p.setLover("翠花");
//	cout << "年龄为： " << p.getAge() << endl;
//	//cout << "情人为：" << p.getLover() << endl;//只写
//	return 0;
//}
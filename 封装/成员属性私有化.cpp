#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

//��Ա��������Ϊ˽��
// ���Կ��ƶ�дȨ��
//����д���Լ�����ݵ���Ч��
//class Person{
//public:
//	//��������
//	void setName(string name){
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName(){
//		return m_Name;
//	}
//	
//	//��������   �ɶ���д �޸ķ�ΧΪ0~150
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			m_Age = 0;
//			cout << "��������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//��ȡ����  
//	int getAge() {
//		return m_Age;
//	}
//	
//	//��������   ֻд
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //�ɶ���д
//	int m_Age;     //�ɶ���д
//	string m_Lover;//ֻд
//};
//int main(){
//	Person p;
//	p.setName("����");
//	cout << "����Ϊ�� " << p.getName() << endl;
//	p.setAge(18);
//	p.setLover("�仨");
//	cout << "����Ϊ�� " << p.getAge() << endl;
//	//cout << "����Ϊ��" << p.getLover() << endl;//ֻд
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Circle {
public:
	//���ð뾶
	void setR(int r);
	
	//��ȡ�뾶
	int getR();

	//����Բ��
	void setCenter(Point center);

	//��ȡԲ��
	Point getCenter();

private:
	int m_R;//�뾶

	//�����п�������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center;//Բ��
};
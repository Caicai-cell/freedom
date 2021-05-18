#define _CRT_SECURE_NO_WARNINGS

//1.�����ϵ����Ϣ
//2.ɾ��ָ����ϵ����Ϣ
//3.����ָ����ϵ����Ϣ
//4.�޸�ָ����ϵ����Ϣ
//5.��ʾ������ϵ��
//6.���������ϵ��
//7.������ϵ��
#ifndef _CONTACT_H__
#define _CONTACT_H__

#define DEFAULT_SZ 3
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

enum Option//ͨѶ¼�Ĺ���ѡ��
{
	EXIT,//�˳�
	ADD,//���
	DEL,//ɾ��
	SEARCH,//����
	MODIFY,//�޸�
	SHOW,//��ʾ
	EMPTY,//���
	SORT,//����
};

enum Mod_list//�޸���ϵ��ѡ���ѡ��
{
	EXITMODIFY,
	NAME,
	AGE,
	SEX,
	TELE,
	ADDR,
};

enum Sort_list//����ʽ��ѡ��
{
	EXIT_SORT,
	NAME_SORT,
	TELE_SORT,
	ADDR_SORT,
};

typedef struct PeoInfo
{
	char name[MAX_NAME];//����
	int age;//����
	char sex[MAX_SEX];//�Ա�
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//��ַ
}PeoInfo;

typedef struct Contact//ͨѶ¼����
{
	struct PeoInfo *data; //ͨѶ¼
	int size;//ͨѶ¼����
	int capacity;//����
}Contact;

//��������
void menu();
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼����
void AddContact(struct Contact* ps);//�����ϵ����Ϣ����
void ShowContact(const struct Contact* ps);//��ʾ������ϵ����Ϣ����
void DelContact(struct Contact* ps);//ɾ��ָ����ϵ����Ϣ����
void SearchContact(const struct Contact* ps);//����ָ����ϵ����Ϣ����
void ModifyContact(struct Contact* ps);//�޸�ָ����ϵ����Ϣ����
void EmptyContact(struct Contact* ps);//���������ϵ����Ϣ����
void SortContact(struct Contact* ps);//����������ϵ����Ϣ����
void DestoryContact(struct Contact* ps);//�ͷ��ڴ�ռ�

#endif
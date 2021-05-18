#define _CRT_SECURE_NO_WARNINGS

//1.添加联系人信息
//2.删除指定联系人信息
//3.查找指定联系人信息
//4.修改指定联系人信息
//5.显示所有联系人
//6.清空所有联系人
//7.排序联系人
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

enum Option//通讯录的功能选项
{
	EXIT,//退出
	ADD,//添加
	DEL,//删除
	SEARCH,//查找
	MODIFY,//修改
	SHOW,//显示
	EMPTY,//清空
	SORT,//排序
};

enum Mod_list//修改联系人选项的选项
{
	EXITMODIFY,
	NAME,
	AGE,
	SEX,
	TELE,
	ADDR,
};

enum Sort_list//排序方式的选项
{
	EXIT_SORT,
	NAME_SORT,
	TELE_SORT,
	ADDR_SORT,
};

typedef struct PeoInfo
{
	char name[MAX_NAME];//名字
	int age;//年龄
	char sex[MAX_SEX];//性别
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//地址
}PeoInfo;

typedef struct Contact//通讯录类型
{
	struct PeoInfo *data; //通讯录
	int size;//通讯录人数
	int capacity;//容量
}Contact;

//声明函数
void menu();
void InitContact(struct Contact* ps);//初始化通讯录函数
void AddContact(struct Contact* ps);//添加联系人信息函数
void ShowContact(const struct Contact* ps);//显示所有联系人信息函数
void DelContact(struct Contact* ps);//删除指定联系人信息函数
void SearchContact(const struct Contact* ps);//查找指定联系人信息函数
void ModifyContact(struct Contact* ps);//修改指定联系人信息函数
void EmptyContact(struct Contact* ps);//清空所有联系人信息函数
void SortContact(struct Contact* ps);//排序所有联系人信息函数
void DestoryContact(struct Contact* ps);//释放内存空间

#endif
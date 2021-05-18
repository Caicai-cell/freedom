#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include"Bubble_sort.h"

void menu()//功能选择菜单
{
	printf("****************************\n");
	printf("*** 1.add       2.del    ***\n");
	printf("*** 3.search    4.modify ***\n");
	printf("*** 5.show      6.empty  ***\n");
	printf("*** 7.sort      0.exit   ***\n");
	printf("****************************\n");
}

void Mod_list()//修改信息选择菜单
{
	printf("****************************\n");
	printf("*** 1.name       2.age   ***\n");
	printf("*** 3.sex        4.tele  ***\n");
	printf("*** 5.addr       0.exit  ***\n");
	printf("****************************\n");
}

void Sort_list()//排序方式选择菜单
{
	printf("****************************\n");
	printf("*** 1.name       2.tele  ***\n");
	printf("*** 3.addr       0.exit  ***\n");
	printf("****************************\n");
}

void InitContact(struct Contact* ps)
{
	assert(ps);
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

void Check_Capacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity+2) * sizeof(PeoInfo));
			if (ptr != NULL)
			{
				ps->data = ptr;
				ps->capacity += 2;
				printf("增容成功\n");
			}
			else
			{
				printf("增容失败\n");
			}
	}
}

void AddContact(struct Contact* ps)
{
	assert(ps);
	//检测当前通讯录的容量
	//1.如果满了，就增加空间
	//2.如果没满，啥事都不干
	Check_Capacity(ps);
	//增加数据
	    printf("-----------------------------------------\n");
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);
		printf("-----------------------------------------\n");

		ps->size++;
		printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("----------------------------------------------\n");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
		printf("---------------------------------------------\n");
	}
}

void DelContact(struct Contact* ps)
{
	assert(ps);
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在下标
	//找不到返回-1
	int pos = FindByName(ps,name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要找的人不存在\n");
	}
	else
	{
		printf("---------------------------------------------\n");
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
		printf("---------------------------------------------\n");
	}
}

void ModifyContact(struct Contact* ps)
{
	assert(ps);
	char name[MAX_NAME];
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		int input = 0;
		Mod_list();
		printf("请选择要修改的信息:>");
		assert(1 == scanf("%d", &input));
		switch (input)
		{
		case NAME:
			printf("请输入修改后的名字:>");
			scanf("%s", ps->data[pos].name);
			break;
		case AGE:
			printf("请输入修改后的年龄:>");
			scanf("%d",&(ps->data[pos].age));
			break;
		case SEX:
			printf("请输入修改后的性别:>");
			scanf("%s", ps->data[pos].sex);
			break;
		case TELE:
			printf("请输入修改后的电话:>");
			scanf("%s", ps->data[pos].tele);
			break;
		case ADDR:
			printf("请输入修改后的地址:>");
			scanf("%s", ps->data[pos].addr);
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
		printf("修改完成\n");
	}
}

void EmptyContact(struct Contact* ps)
{
	assert(ps);
	ps->size = 0;
	memset(ps->data, 0, sizeof(ps->data));
	printf("清空通讯录成功!\n");
}

void SortContact(struct Contact* ps)
{
	assert(ps);
	int input = 0;
	Sort_list();
	printf("请选择排序方式:>");
	assert(1 == scanf("%d", &input));
	switch (input)
	{
	case NAME_SORT:
		bubble_sort(ps->data, ps->size, sizeof(PeoInfo), cmp_name);
		break;
	case TELE_SORT:
		bubble_sort(ps->data, ps->size, sizeof(PeoInfo), cmp_tele);
		break;
	case ADDR_SORT:
		bubble_sort(ps->data, ps->size, sizeof(PeoInfo), cmp_addr);
		break;
	default:
		printf("选择错误，请重新选择\n");
		break;
	}
	printf("通讯录排序成功\n");
}

void DestoryContact(Contact* ps)//退出
{
	free(ps->data);
	ps->data = NULL;
	ps->size = 0;
	printf("销毁成功!\n");
}

#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include"Bubble_sort.h"

int cmp_name(const void* e1, const void* e2)//比较名字
{
	assert(e1 && e2);
	return (strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name));
}

int cmp_tele(const void* e1, const void* e2)//比较电话
{
	assert(e1&& e2);
	return (strcmp(((PeoInfo*)e1)->tele, ((PeoInfo*)e2)->tele));
}
int cmp_addr(const void* e1, const void* e2)//比较地址
{
	assert(e1&& e2);
	return (strcmp(((PeoInfo*)e1)->addr, ((PeoInfo*)e2)->addr));
}

void Swap(char* e1, char* e2, int width)//交换信息
{
	int i = 0;
	assert(e1 && e2);
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = tmp;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//排序
{
	int i = 0;
	int j = 0;
	assert(base && cmp);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1- i; j++)
		{
			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
				Swap((char*)base + width * j, (char*)base + width * (j + 1), width);
		}
	}
}
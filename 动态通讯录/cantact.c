#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include"Bubble_sort.h"

void menu()//����ѡ��˵�
{
	printf("****************************\n");
	printf("*** 1.add       2.del    ***\n");
	printf("*** 3.search    4.modify ***\n");
	printf("*** 5.show      6.empty  ***\n");
	printf("*** 7.sort      0.exit   ***\n");
	printf("****************************\n");
}

void Mod_list()//�޸���Ϣѡ��˵�
{
	printf("****************************\n");
	printf("*** 1.name       2.age   ***\n");
	printf("*** 3.sex        4.tele  ***\n");
	printf("*** 5.addr       0.exit  ***\n");
	printf("****************************\n");
}

void Sort_list()//����ʽѡ��˵�
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
	return -1;//�Ҳ��������
}

void Check_Capacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity+2) * sizeof(PeoInfo));
			if (ptr != NULL)
			{
				ps->data = ptr;
				ps->capacity += 2;
				printf("���ݳɹ�\n");
			}
			else
			{
				printf("����ʧ��\n");
			}
	}
}

void AddContact(struct Contact* ps)
{
	assert(ps);
	//��⵱ǰͨѶ¼������
	//1.������ˣ������ӿռ�
	//2.���û����ɶ�¶�����
	Check_Capacity(ps);
	//��������
	    printf("-----------------------------------------\n");
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		printf("-----------------------------------------\n");

		ps->size++;
		printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷������������±�
	//�Ҳ�������-1
	int pos = FindByName(ps,name);
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�ҵ��˲�����\n");
	}
	else
	{
		printf("---------------------------------------------\n");
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		int input = 0;
		Mod_list();
		printf("��ѡ��Ҫ�޸ĵ���Ϣ:>");
		assert(1 == scanf("%d", &input));
		switch (input)
		{
		case NAME:
			printf("�������޸ĺ������:>");
			scanf("%s", ps->data[pos].name);
			break;
		case AGE:
			printf("�������޸ĺ������:>");
			scanf("%d",&(ps->data[pos].age));
			break;
		case SEX:
			printf("�������޸ĺ���Ա�:>");
			scanf("%s", ps->data[pos].sex);
			break;
		case TELE:
			printf("�������޸ĺ�ĵ绰:>");
			scanf("%s", ps->data[pos].tele);
			break;
		case ADDR:
			printf("�������޸ĺ�ĵ�ַ:>");
			scanf("%s", ps->data[pos].addr);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
		printf("�޸����\n");
	}
}

void EmptyContact(struct Contact* ps)
{
	assert(ps);
	ps->size = 0;
	memset(ps->data, 0, sizeof(ps->data));
	printf("���ͨѶ¼�ɹ�!\n");
}

void SortContact(struct Contact* ps)
{
	assert(ps);
	int input = 0;
	Sort_list();
	printf("��ѡ������ʽ:>");
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
		printf("ѡ�����������ѡ��\n");
		break;
	}
	printf("ͨѶ¼����ɹ�\n");
}

void DestoryContact(Contact* ps)//�˳�
{
	free(ps->data);
	ps->data = NULL;
	ps->size = 0;
	printf("���ٳɹ�!\n");
}

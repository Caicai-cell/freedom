#define _CRT_SECURE_NO_WARNINGS

//Ϊʲô���ڶ�̬�ڴ����
// ��̬�ڴ溯���Ľ���
//   malloc
//   free
//   calloc
//   realloc
// �����Ķ�̬�ڴ����
// ��������ı�����
// ��������


//Ϊʲô���ڶ�̬�ڴ���� 
// �����Ѿ����յ��ڴ濪�ٷ�ʽ�У�
// int val = 20;//��ջ�ռ��Ͽ����ĸ��ֽ�
// char arr[10] = {0};//��ջ�ռ��Ͽ���10���ֽڵ������ռ�
// 
// ���������Ŀ��ٿռ�ķ�ʽ�������ص㣺
// 1. �ռ俪�ٴ�С�ǹ̶��ġ�
// 2. ������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ���ڴ��ڱ���ʱ���䡣
//    ���Ƕ��ڿռ�����󣬲������������������
//    ��ʱ��������Ҫ�Ŀռ��С�ڳ������е�ʱ�����֪����������ı���ʱ���ٿռ�ķ�ʽ�Ͳ��������ˡ� 
// ��ʱ���ֻ�����Զ�̬�濪���ˡ�
//


//alloc��free C�����ṩ��һ����̬�ڴ濪�ٵĺ�����
//            void* malloc(size_t size);
// ����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ�롣
// ������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
// �������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
// ����ֵ��������void*������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
// �������sizeΪ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�������
//
//C�����ṩ������һ������free��ר������������̬�ڴ���ͷźͻ��յģ�����ԭ�����£�
//            void free (void* ptr);
//free���������ͷŶ�̬���ٵ��ڴ档
// �������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
// �������ptr��NULLָ�룬����ʲô�¶�������
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ�����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ��ʱ
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc
//�����Ĺ�����Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0��
//�뺯��malloc������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0��
//
//int main()
//{
//	//malloc(10*sizeof(int))
//	int *p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//realloc�����ĳ����ö�̬�ڴ���������
// ��ʱ�����Ƿ��ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������ֻ��������Ŀռ�����ˣ�
// ��Ϊ�˺����ʱ���ڴ棬����һ������ڴ�Ĵ�С�����ĵ�����
// ��realloc�����Ϳ��������Զ�̬�����ڴ��С�ĵ����� ����ԭ�����£�
//     void* realloc (void* ptr, size_t size);
// ptr��Ҫ�������ڴ��ַsize ����֮���´�С����ֵΪ����֮����ڴ���ʼλ�á�
// �����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣
// 
// realloc�ڵ����ڴ�ռ���Ǵ������������
//   ���1��ԭ�пռ�֮�����㹻��Ŀռ�
//   ���2��ԭ�пռ�֮��û���㹻��Ŀռ� 
//���1 
//   �������1 ��ʱ��Ҫ��չ�ڴ��ֱ��ԭ���ڴ�֮��ֱ��׷�ӿռ䣬ԭ���ռ�����ݲ������仯�� 
//���2
//   �������2 ��ʱ��ԭ�пռ�֮��û���㹻��Ŀռ�ʱ��
//   ��չ�ķ����ǣ��ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á������������ص���һ���µ��ڴ��ַ��
//  �������������������realloc������ʹ�þ�Ҫע��һЩ�� 
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//reallocʹ�õ�ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//  ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	//
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL);
//	{
//		p = ptr;
//		int i = 0;
//	    for (i = 5; i < 10; i++)
//      	{
//		     *(p + i) = i;
//	    }
//	    for (i = 0; i < 10; i++)
//	    {
//		     printf("%d ", *(p + i));
//	    }
//
//	}
//	//�ͷ��ڴ�
//	free(p);
//	return 0;
//}


//�����Ķ�̬�ڴ����
//1.��NULLָ����н����ò���
//2.�Զ�̬�����ڴ��Խ�����
//3.�ԷǶ�̬�����ڴ��free
//4.ʹ��free�ͷŶ�̬�ڴ濪���ڴ��һ����
//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//6.��̬�����ڴ������ͷţ��ڴ�й¶��
//int main()
//{
//	//1.��NULLָ����н����ò���
//	//int* p = (int*)malloc(40);
//	////p������ص��ж�
//	//*p = 10;//malloc���ٿռ�ʧ��-��NULLָ�������
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	// 	//Խ��
//	//	for (i = 0; i <= 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.�ԷǶ�̬�����ڴ��free
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//...
//	//�ԷǶ�̬�����ڴ��free
//	//free(p);
//	//p = NULL;
//
//	//4.ʹ��free�ͷŶ�̬�ڴ濪���ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	//ʹ��free�ͷŶ�̬�ڴ濪���ڴ��һ����
//	//free(p);
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	////...
//	//free(p);
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й¶��
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	return 0;
//}

//���������
//void GetMemory(char* p)
//{ 
//	p = (char*)malloc(100);//�Ե� 
//}
////p����˾���Ե����ֻ����˾֪����
////һ�죬��˾���ˣ��Ե��޷������ˡ� -- �ڴ�й¶
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	//1.���д���������ֱ���������
//	//2.��������ڴ�й¶������
//	//str��ֵ���ݵ���ʽ��p
//	//p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч��
//	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ�
//	//�����޷��ҵ������Ի�����ڴ�й¶
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}//    -----��������C++/C��̡�

//����1
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char *p) 
//{ 
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void) 
//{
//	char *str = NULL; 
//	str = GetMemory(str); 
//    strcpy(str, "hello world");
//    printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	//char p[] = "hello world";//ջ��
//	static char p[] = "hello world"; //��̬��
//	return p; 
//}
//void Test(void)
//{
//	char* str = NULL; 
//	str = GetMemory();
//	printf(str); 
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num) 
//{ 
//	*p = (char*)malloc(num); 
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello"); 
//	printf(str); 
//	//��
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{ 
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	str = NULL;//��
//
//    if (str != NULL) 
//	{ 
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��������
// 
// �ṹ�е����������Աǰ���������һ��������Ա��
// sizeof ���ص����ֽṹ��С����������������ڴ档
// �������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬
//  ���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��
//struct S
//{
//	int n;//4
//	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 5 6 7 8 9
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{ 
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int *ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4 5 6 7 8 9
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}







#define _CRT_SECURE_NO_WARNINGS

//为什么存在动态内存分配
// 动态内存函数的介绍
//   malloc
//   free
//   calloc
//   realloc
// 常见的动态内存错误
// 几个经典的笔试题
// 柔性数组


//为什么存在动态内存分配 
// 我们已经掌握的内存开辟方式有：
// int val = 20;//在栈空间上开辟四个字节
// char arr[10] = {0};//在栈空间上开辟10个字节的连续空间
// 
// 但是上述的开辟空间的方式有两个特点：
// 1. 空间开辟大小是固定的。
// 2. 数组在申明的时候，必须指定数组的长度，它所需要的内存在编译时分配。
//    但是对于空间的需求，不仅仅是上述的情况。
//    有时候我们需要的空间大小在程序运行的时候才能知道，那数组的编译时开辟空间的方式就不能满足了。 
// 这时候就只能试试动态存开辟了。
//


//alloc和free C语言提供了一个动态内存开辟的函数：
//            void* malloc(size_t size);
// 这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
// 如果开辟成功，则返回一个指向开辟好空间的指针。
// 如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
// 返回值的类型是void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
// 如果参数size为0，malloc的行为是标准是未定义的，取决于编译器。
//
//C语言提供了另外一个函数free，专门是用来做动态内存的释放和回收的，函数原型如下：
//            void free (void* ptr);
//free函数用来释放动态开辟的内存。
// 如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。
// 如果参数ptr是NULL指针，则函数什么事都不做。
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误的原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//	//当动态申请的空间不再使用时
//	//就应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc
//函数的功能是为num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0。
//与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为全0。
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
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//realloc函数的出现让动态内存管理更加灵活。
// 有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，
// 那为了合理的时候内存，我们一定会对内存的大小做灵活的调整。
// 那realloc函数就可以做到对动态开辟内存大小的调整。 函数原型如下：
//     void* realloc (void* ptr, size_t size);
// ptr是要调整的内存地址size 调整之后新大小返回值为调整之后的内存起始位置。
// 这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
// 
// realloc在调整内存空间的是存在两种情况：
//   情况1：原有空间之后有足够大的空间
//   情况2：原有空间之后没有足够大的空间 
//情况1 
//   当是情况1 的时候，要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化。 
//情况2
//   当是情况2 的时候，原有空间之后没有足够多的空间时，
//   扩展的方法是：在堆空间上另找一个合适大小的连续空间来使用。这样函数返回的是一个新的内存地址。
//  由于上述的两种情况，realloc函数的使用就要注意一些。 
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
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用的注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值
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
//	//释放内存
//	free(p);
//	return 0;
//}


//常见的动态内存错误
//1.对NULL指针进行解引用操作
//2.对动态开辟内存的越界访问
//3.对非动态开辟内存的free
//4.使用free释放动态内存开辟内存的一部分
//5.对同一块动态内存的多次释放
//6.动态开辟内存忘记释放（内存泄露）
//int main()
//{
//	//1.对NULL指针进行解引用操作
//	//int* p = (int*)malloc(40);
//	////p进行相关的判断
//	//*p = 10;//malloc开辟空间失败-对NULL指针解引用
//
//	//2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	// 	//越界
//	//	for (i = 0; i <= 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.对非动态开辟内存的free
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//...
//	//对非动态开辟内存的free
//	//free(p);
//	//p = NULL;
//
//	//4.使用free释放动态内存开辟内存的一部分
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
//	////回收空间
//	//使用free释放动态内存开辟内存的一部分
//	//free(p);
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	////...
//	//free(p);
//
//	//6.动态开辟内存忘记释放（内存泄露）
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	return 0;
//}

//经典笔试题
//void GetMemory(char* p)
//{ 
//	p = (char*)malloc(100);//卧底 
//}
////p是上司，卧底身份只有上司知道；
////一天，上司死了，卧底无法澄清了。 -- 内存泄露
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	//1.运行代码程序会出现崩溃的现象
//	//2.程序存在内存泄露的问题
//	//str以值传递的形式给p
//	//p是GetMemory函数的形参，只能在函数内部有效，
//	//等GetMemory函数返回之后，动态开辟内存尚未释放，
//	//并且无法找到，所以会造成内存泄露
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}//    -----《高质量C++/C编程》

//改正1
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

//改正2
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
//	//char p[] = "hello world";//栈区
//	static char p[] = "hello world"; //静态区
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
//	//改
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
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	str = NULL;//改
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

//柔性数组
// 
// 结构中的柔性数组成员前面必须至少一个其他成员。
// sizeof 返回的这种结构大小不包括柔性数组的内存。
// 包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，
//  并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。
//struct S
//{
//	int n;//4
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
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
//	//释放
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
	//调整大小
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
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}







#define _CRT_SECURE_NO_WARNINGS

//内存操作函数
// memcpy
// memmove
// memset
// memcmp

//memcpy 
//void* memcpy(void* destination, const void* source, size_t num);
// 函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
// 这个函数在遇到'\0'的时候并不会停下来。
// 如果source和destination有任何的重叠，复制的结果都是未定义的。
// 
// void * memcpy ( void * destination, const void * source, size_t num ); 
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
//如果源空间和目标空间出现重叠，就得使用memmove函数处理。
//
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//struct s
//{
//	char name[20];
//	int age;
//};
////模拟实现
//void my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
////
////C语言标准：
////memcpy只要处理 不重叠的内存拷贝就可以
////memmove 处理重叠内存的拷贝
////
//
//void my_memmove(void* dst, const void* src , size_t count)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	void * ret = dst; 
//	if ( dst < src ) 
//	{  
//		//前->后
//		while (count--) 
//		{
//			*(char *)dst = *(char *)src;  
//		    ++(char *)dst;  
//		    ++(char *)src;
//		}  
//	}  
//	else 
//	{   
//		//后->前
//		while (count--) 
//		{
//			*((char*)dst + count) = *((char*)src + count);
//		} 
//	}
//	return ret; 
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	struct s arr3[] = { {"zhangsan",20},{"lisi",0} };
//	struct s arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memmove(arr3 + 2, arr3, 20);
//
//	return 0;
//}

//memcmp
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 ...
//	//01 00 00 00 02 00 00 00 05 00 00 ...
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset - 内存设置

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40个字节
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 ...
//	memset(arr, 1, 10);
//
//	return 0;
//}

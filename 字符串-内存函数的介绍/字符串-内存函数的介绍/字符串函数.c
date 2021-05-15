#define _CRT_SECURE_NO_WARNINGS

//操作对象：字符串，\0

///长度不受限制的字符串函数
//strcpy
//strcat
//strcmp

//strcpy
// char* strcpy(char * destination, const char * source );
// 源字符串必须以'\0'结束。
// 会将源字符串中的'\0'拷贝到目标空间。
// 目标空间必须足够大，以确保能存放源字符串。
// 目标空间必须可变。
// 学会模拟实现
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dst, char*src)
//{
//	
//	assert(dst != NULL);
//	assert(src != NULL);
//	char* ret = dst;
//	//拷贝src指向的字符串到dst指向的空间，包含'\0'
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//错误示范
//	//char* arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//错误示范
//	//char arr2[] = { 'b', 'i', 't' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat
// char * strcat ( char * destination, const char * source );
// 源字符串必须以'\0'结束。
// 目标空间必须有足够的大，能容纳下源字符串的内容。
// 目标空间必须可修改。
// 字符串自己给自己追加，如何？
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dst, char* src)
//{
//	char* ret = dst;
//	assert(dst && src);
//	//1.找到目的字符串的'\0'
//	while (*dst != '\0')
//	{
//		dst++;
//	}
//	//2.追加
//	while (*dst++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp
// int strcmp ( const char * str1, const char * str2 );
// 第一个字符串大于第二个字符串，则返回大于0的数字
// 第一个字符串等于第二个字符串，则返回0
// 第一个字符串小于第二个字符串，则返回小于0的数字
// 那么如何判断两个字符串？
//
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		*str1++;
//		*str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "aqwer";
//	int ret = my_strcmp(p1, p2);
//	
//	printf("ret = %d\n", ret);
//	return 0;
//}

//长度受限制的字符串函数

//strncpy
//strncat
//strncmp

//strncpy
// char * strncpy ( char * destination, const char * source, size_t num );
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* dest, const char* src, int n)
//{
//	assert(dest);
//	assert(src);
//	char* p = dest;
//	while (n--)
//	{
//		*p++ = *src++;
//	}
//	*p = 0;
//	return dest;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bite";
//	//模拟实现
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncat
// char * strncat ( char * destination, const char * source, size_t num );
//#include<stdio.h>
//#include<assert.h>
// char* my_strncat(char*dest, const char*src, int n)
//{
//
//     assert(dest);
//     assert(src);
//     char* p = dest;
//     while (*p)
//     {
//	      p++;
//     }
//     while (n--)
//     {
//	     *p++ = *src++;
//     }
//         *p = 0;
//         return dest;
//}
//int main()
//{
//	char arr1[] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncmp
// int strncmp ( const char * str1, const char * str2, size_t num );
//#include<stdio.h>
//#include<assert.h>
//int my_strncmp(const char* str1, const char* str2, int n)
//{
//	assert(str1);
//	assert(str2);
//	while (n--)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//		{
//			if ((*str1 - *str2) < 0)
//				return -1;
//			else
//				return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abcdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = my_strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//字符串查找
//strstr
//strtok

//strstr
// char * strstr ( const char *, const char * );
//#include<stdio.h>
//#include<assert.h>
////KMP 算法
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;//记录位置
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ( *s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return  cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok
// char * strtok ( char * str, const char * sep );
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
// strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。
// （注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
// strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
// strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
// 如果字符串中不存在更多的标记，则返回NULL指针。
//

//#include<stdio.h>
//int main()
//{
//	//192.168.31.121 - strtok
//	//
//	//zpe@bitedu.tech   @.
//	//char arr[] = "zpe@bitedu.tech";
//	//char* p = "@.";
//	
//	//点分十进制的表达方式
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//	
//	//zpe\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切除buf中的字符串
//	char*ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL ; ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);//zpe
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);//bitedu
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);//tech
//	//return 0;
//}

//strerror
// char * strerror ( int errnum );

//#include<stdio.h>
//#include<errno.h>
//int main()
//{
//	//错误码 错误信息 
//	//0 -    No error
//	//1 -    Operation not permmited
//	//2 -    No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open files success\n");
//	}
//	return 0;
//}




#define _CRT_SECURE_NO_WARNINGS
//strlen
// 字符串已经'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数（不包含'\0')。
// 参数指向的字符串必须要以'\0'结束。
// 注意函数的返回值为size_t，是无符号的（易错）
// 学会模拟实现

//#include<stdio.h>
//#include<assert.h>
//1.计数器的方法
//2.递归:
//  不创建临时变量
//3.指针-指针

//size_t == unsigned int
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = strlen("abcdef");
//	//错误示范
// 	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len = my_strlen(arr);
//	printf("%d\n", len);
//	if (my_strlen("abc") - my_strlen("abcdef")>0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
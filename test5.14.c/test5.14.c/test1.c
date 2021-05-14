#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6, 12
//	return 0;
//}

////逆序一个字符串的内容
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef --> fedcba
//	gets(arr);//读取一行
//    //逆序函数
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2  5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////求0-100000之间的所有水仙花数(自幂数)并输出
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//		//判断i是否为水仙花数(自幂数)
//		//1.计算i的位数  n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while ( tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i每一位的n次之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//打印菱形图案
//      *
//     ***      
//    *****           
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，
// 20元，可以喝多少汽水//39
//0.5
//20/0.5 = 40-1 = 39
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
////	total = money;
////	empty = money;
////	//换回来的汽水
////	while (empty>=2)
////	{
////		total += empty / 2;
////		empty = empty / 2 + empty % 2;
////	}
//	printf("total=%d", total);
//	return 0;
//}

//调整数组使所有奇数位于所有偶数前面
//#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[],int sz)
//{
//	//1 2 3 4 5 6 7 8 9 10
//	//1.从左边开始找一个偶数
//	//2.从右边开始找一个奇数
//	//3.把他们交换
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从左边找偶数
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left != right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//unsigned char - 1个字节-8个bit位 
//	//0-255
//	//00000000 - 0
//	//00000001 - 1
//	//...
//	//11111111 - 255
//
//	c = a + b;//整型提升
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100
//	//00101100 - c
//	//00000000000000000000000000101100
//	// 
//	//00000000000000000000000011001000
//	//11001000-a
//	//00000000000000000000000001100100
//	//01100100-b
//
//	printf("%d %d", a + b, c);//300  44
//	return 0;
//}

//在32位大端模式处理器上变量b等于( )
//#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	//0x1234 == 0x00 00 12 34
//	//低地址———————————>高地址
//	//
//	unsigned char b = *(unsigned char *)&a;
//	printf("%d\n", b);//0
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//-128 --> 127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 ... -128 127 126 125 ... 3 2 1 0 -1 -2 ...
//
//	printf("%d\n", strlen(a));//255
//	return 0;
//}

//打印杨辉三角
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// ..........
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j]+arr[i-1][j-1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//谋杀案，凶手必为4个嫌疑犯的一个
//A，不是我。 //1
//B.是C。     //1
//C.是D。     //0
//D.C在胡说。 //1
// 已知3个人说了真话，1个人说的是假话
//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}
//找工作的时候会考
// 
//赛马问题 有36匹马，6个跑道，没有计时器，请赛马确定36匹马中的前三名。
//请问最少比赛几次 //8
//
//赛马问题 有25匹马，5个跑道，没有计时器，请赛马确定25匹马中的前三名。
//请问最少比赛几次
//
//烧香问题
//有一种香，材质不均匀，但每一根这样的香，燃烧完恰好是1小时，
//给你两根香，帮我确定一个15分钟的时间段
// 
//思维题-智力题
//  

//猜名次
//5名运动员参加了10米台跳水比赛
// A：B第二，我第三
// B：我第二，E第四
// C：我第一，D第三
// D：C最后，我第三
// E：我第四，A第一
// 每位选手都说对了一半
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//*****
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//int *fun(int a, int b);//函数声明
//int(*)fun(int a,int b);//err
//int(*fun)(int a,int b);//函数指针
//(int*)fun(int a,int b);//函数声明

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋1个字符得到BCDA
//ABCD左旋2个字符得到CDAB
//
//旋转字符串
//1.暴力求解法
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void left_move(char *arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转2个字符
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//2.三部翻转法
//abcdef
//bafedc
//cdefab
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1);//逆序左边
//	reverse(arr+k, arr+len-1);//逆序右边
//	reverse(arr, arr+len-1);//逆序整体
//}
//int main()
//{
//    char arr[] = "abcdef"; 
//    left_move(arr, 2);
//
//    printf("%s\n", arr);
//
//    return 0;
//}

//判断一个字符串是否为另外一个字符串旋转之后的字符串
//例如：
// 给定s1=AABCD和s2=BCDAA，返回1
// 给定s1=abcd和s2=ABCD，返回0
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);	
//	int len = strlen(arr);
//	assert(k <= len);
//
//	reverse(arr, arr+k-1);//逆序左边
//	reverse(arr+k, arr+len-1);//逆序右边
//	reverse(arr, arr+len-1);//逆序整体
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1,1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//1.在str1字符串中追加一个str字符串
	//strcat不能自己给自己追加
	//strncat
	//trcat(str1, str1);//err
	strncat(str1, str1, 6);//abcdefabcdef
	//2.判断str2指向的字符串是否是str1指向的字符串的子串
	//strstr-找子串的
	char* ret = strstr(str1,  str2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}






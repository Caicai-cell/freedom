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

////����һ���ַ���������
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
//	gets(arr);//��ȡһ��
//    //������
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��
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

////��0-100000֮�������ˮ�ɻ���(������)�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���(������)
//		//1.����i��λ��  nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while ( tmp /= 10)
//		{
//			n++;
//		}
//		//2.����iÿһλ��n��֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//��ӡ����ͼ��
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
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ��
// 20Ԫ�����Ժȶ�����ˮ//39
//0.5
//20/0.5 = 40-1 = 39
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
////	total = money;
////	empty = money;
////	//����������ˮ
////	while (empty>=2)
////	{
////		total += empty / 2;
////		empty = empty / 2 + empty % 2;
////	}
//	printf("total=%d", total);
//	return 0;
//}

//��������ʹ��������λ������ż��ǰ��
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
//	//1.����߿�ʼ��һ��ż��
//	//2.���ұ߿�ʼ��һ������
//	//3.�����ǽ���
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//�������ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
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
//	//unsigned char - 1���ֽ�-8��bitλ 
//	//0-255
//	//00000000 - 0
//	//00000001 - 1
//	//...
//	//11111111 - 255
//
//	c = a + b;//��������
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

//��32λ���ģʽ�������ϱ���b����( )
//#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	//0x1234 == 0x00 00 12 34
//	//�͵�ַ����������������������>�ߵ�ַ
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

//��ӡ�������
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
//	//��ӡ
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

//ıɱ�������ֱ�Ϊ4�����ɷ���һ��
//A�������ҡ� //1
//B.��C��     //1
//C.��D��     //0
//D.C�ں�˵�� //1
// ��֪3����˵���滰��1����˵���Ǽٻ�
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
//�ҹ�����ʱ��ῼ
// 
//�������� ��36ƥ��6���ܵ���û�м�ʱ����������ȷ��36ƥ���е�ǰ������
//�������ٱ������� //8
//
//�������� ��25ƥ��5���ܵ���û�м�ʱ����������ȷ��25ƥ���е�ǰ������
//�������ٱ�������
//
//��������
//��һ���㣬���ʲ����ȣ���ÿһ���������㣬ȼ����ǡ����1Сʱ��
//���������㣬����ȷ��һ��15���ӵ�ʱ���
// 
//˼ά��-������
//  

//������
//5���˶�Ա�μ���10��̨��ˮ����
// A��B�ڶ����ҵ���
// B���ҵڶ���E����
// C���ҵ�һ��D����
// D��C����ҵ���
// E���ҵ��ģ�A��һ
// ÿλѡ�ֶ�˵����һ��
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
//	//����ռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//*****
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int *fun(int a, int b);//��������
//int(*)fun(int a,int b);//err
//int(*fun)(int a,int b);//����ָ��
//(int*)fun(int a,int b);//��������

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����1���ַ��õ�BCDA
//ABCD����2���ַ��õ�CDAB
//
//��ת�ַ���
//1.������ⷨ
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
//		//����ת2���ַ�
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
//2.������ת��
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
//	reverse(arr, arr+k-1);//�������
//	reverse(arr+k, arr+len-1);//�����ұ�
//	reverse(arr, arr+len-1);//��������
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

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//���磺
// ����s1=AABCD��s2=BCDAA������1
// ����s1=abcd��s2=ABCD������0
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
//	reverse(arr, arr+k-1);//�������
//	reverse(arr+k, arr+len-1);//�����ұ�
//	reverse(arr, arr+len-1);//��������
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
	//1.��str1�ַ�����׷��һ��str�ַ���
	//strcat�����Լ����Լ�׷��
	//strncat
	//trcat(str1, str1);//err
	strncat(str1, str1, 6);//abcdefabcdef
	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	//strstr-���Ӵ���
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






#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//�������
//void  Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] =0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//�������ʼ��
//	Print(arr, sz);//��ӡ
//	Reverse(arr,sz);
//	Print(arr, sz);//��ӡ
//	return 0;
//}

////��������
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//int i;//ȫ�ֱ���-δ��ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	if (i > sizeof(i))//�������������ռ�ڴ�Ĵ�С  >=0 �޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 , a=6
//	b = ++c, c++, ++a, a++;//=���ȼ����ڣ� b=7,c=8,a=7
//	b += a++ + c;//a=8,c=8,b=23
//	printf("a=%d b=%d c=%d\n",a,b,c);//a=9,b=23,c=8
//	return 0;
//}

//ͳ�ƶ�������1�ĸ���
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	//дһ��������a�Ķ�����(����)��ʾ���м���1
//	int count = count_bit_one(a);
//	//-1
//	//100000000000000000000000000000001
//	//111111111111111111111111111111110
//	//111111111111111111111111111111111
//	//13
//	//000000000000000000000000000001101
//	//
//	printf("count=%d\n", count);
//	return 0;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ�����(����)��ʾ���м���1
//	int count = count_bit_one(a);
//	//-1
//	//100000000000000000000000000000001
//	//111111111111111111111111111111110
//	//111111111111111111111111111111111
//	//000000000000000000000000000000001 
//	//
//	//13
//	//000000000000000000000000000001101
//	//
//	printf("count=%d\n", count);
//	return 0;
//}

////����㷨
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////n=n&(n-1)
////n
////13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ�����(����)��ʾ���м���1
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

////��������в�ͬλ�ĸ���
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	//return count_bit_one(tmp);
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",&m,&n);
//	get_diff_bit(m, n);
//	int count = get_diff_bit(m, n);
//	printf("count= %d\n", count);
//	return 0;
//}

////��ӡ�����Ƶ�����λ��ż��λ
//void Print(int m)
//{
//	int i = 0;
//	printf("����λ\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d",&m);
//	Print(m);
//	return 0;
//}

 //ʹ��ָ���ӡ��������
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

////n*n�˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//�ַ�������
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void revese_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	revese_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
// 
//����reverse string("abcdef")
//1.a��f����;
//2.����reverse string("b c d e");
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void revese_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1) >=2)
//		revese_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	revese_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���ݹ麯��DiliSum(n)������һ���Ǹ����������������������֮��
//���磬����DiliSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19
//DiliSum(1729)
//DiliSum(172) + 1729%10
//DiliSum(17) + 172%10 + 1729%10
// DiliSum(1) + 17%10 + 172%10 + 1729%10
//1+7+2+9
//
//int DiliSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DiliSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DiliSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

double Pow(int n, int k)
{
	//n*k=n*n^(k-1)
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n,k);
	printf("ret = %.2lf\n", ret);
	return 0;
}


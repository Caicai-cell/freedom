#define _CRT_SECURE_NO_WARNINGS

//���������ַ�����\0

///���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp

//strcpy
// char* strcpy(char * destination, const char * source );
// Դ�ַ���������'\0'������
// �ὫԴ�ַ����е�'\0'������Ŀ��ռ䡣
// Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
// Ŀ��ռ����ɱ䡣
// ѧ��ģ��ʵ��
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dst, char*src)
//{
//	
//	assert(dst != NULL);
//	assert(src != NULL);
//	char* ret = dst;
//	//����srcָ����ַ�����dstָ��Ŀռ䣬����'\0'
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//����ʾ��
//	//char* arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//����ʾ��
//	//char arr2[] = { 'b', 'i', 't' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat
// char * strcat ( char * destination, const char * source );
// Դ�ַ���������'\0'������
// Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
// Ŀ��ռ������޸ġ�
// �ַ����Լ����Լ�׷�ӣ���Σ�
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dst, char* src)
//{
//	char* ret = dst;
//	assert(dst && src);
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dst != '\0')
//	{
//		dst++;
//	}
//	//2.׷��
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
// ��һ���ַ������ڵڶ����ַ������򷵻ش���0������
// ��һ���ַ������ڵڶ����ַ������򷵻�0
// ��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
// ��ô����ж������ַ�����
//
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		*str1++;
//		*str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
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

//���������Ƶ��ַ�������

//strncpy
//strncat
//strncmp

//strncpy
// char * strncpy ( char * destination, const char * source, size_t num );
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����
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
//	//ģ��ʵ��
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
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = my_strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�������
//strstr
//strtok

//strstr
// char * strstr ( const char *, const char * );
//#include<stdio.h>
//#include<assert.h>
////KMP �㷨
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;//��¼λ��
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
//			return  cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ���
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok
// char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
// strtok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣
// ��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
// strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
// strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
// ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣
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
//	//���ʮ���Ƶı�﷽ʽ
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//	
//	//zpe\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�г�buf�е��ַ���
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
//	//������ ������Ϣ 
//	//0 -    No error
//	//1 -    Operation not permmited
//	//2 -    No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	
//	//���ļ�
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




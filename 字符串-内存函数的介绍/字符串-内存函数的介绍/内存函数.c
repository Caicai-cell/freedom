#define _CRT_SECURE_NO_WARNINGS

//�ڴ��������
// memcpy
// memmove
// memset
// memcmp

//memcpy 
//void* memcpy(void* destination, const void* source, size_t num);
// ����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
// �������������'\0'��ʱ�򲢲���ͣ������
// ���source��destination���κε��ص������ƵĽ������δ����ġ�
// 
// void * memcpy ( void * destination, const void * source, size_t num ); 
//��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
//���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
//
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//struct s
//{
//	char name[20];
//	int age;
//};
////ģ��ʵ��
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
////C���Ա�׼��
////memcpyֻҪ���� ���ص����ڴ濽���Ϳ���
////memmove �����ص��ڴ�Ŀ���
////
//
//void my_memmove(void* dst, const void* src , size_t count)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	void * ret = dst; 
//	if ( dst < src ) 
//	{  
//		//ǰ->��
//		while (count--) 
//		{
//			*(char *)dst = *(char *)src;  
//		    ++(char *)dst;  
//		    ++(char *)src;
//		}  
//	}  
//	else 
//	{   
//		//��->ǰ
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

//memset - �ڴ�����

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40���ֽ�
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 ...
//	memset(arr, 1, 10);
//
//	return 0;
//}

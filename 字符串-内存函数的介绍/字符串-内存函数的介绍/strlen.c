#define _CRT_SECURE_NO_WARNINGS
//strlen
// �ַ����Ѿ�'\0'��Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�������������'\0')��
// ����ָ����ַ�������Ҫ��'\0'������
// ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ��״�
// ѧ��ģ��ʵ��

//#include<stdio.h>
//#include<assert.h>
//1.�������ķ���
//2.�ݹ�:
//  ��������ʱ����
//3.ָ��-ָ��

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
//	//����ʾ��
// 	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len = my_strlen(arr);
//	printf("%d\n", len);
//	if (my_strlen("abc") - my_strlen("abcdef")>0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
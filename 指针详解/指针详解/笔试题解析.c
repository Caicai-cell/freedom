#define _CRT_SECURE_NO_WARNINGS
//ָ�������ı��������

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//	//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//	//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
//
//	//һά����
//	//int a[] = {1,2,3,4};//4*4 = 16
//	//printf("%d\n",sizeof(a));      //16  -sizeof(������)-������������ܴ�С-��λ���ֽ�
//	//printf("%d\n",sizeof(a+0));    //4/8 - �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n",sizeof(*a));     //4   - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//	//printf("%d\n",sizeof(a+1));    //4/8 - �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n",sizeof(a[1]));   //4   - ��2��Ԫ�ش�С
//	//printf("%d\n",sizeof(&a));     //4/8 - &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n",sizeof(*&a));    //16  - &a����ĵ�ַ������ĵ�ַ�����÷������飬sizeof����ľ�������Ĵ�С����λ�ֽ�
//	//printf("%d\n",sizeof(&a+1));   //4/8 - &a������ĵ�ַ��&a+1��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	//printf("%d\n",sizeof(&a[0]));  //4/8 - &a[0]��һ��Ԫ�صĵ�ַ
//	//printf("%d\n",sizeof(&a[0]+1));//4/8 - &a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//
//	////�ַ�����
//	//char arr[] = { 'a','b','c','d','e','f' };
//	
//	//printf("%d\n", sizeof(arr));        //6   - sizeof������������С��6*1=6���ֽ�
//	//printf("%d\n", sizeof(arr + 0));    //4/8 - arr����Ԫ�صĵ�ַ arr+0������Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*arr));       //1   - arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��һ���ֽ� 
//	//printf("%d\n", sizeof(arr[1]));     //1
//	//printf("%d\n", sizeof(&arr));       //4/8 - &arr��Ȼ�������ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));   //4/8 - &arr+1���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - �ڶ���Ԫ�صĵ�ַ 
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));        //���ֵ
//	//printf("%d\n", strlen(arr + 0));    //���ֵ
//	////printf("%d\n", strlen(*arr));     //error
//	////printf("%d\n", strlen(arr[1]));   //error
//	//printf("%d\n", strlen(&arr));       //���ֵ
//	//printf("%d\n", strlen(&arr + 1));   //���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	//char arr[] = "abcdef";
//
//	//printf("%d\n", sizeof(arr));        //7   - sizeof(arr)���������Ĵ�С����λ�ֽ�
//	//printf("%d\n", sizeof(arr + 0));    //4/8 - ������ǵ�ַ�Ĵ�С-arr+0����Ԫ�ص�ַ 
//	//printf("%d\n", sizeof(*arr));       //1   - *arr����Ԫ�أ�sizeof(*arr)������Ԫ�ش�С 
//	//printf("%d\n", sizeof(arr[1]));     //1   - arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	//printf("%d\n", sizeof(&arr));       //4/8 - &arr��Ȼ�������ַ����Ҳ�ǵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));   //4/8 - &arr+1���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - �ڶ���Ԫ�صĵ�ַ 
//
//	//printf("%d\n", strlen(arr));		  //6
//	//printf("%d\n", strlen(arr + 0));	  //6
//	////printf("%d\n", strlen(*arr));	  //error
//	////printf("%d\n", strlen(arr[1]));	  //error
//	//printf("%d\n", strlen(&arr));       //6 - &arr - ����ĵ�ַ-����ָ�� char(*p)[7]= &arr
//	//printf("%d\n", strlen(&arr + 1));   //���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char* p = "abcdef"; 
//
//	//printf("%d\n", sizeof(p));	    //4/8 - ����ָ�����p�Ĵ�С
//	//printf("%d\n", sizeof(p + 1));    //4/8 - p+1�õ������ַ�b�ĵ�ַ
//	//printf("%d\n", sizeof(*p));	    //1   - *p�����ַ����ĵ�һ����ַ - ��a' 
//	//printf("%d\n", sizeof(p[0]));	    //1   - p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p));		//4/8 - ��ַ
//	//printf("%d\n", sizeof(&p + 1));   //4/8 - ������ַ�ĵ�ַ
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 - b�ĵ�ַ
//
//	//printf("%d\n", strlen(p));        //6
//	//printf("%d\n", strlen(p + 1));    //5
//	////printf("%d\n", strlen(*p));     //error
//	////printf("%d\n", strlen(p[0]));	//error
//	//printf("%d\n", strlen(&p));	    //���ֵ
//	//printf("%d\n", strlen(&p + 1));   //���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//��ά����
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));         //48 - 3*3*4
//	printf("%d\n",sizeof(a[0][0]));   //4
//	printf("%d\n",sizeof(a[0]));      //16 - a[0]�൱�ڵ�һ����Ϊһά�������������
//	                                  //     sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//
//	printf("%d\n",sizeof(a[0]+1));    //4  - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	                                  //     ����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n",sizeof(*(a[0]+1))); //4  - *(a[0]+1)�ǵ�һ�еڶ���Ԫ�أ���С4���ֽ�
//	printf("%d\n",sizeof(a+1));       //4  - a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)������a����Ԫ�ص�ַ
//	                                  //     �Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ��)�ĵ�ַ
//                                      //     a+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1))); //16 - sizeof(a[1])����ڶ��еĴ�С
//    printf("%d\n",sizeof(&a[0]+1));   //4  - �ڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(&a[0]+1)));//16 - ����ڶ��еĴ�С
//	printf("%d\n",sizeof(*a));        //16 - a����Ԫ�ص�ַ-��һ�е�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));     //16
//
//
//	return 0;
//}

//д�������־���
//1.�������Ǵ���
//2.���������ڴ�
//3.�������Ǵ���

//ָ�������
 
#include<stdio.h>
//int main() 
//{ 
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2, 5
//	return 0; 
//}

//struct Test 
//{ 
//	int Num; 
//	char* pcName;
//	short sDate; 
//	char cha[2];
//	short sBa[4]; 
//}*p;
//
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014 - ����20���ֽ� +20
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001 - ��������+1����ʵʵ���ڵ�+1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004 - ����һ���޷������� +4
//	return 0;
//}

//int main()
//{                             //С�˴洢ģʽ
//	int a[4] = { 1, 2, 3, 4 };//�͵�ַ| 01 00 00 00 | 02 00 00 00 | 03 00 00 00 | 04 00 00 00 |�ߵ�ַ
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf( "%x,%x", ptr1[-1], *ptr2);//4, 20000000
//	                                  //ptr1[-1] == *(ptr1-1)
//	                                  // 00 00 00 | 02   
//	return 0;
//}

//int main()
//{       //���ű��ʽ    1��     3��     5 
// 	int a[3][2] = { (0, 1), (2, 3), (4, 5) };     //1 3
//	int *p;                                       //5 0 
//	p = a[0];                                     //0 0
//	printf( "%d", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//0xff ff ff fc,  -4
//																//10000000000000000000000000000100
//																//11111111111111111111111111111011
//																//11111111111111111111111111111100
//																//f   f   f   f   f   f   f   c
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };                //                    ptr1
//	int* ptr1 = (int*)(&aa + 1);                                     //1 2 3 4 5 6 7 8 9 10
//	int* ptr2 = (int*)(*(aa + 1));//aa[1]-�ڶ�����Ԫ�ص�ַ          //          ptr2
//	printf("%d,%d", * (ptr1 - 1), * (ptr2 - 1));//10, 5
//	return 0;
//}

//int main()
//{ 
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++; 
//	printf("%s\n", * pa);//at
//	return 0; 
//}

int main()
{ 
	char* c[] = { "ENTER","NEW","POINT","FIRST" };   //  cpp             cp          c
	char** cp[] = { c + 3,c + 2,c + 1,c };           //| char*** |     | c+3 |     | char* |  --> "ENTER"
	char*** cpp = cp;                                //                | c+2 |     | char* |  --> "NEW"
	                                                 //                | c+1 |     | char* |  --> "POINT"
	                                                 //                | c   |     | char* |  --> "FIRST"
	//
	printf("%s\n", **++cpp);        //POINT - ++cpp->|c+2| ������->c+2 -> ������|char*|->������->"POINT"             
	printf("%s\n", *-- * ++cpp + 3);//ER    - ++cpp->|c+1| ������->c+1 -- ->c ->��һ��|char*|->������->"ENTER"->+3 ->"ER"
	printf("%s\n", *cpp[-2] + 3);   //ST    - *cpp[-2] == *(*(cpp-2))->|c+3| ������->���ĸ�|char*|->������->"FIRST"->+3 ->"ST"
 	printf("%s\n", cpp[-1][-1] + 1);//NW    - cpp[-1][-1] == *(*(cpp-1)-1)+1
	                                //        cpp-1 ->|c+2|->������->c+2 -1 ->c+1 ->�ڶ���|char*|->������->"NEW"->+1 ->"NW"
	return 0; 
}




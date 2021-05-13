#define _CRT_SECURE_NO_WARNINGS
//指针和数组的笔试题解析

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//	//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//	//3. 除此之外所有的数组名都表示首元素的地址。
//
//	//一维数组
//	//int a[] = {1,2,3,4};//4*4 = 16
//	//printf("%d\n",sizeof(a));      //16  -sizeof(数组名)-计算的是数组总大小-单位是字节
//	//printf("%d\n",sizeof(a+0));    //4/8 - 数组名这里表示首元素地址，a+0还是首元素地址，地址的大小就是4/8个字节
//	//printf("%d\n",sizeof(*a));     //4   - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//	//printf("%d\n",sizeof(a+1));    //4/8 - 数组名这里表示首元素地址，a+0还是首元素地址，地址的大小就是4/8个字节
//	//printf("%d\n",sizeof(a[1]));   //4   - 第2个元素大小
//	//printf("%d\n",sizeof(&a));     //4/8 - &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//	//printf("%d\n",sizeof(*&a));    //16  - &a数组的地址，数组的地址解引用访问数组，sizeof计算的就是数组的大小，单位字节
//	//printf("%d\n",sizeof(&a+1));   //4/8 - &a是数组的地址，&a+1地址跳过整个数组，但还是地址，所以是4/8个字节
//	//printf("%d\n",sizeof(&a[0]));  //4/8 - &a[0]第一个元素的地址
//	//printf("%d\n",sizeof(&a[0]+1));//4/8 - &a[0]+1是第二个元素的地址
//
//	////字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//	
//	//printf("%d\n", sizeof(arr));        //6   - sizeof计算的是数组大小，6*1=6个字节
//	//printf("%d\n", sizeof(arr + 0));    //4/8 - arr是首元素的地址 arr+0还是首元素的地址
//	//printf("%d\n", sizeof(*arr));       //1   - arr是首元素地址，*arr就是首元素，首元素是字符，大小是一个字节 
//	//printf("%d\n", sizeof(arr[1]));     //1
//	//printf("%d\n", sizeof(&arr));       //4/8 - &arr虽然是数组地址，但还是地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));   //4/8 - &arr+1是跳过整个数组后的地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 第二个元素的地址 
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));        //随机值
//	//printf("%d\n", strlen(arr + 0));    //随机值
//	////printf("%d\n", strlen(*arr));     //error
//	////printf("%d\n", strlen(arr[1]));   //error
//	//printf("%d\n", strlen(&arr));       //随机值
//	//printf("%d\n", strlen(&arr + 1));   //随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	//char arr[] = "abcdef";
//
//	//printf("%d\n", sizeof(arr));        //7   - sizeof(arr)计算的数组的大小，单位字节
//	//printf("%d\n", sizeof(arr + 0));    //4/8 - 计算的是地址的大小-arr+0是首元素地址 
//	//printf("%d\n", sizeof(*arr));       //1   - *arr是首元素，sizeof(*arr)计算首元素大小 
//	//printf("%d\n", sizeof(arr[1]));     //1   - arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	//printf("%d\n", sizeof(&arr));       //4/8 - &arr虽然是数组地址，但也是地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));   //4/8 - &arr+1是跳过整个数组后的地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 第二个元素的地址 
//
//	//printf("%d\n", strlen(arr));		  //6
//	//printf("%d\n", strlen(arr + 0));	  //6
//	////printf("%d\n", strlen(*arr));	  //error
//	////printf("%d\n", strlen(arr[1]));	  //error
//	//printf("%d\n", strlen(&arr));       //6 - &arr - 数组的地址-数组指针 char(*p)[7]= &arr
//	//printf("%d\n", strlen(&arr + 1));   //随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char* p = "abcdef"; 
//
//	//printf("%d\n", sizeof(p));	    //4/8 - 计算指针变量p的大小
//	//printf("%d\n", sizeof(p + 1));    //4/8 - p+1得到的是字符b的地址
//	//printf("%d\n", sizeof(*p));	    //1   - *p就是字符串的第一个地址 - ‘a' 
//	//printf("%d\n", sizeof(p[0]));	    //1   - p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p));		//4/8 - 地址
//	//printf("%d\n", sizeof(&p + 1));   //4/8 - 跳过地址的地址
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 - b的地址
//
//	//printf("%d\n", strlen(p));        //6
//	//printf("%d\n", strlen(p + 1));    //5
//	////printf("%d\n", strlen(*p));     //error
//	////printf("%d\n", strlen(p[0]));	//error
//	//printf("%d\n", strlen(&p));	    //随机值
//	//printf("%d\n", strlen(&p + 1));   //随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//二维数组
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));         //48 - 3*3*4
//	printf("%d\n",sizeof(a[0][0]));   //4
//	printf("%d\n",sizeof(a[0]));      //16 - a[0]相当于第一行作为一维数组的数组名，
//	                                  //     sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n",sizeof(a[0]+1));    //4  - a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
//	                                  //     所以a[0]+1就是第一行第二个元素的地址
//
//	printf("%d\n",sizeof(*(a[0]+1))); //4  - *(a[0]+1)是第一行第二个元素，大小4个字节
//	printf("%d\n",sizeof(a+1));       //4  - a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址
//	                                  //     把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行(首元素)的地址
//                                      //     a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1))); //16 - sizeof(a[1])计算第二行的大小
//    printf("%d\n",sizeof(&a[0]+1));   //4  - 第二行的地址
//	printf("%d\n",sizeof(*(&a[0]+1)));//16 - 计算第二行的大小
//	printf("%d\n",sizeof(*a));        //16 - a是首元素地址-第一行地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));     //16
//
//
//	return 0;
//}

//写代码三种境界
//1.看代码是代码
//2.看代码是内存
//3.看代码是代码

//指针笔试题
 
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014 - 跳过20个字节 +20
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001 - 整型类型+1就是实实在在的+1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004 - 跳过一个无符号整型 +4
//	return 0;
//}

//int main()
//{                             //小端存储模式
//	int a[4] = { 1, 2, 3, 4 };//低地址| 01 00 00 00 | 02 00 00 00 | 03 00 00 00 | 04 00 00 00 |高地址
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf( "%x,%x", ptr1[-1], *ptr2);//4, 20000000
//	                                  //ptr1[-1] == *(ptr1-1)
//	                                  // 00 00 00 | 02   
//	return 0;
//}

//int main()
//{       //逗号表达式    1，     3，     5 
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
//	int* ptr2 = (int*)(*(aa + 1));//aa[1]-第二行首元素地址          //          ptr2
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
	printf("%s\n", **++cpp);        //POINT - ++cpp->|c+2| 解引用->c+2 -> 第三个|char*|->解引用->"POINT"             
	printf("%s\n", *-- * ++cpp + 3);//ER    - ++cpp->|c+1| 解引用->c+1 -- ->c ->第一个|char*|->解引用->"ENTER"->+3 ->"ER"
	printf("%s\n", *cpp[-2] + 3);   //ST    - *cpp[-2] == *(*(cpp-2))->|c+3| 解引用->第四个|char*|->解引用->"FIRST"->+3 ->"ST"
 	printf("%s\n", cpp[-1][-1] + 1);//NW    - cpp[-1][-1] == *(*(cpp-1)-1)+1
	                                //        cpp-1 ->|c+2|->解引用->c+2 -1 ->c+1 ->第二个|char*|->解引用->"NEW"->+1 ->"NW"
	return 0; 
}




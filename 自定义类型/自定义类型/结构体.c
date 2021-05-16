#define _CRT_SECURE_NO_WARNINGS

//结构体 
//结构体的声明
//结构的基础知识 
// 结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//描述学生：属性 - 名字+电话+性别+年龄

//struct stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4,s5,s6;
//
//struct stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct stu s1;
//	struct stu s2;
//	return 0;
//}

//特殊的声明
// 匿名结构体-一次性
//struct
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}*psa;
//int main()
//{
//	//psa = &sa;//编译器会把两个声明当成完全不同的两个类型，所以是非法的。
//	return 0;
//}

//结构体的自引用
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//int main()
//{
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体变量的定义和初始化
//#include<stdio.h>
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,7.62,"helloworld" };
//	struct S s = { 'c',{55.6,60},100,7.62,"helloworld" };
//	printf("%c %d% .2f %s\n", s.c, s.a, s.d, s.arr);
//	printf("%d %.2f\n", s.st.age, s.st.weight);
//	return 0;
//}

//结构体内存对齐
//结构体的对齐规则：
// 1.第一个成员在与结构体变量偏移量为0的地址处。
// 2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//    对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值
//    VS中默认的值为8
// 3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
// 4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//   结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//#include<stdio.h>
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//？  12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//?   8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//32
// 	return 0;
//}

//为什么存在内存对齐?
// 大部分的参考资料都是如是说的：
// 1. 平台原因(移植原因)： 
//    不是所有的硬件平台都能访问任意地址上的任意数据的；
//    某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
// 2. 性能原因： 
//    数据结构(尤其是栈)应该尽可能地在自然边界上对齐。 
//    原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
// 
// 总体来说：结构体的内存对齐是拿空间来换取时间的做法。
//    那在设计结构体的时候，我们既要满足对齐，又要节省空间，
// 如何做到：让占用空间小的成员尽量集中在一起。

// 修改默认对齐数 
// 之前我们见过了#pragma 这个预处理指令，这里我们再次使用，可以改变我们的默认对齐数。

///设置默认对齐数位4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//7->3
//	double d;//8
//};
//#pragma pack()
////取消设置默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//12
//
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c;//偏移量0
//	int i;//4
//	double d;//8
//};
//int main()
//{
//	//offsetof();//宏
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//
//	return 0;
//}

//结构体传参
//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////传值
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////传址
//void Print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);//传结构体
//	Print2(&s);//传地址
//	return 0;
//}
//上面的print1和print2函数哪个好些？
// 答案是：首选print2函数。 
// 原因：函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
// 如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//结论：结构体传参时，要传结构体地址


//位段
// 结构体讲完就得讲讲结构体实现位段的能力。
//什么是位段 
// 位段的声明和结构是类似的，有两个不同：
// 1.位段的成员必须是int、unsigned int 或signed int。
// 2.位段的成员名后边有一个冒号和一个数字。
//#include<stdio.h>
////位段 - 二进制位
////节省空间的
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6个字节*8= 48bit
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//
//	return 0;
//}

//位段的内存分配 
// 1. 位段的成员可以是int unsigned int signed int或者是char（属于整形家族）类型
// 2. 位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的。
// 3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}
//位段的跨平台问题 
// 1. int 位段被当成有符号数还是无符号数是不确定的。
// 2. 位段中最大位的数目不能确定。(16位机器最大16，32位机器最大32，写成27，在16位机器会出问题。)
// 3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
// 4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，
//    是舍弃剩余的位还是利用，这是不确定的。
//总结：
// 跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。
//


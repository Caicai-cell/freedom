#define _CRT_SECURE_NO_WARNINGS
//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针

//int Add(int x,int y)
//{
//    return x+y;
//}
//int main()
//{
//   int a=10;
//   int b=20;
//
//   //&函数名 和 函数名 都是函数的地址
//   
//   int(*pa)(int,int) = Add;
//   printf("%d\n",pa(2,3));    //5
//   printf("%d\n",Add(2,3));   //5
//
//   printf("%d\n",*pa(2,3));   //error
//
//   printf("%d\n",(*pa)(2,3)); //5
//
//   return 0;
//}
//
//void Print(char*str)
//{
//   printf("%s\n",str);
//}
//int main()
//{
//   int a;
//   int * pa;
//   void(*p)(char*)=Print;
//   (*p)("hello");
//
//   return 0;
//}
////——————————————————————————————————————————
////*************************************************************************************
////代码1  
//(*(void(*)())0)(); //把0强制类型转换成：void(*)()-函数指针类型-0就是一个函数的地址
//                   //调用0地址处的该函数
////					                                              ----《C陷阱与缺陷》
////代码2
//void(*signal(int, void(*)(int)))(int);
//
////signal是一个函数声明
////signal函数的参数有2个，第1个是int，第2个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
////signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//
//void(*      signal(int, void(*)(int))      )(int);
//
////简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int,pfun_t);
//
////************************************************************************************
////——————————————————————————————————————————
//
//int Add(int x,int y)
//{
//   return x+y;
//}
//int Sub(int x,int y)
//{
//   return x-y;
//}
//int Mul(int x,int y)
//{
//   return x*y;
//}
//int Div(int x,int y)
//{
//   return x/y;
//}
//int main()
//{
//    //指针数组
//    int* arr[5];
//    //需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//    int(*pa)(int, int)=Add;   //Sub/Mul/Div
//    int(*parr[4])(int, int)={Add,Sub,Mul,Div};   //函数指针的数组
//
//    int i=0;
//    for(i=0;i<4;i++)
//    {
//       printf("%d\n",parr[i](2,3));//5 -1 6 0
//    }
//
//    return 0;
//}
//
//
//my_strcpy(char* dst, const char* src)
//
////1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char* dst, const char* src)
//
////2.写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char* ,const char*);
//
////________________________________________________________________
////################################################################
////计算器
//#include<stdio.h>
//void menu()
//{
//   printf("**********************\n");
//   printf("*** 1.add    2.sub ***\n");
//   printf("*** 3.mul    4.div ***\n");
//   printf("*** 5.Xor    0.exit***\n");
//   printf("**********************\n");
//}
//
//int Add(int x, int y)
//{
//   return x+y;
//}
//int Sub(int x, int y)
//{
//   return x-y;
//}
//int Mul(int x, int y)
//{
//   return x*y;
//}
//int Div(int x, int y)
//{
//   return x/y;
//}
//int Xor(int x, int y)
//{
//   return x^y;
//}
//int main()
//{
//  int input=0;
//  int x=0;
//  int y=0;
//  //pfArr是一个函数指针数组 - 转移表
//  int(*pfArr[])	(int, int)={0, Add, Sub, Mul, Div, Xor};
//  do
//  {
//      menu();
//      printf("请选择:>");
//      scanf("%d",&input);
//      if(input>=1&&input<=4)
//      {
//         printf("请输入两个操作数:>");
//         scanf("%d%d",&x, &y);
//         int ret=pfArr[input](x, y);
//         printf("%d\n", ret);
//      }
//      else if(input==0)
//      {
//          printf("退出\n");
//      }
//      else
//      {
//          printf("input error\n");
//      }
//  }while(input);
//  return 0;
//}
////################################################################
////————————————————————————————————
//
//#include<stdio.h>
//void menu()
//{
//   printf("**********************\n");
//   printf("*** 1.add    2.sub ***\n");
//   printf("*** 3.mul    4.div ***\n");
//   printf("*** 5.Xor    0.exit***\n");
//   printf("**********************\n");
//}
//
//int Add(int x, int y)
//{
//   return x+y;
//}
//int Sub(int x, int y)
//{
//   return x-y;
//}
//int Mul(int x, int y)
//{
//   return x*y;
//}
//int Div(int x, int y)
//{
//   return x/y;
//}
//int Xor(int x, int y)
//{
//   return x^y;
//}
//
//void Calc(int (*pf)(int, int))
//{
//     int x=0;
//     int y=0;
//     printf("请输入两个操作数:>");
//     scanf("%d%d",&x, &y);
//     printf("%d\n",pf(x,y));
//}
//
//int main()
//{
//    int input=0;
//
//    do
//    {
//     menu();
//     printf("请选择:>");
//     scanf("%d",&input);
//
//     switch(input)
//      {
//         case 1:
//	     Calc(Add);
//	     break;
//	 case 2:
//	     Calc(Sub);	
//	     break;
//	 case 3:
//	     Calc(Mul);
//	     break;
//	 case 4:
//	     Calc(Div);
//	     break;
//	 case 5:
//	     Calc(Xor);
//	     break;
//	 case 0:
//	     printf("退出\n");
//	     break;
//	 default:
//	     printf("input error\n");
//	     break;
//      }
//     }while(input);
//     return 0;
//}
////——————————————————————
////############################################
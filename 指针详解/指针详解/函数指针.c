#define _CRT_SECURE_NO_WARNINGS
//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��

//int Add(int x,int y)
//{
//    return x+y;
//}
//int main()
//{
//   int a=10;
//   int b=20;
//
//   //&������ �� ������ ���Ǻ����ĵ�ַ
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
////������������������������������������������������������������������������������������
////*************************************************************************************
////����1  
//(*(void(*)())0)(); //��0ǿ������ת���ɣ�void(*)()-����ָ������-0����һ�������ĵ�ַ
//                   //����0��ַ���ĸú���
////					                                              ----��C������ȱ�ݡ�
////����2
//void(*signal(int, void(*)(int)))(int);
//
////signal��һ����������
////signal�����Ĳ�����2������1����int����2���Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//
//void(*      signal(int, void(*)(int))      )(int);
//
////��
//typedef void(*pfun_t)(int);
//pfun_t signal(int,pfun_t);
//
////************************************************************************************
////������������������������������������������������������������������������������������
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
//    //ָ������
//    int* arr[5];
//    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//    int(*pa)(int, int)=Add;   //Sub/Mul/Div
//    int(*parr[4])(int, int)={Add,Sub,Mul,Div};   //����ָ�������
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
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char* dst, const char* src)
//
////2.дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char*(*pfArr[4])(char* ,const char*);
//
////________________________________________________________________
////################################################################
////������
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
//  //pfArr��һ������ָ������ - ת�Ʊ�
//  int(*pfArr[])	(int, int)={0, Add, Sub, Mul, Div, Xor};
//  do
//  {
//      menu();
//      printf("��ѡ��:>");
//      scanf("%d",&input);
//      if(input>=1&&input<=4)
//      {
//         printf("����������������:>");
//         scanf("%d%d",&x, &y);
//         int ret=pfArr[input](x, y);
//         printf("%d\n", ret);
//      }
//      else if(input==0)
//      {
//          printf("�˳�\n");
//      }
//      else
//      {
//          printf("input error\n");
//      }
//  }while(input);
//  return 0;
//}
////################################################################
////����������������������������������������������������������������
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
//     printf("����������������:>");
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
//     printf("��ѡ��:>");
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
//	     printf("�˳�\n");
//	     break;
//	 default:
//	     printf("input error\n");
//	     break;
//      }
//     }while(input);
//     return 0;
//}
////��������������������������������������������
////############################################
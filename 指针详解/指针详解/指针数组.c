//指针数组   --是数组，用来存放指针的

//int main()
//{
//    int arr[10] = { 0 };//整型数组
//    char ch[5] = { 0 }; //字符数组
//    int* parr[4];   //存放整型指针的数组 -- 指针数组
//    char* pch[5];   //存放字符指针的数组 -- 指针数组
//    return 0;
//}
//
//int main()
//{
//    int a = 10;		//低级
//    int b = 20;		//没有这种用法的场景
//    int c = 30;
//    int d = 40;
//    int* arr[4] = { &a,&b,&c,&d };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d", *(arr[i]));//10 20 30 40
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int arr1[] = { 1,2,3,4,5 };
//    int arr2[] = { 2,3,4,5,6 };
//    int arr3[] = { 3,4,5,6,7 };
//
//    int* parr[] = { arr1,arr2,arr3 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 3; j++)
//        {
//            printf("%d ", *(parr[i] + j));
//        }
//        printf("\n");		       //1 2 3 4 5
//    }                            //2 3 4 5 6
//    return 0;			           //3 4 5 6 7
//}
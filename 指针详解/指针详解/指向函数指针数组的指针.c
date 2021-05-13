//指向函数指针数组的指针

//int main()
//{
//    int arr[10] = { 0 };
//    int(*pa)[10] = &arr;            //取出数组的地址
//
//    int(*pf)(int, int)
//    int(*pfArr[4])(int, int);     //pfArr是一个数组 - 函数指针的数组
//
//    int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//    //ppfArr是一个数组指针，指针指向的数组有4个元素
//    //指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//
//                                  //ppfArr是一个指向[函数指针数组]的指针
//    return 0;
//}
//
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    //指针数组
//    int* arr[10];
//
//    //数组指针
//    int* (*pa)[10] = &arr;
//
//    //函数指针
//    int(*pArr)(int, int) = Add;
//    //int sum=(*pAdd)(1,2);
//    //printf("sum=%d ", sum);
//
//    //函数指针的数组
//    int(*pArr[5])(int, int);
//
//    //指向函数指针数组的指针
//    int(*(*pArr[5])(int, int)) = &pArr;
//
//    return 0;
//}
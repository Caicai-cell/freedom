//ָ����ָ�������ָ��

//int main()
//{
//    int arr[10] = { 0 };
//    int(*pa)[10] = &arr;            //ȡ������ĵ�ַ
//
//    int(*pf)(int, int)
//    int(*pfArr[4])(int, int);     //pfArr��һ������ - ����ָ�������
//
//    int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//    //ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//    //ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
//
//                                  //ppfArr��һ��ָ��[����ָ������]��ָ��
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
//    //ָ������
//    int* arr[10];
//
//    //����ָ��
//    int* (*pa)[10] = &arr;
//
//    //����ָ��
//    int(*pArr)(int, int) = Add;
//    //int sum=(*pAdd)(1,2);
//    //printf("sum=%d ", sum);
//
//    //����ָ�������
//    int(*pArr[5])(int, int);
//
//    //ָ����ָ�������ָ��
//    int(*(*pArr[5])(int, int)) = &pArr;
//
//    return 0;
//}
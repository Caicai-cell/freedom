#define _CRT_SECURE_NO_WARNINGS
//�ص�������һ��ͨ������ָ����õĺ���
// 
//#include<stdio.h>
//void print(char* str)
//{
//    prinft("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//    printf("test\n");
//    p("bit");
//}
//
//int main()
//{
//
//    test(print);
//    return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//void BubbleSort(int arr[], int sz)
//{
//    //ȷ��ð�����������
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int flag = 1;//������һ��Ҫ����������Ѿ�����
//    //ÿһ��ð������
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                flag = 0;//������������ݲ���ȫ����
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//}
//
////qsort - ���������������͵�����
////qsort-�⺯��-����
////void qsort(void *base,
////           size_t num,
////           size_t width,
////           int(*cmp)(const void* e1, const void* e2)
////           );
//
//#include<stdlib.h>
//#include<string.h>
//struct  Stu
//{
//    char name[20];
//    int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//    //�Ƚ���������ֵ��
//    return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//    int arr[10] = { 2,5,9,7,8,4,6,1,3,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//    /*if( *(float*)e1 == *(float*)e2��;
//         return 0;
//    else if( *(float*)e1 > *(float*)e2��;
//         return 1;
//    else ( *(float*)e1 < *(float*)e2��;
//         return -1;*/
//    return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//void test2()
//{
//    float f[] = { 9.5, 5.2, 4.3, 9.4, 7.8 };
//    int sz = sizeof(f) / sizeof(f[0]);
//    qsort(f, sz, sizeof(f[0]), cmp_float);
//    int j = 0;
//    for (j = 0; j < sz; j++)
//    {
//        printf("%.2f ", f[j]);
//    }
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    //�Ƚ����־��ǱȽ��ַ���
//    //�ַ�������ֱ����><=���Ƚϣ�Ӧ����strcmp����
//    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//    struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//    //��һ���������������������Ԫ�ص�ַ
//    //�ڶ��������������������Ԫ�ظ���
//    //�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//    //���ĸ���������ָ�뺯�����Ƚ�����Ԫ�����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//    //            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//}
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ������
//void Swap(char* buf1, char* buf2, int width)
//{
//    int i = 0;
//    for (i = 0; i < width; i++)
//    {
//        char tmp = *buf1;
//        *buf1 = *buf2;
//        *buf2 = tmp;
//        buf1++;
//        buf2++;
//    }
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//    int i = 0;
//    //����
//    for (i = 0; i < sz - 1; i++)
//    {
//        //ÿһ�˱ȽϵĶ���
//        int j = 0;
//        for (j + 0; j < sz - 1 - i; j++)
//        {
//            //����Ԫ�صıȽ�
//            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//            {
//                //����
//                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//            }
//        }
//    }
//}
//
//void test4()
//{
//    int arr[10] = { 2,5,6,7,8,9,4,1,3,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//    //ʹ��buubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//    //��Ӧ��֪����αȽϴ����������е�Ԫ��
//}
//
//void test5()
//{
//    struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    //bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age);
//    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//    //test1();
//    //test2();
//    //test3();
//    //test4();
//    test5();
//    //BubbleSort(arr, sz);
//
//    return 0;
//}
//
//
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//
//    //char ch 'w';
//    void* p = &a;
//    //*p=0;
//
//    //void*���͵�ָ�� ���Խ����������͵ĵ�ַ
//    //void*���͵�ָ�� ���ܽ��н����ò���
//    //void*���͵�ָ�� ���ܽ��мӼ������Ĳ���
//    return 0;
//}
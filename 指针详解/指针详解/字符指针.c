//�ַ�ָ��

//int main()
//{
//    char arr[] = "abcdef";
//    char* pc = arr;
//    printf("%s\n", arr); //abcdef
//    printf("%s\n", pc);  //abcdef
//
//    return 0;
//}
//
//int main()
//{
//    const char* p = "abcdef";//"abcdef"��һ�������ַ���
//    //*p='w';              
//    printf("%s\n", p);
//    return 0;
//}
//
////Segmentation fault - �δ��� 
//
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "acbdef";
//    const char* p1 = "abcdef";    //�����ַ���
//    const char* p2 = "abcdef";
//
//    if (arr1 == arr2)                   if (p1 == p2)
//    {
//        {
//            printf("hehe\n");                printf("hehe\n");
//        }
//    }
//    else                                else
//    {
//        {
//            printf("haha\n");	               printf("haha\n");
//        }
//    }
//    return 0;           //haha                            //hehe
//}
                                                                 //----����ָoffer��

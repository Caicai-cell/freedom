//���鴫�Ρ�ָ�봫��

//һά���鴫��				��ά���鴫��:�����βε����ֻ��ʡ��һ��[]�����֣��в���ʡ

//void test(int arr[])			void test(int arr[3][5])
//{}                              {}
//void test(int arr[10])			void test1(int arr[][5])
//{}                              {}
//void test(int* arr)			   //void test2(int arr[3][]) //error
//{}                               {}
//void test2(int* arr[20])		//void test3(int *arr)     //error
//{}                                {}
//void test2(int** arr)			//void test4(int **arr)    //error
//{}                                {}
//void test5(int(*arr)[5])
//{}
//int main()                             int main()
//{
//	{
//		int arr[10] = { 0 };			   int arr[3][5] = { 0 };
//		int* arr2[20] = { 0 };			   test(arr);
//		test1(arr);
//		test(arr);			               test2(arr);
//		test2(arr2);				       test3(arr);
//		test4(arr);
//		return 0;
//	}
//
//
//
//	//һ��ָ�봫��				         ����ָ�봫��
//	void test1(int* p)			          void test(int** p)
//	{} {}
//	void test2(char* p)
//	{}
//	int main()				               int main()
//	{
//		{
//			int a = 10;				       int* ptr;
//			int* p1 = &a;				   int** pp = &ptr;
//			test1(&a);    //ok			   test(&ptr);
//			test1(p1)     //ok			   test(pp);
//		    char ch = 'w';  //ok		   int *arr[10];
//			char* pc = &ch; //ok		   test(arr);//ָ������Ҳ����
//			return 0;
//		}
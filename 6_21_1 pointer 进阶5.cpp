//��������ֽ���
//1. ��������Ǵ���
//2. ����������ڴ�
//3. �����뻹�Ǵ��� - ����IED�϶�Ϊһ

//ָ�����

//�ַ�ָ��
#include<stdio.h>
//int main()
//{
//	//char ch = 'q';
//	//char* pc = & ch;
//	//char* ps = "hello world!";//�����ϰѡ�hello world!���ַ��������ַ���ַ�洢��ps
//	char arr[] = "hello world!";
//	char* ps = arr;
//	//printf("%c\n", *ps);
//	printf("%s\n",ps);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world!";
//	char str2[] = "hello world!";
//	const char* str3 = "hello world!";
//	const char* str4 = "hello world!";
//	//str1 != str2
//	//str3 == str4
//
//	return 0;
//}

//ָ������
//int main()
//{
//	//��������һ������
//	//���� - �����д�ŵ���ָ�루��ַ��
//	//int* arr[3];//arr ��3��Ԫ�أ�ÿ��Ԫ����һ������ָ��
//	//int a = 10, b = 20, c = 30;
//	//int* arr[3] = { &a,&b,&c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d", *(arr[i]));
//	//}
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };//a,b,c�ֱ���1,2,3�ĵ�ַ
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d\n", *(arr[i] + j));
//		    printf("%d\n",arr[i][j]);
//		}
//	}
//	return 0;
//}

//����ָ�룺��һ��ָ�� - ָ�������ָ��
//
//����ָ�� - ָ�����͵�ָ��
//�ַ�ָ�� - ָ���ַ���ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//
//	double* (*pd)[5] = &d;
//	int arr[10] = { 1,2,3,4,5 };
//	int (* parr)[10] = &arr;//ȡ����������arr�ĵ�ַ
//	//parr ��һ������ָ�룬��ŵ���һ������ĵ�ַ
//	//arr - ����������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int* (*p2)[10];
//	printf("%p\n",p1);//arr: ����ֵ��ͬ���������Ͳ���ͬ
//	printf("%p\n", p1 + 1);//��p1���4���ֽ�
//	printf("%p\n", p2);//&arr:
//	printf("%p\n", p2 + 1);//��p2���40���ֽ�
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//�������⣻
//1.sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽڣ�
//2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ��

//һά����һ�㲻��Ҫ����ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	int (* pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *((*pa) + i));
//	}
//	return 0;
//
//}

//int print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void print2(int(*p)[5],int r,int c)
//{
//	int i = 0, j = 0;
//	for (i = 0;i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d" ,* (*(p + i) + j));
//		}
//	printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);//arr����������ʾ������Ԫ�صĵ�ַ
//	//��ά�������Ԫ���ǵ�һ�еĵ�һ��Ԫ��
//	return 0;
//}


//int arr[5]; ��������
//int* parr[10]; ����ָ������
//int (*parr2)[10]; ����ָ�룺��ָ���ܹ�ָ��һ������ʮ������Ԫ�ص�����
//int (*parr3[10])[5]; ����ָ�����飺 �������ָ������飬�ܹ����10������ָ�룬ÿ������ָ���ܹ�ָ��һ����5������Ԫ�ص�����

//���������ָ�����

//һά���鴫��
//void test1(int arr[])
//{}
//void test2(int arr[10])
//{}
//void test3(int *arr)
//{}
//void test4(int *arr[20])
//{}
//void test5(int** arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test1(arr);
//	test4(arr2);
//	return 0;
//}

//��ά���鴫��
//void test1(int arr[3][5])
//{}
//void test2(int arr[][5])
//{}
//void test3(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	return 0;
//}
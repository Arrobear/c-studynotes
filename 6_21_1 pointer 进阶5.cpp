//编码的三种进阶
//1. 看代码就是代码
//2. 看代码就是内存
//3. 看代码还是代码 - 人与IED合二为一

//指针进阶

//字符指针
#include<stdio.h>
//int main()
//{
//	//char ch = 'q';
//	//char* pc = & ch;
//	//char* ps = "hello world!";//本质上把“hello world!”字符串的首字符地址存储进ps
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

//指针数组
//int main()
//{
//	//本质上是一个数组
//	//数组 - 数组中存放的是指针（地址）
//	//int* arr[3];//arr 有3个元素，每个元素是一个整形指针
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
//	int* arr[3] = { a,b,c };//a,b,c分别是1,2,3的地址
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

//数组指针：是一种指针 - 指向数组的指针
//
//整型指针 - 指向整型的指针
//字符指针 - 指向字符的指针
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
//	int (* parr)[10] = &arr;//取出的是数组arr的地址
//	//parr 是一个数组指针，存放的是一个数组的地址
//	//arr - 数组名是首元素的地址 - arr[0]的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int* (*p2)[10];
//	printf("%p\n",p1);//arr: 两者值相同，但是类型不相同
//	printf("%p\n", p1 + 1);//与p1相差4个字节
//	printf("%p\n", p2);//&arr:
//	printf("%p\n", p2 + 1);//与p2相差40个字节
//	return 0;
//}

//数组名是数组首元素的地址
//两个例外；
//1.sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节；
//2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址；

//一维数组一般不需要数组指针
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
//	print2(arr, 3, 5);//arr数组名，表示数组首元素的地址
//	//二维数组的首元素是第一行的第一个元素
//	return 0;
//}


//int arr[5]; 整型数组
//int* parr[10]; 整型指针数组
//int (*parr2)[10]; 数组指针：该指针能够指向一个含有十个整型元素的数组
//int (*parr3[10])[5]; 数组指针数组： 存放数组指针的数组，能够存放10个数组指针，每个数组指针能够指向一个有5个整型元素的数组

//数组参数、指针参数

//一维数组传参
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

//二维数组传参
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
#define _CRT_SECURE_NO_WARNINGS 1
//函数
//库函数
//自定义函数
//函数名，返回值类型和函数参数
#include<stdio.h>
#include<string.h>
//int get_max(int a, int b)
//{
//	int m = 0;
//	a > b ? m=a : m=b;
//	return m;
//}
//int* text(int a[10])//返回一个数组
//{
//	int i = 0;
//	int b[10] = {0};
//	for (i = 0; i < 10; i++)
//	{
//		b[i] = a[i];
//	}
//	return b;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "abc";
//
//	//strcpy(arr1, arr2);
//	//printf("%d\n", get_max(a,b));
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", text(a)[i]);
//	}
//	return 0;
//}


//函数调用：
// 1.传值调用
// 2.传址调用
//
//void swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数，交换两个整型变量的值
//	//swap1(a, b);//传值调用：只是引用变量的值
//	swap2(&a, &b);//传址调用:可以直接改变变量的值
//	
//
//
//	return 0;
//}

//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//int is_leap_year(int y)
//{
//	//if (y % 4 == 0 && y % 100 != 0)
//	//	return 1;
//	//else
//	//	return 0;
//	return ((y % 4 == 0 && y % 100 != 0));
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d	", y);
//		}
//	}
//	return 0;
//}

//int binary_search(int a[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到就返回找到的位置的下标
//	//找不到返回-1
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
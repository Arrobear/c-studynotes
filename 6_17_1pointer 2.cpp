#include<stdio.h>
//int main()
//{
//	int a = 10;
//	print f("%d",sizeof(a));  //4个字节
//	int* pa = &a;                   //a的4个字节对应的4个地址的第一个地址
//	                                //pa:指针变量
//	return 0;
//}
//内存单元的编号 - 地址 - 指针

//指针和指针类型
//所有类型指针变量占内存相同

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了：指针走一步能走多远（步长）
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//在原地址基础上向后加4个字节的地址
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//再原地址基础上向后加1个字节的地址

	//0 1 2 3 4 5 6 7 8 9 a b c d f
	// 11111111
	//     8421
	//一个十六进制数字需要4个2进制数字表示
	//int a = 0x11223344;
	//int* pa = &a;
	////char* pc = &a;
	//*pa = 0;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//下标为i的地址
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}
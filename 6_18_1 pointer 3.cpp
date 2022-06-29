#include<stdio.h>
//野指针:指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
// 
//int main()
//{
//	//1.指针未初始化
//	//这里的p是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存
//	//2.越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	//3.指针指向的空间释放
//	//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;//将a的地址返回之后，a的生命周期结束，地址被释放
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//如何规避野指针
// 1.指针初始化
//int main()
//{
//	//不知道初始化为什么时，初始化为NULL
//	int* p = NULL;
//	//知道指针初始化为什么时直接初始化
//	return 0;
//}
// 2.小心指针越界
// c语言本身不会检查数据的越界
// 3.指针指向的空间释放即使指针为：NULL
// 4.指针使用前要进行有效性检查
//int* p = NULL;
//if (p != NULL)
//*p = 10;


//指针运算
//1.指针+-整数 
//2.指针-指针
//3.指针的关系运算
//
//int main()
//{
//	float va[5] = { 0 };
//	float* vp;
//	for (vp = &va[0]; vp < &va[5]; vp++)//指针+-整数、指针的关系运算
//	{
//		*vp= 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//指针-指针：得到的是两个指针之间的元素个数
//前提是两个指针指向同一块空间
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//输出：9
//	return 0;
//}


#include<string.h>
//实现strlen函数的功能
//1.计数器的方法
// int mysrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.指针-指针的方法
//int mystrlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen();//求字符串长度
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//指针+指针？：无意义，类似于日期
#include<stdio.h>
//int main()
//{
//	int values[5] = {0};
//	int* vp=values;
//	for (vp = &values[5]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	for (vp = &values[4]; vp > &values[0];vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//} 

//int main()
//{
//	//ָ�������
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p<-->%p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

////��չ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//arr[2] <=> *��arr + 2�� <=> *(p + 2) <=> *(2 + p) <=> *(2 + arr);
//	//2[arr] <=> * (2 + arr)
//	//[]:��һ��������,֧�ֽ����ɣ�	2��arr������������
//	//a+b
//	//b+a
//	//arr[2] --> *(arr+2) --> * (2+arr) --> 2[arr]
//	//arr[2] <=> p[2] <=> *(arr+2)
//	return 0;
//}


////����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//paҲ��һ��������&pa��ȡ��pa���ڴ��е���ʼ��ַ
//	int** ppa = &pa;//ppa:����ָ�����
//	//�༶ָ��ͬ��
//	return 0;
//}

//ָ�����飺��������һ������
//
//int main()
//{
//	int arr[10];//�������� - ������͵�����
//	char ch[5];//�ַ����� - ����ַ�������
//	int* p[5];//����ָ������
//
//	return 0;
//}
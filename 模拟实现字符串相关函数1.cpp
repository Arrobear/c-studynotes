#include<stdio.h>
#include<string.h>
#include<assert.h>

//ģ��ʵ��strcpy

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);//1.Ŀ��ռ����ʼ��ַ2.Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	// 1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//
//	//printf("%d\n", num);
//	// 
//	// 2.
//	// const :���α����������������Ϊ�����������ܱ��޸ģ����������Ǳ���
//	// 
//	const int num = 10;
//	int n = 100;
//	//const int* p = &num;//error
//	//const ����*p��num��ֵ���ܱ��ı�
//	//int* const p = &num;
//	//const ����ָ�����p��*p��ָ��ָ������ݣ����Ա��ı�
//	//*p = 20;
//	p = &n;
//	//const ��û������p,ָ�������������޸�
//	//����*p���ɲ��ܸı�
//	n = 200;
//
//	printf("%d\n", *p);
//	return 0;
//}



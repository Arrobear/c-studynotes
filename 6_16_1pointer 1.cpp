//#include<stdio.h>
//int main()
//{
//	int a=10;//���ڴ���Ҫ����ռ�  -4 ���ֽ�
//	&a;//:ȡ4���ֽڶ�Ӧ��4����ַ�ĵ�һ����ַ
//	printf("%p\n", &a);//%p:������ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���c������pa����ָ�����
//	//*:˵��pa��ָ�����
//	//int��˵��paָ��Ķ�����int����
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
// 
//ָ�룺��ַ
// 
//32λ��32����ַ��-������-ͨ��-1/0
// 4294967296Bit
// /8=536870912Byte
// /1024=524288KB
// /1024=512MB
// /1024=0.5GB
//64λ��
//���ź�ת����������Ϣ��1��0��ɵĶ���������
//һ���ڴ浥Ԫ��һ���ֽڣ�Ȼ������ַ
//char  -1 byte = 1 ����ַ

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*�����ò�����*pa��ͨ��pa�еĵ�ַ�ҵ�a
//
//	return 0;
//}


//ָ��Ĵ�С����ͬ�ģ�ָ����������ŵ�ַ��
//ָ������Ҫ�Ŀռ�ȡ���ڡ���ַ����Ҫ���ٿռ�
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//32λ  -32 bit - 4 byte
//	//64λ  -64 bit - 8 byte
//}
// 
// //��cout�������÷�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	cout << "fuck "<<endl;
//	cout << "the ";
//	cout << "world!";
//	return 0;
//}

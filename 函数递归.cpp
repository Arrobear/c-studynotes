//�����ݹ�
//����ֱ�ӻ��ӵ�������

#include<stdio.h>

//void print(unsigned int n)
//{
//	if (n > 9)//**���������ſ�ʼ�ݹ�
//	{
//		print(n / 10);//**
//	}
//		printf("%d\n", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//%u:�޷�������
//	print(num);
//
//	return 0;
//}

//stack overflow��ջ���
//�ڴ棺
//1��ջ�����ֲ������������β�
//2����������̬�ڴ����
//3����̬����ȫ�ֱ�������̬����
//ÿһ���������ã���Ҫ��ջ��ռ��һ��ռ�
//ÿ�ε���һ�κ�����Ҫ��ռһ��ռ䣬��ջ����ʱ-->ջ���

//void text(int n)
//{
//	if (n < 10000)
//	{
//		text(n + 1);
//	}
//}

//д�ݹ�ʱ��
//1.�������ݹ顣����������������ÿ�εݹ鶼Ҫ�ƽ���������
//2.�ݹ��β���̫��

//int main()
//{
//
//	text(1);
//	return 0;
//
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//ģ��ʵ��strlen����
//int my_strlen1(char* str) 
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen2(char* str)//��������ʱ����
//{
//	if (*str != '\0') 
//	{
//		return 1+my_strlen2(1 + str);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen2(arr));
//	return 0;
//}
// 
// ��׳�
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = fac(n);
//	//����
//	//for (i = 1; i <= n; i++)//��׳�
//	//{
//	//	ret = ret * i;
//	//}
//	printf("%d\n", ret);
//	return 0;
//}

//��һЩ���ܣ�����ʹ�õ����ķ�����ʵ�֣�Ҳ����ʹ�õݹ�

//���n��쳲�������
//int fabnaci(int n)//�ݹ�
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fabnaci(n - 1) + fabnaci(n - 2);
//	}
//}
//int fabnaci(int n)//ѭ��
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
// }
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fabnaci(n);
//	printf("%d\n", ret);
//	return 0;
//}


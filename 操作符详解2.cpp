#include<stdio.h>
//��ֵ������
// =     +=		-=		*=		/=		>>=		<<=		%=		&=		|=		^=
//
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;//2
//}

//��Ŀ������:ֻ��һ�����Ĳ�����
// !  -  +  &  sizeof  ~  --  ==  *  �����ͣ�(ǿ������ת����
//
//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);
//	if (flag)
//	{
//		printf("hello world!!\n");
//	}
//	if (!flag)
//	{
//		printf("the world is destried...\n");
//	}
//	return 0;
//}
//int main()//sizeof
// sizeof �����еı��ʽ����������
////����д�����ƣ� sizeof a(����)
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	return 0;
//}

// ~:��һ�����Ķ�����λ��λȡ��(�Բ���)
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d", b);
//	return 0;
//}

int main()
{
	int a = 13;
	//��a�Ķ�����λ�ĵ�5λ�ó�1
	a = a | (1 << 4);
	//��a�Ķ�����λ�ĵ�5λ�ó�0
	a = a & (~(1 << 4));
	return 0;
}
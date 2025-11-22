#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//移位操作符
/*int main()
{
	int a = 4;
	int b = a << 1;
	int c = a >> 1;//vs采用算术右移：右边丢弃，左边补原符号位
	printf("b=%d c=%d\n", b, c);

	return 0;
}*/

//位操作符（二进制）
/*int main()
{
	int a = 3;
	int b = -5;
	int c = a & b;//有0则0
	int d = a | b;//有1则1
	int e = a ^ b;//相同为0，相异为1
	printf("c=%d d=%d e=%d\n", c, d, e);

	return 0;
}*/

//用异或交换值
/*int main()
{
	int a = 3;
	int b = -5;
	printf("交换前:a=%d b=%d", a, b);
	a = a ^ b;//a^a=0
	b = a ^ b;//异或支持交换律
	a = a ^ b;
	printf("交换后:a=%d b=%d", a, b);

	return 0;
}*/

//求一个数存储在内存中的二进制中1的个数
/*int main()
{
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &n);
	for (i = 1; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	printf("%d\n", count);

	return 0;
}*/

/*int main()
{
	int a = 13;
	a |= (1 << 4);
	printf("%d ", a);
	a &= (~(1 << 4));
	printf("%d\n", a);

	return 0;
}*/

/*int main()
{
	int a = 10;
	printf("%d\n", a--);//先用后减
	printf("%d\n", a++);
	printf("%d\n", --a);//先减后用
	printf("%d\n", ++a);
	printf("%d\n", a);

	return 0;
}*/

/*void test1(int arr[])//首元素地址
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//整个arr数组
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);

	return 0;
}*/

/*int main()
{
	//int i = 0, a = 0, b = 2, c = 3, d = 4;//1为真，0为假
	//i = a++ && ++b && d++;//左边为假，计算停止
	//printf("i=%d a=%d b=%d c=%d d=%d", i, a, b, c, d);
	
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;//，左边为真，计算停止
	//printf("i=%d a=%d b=%d c=%d d=%d", i, a, b, c, d);

	return 0;
}*/
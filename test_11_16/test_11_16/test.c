#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//µÝ¹é
/*void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%u ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u",&num);
	print(num);

	return 0;
}*/

/*//Ä£ÄâÊµÏÖstrlen
//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while(arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}

int main()
{
	char arr[] = "abcdef";
	int n = my_strlen(arr);
	printf("%d\n", n);

	return 0;
}*/

//µÝ¹é¼ÆËã½×³Ë
/*int Fac(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x*Fac(x - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);

	return 0;
}*/

//µÝ¹é¼ÆËãì³²¨ÄÇÆõÊý
/*//int Fib(int x)
//{
//	if (x == 1||x==2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}

//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (x == 1 || x == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (x >= 3)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			x--;
//		}
//		return c;
//	}
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}*/


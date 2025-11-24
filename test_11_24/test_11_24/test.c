#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<math.h>

//青蛙跳台阶
/*int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = fib(n);
	printf("%d\n", m);

	return 0;
}*/

//删除指定数字
/*int main()
{
	int n = 0;
	printf("请输入个数:>");
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	printf("请输入值:>");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	printf("请输入要删掉的值:>");
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}*/

/*int main()
{
	int n = 0;
	printf("请输入个数:>");
	scanf("%d", &n);
	int arr[10];
	int i = 0;
	printf("请输入值:>");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	int min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("max-min=%d\n", max - min);

	return 0;
}*/

//大小写转换
/*int main()
{
	char ch = 0;
	do
	{
		scanf("%c", &ch);
		if ('a' <= ch && ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		else
		{
			printf("%c\n", ch + 32);
		}
	} while ('a' <= ch && ch <= 'Z');

	return 0;
}*/

//库函数大小写转换
/*int main()
{
	char ch = 0;
	while (scanf("%c", &ch) != EOF)
	{
		if (islower(ch))
		{
			printf("%c\n", toupper(ch));
		}
		else if(isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}
	}

	return 0;
}*/

/*int main()
{
	char ch = 0;
	while (scanf("%c", &ch) != EOF)//不用getchar就在%c前加空格
	{
		if (isalpha(ch))
		{
			printf("%c is an alphabet.\n", ch);
		}
		else
		{
			printf("%c is not an alphabet.\n", ch);
		}
		getchar();
	}

	return 0;
}*/

//n位数内所以的变种水仙花数
/*int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;
	for (i = pow(10, n - 1); i < pow(10, n); i++)
	{
		int sum = 0;
		int j = 0;
		for (j = 1; j <= n - 1; j++)
		{
			int k = pow(10, j);
			sum += (i / k) * (i % k);
		}
		if (i == sum)
		{
			printf("%d ", i);
			count++;
		}
	}
	if (count == 0)
	{
		printf("%d位数中无变种水仙花数\n", n);
	}
	else
	{
		printf("\n");
		printf("%d位数中一共有%d个变种水仙花数\n", n, count);
	}
	return 0;
}*/
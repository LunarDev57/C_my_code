#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//求Sn=a+aa+aaa+……的前n项和
//例如：Sn=2+22+222+……
/*int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int Sn = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		k += a * (int)pow(10, i);
		Sn += k;
	}
	printf("%d\n", Sn);

	return 0;
}*/

//n位数中所以的水仙花数
/*int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;
	for (i = pow(10, n - 1); i < pow(10, n); i++)
	{
		int j = 0;
		int k = 0;
		int h = i;
		for (j = (n - 1); j >= 0; j--)
		{
			k += (int)pow(h / (int)pow(10, j), n);
			h = i % (int)pow(10, j);
		}
		if (i == k)
		{
			printf("%d ", i);
			count++;
		}
	}
	if (count != 0)
	{
		printf("%d位数中有%d个水仙花数\n", n, count);
	}
	else
	{
		printf("%d位数中不存在水仙花数\n", n);
	}

	return 0;
}*/

//打印菱形
/*int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//上三角
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下三角
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/

//买赠问题
/*int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	if (money > 0)
	{
		printf("%d\n", total);
	}
	else
	{
		printf("%d\n", 0);
	}
	return 0;
}*/
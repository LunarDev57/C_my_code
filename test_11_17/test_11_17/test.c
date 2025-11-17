#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//按从大到小的顺序排列
/*void Sort(int* x, int* y)
{
	int n = 0;
	if (*x < *y)
	{
		n = *x;
		*x = *y;
		*y = n;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	Sort(&a, &b);
	Sort(&a, &c);
	Sort(&b, &c);
	printf("%d %d %d\n", a, b, c);

	return 0;
}*/

/*int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("一共有%d个三的倍数\n", count);

	return 0;
}*/

/*int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		n = a;
		a = b;
		b = n;
	}
	while (a/b)
	{
		if (a % b == 0)
		{
			printf("最大公约数为:%d",b);
			break;
		}
		n = b;
		b = (a % b);
		a = n;
	} 

	return 0;
}*/

/*int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("一共有%d个9\n", count);

	return 0;
}*/

/*int main()
{
	int n = 0;
	int i = 0;
	double num = 0;
	int flag = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		num += (1.0 / i) * (flag);
		flag = -flag;
	}
	printf("%.3lf\n", num);

	return 0;
}*/
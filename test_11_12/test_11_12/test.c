#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//for循环
/*int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			//break;
			continue;
		}
		printf("%d ", arr[i]);
	}

	return 0;
}*/

/*int main()
{
	int i = 0;
	int j = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}*/

/*int main()
{
	int k = 0;
	for (k = 0; k = 0; k++)//死循环，k为赋值，而不是等于
	{
		printf("hehe\n");
	}

	return 0;
}*/

//do……while循环
/*int main()
{
	int i = 0;
	do
	{
		i++;
		if (i == 5)
		{
			//break;
			continue;
		}
		printf("%d ", i);
	} 
	while (i <= 10);

	return 0;
}*/

//阶乘之和
/*int main()
{
	int m = 1;
	int i = 0;
	int n = 0;
	int a = 0;
	int b = 0;
	scanf("%d", &n);
	for (b = 0; b < n; n--)
	{
	    //阶乘
		for (m = 1,i = 0; i < n; i++)
		{
			m *= (n - i);
		}
		a += m;
	}
	printf("%d", a);

	return 0;
}*/

//二分法
/*int main()
{
	int n = 0;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	scanf("%d", &n);
	if (n < 0 || n>9)
	{
		printf("没有找到\n");
		return 0;
	}
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			return 0;
		}
	}

	return 0;
}*/


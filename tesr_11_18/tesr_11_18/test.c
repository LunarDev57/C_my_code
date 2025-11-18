#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//找出最大数
/*int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];

	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);

	return 0;
}*/

//九九乘法表
/*int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%02d ", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}*/

//升序
/*void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//goto
/*int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在60秒内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else if (strcmp(input, "你是猪") == 0)
	{
		printf("你才是猪\n");
		goto again;
	}
	else
	{
		goto again;
	}

	return 0;
}*/

//strcpy
/*int main()
{
	char arr1[10] = { 0 };
	char arr2[10] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}*/

//memset
/*int main()
{
	char arr1[10] = "hello bit";
	memset(arr1, 'x', 5);
	printf("%s\n", arr1);

	return 0;
}*/

/*void Swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前:a=%d,b=%d", a, b);
	Swap(&a, &b);
	printf("交换后:a=%d,b=%d", a, b);

	return 0;
}*/

/*int is_prime(int x)
{
	int j = 0;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int count = 0;
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n一共有%d个素数",count);

	return 0;
}*/

/*int is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int count = 0;
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\n一共有%d个闰年", count);

	return 0;
}*/

/*int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	int n = binary_search(arr, k, sz);
	if (n != -1)
	{
		printf("找到了，下标是:%d\n", n);
	}
	else
	{
		printf("没找到\n");
	}

	return 0;
}*/

/*void ADD(int* px)
{
	(*px)++;
}

int main()
{
	int num = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ADD(&num);
		printf("%d ", num);
	}

	return 0;
}*/

//链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf的返回值是字符串的个数
//	return 0;
//}

/*#include"add.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}*/





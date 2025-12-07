#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>
#include<math.h>

//strtok
/*int main()
{
	const char* sep = "@.";
	char email[] = "lingchen@qq.com";
	char cp[30] = { 0 };
	strcpy(cp, email);
	char* ret = NULL;
	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}*/

//strerror//打印错误码
/*int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	//c语言的库函数，执行失败的时候，会设置错误码(1,2,3……)
	//errno - c语言设置的一个全局的错误码存放的变量
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	return 0;
}*/

/*int main()
{
	printf("%d\n", isspace(' '));//isspace
	printf("%d\n", isdigit('1'));//isdigit
	printf("%d\n", isxdigit('1'));//isxdigit
	printf("%d\n", isalnum('a'));//isalnum
	printf("%d\n", ispunct(','));//ispunct
	printf("%d\n", isgraph('?'));//isgraph
	printf("%d\n", isprint('/'));//isprint
	return 0;
}*/

//实现memcpy
/*void* my_memcpy(void* dest, void* src, size_t num)
{
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 32);
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	memcpy(arr1 + 2, arr1, 16);//重叠拷贝用memmove
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	my_memcpy(arr1 + 2, arr1, 16);//但是vs中memcpy可实现重叠
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}*/

//实现memmove
/*void* my_memmove(void* dest, void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest+num) = *((char*)src+num);
		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}*/

//memcmp
/*int main()
{
	int arr1[] = { 1,2,3,5 };
	int arr2[] = { 1,2,3,4 };
	int ret = memcmp(arr1, arr2, 16);
	printf("%d\n", ret);
	return 0;
}*/

//memset
/*int main()
{
	char arr[] = "hello world";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	memset(arr+6, 'x', 5);
	printf("%s\n", arr);
	return 0;
}*/

//奇返回1，偶返回0
/*int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	int h = 0;
	scanf("%d", &n);
	while (n)
	{
		h = n % 10;
		if (h % 2 == 1)
		{
			sum += 1 * pow(10, i);
			i++;
		}
		else
		{
			sum += 0 * pow(10, i);
			i++;
		}
		n /= 10;
	}
	printf("%d\n", sum);
	return 0;
}*/

//打印直角三角形
/*int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf("  ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*/

//网购
/*int main()
{
	double price = 0.0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%lf %d %d %d", &price, &m, &d, &flag);
	if (m == 11 && d == 11)
	{
		price *= 0.7;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	else if (m == 12 && d == 12)
	{
		price *= 0.8;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if (price <= 0.0)
	{
		printf("%.2lf", 0.1);
	}
	else
	{
		printf("%.2lf",price);
	}
	return 0;
}*/

//预测
/*int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (   ((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120 && a + b + c + d + e == 15)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}*/

//杨辉三角
/*int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//左旋字符串
/*void left_rotate(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	k %= len;
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s\n", arr);
	return 0;
}*/
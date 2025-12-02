#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//使奇数在前偶数在后
/*void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int n = arr[left];
			arr[left] = arr[right];
			arr[right] = n;
			left++;
			right--;
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	move_odd_even(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}*/

//将两个升序数组合在一起，并且升序
/*int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int n = 0;
	int m = 0;
	while (n < 10 && m < 10)
	{
		if (arr1[n] < arr2[m])
		{
			printf("%d ", arr1[n]);
			n++;
		}
		else
		{
			printf("%d ", arr2[m]);
			m++;
		}
	}
	if (n < 10)
	{
		for (; n < 10; n++)
		{
			printf("%d ", arr1[n]);
			n++;
		}
	}
	if (m < 10)
	{
		for (; m < 10; m++)
		{
			printf("%d ", arr2[m]);
			m++;
		}
	}

	return 0;
}*/

//实现strcpy
/*void my_strcpy(char* x,const char* y)
{
    assert(x);
	assert(y);
	while (*x++ = *y++)
	{
		;
	}
}

int main()
{
	char arr1[20] = "XXXXXXXXXXXX";
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}*/

/*int main()
{
	const char* p1 = "abc";
	const char* p2 = "abc";
	char arr1[] = "abc";
	char arr2[] = "abc";
	if (p1 == p2)
		printf("p1==p2\n");
	else
		printf("p1!=p2\n");
	if (arr1 == arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");

	return 0;
}*/

//数组指针
/*void print(int(*p)[3], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	print(arr, 2, 3);

	return 0;
}*/
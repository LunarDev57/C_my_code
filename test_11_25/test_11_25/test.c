#include<stdio.h>

//指针类型内存大小
/*int main()
{
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));

	return 0;
}*/

//指针类型的作用
/*int main()
{
	int a = 0;
	int* pa = &a;
	char* pc = (char*)&a;
	*pa = 10;
	printf("%d\n", a);
	printf("%d\n", *pa);
	printf("%p\n", pa);
	printf("%p\n", pc);
	printf("%p\n", pa+1);
	printf("%p\n", pc+1);

	return 0;
}*/

//指针+-整数
/*int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p++);
	}

	return 0;
}*/

//指针-指针
/*int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	//int arr[10] = { 0 };
	//printf("%d\n", &arr[9] - &arr[0]);
	//printf("%d\n", &arr[0] - &arr[9]);
	int len = my_strlen("abcdef");
	printf("%d\n", len);

	return 0;
}*/

/*//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

int main()
{
	int arr[10] = { 0 };
	test(arr, 10);

	return 0;
}*/

//二级指针
/*int main()
{
	int a = 0;
	int* pa = &a;
	int** ppa = &pa;
	**ppa = 10;
	printf("%d\n", a);
	printf("%d\n", *pa);
	printf("%d\n", **ppa);

	return 0;
}*/

//指针数组
/*int main()
{
	int i = 0;
	int a = 10;
	int b = 20;
	int c = 30;
	int* parr[3] = { &a,&b,&c };
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *parr[i]);
	}

	return 0;
}*/

//指针数组模仿二级指针
/*int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };//首元素地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
}*/
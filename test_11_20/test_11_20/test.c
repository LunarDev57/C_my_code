#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*//循环
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//递归
//void reverse(char* str)
//{
//	if (strlen(str) > 1)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		*str = *(str + len - 1);
//		*(str + len - 1) = '\0';
//		reverse(str + 1);
//		*(str + len - 1) = tmp;
//	}
//}

//逆转字符串
int main()
{
	char arr[] = { "abcdef" };
	reverse(arr);
	printf("%s\n", arr);

	return 0;
}*/

/*int DigitSum(int n)
{
	if (n > 9)
	{
		return n % 10 + DigitSum(n / 10);
	}
	else
	{
		return n;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);

	return 0;
}*/

/*double Pow(double n,double k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	double n = 0;
	double k = 0;
	scanf("%lf %lf", &n, &k);
	if (n != 0)
	{
		double num = Pow(n, k);
		printf("%.3lf\n", num);
	}
	else
	{
		printf("该数不存在\n");
	}

	return 0;
}*/

/*int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 0,2,4,6,8 };
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}*/
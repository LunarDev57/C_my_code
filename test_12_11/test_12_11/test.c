#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//杨氏矩阵
/*int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0, x = 3, y = 3;
	scanf("%d", &k);
	int ret = find_num(arr, &x, &y, k);
	if (ret == 0)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标是:>%d %d\n", x, y);
	}
	return 0;
}*/

//判断左旋
/*int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
		return 0;
	strncat(arr1, arr1, len1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("ok");
	}
	else
	{
		printf("no");
	}
	return 0;
}*/

//转置
/*int main()
{
	int n = 0, m = 0;
	scanf("%d%d", &n, &m);
	int arr[10][10] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("转置前\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("转置后\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}*/

//上三角矩阵判定
/*int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
				goto end;
			}
		}
	}
end:
	if (flag == 0)
		printf("不是上三角矩阵\n");
	else
		printf("是上三角矩阵\n");
	return 0;
}*/

/*int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int flag1 = 0, flag2 = 0;
	for (int i = 0; i < n; i++)
	{
		
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
				flag1 = 1;
			else if (arr[i] < arr[i - 1])
				flag2 = 1;
			else
			{ }
		}
	}
	if (flag1 + flag2 <= 1)
		printf("sorted\n");
	else
		printf("unsorted\n");
	return 0;
}*/
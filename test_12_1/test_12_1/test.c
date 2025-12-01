#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<windows.h>
#include<string.h>

//最小公倍数
/*int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = (a > b ? a : b);
	while (1)
	{
		if (m % a == 0 && m % b == 0)
		{
			break;
		}
		m++;
	}
	printf("%d\n", m);

	return 0;
}*/

//倒置一行字符串,但每个字符串不倒置
/*void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}
	printf("%s\n", arr);

	return 0;
}*/

//判断内存是小端储存还是大端储存
/*int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}*/

/*int main()
{
	//char a = -1;
	//signed char b = -1;//有符号-128~127
	//unsigned char c = -1;//无符号0~255
	//printf("a=%d b=%d c=%d", a, b, c);//整形提升
	int a = -1;
	signed int b = -1;
	unsigned int c = -1;
	printf("a=%d b=%d c=%d c=%u", a, b, c, c);//打印有符号整型%d，无符号整型%u

	return 0;
}*/

/*int main()
{
	unsigned char i = 0;
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");//死循环
	}

	//unsigned int i = 0;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);//无符号死循环
	//	Sleep(1000);
	//}

	return 0;
}*/

/*int main()
{
	if (strlen("abc") - strlen("abcdef") >= 0)//size_t -> unsigned int
	{
		printf(">\n");
	}
	else
		printf("<\n");

	return 0;
}*/

/*int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("n=%d\n", n);//按正确类型打印
	printf("*p=%f\n", *p);
	*p = 9.0;
	printf("n=%d\n", n);
	printf("*p=%f\n", *p);

	return 0;
}*/
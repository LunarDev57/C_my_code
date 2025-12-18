#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>

//去掉最大值与最小值
/*int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1) 
	{
		if (n < 3)
			break;
		int score = 0, max = 0, min = 100, sum = 0, i = 0;
		while (scanf("%d", &score) == 1)
		{
			i++;
			if (score > max)
			{
				max = score;
			}
			if (score < min)
			{
				min = score;
			}
			sum += score;
			if (i == n)
			{
				printf("%.2lf\n", (sum - max - min) / (n - 2.0));
				break;
			}
		}
	}
	return 0;
}*/

/*union
{
	short k;
	char i[2];
}*s, a;

int main()
{
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", a.k);
	return 0;
}*/

//找出两个只出现一次的数字
/*int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0, ret = 0, arr[101], pos = 0, dog1 = 0, dog2 = 0;
		if (n % 2 == 1 || n < 2 || n>100)
			break;
		while (scanf("%d", &arr[i]) == 1)
		{
				ret ^= arr[i];
			i++;
			if (i == n)
				break;
		}
		for (pos = 0; pos < 32; pos++)
		{
			if ((ret >> pos) & 1 == 1)
				break;
		}
		for (i = 0; i < n; i++)
		{
			if (((arr[i] >> pos) & 1) == 1)
				dog1 ^= arr[i];
			else
				dog2 ^= arr[i];
		}
		printf("dog1=%d dog2=%d\n", dog1, dog2);
	}
	return 0;
}*/

//模拟实现简易版atoi
/*enum Status
{
	VALID,
	INVALID
}sta = INVALID;

int my_atoi(const char* str)
{
	assert(str);
	int flag = 1;
	long long ret = 0;
	if (*str == '\0')
		return 0;
	while (isspace(*str))
		str++;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
			return (int)ret;
		str++;
	}
	if(*str=='\0')
	sta = VALID;
	return (int)ret;
}

int main()
{
	char arr[10] = "-12345a6";
	int ret = my_atoi(arr);
	if (sta == VALID)
		printf("合法转换：%d\n", ret);
	else if(sta==INVALID)
		printf("非法转换：%d\n", ret);
	return 0;
}*/
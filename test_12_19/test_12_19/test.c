#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

//交换二进制的奇偶数位
/*#define SWAP_BIT(n) (((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = SWAP_BIT(n);
	printf("%d\n", m);
	return 0;
}*/

//变成Fibonacci数的最少步数
/*int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		if (n < 1 || n>1000000)
			break;
		int a = 0, b = 1, c = 0;
		while (1)
		{
			if (n == b)
			{
				printf("0\n");
				break;
			}
			else if (n < b)
			{
				if (abs(a - n) > abs(b - n))
					printf("%d\n", abs(b - n));
				else
					printf("%d\n", abs(a - n));
				break;
			}
			c = a + b;
			a = b;
			b = c;
		}
	}
	return 0;
}*/

//替换空格
/*void ReplaceSpace(char* str, int length) {
	char* cur = str;
	int space_count = 0;
	while (*cur) {
		if (*cur == ' ')
			space_count++;
		cur++;
	}
	int end1 = length - 1;
	int end2 = length + space_count * 2 - 1;
	while (end1 != end2) {
		if (str[end1] != ' ') {
			str[end2--] = str[end1--];
		}
		else {
			end1--;
			str[end2--] = '0';
			str[end2--] = '2';
			str[end2--] = '%';
		}
	}
}

int main()
{
	char arr[100] = "We are happy";
	int len = strlen(arr);
	ReplaceSpace(arr, len);
	printf("%s\n", arr);
	return 0;
}*/
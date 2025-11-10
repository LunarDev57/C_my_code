#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/*void test()
{
	static int b = 0;
	printf("%d\n", b);
	b++;
}

int main()
{
	int a = 0;
	while (a < 10)
	{
		test();
		a++;
	}

	return 0;
}*/

/*extern int age1;
int main()
{
	printf("%d\n", age1);

	return 0;
}*/

/*extern int Add(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}*/

/*#define NUM 100
#define ADD(x,y) ((x)+(y))
int main()
{
	int n = NUM;
	int z = ADD(1,2);
	printf("%d\n", n);
	printf("%d\n", z);

	return 0;
}*/

/*int main()
{
	int a = 0;
	int* p = &a;
	*p = 20;
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", a);

	return 0;
}*/

/*int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}*/

/*int test()
{
	int a = 0;
	scanf("%d", &a);
	if (a == 3)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n = test();
	printf("%d\n", n);

	return 0;
}*/

//判断奇偶
/*int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d为偶数\n", a);
	}
	else
	{
		printf("%d为奇数\n", a);
	}

	return 0;
}*/

/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}

	return 0;
}*/

/*int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		{
			//break;
			continue;
		}
		printf("%d\n", i);
	}

	return 0;
}*/

//只打印数字
/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl z结束
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	//printf("%d\n", ch);
	//printf("%c\n", ch);
	
	return 0;
}*/


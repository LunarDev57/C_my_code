#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//结构体
/*struct Peo
{
	char name[20];
	int age;
	float high;
};

struct Stu
{
	struct Peo p2;
	int class;
	int rank;
};

//结构体传参
void print1(struct Peo p)
{
	printf("%s %d %.2f\n", p.name, p.age, p.high);
 }

 //结构体地址传参
void print2(struct Peo* sp)
{
	 printf("%s %d %.2f\n", sp->name, sp->age, sp->high);
}

int main()
{
	struct Peo p1 = { "zhangsan",18,181.5f };
	struct Stu s = { {"lisi",17,185.2},2,5 };
	printf("%s %d %.2f\n", p1.name, p1.age, p1.high);
	print1(p1);
	print2(&p1);
	printf("%s %d %.2f %d %d", s.p2.name, s.p2.age, s.p2.high, s.class, s.rank);

	return 0;
}*/

/*//方法一
//int count_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//方法二
//int count_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//方法三
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 1; i < 32; i++)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//二进制中1的个数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_of_1(num);
//	printf("%d\n ", n);
//
//	return 0;
//}*/

/*int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("%d是2的n次方\n", n);
	}
	else
	{

		printf("%d不是2的n次方\n", n);
	}

	return 0;
}*/

/*int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d %d", &m, &n);

	//方法一
	//for (i = 0; i < 32; i++)
	//{
	//	  if ((((n & 1) == 1) && ((m & 1) == 1))||(((n & 1) == 0) && ((m & 1) == 0)))
	//	  {
	//  		count++;
	// 	  }
	//    m = m >> 1;
	//	  n = n >> 1;
	//}
	//printf("%d\n", 32 - count);

	//方法二
	//for (i = 0; i < 32; i++)
	//{
	//	  if (((m >> i) & 1) != ((n >> i) & 1))
	//	  {
	//	  	  count++;
	//	  }
	//}
	//printf("%d\n", count);

	//方法三
	//i = m ^ n;
	//while (i)
	//{
		//i = i & (i - 1);
		//count++;
	//}
	//printf("%d\n", count);

	return 0;
}*/

//获取二进制中的奇偶数位并分别打印
/*int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);

	//奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	//偶数位
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}

	return 0;
}*/

//打印X形图案
/*int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if ((i == j) || (i + j == n - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}


	return 0;
}*/

//获得月份天数
/*int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%4d%2d", &y, &m) == 2)
	{
		d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}*/

//判断abc能否构成三角形,三条边均为整数
/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			if (a == b && a == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
			{
					printf("Isosceles triangle!\n");
			}
			else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			{
				printf("Right triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}


	return 0;
}*/
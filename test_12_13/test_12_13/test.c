#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>


/*//结构体内存对齐
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};

//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};

//struct S4
//{
//	char c1;
//	struct S3 s3;//嵌套结构体
//	double d;
//};

struct S5
{
	int i;
	double d;
};

#pragma pack(4)//修改默认对齐数
struct S6
{
	int i;
	double d;
};
#pragma pack()//复原默认对齐数

int main()
{
	//printf("%d\n", sizeof(struct S1));
	//printf("%d\n", sizeof(struct S2));
	//printf("%d\n", offsetof(struct S1,c1));
	//printf("%d\n", offsetof(struct S1,i));
	//printf("%d\n", offsetof(struct S1,c2));

	//printf("%d\n", sizeof(struct S3));
	//printf("%d\n", sizeof(struct S4));

	printf("%d\n", sizeof(struct S5));
	printf("%d\n", sizeof(struct S6));
	return 0;
}*/


//位段
/*struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	printf("%d\n", sizeof(struct A));
	printf("%d\n", sizeof(struct S));
	struct S s = { 10,12,3,4 };//有符号打印
	printf("%d %d %d %d", s.a, s.b, s.c, s.d);
	return 0;
}*/


//枚举
/*enum Day
{
	Mon=1,
	Tuse,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

int main()
{
	enum Day d = Fri;
	printf("%d\n", Mon);
	printf("%d\n", Tuse);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);
	printf("%d\n", d);
	return 0;
}*/


//联合体
/*union U1
{
	int a;
	char c;
};

union U2
{
	int a;
	char c[5];
};

//struct St
//{
//	int a;
//	char c;
//};

int main()
{
	printf("%d\n", sizeof(union U1));
	printf("%d\n", sizeof(union U2));//以对齐数最大的成员开辟内存
	//printf("%d\n", sizeof(struct St));

	//union U1 u;//共用
	//printf("%p\n", &u);
	//printf("%p\n", &u.a);
	//printf("%p\n", &u.c);
	return 0;
}*/

//用联合体判断编译器大小端
/*int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}*/


//动态内存管理
/*int main()
{
	int i = 0;
	//int* p = (int*)calloc(10, sizeof(int));
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	int* ptr = realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 10; i < 20; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}*/


/*void GetMemory(char** p，int num)
{
	*p = (char*)malloc(num);
	//传址，若传参，出函数时p销毁，开辟的空间未被释放，导致内存泄露
} 

//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
    //堆区的内存不会随函数结束而销毁，不用担心成为野指针，但要注意用完后释放
//	return p;
//}

int main()
{
	char* str = NULL;
	GetMemory(&str，100);//传址
	//若传参，str依然是NULL，解引用时会崩溃
	//str = GetMemory();//或者都不传，返回p的地址
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
	return 0;
}*/

//公约数与公倍数之和
/*int main()
{
	int m = 0, n = 0;
	while (scanf("%d %d", &m, &n) == 2)
	{
		int i = m > n ? m : n;
		int j = m > n ? n : m;
		int r = 0;
		while (r = i % j)
		{
			i = j;
			j = r;
		}
		i = (m * n) / j;
		int sum = i + j;
		printf("%d\n", sum);
	}
	return 0;
}*/

//空心正方形
/*int main()
{ 
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}*/
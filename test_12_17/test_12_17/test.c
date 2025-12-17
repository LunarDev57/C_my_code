#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>


//fseek/ftell/rewind
/*int main()
{
	//FILE* pf = fopen("test.txt", "w");
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//fputs("abcdef", pf);
	fseek(pf, 2, SEEK_SET);//起始位置开始偏移
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//距离起始位置的偏移量

	fseek(pf, 2, SEEK_CUR);//当前位置开始偏移
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	fseek(pf, -2, SEEK_END);//结束位置开始偏移
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	rewind(pf);//回到起始位置
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	fclose(pf);
	pf = NULL;
	return 0;
}*/

//定义宏//预处理阶段替换
/*#define DOUBLE1(X) (X)+(X)
#define DOUBLE2(X) ((X)+(X))
#define SQUARE1(X) (X*X)
#define SQUARE2(X) ((X)*(X))
int main()
{
	int m = SQUARE1(5 + 1);
	//5+1*5+1
	int n = SQUARE2(5 + 1);
	//(5+1)*(5+1)
	int i = 10*DOUBLE1(3);
	//10*3+3
	int j = 10*DOUBLE2(3);
	//10*(3+3)
	printf("%d %d\n", m, n);
	printf("%d %d\n", i, j);
	return 0;
}*/

/*#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
	int a = 5, b = 4;
	int m = MAX(a++, b++);
	//m = ((a++)>(b++)?(a++):(b++))
	//6      5  >  4     6  
	printf("%d %d %d\n", m, a, b);
	return 0;
}*/

/*#define _DEBUG_
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef _DEBUG_
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}*/

//用宏实现offsetof
/*#define my_offsetof(type,m_name) (size_t)&(((type*)0)->m_name)
typedef struct S
{
	char c1;
	int i;
	char c2;
}S;

int main()
{
	S s = { 0 };
	printf("%d\n", my_offsetof(S, c1));
	printf("%d\n", my_offsetof(S, i));
	printf("%d\n", my_offsetof(S, c2));
	return 0;
}*/


//箭形图案
/*int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n - i; j++) {
				printf("  ");
			}
			for (j = 0; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < n + 1; i++)
		{
			int j = 0;
			for (j = 0; j < i; j++) {
				printf("  ");
			}
			for (j = 0; j < n + 1 - i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//柔性数组
/*struct A
{
	int n;
	int arr[];
};

int main()
{
	//printf("%d\n", sizeof(struct A));//sizeof不包括柔性数组
	struct A* pa = (struct A*)malloc(sizeof(struct A) + 40);//给柔性数组开辟40byte大小的内存
	if (pa == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	pa->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		pa->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa->arr[i]);
	}
	printf("\n");
	struct A* ptr = (struct A*)realloc(pa, sizeof(struct A) + 80);
	if (ptr != NULL)
	{
		pa = ptr;
		ptr = NULL;
	}
	for (i = 10; i < 20; i++)
	{
		pa->arr[i] = i;
	}
	for (i = 10; i < 20; i++)
	{
		printf("%d ", pa->arr[i]);
	}
	free(pa);
	pa = NULL;
	return 0;
}*/


//文件
/*struct S
{
	char arr[10];
	int age;
	float score;
};

//int main()
//{
//	//struct S s = { "zhangsan",25,50.5f };//写入用
//	struct S s = { 0 };//读取用
//
//	//FILE* pf = fopen("test.txt", "w");//文本写入
//	//FILE* pf = fopen("test.txt", "r");//文本读取
//	//FILE* pf = fopen("test.txt", "wb");//二进制写入
//	FILE* pf = fopen("test.txt", "rb");//二进制读取
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//for (char i = 'a'; i <= 'z'; i++)
//	//{
//	//	      fputc(i, pf);//写一个字符
//	//}
//
//	//int ch = 0;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	  printf("%c ", ch);//读一个字符
//	//}
//
//	//fputs("hello bit\n", pf);//写一个字符串
//
//	//char arr[20];
//	//fgets(arr, 6, pf);//读一个字符串，包括\0
//	//printf("%s\n", arr);
//
//	//fprintf(pf, "%s %d %f", s.arr, s.age, s.score);//文本写入
//
//	//fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));//文本读取
//	//printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	//fwrite(&s, sizeof(struct S), 1, pf);//二进制写入
//
//	fread(&s, sizeof(struct S), 1, pf);//二进制读取
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sprintf/sscanf
int main()
{
	struct S s = { "zhangsan",25,50.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };

	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);//把s中的格式化数据转化成字符串放到buf中
	printf("字符串:%s\n", buf);

	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));//从buf中获取一个格式化的数据到tmp中
	printf("格式化:%s %d %f\n", tmp.arr, tmp.age, tmp.score);
	return 0;
}*/
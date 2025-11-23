#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = 10 + b, a, b = a + 1);//逗号表达式：从左往右依次计算，结果为最后一个表达式的结果
	printf("%d\n", c);

	return 0;
}*/

/*struct Stu
{
	char name[20];
	int age;
	double score;
};

//void set_stu(struct Stu* ps)
//{
//	strcpy((*ps).name, "zhangsan");
//	(*ps).age = 20;
//	(*ps).score = 99.0;
//}

//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}

void set_stu(struct Stu* ps)
{
	strcpy(ps->name, "zhangsan");
	ps->age = 20;
	ps->score = 99.0;
}

void print_stu(struct Stu* ps)
{
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
}

int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	//print_stu(s);
	print_stu(&s);

	return 0;
}*/

/*//整型提升
int main()
{
	char a = 5;//存储8比特位
	char b = 126;
	char c = a + b;//先整型提升，在进行计算
	printf("%d\n", c);
	//先整型提升，在打印，补高位时补充整型提升前的最高位
	//11111111111111111111111110000011 - c

	return 0;
}*/

/*int main()
{
	char a = 0xb6;//整形提升
	short b = 0xb600;//补高位时补充整型提升前的最高位
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");

	return 0;
}*/

/*int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4 表达式
	整型提升
	printf("%u\n", sizeof(-c));//4

	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*struct Stu
{
	char name[20];
	int age;
};

//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->age, ((struct Stu*)e2)->age);
//}

int cmp_int(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}

void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组已经排好序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//比较
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//交换
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	struct Stu ss[] = { {"zhangsan",20},{"lisi",18},{"wangwu",30} };
	int sz = sizeof(ss) / sizeof(ss[0]);
	//qsort(ss, sz, sizeof(ss[0]), cmp_stu_by_name);//按名字升序
	//qsort(ss, sz, sizeof(ss[0]), cmp_stu_by_age);//按年龄升序
	bubble_sort(ss, sz, sizeof(ss[0]), cmp_int);//实现qsort
	int i = 0;
	for(i = 0; i < sz; i++)
	{
		printf("%s %d\n", ss[i].name, ss[i].age);
	}
	return 0;
}*/

/*int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a+0));
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(a+1));
	printf("%d\n",sizeof(a[1]));
	printf("%d\n",sizeof(&a));//根据选择的环境为4/8
	printf("%d\n",sizeof(*&a));
	printf("%d\n",sizeof(&a+1));
	printf("%d\n",sizeof(&a[0]));
	printf("%d\n",sizeof(&a[0]+1));
	return 0;
}*/

/*int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr+0));
	printf("%d\n",sizeof(*arr));
	printf("%d\n",sizeof(arr[1]));
	printf("%d\n",sizeof(&arr));
	printf("%d\n",sizeof(&arr+1));
	printf("%d\n",sizeof(&arr[0]+1));
	return 0;
}*/
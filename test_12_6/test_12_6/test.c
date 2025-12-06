#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

/*int main()
{
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr+0));//随机值
	//printf("%d\n", strlen(*arr));//-->strlen('a');-->strlen(97);//野指针
	//printf("%d\n", strlen(arr[1]));//-->strlen('b');-->strlen(98);//野指针
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr+1));//随机值-6
	printf("%d\n", strlen(&arr[0]+1));//随机值-1
	return 0;
}*/

/*int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//包含\0
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));
	return 0;
}*/

/*int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//不包含\0
	printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));//-->strlen('a');-->strlen(97);//野指针
	//printf("%d\n", strlen(arr[1]));//-->strlen('b');-->strlen(98);//野指针
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}*/

/*int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p+1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p+1));
	printf("%d\n", sizeof(&p[0]+1));

	printf("%d\n",strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p+1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}*/

/*int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//单独放在sizeof内部，表示整个数组的大小
	printf("%d\n", sizeof(a[0][0]));//第一个元素的大小
	printf("%d\n", sizeof(a[0]));//a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一个整个这个一维数组
	printf("%d\n", sizeof(a[0]+1));//a[0]并没有单独放在sizeof内部，也没有取地址，a[0]就表示首元素地址，a[0]+1就表示第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0]+1)));//第一行第二个元素的大小
	printf("%d\n", sizeof(a+1));//第二行的地址
	printf("%d\n", sizeof(*(a+1)));//第二行的大小
	printf("%d\n", sizeof(&a[0]+1));//第二行的地址
	printf("%d\n", sizeof(*(&a[0]+1)));//第二行的大小
	printf("%d\n", sizeof(*a));//未单独放在sizeof内部，表示第一行的地址，解应用得到第一行的大小
	printf("%d\n", sizeof(a[3]));//根据类型分析，第四行也是四个元素，得到第四行的大小
	return 0;
}*/

/*int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = (int*)(&a + 1);
	printf("%d\n", *(a + 1));
	printf("%d\n", *(p - 1));
	//sizeof（单独数组名），表示整个数组大小
	//&数组名，表示整个数组的地址
	//除此之外所有数组名都表示首元素地址
	return 0;
}*/

/*struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;//20字节，x86环境下

int main()
{
    p = (struct Test*)0x10000000;
	printf("%p\n", p + 0x00000001);//0x10000000+20-->0x10000014
	printf("%p\n", (unsigned long)p + 0x00000001);//0x10000000-->1048576+1-->1045577-->0x10000001
	printf("%p\n", (unsigned int*)p + 0x00000001);//0x10000000+4-->0x10000004
	return 0;
}*/

/*int main()
{
	int a[4] = { 1,2,3,4 };
	int* p1 = (int*)(&a + 1);//+整个数组
	int* p2 = (int*)(a + 1);//+一个元素
	int* p3 = (int*)((int)a + 1);//+一个字节
	printf("%08x\n", p1[-1]);
	printf("%08x\n", *p2);
	printf("%08x\n", *p3);
	return 0;
}*/

/*int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式
	int* p;
	p = a[0];
	printf("%d\n", p[0]);
	return 0;
}*/

/*int main()
{
	int a[5][5];//->int(*a)[5]
	int(*p)[4];
	p = a;
	printf("%p\n", &p[4][2] - &a[4][2]);
	printf("%d\n", &p[4][2] - &a[4][2]);
	return 0;
}*/

/*int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = (int*)(&aa + 1);//+整个数组
	int* p2 = (int*)(aa + 1);//+一行元素
	int* p3 = (int*)(aa[0] + 1);//+一个元素
	printf("%d\n", *(p1 - 1));
	printf("%d\n", *(p2 - 1));
	printf("%d\n", *p3);
	return 0;
}*/

/*int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}*/

/*int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}*/

//实现strlen
/*size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	size_t n = my_strlen(arr);
	printf("%u\n", n);
	return 0;
}*/

//实现strcpy
/*char* my_strcpy(char* dest, char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return ret;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}*/

//实现strcat
/*char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return ret;
}

int main()
{
	char arr[20] = "hello ";
	my_strcat(arr, "world");
	printf("%s\n", arr);
	return 0;
}*/

//实现strcmp
/*int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int main()
{
	char arr1[] = "abc";
	char arr2[] = "abcdef";
	if ((my_strcmp(arr1, arr2)) == 0)
	{
		printf("arr1==arr2");
	}
	else
	{
		printf("arr1!=arr2");
	}
	return 0;
}*/

//strncpy
/*int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "hello bit";
	strncpy(arr1, arr2, 5);//拷贝个数需<=arr2元素个数，超过补\0
	printf("%s\n", arr1);
}*/

//strncat
/*int main()
{
	char arr1[20] = "hello ";//"hello\0bit"
	char arr2[] = "world";
	strncat(arr1, arr2, 5);//遇\0提前停止
	printf("%s\n", arr1);
}*/

//strncmp
/*int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcq";
	int ret = strncmp(arr1, arr2, 4);
	printf("%d\n", ret);
}*/

//实现strstr
/*char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* p = str1;
	while (*p)
	{
		char* s1 = p;
		char* s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcdfcde";
	char arr2[] = "cde";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}*/
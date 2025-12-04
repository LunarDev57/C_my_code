#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数指针
/*int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("%p\n", Add);
	printf("%p\n", &Add);
	//均是Add的地址
	int (*pf)(int, int) = &Add;
	//int ret = Add(2, 3);
	//int ret = (*pf)(2, 3);
	int ret = pf(2, 3);
	printf("%d\n", ret);
	return 0;
}*/

//简易计算机
/*void menu()
{
	printf("*****************************\n");
	printf("**********  0.Exit  *********\n");
	printf("*********1.Add  2.Sub********\n");
	printf("*********3.Mul  4.Div********\n");
	printf("*****************************\n");
}

float Add(float x, float y)
{
	return x + y;
}

float Sub(float x, float y)
{
	return x - y;
}

float Mul(float x, float y)
{
	return x * y;
}

float Div(float x, float y)
{
	return x / y;
}

//void calc(float(*pf)(float, float))
//{
//	float x = 0;
//	float y = 0;
//	float ret = 0;
//	printf("请输入2个数:>");
//	scanf("%f %f", &x, &y);
//	ret = pf(x, y);
//	printf("%.2f\n", ret);
//}

int main()
{
	float x = 0;
	float y = 0;
	float ret = 0;
	int input = 0;
	float (*pfarr[])(float, float) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		//函数指针数组
		if (input == 0)
		{
			printf("退出计算机\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两位数:>");
			scanf("%f %f", &x, &y);
			ret = pfarr[input](x, y);
			printf("%.2f\n", ret);
		}
		else
		{
			printf("选择错误，请重新选择!\n");
		}

		//函数指针
	//	switch (input)
	//	{
	//	case 0:
	//		printf("退出计算机\n");
	//		break;
	//	case 1:
	//		calc(Add);
	//		break;
	//	case 2:
	//		calc(Sub);
	//		break;
	//	case 3:
	//		calc(Mul);
	//		break;
	//	case 4:
	//		calc(Div);
	//		break;
	//	default:
	//		printf("选择错误，请重新选择!\n");
	//		break;
	//	}
	//} while (input);
	return 0;
}*/

//快速排序
/*int cmp_int(const int* e1, const int* e2)
{
	return (*e1) - (*e2);
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/
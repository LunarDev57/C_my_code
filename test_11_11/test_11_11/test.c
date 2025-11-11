#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int main()
{
	int a = 0;
	int b = 0;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (b == 0)
		{
			break;
		}
		int m = a / b;
		int n = a % b;
		printf("%d¡­¡­%d\n", m, n);
	}

	return 0;
}*/

/*int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,21,105,116,33 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}

	return 0;
}*/

/*int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d", &year, &month, &day);
	printf("year=%d\n",year);
	printf("month=%02d\n",month);
	printf("day=%02d\n",day);

	return 0;
}*/

/*int main()
{
	int id = 0;
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%d;%f,&f,%f", &id, &a, &b, &c);
	printf("The each subject score of No. %d is %.2f,%.2f,%.2f.", id, a, b, c);

	return 0;
}*/

/*int main()
{
	int n = printf("hello world!\n");
	printf("%d\n", n - 1);
	
	return 0;
}*/

/*int main()
{
	printf("printf(\"hello world!\\n\");\n");
	printf("cout << \"hello world!\" << end1;\n");

	return 0;
}*/

/*int main()
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int n = 1;
	int m = arr[0];
	while (n < 4)
	{
		if (m < arr[n])
		{
			m = arr[n];
		}
		n++;
	}
	printf("%d\n", m);

	return 0;
}*/

/*int main()
{
	float r = 0;
	float v = 0;
	scanf("%f", &r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("v=%.3f", v);

	return 0;
}*/
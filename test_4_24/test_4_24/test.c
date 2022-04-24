#define _CRT_SECURE_NO_WARNINGS 1
//#include"add.h"
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[3][4] = { { 1, 2, 3, }, { 4, 5 } };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}
//
//
////int main()
////{
////	int arr[3][4] = { { 1, 2, 3, }, { 4, 5 } };
////	int i = 0;
////	for (i = 0; i < 3; i++)
////	{
////		int j = 0;
////		for (j = 0; j < 4; j++)
////		{
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////
////
////	return 0;
////}
//
//
////int main()
////{
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
////    int sz = sizeof(arr) / sizeof(arr[0]);
////    int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("&arr[%d] = %p\n", i, &arr[i]);
////	}
////	return 0;
////}
//
//
////int main()
////{
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
//
//	
//
//
////int main()
////{
////	char arr[] = "abcdef";
////	int i = 0;
////	int len = strlen(arr);
////	for (i = 0; i < len; i++)
//////	{
//////		printf("%c ", arr[i]);
//////	}
//////	return 0; 
////}
//
//
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 0;
////	while (n > 2)
////	{
////		c = a + b;
////		a = b;
////		b = c;
////		n--;
////	}
////	return c;
////
////	/*int a = 1;
////	int b = 1;
////	int c = 0;
////	while (1)
////	{
////		if (n > 2)
////		{
////			c = a + b;
////			b = c;
////			a = b;
////			n--;
////			return c;
////		}
////	
////		if (n <= 2)
////		{
////			return 1;
////	///*	}*/
////	//}*/
////	
////	
////	/*if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);*/
////}
////int main()
////{
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fib(n);
////	printf("%d\n", ret);
////	return 0;
////}
//
//
////int Fac1(int n)
////{
////	if (n <= 1)
////		return 1;
////	else
////		return n*Fac1(n - 1);
////}
////int main()
////{
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fac1(n);
////	printf("%d\n", ret);
////	return 0;
////}
//
//
//
////int my_strlen(char* str)
////{
////	/*int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;*/
////}
////int my_strlen(char* str)
////{
////	if (*str != '\0')
////	{
////		return 1 + my_strlen(str + 1);
////	}
////	else
////		return 0;
////}
////int main()
////{
////	char arr[] = "bit";
////	//printf("%d\n", strlen(arr));
////	int len = my_strlen(arr);
////	printf("len=%d\n", len);
////	return 0;
////}
//
//
////void print(int n)
////{
////	if (n>9)
////	{
////		print(n / 10);
////	}
////	printf("%d ", n % 10);
////}
////int main()
////{
////	unsigned int num = 0;
////	scanf("%d", &num);
////	print(num);
////	return 0;
////}
//
//
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int sum = Add(a, b);
////	printf("%d\n", sum);
////	return 0;
////}
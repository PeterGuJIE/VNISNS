#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(char*str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = print;
	(*p)("hello,bit");
	return 0;
}



//void test(int arr[][5])
//{}
//void test(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}




//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}




//int main()
//{
//	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int(*p)[7] = &arr;
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abcdef";
//	//char* p2 = "abcdef";
//	//char* p1 = "abcdef";
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//	printf("haha\n");
//
//	//char str[] = "hello";
//	//char sec[] = "hww";
//	//const char* p = str;
//	//p = sec;
//	//printf("%s\n", p);
//	char str[] = "hello";
//	char* const p = str;
//	p[0] = 'w';
//	printf("%s\n", p);
//
//	return 0;
//}




//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
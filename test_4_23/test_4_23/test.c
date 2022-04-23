#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		Add(&num);
//		printf("num=%d\n", num);
//	}
//	return 0;
//}
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//		return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n",ret);
//	}
//	return 0;
//}



//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//	{
//		return 1;
//	}
//	else if (y % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//int is_prime(int b)
//{
//	int c = 0;
//	for (c = 2; c <= sqrt(b); c++)
//	{
//		if (b%c == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{ 
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (is_prime(a) == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}
//

//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	if (x < y)
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//void menu()
//{
//	printf("                          \n");
//	printf("    1.play     0.exit     \n");
//	printf("                          \n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		printf("%d", ret);
//	}
//	
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define row 10
#define col 10
#include<string.h>
#include<assert.h>
int is_left_move(char*arr1, char* arr2)
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1,len1);
	char*ret=strstr(arr1, arr2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdef";
	int ret = is_left_move(arr1,arr2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}





//void left_move(char* arr, int k)//ÅĞ¶ÏÁ½¸ö×Ö·û´®×óÓÒĞıºóÊÇ·ñÒ»Ñù
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int is_left_move(char*arr1, char*arr2)
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		int ret =strcmp(arr1, arr2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret= is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}










//void left_move(char* arr, int k)//×óĞı×Ö·ûabcd-->cdab
//{
//	int i = 0;
//	assret(arr);
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//void reverse(char*left, char*right)//ÄæĞò×Ö·û
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char*arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);//ÄæĞò×ó±ß
//	reverse(arr+k,arr+len-1);//ÄæĞòÓÒ±ß
//	reverse(arr,arr+len-1);//ÄæĞòÕûÌå
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}






//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}






//int main()
//{
//	char i = 0;
//	for (i = 'a'; i <='d'; i++)
//	{
//		if ((i!='a')+(i == 'c')+(i == 'd')+(i == 'c') == 3)
//		{
//			printf("%c\n", i);
//		}
//	}
//	return 0;
//}







//int main()
//{
//	char arr[row][col] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//				arr[i][0] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
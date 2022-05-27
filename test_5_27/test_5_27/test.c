#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void QuickSort(int *a, int left,int right)//快速排序法
{
	if (left >= right)
	{
		return;
	}
	int begin = left;
	int end = right;
	int pivot = begin;
	int key = a[begin];
	while (begin < end)
	{
		while (begin < end&&a[end] >= key)
		{
			end--;
		}
		a[pivot] = a[end];
		pivot = end;
		while (begin < end&&a[begin] <= key)
		{
			begin++;
		}
		a[pivot] = a[begin];
		pivot = begin;
	}
	pivot = begin;
	a[pivot] = key;

	//分治递归，如二叉树
	QuickSort(a, left, pivot - 1);
	QuickSort(a, pivot + 1,right);

}
void Print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
	QuickSort(arr,0, sizeof(arr) / sizeof(int)-1);
	Print(arr, sizeof(arr) / sizeof(int));
	return 0;
}












//void Swap(int*a, int *b)//冒泡排序
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void BubbleSort(int*a, int n)
//{
//	for (int j = 0; j < n; j++)
//	{
//		int exchange = 0;
//		for (int i = 1; i < n - j; i++)
//		{
//			if (a[i - 1]>a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//		{
//			break;
//		}
//	}
//}
//
//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 3,5,9,8,7,1,0,4,10 };
//	BubbleSort(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}













//void Swap(int*a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void SelectSort(int* a,int n)//直接选择排序
//{
//	int begin = 0;
//	int end = n - 1;
//	while (begin < end)
//	{
//		int min = begin, max = begin;
//		for (int i = begin; i <= end; i++)
//		{
//			if (a[i] < a[min])
//			{
//				min = i;
//			}
//			if (a[i] > a[max])
//			{
//				max = i;
//			}
//		}
//		Swap(&a[begin], &a[min]);
//		if (begin == max)
//		{
//			max = min;
//		}
//		Swap(&a[max], &a[end]);
//		begin++;
//		end--;
//	}
//}
//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 3,5,9,8,7,1,0,4,10 };
//	SelectSort(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>

void Swap(int*a, int *b)//¶ÑÅÅÐò
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void AdjustDwon(int*a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;//Ä¬ÈÏ×óº¢×Ó
	while (child < n)
	{
		if (child + 1 < n&&a[child + 1] > a[child])
		{
			child += 1;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int *arr, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDwon(arr, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDwon(arr, end, 0);
		end--;
	}
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
	int arr[] = { 3, 5, 6, 0, 8, 7, 4, 1 };
	HeapSort(arr, sizeof(arr) / sizeof(int));
	Print(arr, sizeof(arr) / sizeof(int));
	return 0;
}








//void ShellSort(int *arr, int n)//Ï£¶ûÅÅÐò
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 2;
//
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > tmp)
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tmp;
//		}
//	}
//}
//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Test()
//{
//	int arr[] = { 3, 5, 6, 0, 8, 7, 4, 1 };
//	ShellSort(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//
//}
//
//int main()
//{
//	Test();
//	return 0;
//}










//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Insertsort(int*arr,int n)//²åÈëÅÅÐò
//{
//	
//	for (int i = 0; i<n - 1; i++)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)
//			{
//				arr[end + 1] = arr[end];
//				--end;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}
//#define N 9
//void fun(int* a, int number)
//{
//	int m;
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (a[i] >= number)
//		{
//			m = i;
//			for (int q = (9 - 1); q > i; q--)
//			{
//				a[q] = a[q - 1];
//			}
//			break;
//		}
//	}
//
//	a[m] = number;
//}
//
//void Test()
//{
//	int arr[] = { 1,3,4,5,6,7,8,9 };
//	Insertsort(arr, sizeof(arr) / sizeof(int));
//	int number = 2;
//	fun(arr, number);
//	Print(arr, sizeof(arr) / sizeof(int));
//}
//int main()
//{
//	
//	Test();
//	return 0;
//}
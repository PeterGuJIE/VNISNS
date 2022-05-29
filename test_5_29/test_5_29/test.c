#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void CountSort(int*a,int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i]>max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max - min + 1;
	int *count = malloc(sizeof(int)*range);
	memset(count, 0, sizeof(int)*range);
	//统计次数
	for (int i = 0; i < n; i++)
	{
		count[a[i]-min]++;
	}
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}


	free(count);
}


void MergeSortNonR(int*a, int n)
{

	int *tmp = (int*)malloc(sizeof(int)*n);
	int gap = 1;//每组数据的个数
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			//[i+i+gap-1][i+gap,i+2*gap-1];
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//归并过程中右半区间可能不存在
			if (begin2 >= n)
				break;
			//归并过程中右半区间算多了,修正一下
			if (end2>=n)
			{
				end2 = n - 1;
			}
			int Index = i;
			while (begin1 <= end1&&begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[Index++] = a[begin1++];
				}
				else
				{
					tmp[Index++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[Index++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[Index++] = a[begin2++];
			}
			for (int j = i; j <= end2; j++)
			{
				a[j] = tmp[j];
			}
		}
	
		gap *= 2;
	}
	free(tmp);
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
	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4,11 };
	//MergeSortNonR(arr, sizeof(arr) / sizeof(int));
	CountSort(arr, sizeof(arr) / sizeof(int));
	Print(arr, sizeof(arr) / sizeof(int));
	return 0;
}






//int GetMid(int *a, int left, int right)
//{
//	int mid = (left + right) / 2;
//	if (a[left]<a[mid])
//	{
//		if (a[mid] < a[right])
//			return a[mid];
//		else if (a[left]>a[right])
//			return left;
//		else
//			return right;
//	}
//	else//a[left]>a[mid]
//	{
//		if (a[mid] > a[right])
//			return mid;
//		else if (a[left] < a[right])
//			return left;
//		else
//			return right;
//	}
//}
//int PartSort1(int *a, int left, int right)//挖坑法
//{
//	int index = GetMid(a, left, right);
//	//Swap(&a[left], &a[right]);
//	int begin = left;
//	int end = right;
//	int pivot = begin;
//	int key = a[begin];
//	while (begin < end)
//	{
//		while (begin < end&&a[end] >= key)
//		{
//			end--; 
//		}
//		a[pivot] = a[end];
//		pivot = end;
//		while (begin < end&&a[begin] <= key)
//		{
//			begin++;
//		}
//		a[pivot] = a[begin];
//		pivot = begin;
//	}
//	pivot = begin;
//	a[pivot] = key;
//
//	return pivot;
//}
//
//
//void QuickSortNonR(int*a, int n)
//{
//	Node st;
//	Init(&st);
//	Push(&st, n - 1);
//	Push(&st, 0);
//
//	while (!Empty(&st))
//	{
//		int left = Top(&st);
//		Pop(&st);
//
//		int right = Top(&st);
//		Pop(&st);
//
//		int keyIndex = PartSort1(a, left, right);
//		//[left,keyIndex-1]keyIndex[keyIndex+1,right]
//		if (keyIndex + 1 < right)
//		{
//			Push(&st, right);
//			Push(&st, keyIndex + 1);
//		}
//		if (left < keyIndex - 1)
//		{
//			Push(&st, keyIndex - 1);
//			Push(&st, left);
//		}
//	}
//	Defree(&st);
//}
//
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
//	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
//	//QuickSort(arr, 0, sizeof(arr) / sizeof(int)-1);
//	QuickSortNonR(arr, sizeof(arr) / sizeof(int)-1); 
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void _MergeSort(int*arr, int left, int right, int*tmp)//¹é²¢ÅÅÐò
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_MergeSort(arr, left, mid, tmp);
	_MergeSort(arr, mid+1, right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[index++] = arr[begin1++];
		}
		else
		{
			tmp[index++] = arr[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[index++] = arr[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = arr[begin2++];
	}
	for (int i = left; i <= right; i++)
	{
		arr[i] = tmp[i];
	}
}
void MergeSort(int*arr, int sz)
{
	int*tmp = (int*)malloc(sizeof(int)*sz);
	_MergeSort(arr, 0, sz - 1, tmp);
	free(tmp);
}
void Print(int*arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 5, 3, 7, 4, 6, 8, 1, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	MergeSort(arr,sz);
	Print(arr, sz);
	return 0;
}
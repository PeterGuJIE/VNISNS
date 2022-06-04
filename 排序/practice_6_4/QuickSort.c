//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void Swap(int*a, int*b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int GetMid(int*arr, int left, int right)//三目取中法
//{
//	int mid = (left + right) / 2;
//	if (arr[left] < arr[mid])
//	{
//		if (arr[mid] < arr[right])
//			return mid;
//		else if (arr[left]>arr[right])
//			return left;
//		else
//			return right;
//	}
//	else
//	{
//		if (arr[mid] > arr[right])
//			return mid;
//		else if (arr[left]<arr[right])
//			return left;
//		else
//			return right;
//	}
//}
//int ExSort(int*arr, int left, int right)//挖坑法
//{
//	int ret = GetMid(arr, left, right);
//	Swap(&arr[left],&arr[ret]);
//	int begin = left;
//	int end = right;
//	int piovt = begin;
//	int key = arr[piovt];
//	while (begin < end)
//	{
//		while (begin < end&&arr[end] >= key)
//		{
//			end--;
//		}
//		arr[piovt] = arr[end];
//		piovt = end;
//		while (begin < end&&arr[begin] <= key)
//		{
//			begin++;
//		}
//		arr[piovt] = arr[begin];
//		piovt = begin;
//	}
//	piovt = begin;
//	arr[piovt] = key;
//	return piovt;
//
//}
//int PointerSort(int*arr, int left, int right)//左右指针法
//{
//	int ret = GetMid(arr, left, right);
//	Swap(&arr[left], &arr[ret]);
//	int begin = left;
//	int end = right;
//	int key = begin;
//	while (begin < end)
//	{
//		while (begin < end&&arr[end] >= arr[key])
//		{
//			end--;
//		}
//		while (begin < end&&arr[begin] <= arr[key])
//		{
//			begin++;
//		}
//		Swap(&arr[begin], &arr[end]);
//	}
//	Swap(&arr[begin], &arr[key]);
//	return begin;
//}
//
//int FrontSort(int*arr, int left, int right)//前后指针法
//{
//	int ret = GetMid(arr, left, right);
//	Swap(&arr[left], &arr[ret]);
//	int key = left;
//	int prev = left;
//	int cur = left + 1;
//	while (cur <= right)
//	{
//		if (arr[cur] < arr[key] && prev != cur)
//		{
//			++prev;
//			Swap(&arr[prev], &arr[cur]);
//		}
//		cur++;
//	}
//	Swap(&arr[key], &arr[prev]);
//	return prev;
//}
//
//
//void QuickSort(int*arr, int left,int right)//快速排序
//{
//	if (left >= right)
//		return;
//	//int key = ExSort(arr, left, right);
//	//int key = PointerSort(arr, left, right);
//	int key = FrontSort(arr, left, right);
//	QuickSort(arr, left, key - 1);
//	QuickSort(arr, key + 1, right);
//}
//void Print(int*arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 5, 3, 7, 4, 6, 8, 1, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	QuickSort(arr, 0,sz-1);
//	Print(arr, sz);
//	return 0;
//}
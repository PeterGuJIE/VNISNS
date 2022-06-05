#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//
//void MergeSortNonR(int*arr, int n)//归并无递归版
//{
//	int*tmp = (int*)malloc(sizeof(int)*n);
//	int gap = 1;
//	while (gap < n)
//	{
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			int begin1 = i, end1 = i + gap - 1;
//			int begin2 = i + gap, end2 = i + 2 * gap - 1;
//			if (begin2 >= n)//判断n是奇数的时候
//				break;
//			if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
//			int index = i;
//			while (begin2 <= end2&&begin1 <= end1)
//			{
//				if (arr[begin1] < arr[begin2])
//				{
//					tmp[index++] = arr[begin1++];
//				}
//				else
//				{
//					tmp[index++] = arr[begin2++];
//				}
//			}
//			while (begin1 <= end1)
//			{
//				tmp[index++] = arr[begin1++];
//			}
//			while (begin2 <= end2)
//			{
//				tmp[index++] = arr[begin2++];
//			}
//			for (int j = i; j <= end2; j++)
//			{
//				arr[j] = tmp[j];
//			}
//		}
//		gap *= 2;
//	}
//	free(tmp);
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
//	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
//	MergeSortNonR(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0; 
//}



















//typedef struct ListNode//快速排序无递归版
//{
//	int*a;
//	int size;
//	int max_size;
//}LNode;
//void Init(LNode*ps)
//{
//	ps->a = malloc(sizeof(int)* 4);
//	ps->max_size = 4;
//	ps->size = 0;
//}
//
//void Push(LNode*ps, int x)
//{
//	if (ps->max_size == ps->size)
//	{
//		int*tmp = realloc(ps->a, sizeof(int)*ps->max_size * 2);
//		if (tmp == NULL)
//			exit(-1);
//		ps->a = tmp;
//		ps->max_size *= 2;
//	}
//	ps->a[ps->size] = x;
//	ps->size++; 
//}
//
//int Top(LNode*ps)
//{
//	assert(ps);
//	return ps->a[ps->size - 1];
//}
//void Pop(LNode*ps)
//{
//	assert(ps);
//	ps->size--;
//}
//bool Empty(LNode*ps)
//{
//	assert(ps);
//	return ps->size == 0;
//}
//void Defree(LNode*ps)
//{
//	free(ps->a);
//	ps->a = NULL;
//	ps->max_size = ps->size = 0; 
//}
//int GetMid(int*arr, int left, int right)
//{
//	int mid = (left + right) / 2;
//	if (arr[left] < arr[right])
//	{
//		if (arr[mid] < arr[right])
//			return mid;
//		else if (arr[left] < arr[right])
//			return left;
//		else
//			return right;
//	}
//	else
//	{
//		if (arr[mid] > arr[right])
//			return mid;
//		else if (arr[left] > arr[right])
//			return left;
//		else
//			return right;
//	}
//}
//void Swap(int*a, int*b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int QuickSort(int*arr, int left, int right)
//{
//	int index = GetMid(arr, left, right);
//	Swap(&arr[left],&arr[index]);
//	int begin = left;
//	int end = right;
//	int piovt = begin;
//	int key = arr[piovt];
//	while (begin < end)
//	{
//		while (begin < end && arr[end] >= key)
//		{
//			end--;
//		}
//		arr[piovt] = arr[end];
//		piovt = end;
//		while (begin < end && arr[begin] <= key)
//		{
//			begin++;
//		}
//		arr[piovt] = arr[begin];
//		piovt = begin;
//	}
//	piovt = begin;
//	arr[piovt] = key;
//	return piovt;
//}
//void QuickSortNonR(int*arr,int n)
//{
//	LNode ps;
//	Init(&ps);
//	Push(&ps, n - 1);
//	Push(&ps, 0);
//	while (!Empty(&ps))
//	{
//		int left = Top(&ps);
//		Pop(&ps);
//		int right = Top(&ps);
//		Pop(&ps);
//		int index = QuickSort(arr, left, right);
//		if (index + 1 < right)
//		{
//			Push(&ps, right);
//			Push(&ps, index + 1);
//		}
//		if (left < index - 1)
//		{
//			Push(&ps, index - 1);
//			Push(&ps, left);
//		}
//	}
//	Defree(&ps);
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
//	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
//	QuickSortNonR(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0; 
//}
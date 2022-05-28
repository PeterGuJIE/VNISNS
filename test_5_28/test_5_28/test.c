#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void _MergeSort(int*a, int left, int right,int*tmp)
{
	if (left >= right)
		return;
	int mid = (left + right) >> 1;
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);
	//归并
	int begin1 = left, end1 = mid;
	int begin2 = mid+1, end2 = right;
	int Index = left;
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
	//拷贝回去
	for (int i = left; i <= right; i++)
	{
		a[i] = tmp[i];
	}
}


void MergeSort(int *a,int n)
{
	int*tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
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
	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
	MergeSort(arr, sizeof(arr) / sizeof(int));
	Print(arr, sizeof(arr) / sizeof(int));
	return 0;
}






//void Swap(int*a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
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
////int PartSort1(int *a, int left, int right)//挖坑法
////{
////	int index = GetMid(a, left, right);
////	Swap(&a[left], &a[right]);
////	int begin = left;
////	int end = right;
////	int pivot = begin;
////	int key = a[begin];
////	while (begin < end)
////	{
////		while (begin < end&&a[end] >= key)
////		{
////			end--; 
////		}
////		a[pivot] = a[end];
////		pivot = end;
////		while (begin < end&&a[begin] <= key)
////		{
////			begin++;
////		}
////		a[pivot] = a[begin];
////		pivot = begin;
////	}
////	pivot = begin;
////	a[pivot] = key;
////
////	return pivot;
////}
//
////左右指针法
//int PartSort2(int *a, int left, int right)
//{
//	int index = GetMid(a, left, right);
//	Swap(&a[left], &a[right]);
//	int begin = left;
//	int end = right;
//	int keyi = begin;
//	while (begin < end)
//	{
//		while (begin < end&&a[end] >= a[keyi])
//		{
//			end--;
//		}
//		while (begin < end&&a[begin] <= a[keyi])
//		{
//			begin++;
//		}
//		Swap(&a[begin], &a[end]);
//	}
//	Swap(&a[begin], &a[keyi]);
//	return begin;
//}
//int PartSort3(int *a, int left, int right)//前后指针法
//{
//	int index = GetMid(a, left, right);
//	Swap(&a[left], &a[right]);
//	int keyi = left;
//	int prev = left;
//	int cur = left + 1;
//	while (cur <= right)
//	{
//		if (a[cur] < a[keyi] && ++prev != cur)
//		{
//			//prev++;
//			Swap(&a[prev], &a[cur]);
//		}
//		cur++;
//	}
//	Swap(&a[keyi], &a[prev]);
//	return prev;
//}
//
//void QuickSort(int *a, int left, int right)//快速排序法
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int keyIndex = PartSort1(a, left, right);
//	//分治递归，如二叉树
//	QuickSort(a, left, keyIndex - 1);
//	QuickSort(a, keyIndex + 1, right);
//
//
//	//小区间优化
//	//if ((keyIndex - 1 - left)>10)
//	//{
//	//	QuickSort(a, left, keyIndex - 1);
//	//}
//	//else
//	//{
//	//	Insertsort(a + left, keyIndex - 1 - left + 1);
//	//}
//	//if ((right - keyIndex - 1)>10)
//	//{
//	//	QuickSort(a, keyIndex + 1, right);
//	//}
//	//else
//	//{
//	//	Insertsort(a + keyIndex + 1, right - (keyIndex + 1) + 1);
//	//}
//
//
//}
//
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
//	QuickSort(arr, 0, sizeof(arr) / sizeof(int)-1);
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}







//三数取中
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
//void Insertsort(int*arr,int n)//插入排序
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
//void QuickSort(int *a, int left, int right)//快速排序法
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int index = GetMid(a, left, right);
//	Swap(&a[left], &a[right]);
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
//	//分治递归，如二叉树
//	QuickSort(a, left, pivot - 1);
//	QuickSort(a, pivot + 1, right);
//
//
//	//小区间优化
//	if ((pivot - 1 - left)>10)
//	{
//		QuickSort(a, left, pivot - 1);
//	}
//	else
//	{
//		Insertsort(a + left, pivot - 1 - left + 1);
//	}
//	if ((right-pivot-1)>10)
//	{
//		QuickSort(a, pivot + 1, right);
//	}
//	else
//	{
//		Insertsort(a + pivot + 1, right - (pivot + 1) + 1);
//	}
//
//
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
//	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
//	QuickSort(arr, 0, sizeof(arr) / sizeof(int)-1);
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void Swap(int*a, int*b)//√∞≈›≈≈–Ú
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void BubbleSort(int*arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		int exchange = 0;
//		for (int j = 1; j < sz - i; j++)
//		{
//			if (arr[j - 1]>arr[j])
//			{
//				Swap(&arr[j - 1], &arr[j]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//		{
//			break;
//		}
//	}
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
//	BubbleSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}









//void Swap(int*a, int*b)//—°‘Ò≈≈–Ú
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void SelectSort(int*arr, int sz)
//{
//	int begin = 0;
//	int end = sz - 1;
//	while (end > begin)
//	{
//		int min = begin, max = end;
//		for (int i = begin; i <= end; i++)
//		{
//			if (arr[i] < arr[min])
//			{
//				min = i;
//			}
//			if (arr[i]>arr[max])
//			{
//				max = i;
//			}
//		}
//		Swap(&arr[begin], &arr[min]);
//		if (begin == max)
//		{
//			max = min;
//		}
//		Swap(&arr[max], &arr[end]);
//		begin++;
//		end--;
//	}
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
//	SelectSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}







//void Swap(int*a, int*b)//∂—≈≈–Ú 
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void AdjustDown(int*arr, int sz, int i)
//{
//	int parent = i;
//	int child = 2 * parent + 1;//◊Û∫¢◊”
//	while (child < sz)
//	{
//		if (child + 1 < sz&&arr[child + 1] > arr[child])
//		{
//			child += 1;
//		}
//		if (arr[child]>arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(int*arr, int sz)
//{
//	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, sz, i);
//	}
//	int end = sz - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		end--;
//	}
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
//	HeapSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}














//void ShelltSort(int *arr, int sz)//œ£∂˚≈≈–Ú
//{
//	int gap = 3;
//	while (gap>1)
//	{
//		gap /= 2;
//		for (int i = 0; i < sz - gap; i++)
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end]>tmp)
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
//	ShelltSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}












//void InsertSort(int*arr, int sz)//≤Â»Î≈≈–Ú
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end]>tmp)
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}
//void Print(int*arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 5, 3, 7, 4, 6, 8, 1, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	InsertSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
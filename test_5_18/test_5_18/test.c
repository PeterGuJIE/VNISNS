#define _CRT_SECURE_NO_WARNINGS 1
#include"lish.h"
void sever(int*arr1, int *arr2, int m,int n)
{
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (arr1[end1] > arr2[end2])
		{
			arr1[end] = arr1[end1];
			end--;
			end1--;
		}
		else
		{
			arr1[end] = arr2[end2];
			end--;
			end2--;
		}
	}
	//如果是end1没完，不需要处理，但是end2没完需要把end2放入end
	while (end2 >= 0)
	{
		arr1[end] = arr2[end2];
		end--;
		end2--;
	}
}
int main()
{
	int arr1[] = { 1, 2, 3, 0, 0, 0 };
	int arr2[] = { -2, -5, 6 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	sever(arr1, arr2, 3,3);
	int i = 0;
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}







//void search(int*arr, int val, int sz)
//{
//	int i = 0;
//	int j = 0;
//	while (i < sz)
//	{
//		if (arr[i] != val)
//		{
//			arr[j] = arr[i];
//			i++;
//			j++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return j;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 2, 3, 2 };
//	int val = 2;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	search(arr, val, sz);
//	return 0;
//}





//void list1()
//{
//	list ls;
//	lnit(&ls);
//	pushback(&ls, 1);
//	
//	pushfront(&ls, 1);
//
//	popback(&ls);
//
//	popfront(&ls);
//
//	insert(&ls, 1, 20);
//
//	erase(&ls, 1);
//
//	find1(&ls, 1);
//
//	modify(&ls, 1, 20);
//
//	print(&ls);
//	destory(&ls);
//}
//
//void menu()
//{
//	printf("***********************************\n");
//	printf("*******1.尾插数据  2.头插数据******\n");
//	printf("*******3.尾删数据  4.头删数据******\n");
//	printf("*******5.打印数据  -1.退出   ******\n");
//	printf("***********************************\n");
//	printf("请输入你的操作选项:");
//}
//int main()
//{
//	list ls;
//	lnit(&ls);
//	int option = 0;
//	int x = 0;
//	while (option != -1)
//	{
//		menu();
//		scanf("%d", &option);
//		switch (option)
//		{
//		case 1:
//			printf("请输入你要插入的数据，以-1结束\n");
//			do
//			{
//				scanf("%d", &x);
//				if (x != -1)
//				{
//					pushback(&ls, x);
//				}
//			} while (x != -1);
//			break;
//		case 2:
//			printf("请输入你要插入的数据，以-1结束\n");
//			do
//			{
//				scanf("%d", &x);
//				if (x != -1)
//				{
//					pushfront(&ls, x);
//				}
//			} while (x != -1);
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 5:
//			print(&ls);
//			break;
//		case -1:
//			destory(&ls);
//			/*break;*/
//		default:
//			break;
//		}
//	}
//	return 0;
//}







//void find(int*arr, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void sever(int* arr, int sz,int k)
//{
//	if (k >= sz)
//	{
//		k %= sz;
//	}
//	find(arr, 0, sz - k - 1);
//	find(arr, sz - k, sz - 1);
//	find(arr, 0, sz - 1);
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k = 3;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sever(arr,sz, k);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}










//int find(int arr[], int sz)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		sum ^=i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		sum ^= arr[i];
//	}
//	
//	return sum;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 0, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find(arr, sz);
//	printf("%d ", ret);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void find_count(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j <=i;j++)
		if (arr[i] % 2 == 1 && arr[j] % 2 == 0 && left <= right)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}


	//while (left<=right)
	//{
	//	while (/*(left<=right) && */arr[left] % 2 == 1)
	//	{
	//		left++;
	//	}
	//	while (/*(left<=right) && */arr[right] % 2 == 0)
	//	{
	//		right--;
	//	}
	//	if (left < right)
	//	{
	//		int tmp = arr[left];
	//		arr[left] = arr[right];
	//		arr[right] = tmp;
	//	}
	//}
}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//int cmp(const void*e1, const void*e2)
//{
//	return *((char*)e1) - *((char*)e2);
//}
int main()
{
	int arr[] = { 1,2,10,26,84,33,31,9,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	find_count(arr,sz);
	print(arr, sz);
	return 0;
}





//int main()
//{
//	int a = 0;
//	int c = 0;
//	scanf("%d", &a);
//	int b = 0;
//	b = a;
//	c = a;
//	while (c >= 2)
//	{
//		b = b + c / 2;
//		c = c / 2 + c % 2;
//	}
//	printf("%d\n", b);
//	return 0;
//}







//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(n-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 10000; n++)
//	{
//		int tmp = n;
//		int sum = 0;
//		int count = 1;
//		while (tmp / 10)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == n)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}






//int SUM(int n,int i)
//{
//	int sum = 0;
//	while (i > 0)
//	{
//		sum = sum * 10 + n;
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		sum = sum + SUM(n,i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}







//int my_strlen(char* arr)
//{
//	int count = 0;
//	while(*arr != '\0')
//	{
//		count++;
//		*arr++;
//	}
//	return count;
//}
//void reverse(char arr[])
//{
//	char tmp = arr[0];
//	int ret = my_strlen(arr);
//	arr[0] = arr[ret - 1];
//	arr[ret - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	arr[ret - 1] = tmp;
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s",&arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
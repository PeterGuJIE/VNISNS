#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//			
//	}
//	if (i == 3)
//		printf("程序退出\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 11 };
//	int k = 5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标为%d\n", mid);
//	else
//		printf("未找到\n");
//
//
//	return 0;
//
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k =7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标%d\n", mid);
//	else
//		printf("没找到\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	for (n = 1; n <= a; n++)
//	{
//		ret = ret * n;
//	}
//	printf("ret =%d\n", ret);
//
//
//	return 0;
//
//}



//int main()//1!-10!的和
//{
//	int n = 0;
//	int set = 1;
//	int sum = 0;
//	for (n = 1; n <=10; n++)
//	{
//		set = set * n;
//		sum = sum + set;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//计算n的阶乘
//{
//	int n = 0;
//	int a = 0;
//	int set = 1;
//	scanf("%d", &a);
//	for (n = 1; n <= a; n++)
//	{
//		set = set * n;
//	}
//	printf("set=%d\n", set);
//	return 0;
//}





//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (n = 1; n <= i; n++)
//		{
//			ret = ret * n;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	for (n = 1;n<=a ; n++)
//	{
//		ret = ret * n;
//	}
//	printf("ret=%d\n", ret);
///*
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}*/
//
//	return 0;
//
//}


//int main()
//{
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		purchar(ch);
//	}
//	return 0;
//}
	
	/*int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	while ((ch = gatchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
//	}*/
//	return 0;
//}
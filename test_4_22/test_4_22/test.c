#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char input[40] = { 0 };
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("һ�����ڹػ������������������ȡ���ػ�\n������");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("����ȡ��\n");
			break;
		}
	}
	
	//else
	//{
	//	/*goto again;*/
	//}
	return 0;
}

//void menu()
//{
//	printf("                             \n");
//	printf("      1 .play    0. exit     \n");
//	printf("                             \n");
//}void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret =rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break; 
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}
////int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;
//	int mid = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
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
//			printf("�ҵ����֣��±�Ϊ:%d\n", mid);
//		break;
//	}
//	if (left > right)
//		printf("δ�ҵ�����\n");
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a*b);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		sum += flag * 1.0 / n;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double i = 0;
//	for (n = 1; n <= 100; n+=2)
//	{ 
//		sum1 +=1.0 / n;
//	}
//	for (n = 2; n <= 100; n += 2)
//	{
//		sum2 += 1.0 / n;
//	}
//	i = sum1 - sum2;
//	printf("i=%lf\n", i);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//		if (n / 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()//sqrt-��ƽ������ѧ�⺯��
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//
//	for (n = 100; n <= 200; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n%i == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			count++;
//			printf("%d ", n);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//
//}
//int main()
//{
//	int a = 0;//24
//	int b = 0;//18
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		printf("%c", ch);

//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;//break;
//		printf("%d ", i);
//		i++;
//	}
////	int m = 2;
//	int n = 1;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++;
//			n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m = %d, n = %d\n", m, n);
////{
//	int day = 0;
//
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	default:
//		printf("�������\n");
////		break;
////	}
////	/*int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}*/
//	//int num = 4;
	///*if (num = 5)
	//{
	//	printf("hehe\n");
	//}*/
	///*int a = 0;
	//int b = 2;
	//if (a == 1)
	//{
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//}*/
	////int age = 10;
	////if (age < 18)
	////	printf("δ����\n");
	////else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age>=28&&age<50)
	//	printf("׳��\n");

	return 0;

}
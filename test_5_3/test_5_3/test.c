#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
};
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9, 2, 3, 4, 6, 8, 7, 18, 0, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_double(const void*e1, const void*e2)
{
	return (int)(*(double*)e1 - *(double*)e2);
	if (*(double*)e1 == *(double*)e2)
		return 0;
	else if (*(double*)e1 > *(double*)e2)
		return 1;
	else
		return -1;
}
void test2()
{
	double f[] = { 9.0, 4.0, 4.5, 4.6, 5.6 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_double);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", f[i]);
	}
	printf("\n");
}
int cmp_struct1(const void*e1, const void*e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_struct2(const void*e1, const void*e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct1);
	qsort(s, sz, sizeof(s[0]), cmp_struct2);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i]);
	}
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}











//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void*e1, const void*e2)
//{
//
//}
//int main()
//{
//	int arr[10] = { 9, 2, 3, 4, 6, 8, 7, 18, 0 ,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	float f[] = { 9.0, 4.0, 4.5, 4.6, 5.6 };
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return  0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int(*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	return 0;
//}





//void menu()
//{
//	printf("                         \n");
//	printf("     1.add      2.sub    \n");
//	printf("     3.mul      4.div    \n");
//	printf("     5.Xor      0.exit   \n");
//	printf("                         \n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x,y));
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pfArr[])(int, int) = {0,Add,Sub,Mul,Div,Xor};
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//
//
//
//
//
//	/*do
//	{
//		menu();
//		prinf("请选择:");
//		scanf("%d", &input);
//		prinf("请输入两个操作数:");
//		scanf("%d%d", &x,&y);
//		switch (input)
//		{
//		case 1:
//          Calc(Add);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);*/
//	/*char* my_strcpy(char* dest, const char* src);
//	char*(*pf)(char*, const char*);
//	char*(*pfArr[4])(char*, const char*);*/
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int main()
//{
//	//void(*signal(int, void(*)(int)))(int);
//	//typedef void(*unit_f)(int);
//	//unit_f(signal(int, unit_f));
//	int* arr[5];
//	int(*pa)(int, int) = Add;//Sub,Mul
//	int(*parr[3])(int, int) = {Add,Sub,Mul};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
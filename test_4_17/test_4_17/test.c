

//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
struct book
{
	char name[20];
	short price;
};
int main()
{
	struct book b1 = { "C语言程序设计", 55 };
	struct book* pd = &b1;
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);
	/*char ch = 'c';
	char* p = &ch;
	*p = 20;
	printf("p = %d\n", ch);*/
	return 0;

}
//Max(int c, int d)
//{
//	if (c > d)
//	return c;
//	else
//		return d;
//}
//int main()
//{
//	int a = 0;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//
//}
////int main()
////{
//	int a = 0;
//	int b = 20;
//	if(a > b)
//	printf("较大值： %d\n", a);
//
//	else
//		printf("较大值：%d\n", b);
//	return 0;
//}
//enum Sex
//{
//	male,
//	female,
//	secret
//};
// 
//int main()
//{
//
//	/*int a = 0;
//	printf("加入比特\n");
//	while (a < 20000)
//	{
//		printf("打一行代码: %d\n", a);
//		a++;
//	}
//	if (a>=20000)
//		printf("好offer\n");
//*/
////	int a = 0;
////	printf("加入比特\n");
////	printf("你要好好学习嘛？(1/0)>: ");
////	scanf("%d", &a);
////
////	if (a == 1)
////		printf("好offer\n");
////	else
////		printf("卖红薯\n");
//////	enum Sex s = female;
////	printf("%d\n", male);
////	/*int a = 10;
////	int aa[10] = { 0 };
////*/
//	/*extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;*/
//}
//////int mun2 = 20;
////int global = 2020;
////void test()
////{
////	printf("test()--%d\n", global);
////}
////int main()
////{
////	test();
////	printf("%d\n", global);
////	//{
//	//	int mun = 0;
//	//}
//	////int mun2 = 0;
//	//int mun1 = 0;
//	//int mun = 0;
//
//	//scanf("%d%d", &mun1, &mun2);
//	//mun = mun1 + mun2;
//	//printf("sum = %d\n", mun);
//	////int mun1 = 10;
//	////printf("%d\n", mun1);
//
//	///*short age = 20;
//	//float weight = 95.6;*/
//
//
//
//
//	//char ch = 'A';
// //   //printf("%c\n", ch);
//	///*float f = 5.55;
//	//printf("%f\n", f);*/
//	///*double f = 3.14;
//	//printf("%lf\n", f);*/
//	//printf("%d\n", sizeof(char));
//	//printf("%d\n", sizeof(short));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(double));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(long long));
//	//printf("%d\n", sizeof(float));
//
//
//
////
////	/*long num = 100;
////	printf("%d\n", num);*/
////
////
////	return 0;
////}
//

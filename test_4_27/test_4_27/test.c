#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}



//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s1 = { "ÕÅÈý", 20, "2019010305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	/*printf("%s\n", (*ps).name);*/
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (1 == ((num >> i) & 1))
////		{
////			count++;
////		}
////	}
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	int d = a | b;
//	int e = a^b;
//	printf("%d %d %d", c,d,e);
//	return 0;
//}
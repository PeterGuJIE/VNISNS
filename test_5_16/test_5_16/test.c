#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
struct S
{
	char a;
	int b;
	char c;
};
#define OFFSEROF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
int main()
{
	/*struct s s;*/
	printf("%d\n", OFFSEROF(struct S, a));
	printf("%d\n", OFFSEROF(struct S, b));
	printf("%d\n", OFFSEROF(struct S, c));

	return 0;
}






//int main()
//{
//#if defined(DEBUG)
//	printf("hehe");
//#endif
//
//#ifdef DEBUG
//	printf("haha");
//#endif
//
//#if !defined(DEBUG)
//	printf("haha");
//#endif
//	return 0;
//}




//int main()
//{
//#if 1==1
//	printf("hehe");
//#elif 2==1
//	printf("haha");
//#else
//	printf("xixi");
//#endif
//	return 0;
//}




//#define DEBUG
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d", arr[i]);
//#endif 
//	}
//	return 0;
//}
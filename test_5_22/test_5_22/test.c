#define _CRT_SECURE_NO_WARNINGS 1
#include"lish.h"
void test()
{
	Queue q;
	Init(&q);
	Push(&q, 1);
	Push(&q, 2);
	Push(&q, 3);
	Push(&q, 4);
	while (Empty(&q) == 0)
	{
		printf("%d ", Front(&q));
		Pop(&q);
	}
	printf("\n"); 
	Defree(&q);
}
int main()
{
	test();
	return 0;
}













//int mian()
//{
//	Node st;
//	Init(&st);
//	Push(&st, 1);
//	Push(&st, 2);
//	Push(&st, 3);
//	while (Empty(&st)==0)
//	{
//		printf("%d", Top(&st));
//		Pop(&st);
//	}
//	printf("\n");
//
//
//	Defree(&st);
//	return 0;
//}








//int mian()
//{
//	SlistNode*p1 = NULL;
//	SlistNode*p2 = NULL;
//	SlistNode*ret = detect(p1, p2);
//	return 0;
//}
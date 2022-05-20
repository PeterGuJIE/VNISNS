#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void test()
{
	Dlist*ps = Init();
	PushBack(ps, 1);
	PushBack(ps, 2);
	PushBack(ps, 4);
	PushBack(ps, 3);
	PushFront(ps,6);
	PopFront(ps);
	PopBack(ps);
	Print(ps);
	Dlist*pos = Find(ps, 2);
	if (pos != NULL)
	{
		pos->data *= 10;
		printf("ур╣╫ак\n");
	}
	else
	{
		printf("н╢ур╣╫\n");
	}
	Print(ps);
	Insert(pos, 300);
	Print(ps);
	Erase(pos);
	Print(ps);
	Destory(ps);
}
int main()
{
	test();
	return 0;
}
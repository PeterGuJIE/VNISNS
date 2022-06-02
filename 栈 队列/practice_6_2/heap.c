#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"

//void Init(Queue*ps)
//{
//	assert(ps);
//	ps->prev = ps->tail = NULL;
//}
//void Push(Queue*ps, type x)
//{
//	assert(ps);
//	Head*new = (Head*)malloc(sizeof(Head));
//	if (new == NULL)
//		exit(-1);
//	else
//	{
//		new->next = NULL;
//		new->a = x;
//	}
//	if (ps->tail == NULL)
//	{
//		ps->prev = ps->tail = new;
//	}
//	else
//	{
//		ps->tail->next = new;
//		ps->tail = new;
//	}
//}
//void Pop(Queue*ps)
//{
//	assert(ps);
//	assert(ps->prev);
//	Head*new = ps->prev->next;
//	free(ps->prev);
//	ps->prev = new;
//}
//
//
//type Front(Queue*ps)
//{
//	assert(ps);
//	assert(ps->prev);
//	return ps->prev->a;
//}
//type Back(Queue*ps)
//{
//	assert(ps);
//	assert(ps->tail);
//	return ps->tail->a;
//}
//int Size(Queue*ps)
//{
//	assert(ps);
//	int size = 0;
//	Head*cur = ps->prev;
//	while (cur!=NULL)
//	{
//		cur = cur->next;
//		size++;
//	}
//	return size;
//}
//bool Empty(Queue*ps)
//{
//	assert(ps);
//	return ps->prev == NULL;
//}
//
//void Defree(Queue*ps)
//{
//	assert(ps);
//	Head*cur = ps->prev;
//	while (cur != NULL)
//	{
//		Head*next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	ps->prev = ps->tail = NULL;
//}
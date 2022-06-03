//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"Queue.h"
//void Init(Queue*ps)
//{
//	assert(ps);
//	ps->prev = ps->tail = NULL;
//}
//void Push(Queue*ps, type x)
//{
//	assert(ps);
//	Slist*new = (Slist*)malloc(sizeof(Slist));
//	if (new == NULL)
//		exit(-1);
//	
//	new->data = x;
//	new->next = NULL;
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
//
//type Front(Queue*ps)
//{
//	assert(ps);
//	assert(ps->prev);
//	return ps->prev->data;
//}
//void Pop(Queue*ps)
//{
//	assert(ps);
//	assert(ps->prev);
//	Slist*new = ps->prev->next;
//	free(ps->prev);
//	ps->prev = new;
//}
//
//bool Empty(Queue*ps)
//{
//	assert(ps);
//	return ps->prev == NULL;
//}
//
//void Defree(Queue*ps)
//{
//	assert(ps);
//	Slist*cur = ps->prev;
//	while (cur != NULL)
//	{
//		Slist*new = cur->next;
//		free(cur);
//		cur = new;
//	}
//	ps->prev = ps->tail = NULL;
//}
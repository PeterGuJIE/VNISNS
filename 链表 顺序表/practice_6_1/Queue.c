//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Queue.h"
//Queue* Capacity(type x)//¸øÊýÖµ
//{
//	Queue*new = (Queue*)malloc(sizeof(Queue));
//	new->data = x;
//	new->next = NULL;
//	return new;
//}
//
//
//void PushBack(Queue**pps, type x)
//{
//	Queue*new = Capacity(x);
//	
//	Queue*back = *pps;
//	if (*pps == NULL)
//	{
//		*pps = new;
//	}
//	else
//	{
//		while (back->next != NULL)
//		{
//			back = back->next;
//		}
//		back->next = new;
//	}
//}
//void PushFront(Queue**pps, type x)
//{
//	Queue*new = Capacity(x);
//	new->next = *pps;
//	*pps = new;
//}
//
//
//void PopBack(Queue**pps)
//{
//	if (*pps == NULL)
//	{
//		return;
//	}
//	else if ((*pps)->next == NULL)
//	{
//		free(*pps);
//		*pps = NULL;
//	}
//	else
//	{
//		Queue*front = NULL;
//		Queue*next = *pps;
//		while (next->next != NULL)
//		{
//			front = next;
//			next = next->next;
//		}
//		free(next);
//		next->next = NULL;
//	}
//}
//void PopFront(Queue**pps)
//{
//	Queue*next = (*pps)->next;
//	free(*pps);
//	*pps = next;
//}
//
//
//Queue*Find(Queue*ps, type x)
//{
//	assert(ps);
//	Queue*cur = ps;
//	while (cur != NULL)
//	{
//		if (cur->data == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
//void Insert(Queue**pps, Queue*pos, type x)
//{
//	assert(pps);
//	if (pos == *pps)
//	{
//		PushFront(pps, x);
//	}
//	else
//	{
//		Queue*new = Capacity(x);
//		Queue*front = *pps;
//		while (front->next != pos)
//		{
//			front = front->next;
//		}
//		front->next = new;
//		new->next = pos;
//	}
//}
//void Delet(Queue**pps, Queue*pos)
//{
//	assert(pps);
//	if (pos == *pps)
//	{
//		PopFront(pps);
//	}
//	else
//	{
//		Queue*front = *pps;
//		while (front->next != pos)
//		{
//			front = front->next;
//		}
//		front->next = pos->next;
//		free(pos);
//	}
//}
//
//void Defree(Queue**pps)
//{
//	while (*pps != NULL)
//	{
//		Queue*cur = *pps;
//		*pps = cur->next;
//		free(cur);
//	}
//}
//void Print(Queue*ps)
//{
//	Queue*cur = ps;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
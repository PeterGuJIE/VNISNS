#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
Dlist*BuyDist(Type x)
{
	Dlist*new = (Dlist*)malloc(sizeof(Dlist));
	new->data = x;
	new->next = NULL;
	new->prev = NULL;
	return new;
}
Dlist* Init()
{
	Dlist*ps = BuyDist(0);
	ps->next = ps;
	ps->prev = ps;
	return ps;
}
void PushBack(Dlist*ps, Type x)
{
	assert(ps);
	Dlist*back = ps->prev;
	Dlist*new = BuyDist(x);
	back->next = new;
	new->prev = back;
	new->next = ps;
	ps->prev = new;
}
void PushFront(Dlist*ps, Type x)
{
	assert(ps);
	Dlist*front = ps->next;
	Dlist*new = BuyDist(x);
	ps->next = new;
	new->prev = ps;
	new->next = front;
	front->prev = new;
}
void PopBack(Dlist*ps)
{
	assert(ps);
	assert(ps->next != ps);
	Dlist*back = ps->prev;
	Dlist*prev = back->prev;
	prev->next = ps;
	ps->prev = prev;
	free(back);
	back = NULL;
}
void PopFront(Dlist*ps)
{
	assert(ps);
	assert(ps->next != ps);
	Dlist*first = ps->next;
	Dlist*second = first->next;
	ps->next = second;
	second->prev = ps;
	free(first);
	first = NULL;
}
void Print(Dlist*ps)
{
	assert(ps);
	Dlist*cur = ps->next;
	while (cur != ps)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

Dlist*Find(Dlist*ps, Type x)
{
	assert(ps);
	Dlist*cur = ps->next;
	while (cur != ps)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void Insert(Dlist* pos, Type x)
{
	assert(pos);
	Dlist*prev = pos->prev;
	Dlist*new = BuyDist(x);
	prev->next = new;
	new->prev = prev;
	new->next = pos;
	pos->prev = new;
}
void Erase(Dlist* pos)
{
	assert(pos);
	Dlist*prev = pos->prev;
	Dlist*next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;
}
void Destory(Dlist*ps)
{
	assert(ps);
	Dlist*cur = ps->next;
	while (cur != ps)
	{
		Dlist*next = cur->next;
		free(cur);
		cur = cur->next;
	}
	free(ps);
	ps = NULL;
}
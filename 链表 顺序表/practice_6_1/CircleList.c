#define _CRT_SECURE_NO_WARNINGS 1
#include"CircleList.h"
Clist*Capacity(type x)
{
	Clist*ps = (Clist*)malloc(sizeof(Clist));
	ps->next = ps->prev = NULL;
	ps->data = x;
	return ps;
}

Clist*Init()//Í·½Úµã
{
	Clist*ps = Capacity(0);
	ps->next = ps;
	ps->prev = ps;
	return ps;
}
void PushBack(Clist*ps, type x)
{
	assert(ps);
	Clist*new = Capacity(x);
	Clist*back = ps->prev;
	back->next = new;
	new->prev = back;
	new->next = ps;
	ps->prev = new;
}
void PushFront(Clist*ps, type x)
{
	assert(ps);
	Clist*new = Capacity(x);
	Clist*front = ps->next;
	ps->next = new;
	new->prev = ps;
	new->next = front;
	front->prev = new;
}

void PopBack(Clist*ps)
{
	assert(ps);
	assert(ps->next != ps);
	Clist*back = ps->prev;
	Clist*front = back->prev;
	front->next = ps;
	ps->prev = front;
	free(back);
	back = NULL;
}
void PopFront(Clist*ps)
{
	assert(ps);
	assert(ps->next != ps);
	Clist*front = ps->next;
	Clist*back = front->next;
	ps->next = back;
	back->prev = ps;
	free(front);
	front = NULL;
}

Clist*Find(Clist*ps, type x)
{
	Clist*cur = ps->next;
	while (cur->next != ps)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void Insert(Clist*ps, Clist*pos, type x)
{
	assert(ps);
	Clist*prev = pos->prev;
	Clist*new = Capacity(x);
	prev->next = new;
	new->prev = prev;
	new->next = pos;
	pos->prev = new;
}
void Delet(Clist*ps, Clist*pos)
{
	assert(ps);
	Clist*prev = pos->prev;
	Clist*next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;
}

void Print(Clist*ps)
{
	Clist*cur = ps->next;
	while (cur->next != ps)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void Defree(Clist*ps)
{
	assert(ps);
	Clist*cur = ps->next;
	while (cur != ps)
	{
		Clist*next = cur->next;
		free(cur);
		cur = next;
	}
	free(ps);
	ps = NULL;
}
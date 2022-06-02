#define _CRT_SECURE_NO_WARNINGS 1
#include"practice.h"
void Init(Queue*ps)//2个队列转成栈
{
	assert(ps);
	ps->head = ps->tail = NULL;
}
void Push(Queue*ps, type x)
{
	assert(ps);
	Head*new = malloc(sizeof(Head));
	if (new == NULL)
		exit(-1);
	new->a = x;
	new->next = NULL;
	if (ps->tail = NULL)
	{
		ps->head = ps->tail = NULL;
	}
	else
	{
		ps->tail->next = new;
		ps->tail = new;
	}
}
bool Empty(Queue*ps)
{
	assert(ps);
	return ps->head == NULL;
}

type Front(Queue*ps)
{ 
	assert(ps);
	assert(ps->head);
	return ps->head->a;
}
void Pop(Queue*ps)
{
	assert(ps);
	Head*cur = ps->head;
	while (cur != NULL)
	{
		Head*next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}


type Back(Queue*ps)
{
	assert(ps);
	assert(ps->tail);
	return ps->tail->a;
}

int Size(Queue*ps)
{
	assert(ps);
	int size = 0;
	Head*cur = ps->head;
	while (cur != NULL)
	{
		cur = cur->next;
		size++;
	}
	return size;
}


void Defree(Queue*ps)
{
	assert(ps);
	Head*cur = ps->head;
	while (cur != NULL)
	{
		Head*new = cur->next;
		free(cur);
		cur = new;
	}
	ps->head = ps->tail = NULL;
}








MyStack*mystact()
{
	MyStack*new = (MyStack*)malloc(sizeof(MyStack));
	if (new == NULL)
		exit(-1);
	Init(&new->q1);
	Init(&new->q2);
	return new;
}


void MyPush(MyStack*ps, type x)
{
	if (!Empty(&ps->q1))
	{
		Push(&ps->q1, x);
	}
	else
	{
		Push(&ps->q2, x);
	}
}

int MyPop(MyStack*ps)
{
	Queue*empty = &ps->q1;
	Queue*noempty = &ps->q2;
	if (!Empty(&ps->q1))
	{
		empty = &ps->q2;
		noempty = &ps->q1;
	}
	while (Size(noempty)>1)
	{
		Push(empty, Front(noempty));
		Pop(noempty);
	}
	int top = Front(noempty);
	Pop(noempty);
	return top;
}

int MyTop(MyStack*ps)
{
	if (!Empty(&ps->q1))
	{
		return Back(&ps->q1);
	}
	else
	{
		return Back(&ps->q2);
	}
}

bool MyEmpty(MyStack*ps)
{
	return Empty(&ps->q1) && Empty(&ps->q2);
}

void MyDefree(MyStack*ps)
{
	Defree(&ps->q1);
	Defree(&ps->q2);
	free(ps);
}
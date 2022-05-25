#define _CRT_SECURE_NO_WARNINGS 1
#include"tree.h"
void Init(Queue*ps)
{
	assert(ps);
	ps->head = ps->tail = NULL;
}

void Defree(Queue*ps)
{
	assert(ps);
	Node*cur = ps->head;
	while (cur != NULL)
	{
		Node*next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
void Push(Queue*ps, Ttpe x)
{
	assert(ps);
	Node*new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		printf("malloc false\n");
		exit(-1);
	}
	new->next = NULL;
	new->data = x;
	if (ps->tail == NULL)
	{
		ps->head = ps->tail = new;
	}
	else
	{
		ps->tail->next = new;
		ps->tail = new;
	}
}
void Pop(Queue*ps)
{
	assert(ps);
	assert(ps->head != NULL);
	Node*next = ps->head->next;
	free(ps->head);
	ps->head = next;
}

Ttpe Front(Queue*ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->data;
}
Ttpe Back(Queue*ps)
{
	assert(ps);
	assert(ps->head);
	return ps->tail->data;
}

int Size(Queue*ps)
{
	assert(ps);
	int size = 0;
	Node*cur = ps->head;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
bool Empty(Queue*ps)
{
	assert(ps);
	return ps->head == NULL;
}
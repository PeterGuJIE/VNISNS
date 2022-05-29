#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void Init(Node*ps)
{
	ps->a = malloc(sizeof(Type)* 4);
	if (ps->a == NULL)
	{
		exit(-1);
	}
	ps->max_size = 4;
	ps->top = 0;
}
void Defree(Node*ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->max_size = ps->top = 0;
}
void Push(Node*ps, Type x)
{
	assert(ps);
	if (ps->top == ps->max_size)
	{
		Type*tmp = realloc(ps->a, ps->max_size * 2 * sizeof(Type));
		if (tmp == NULL)
		{
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->max_size *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}
void Pop(Node*ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
Type Top(Node*ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
int Size(Node*ps)
{
	assert(ps);
	return ps->top;
}
bool Empty(Node*ps)
{
	assert(ps);
	return ps->top == 0;
}

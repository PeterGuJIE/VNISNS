#define _CRT_SECURE_NO_WARNINGS 1
#include"LNode.h"
void Init(LNode*ps)
{
	ps->a = malloc(sizeof(Maze)* 4);
	if (ps->a == NULL)
	{
		exit(-1);
	}
	ps->max_size = 4;
	ps->size = 0;
}
void Defree(LNode*ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->max_size = ps->size = 0;
}
void Push(LNode*ps, Maze x)
{
	assert(ps);
	if (ps->size == ps->max_size)
	{
		Maze*tmp = realloc(ps->a, ps->max_size * 2 * sizeof(Maze));
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
	ps->a[ps->size] = x;
	ps->size++;
}
void Pop(LNode*ps)
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--;
}
Maze Top(LNode*ps)
{
	assert(ps);
	assert(ps->size > 0);
	return ps->a[ps->size - 1];
}
int Size(LNode*ps)
{
	assert(ps);
	return ps->size;
}
bool Empty(LNode*ps)
{
	assert(ps);
	return ps->size == 0;
}
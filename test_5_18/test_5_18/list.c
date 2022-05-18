#define _CRT_SECURE_NO_WARNINGS 1
#include"lish.h"
void lnit(list *ps)
{
	//memset(ps->a, 0, sizeof(list)*N);
	//ps->size = 0;

	ps->size = 0;
	ps->max_szie = 0;
	ps->a = NULL;
}
void checksize(list*ps)
{
	if (ps->size == ps->max_szie)
	{
		int new_max_size = ps->max_szie == 0 ? 4 : ps->max_szie * 2;
		ssstype* tmp = (ssstype*)realloc(ps->a, ps->max_szie * 2 * sizeof(ssstype));
		if (tmp == NULL)
		{
			printf("%s\n", strerror(errno));
			exit(-1);
		}
		ps->a = tmp;
		ps->max_szie = new_max_size;
	}
}
void pushback(list*ps, ssstype x)
{
	checksize(ps);
	ps->a[ps->size] = x;
	ps->size++;

	//if (ps->size >= N)
	//{
	//	printf("%s\n", strerror(errno));
	//}

	//ps->a[ps->size] = x;
	//ps->size++;
}
void pushfront(list*ps, ssstype x)
{
	checksize(ps);
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void popback(list *ps)
{
	assert(ps->size > 0);

	ps->size--;
	ps->a[ps->size - 1] = 0;
}
void popfront(list *ps)
{
	assert(ps->size > 0);
	int start = 1;
	while (start<ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}

void print(list *ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void insert(list*ps, int pos, ssstype x)
{
	assert(pos < ps->size);
	checksize(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void erase(list*ps, int pos)
{
	assert(pos < ps->size);
	int start = pos + 1;
	while (pos<ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}
void destory(list*ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->size = 0;
}
int eqwe(list *ps, ssstype x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void modify(list*ps, int pos, ssstype x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
typedef struct maze
{
	int row;
	int col;
}Maze;

typedef struct ListNode
{
	Maze*a;
	int size;
	int max_size;
}LNode;




void Init(LNode*ps);
void Push(LNode*ps, Maze x);
void Defree(LNode*ps);
bool Empty(LNode*ps);
Maze Top(LNode*ps);
void Pop(LNode*ps);
int Size(LNode*ps);
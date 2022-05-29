#define _CRT_SECURE_NO_WARNINGS 1//ջ
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
typedef int Type;

typedef struct Node
{
	Type*a;
	int top;
	int max_size;
}Node;

void Init(Node*ps);
void Defree(Node*ps);
void Push(Node*ps, Type x);
void Pop(Node*ps);
Type Top(Node*ps);
int Size(Node*ps);
bool Empty(Node*ps);
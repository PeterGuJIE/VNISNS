#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

#pragma once
typedef char type;
typedef struct Head
{
	struct Head*next;
	type a;
}Head;
typedef struct Queue
{
	Head*head;
	Head*tail;
}Queue;

typedef struct MyStack
{
	Queue q1;
	Queue q2;
}MyStack;

void Init(Queue*ps);
void Push(Queue*ps, type x);
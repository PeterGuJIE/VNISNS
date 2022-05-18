#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#include<assert.h>
#pragma once
#define N 100
typedef int ssstype;

typedef struct list
{
	ssstype *a;
	int size;
	int max_szie;
}list;
void lnit(list *ps);
void destory(list*ps);//释放
// 尾插 头插  尾删 头删
void pushback(list*ps, ssstype x);
void pushfront(list*ps, ssstype x);
void popback(list *ps);
void popfront(list *ps);
void insert(list*ps, int pos, ssstype x);//任意位置插入
void erase(list*ps, int pos);//任意位置删除
void print(list *ps);
//void eqwe(list *ps, ssstype x);//查找
void modify(list*ps, int pos, ssstype x);//修改




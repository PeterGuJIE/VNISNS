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
void destory(list*ps);//�ͷ�
// β�� ͷ��  βɾ ͷɾ
void pushback(list*ps, ssstype x);
void pushfront(list*ps, ssstype x);
void popback(list *ps);
void popfront(list *ps);
void insert(list*ps, int pos, ssstype x);//����λ�ò���
void erase(list*ps, int pos);//����λ��ɾ��
void print(list *ps);
//void eqwe(list *ps, ssstype x);//����
void modify(list*ps, int pos, ssstype x);//�޸�




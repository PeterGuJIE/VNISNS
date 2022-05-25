#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

HFtree*init(int*weight,int length)
{
	HFtree*new = (HFtree*)malloc(sizeof(HFtree));
	new->data = (TNode*)malloc(sizeof(TNode)*(2* length- 1));
	new->length = length;
	for (int i = 0; i < length; i++)
	{
		new->data[i].weight = weight[i];
		new->data[i].parent = 0;
		new->data[i].lchild = -1;
		new->data[i].rchild = -1;
	}
	return new;
}



int* selectMin(HFtree*root)
{
	int min = 10000;
	int second = 10000;
	int minIndex;
	int secondIndex;
	for (int i = 0; i < root->length; i++)
	{
		if (root->data[i].parent == 0)
		{
			if (root->data[i].weight < min)
			{
				min = root->data[i].weight;
				minIndex = i;
			}
		}
	}
	for (int i = 0; i < root->length; i++)
	{
		if (root->data[i].parent == 0 && i != minIndex)
		{
			if (root->data[i].weight < second)
			{
				second = root->data[i].weight;
				secondIndex = i;
			}
		}
	}
	int *ret = (int*)malloc(sizeof(int)* 2);
	ret[0] = minIndex;
	ret[1] = secondIndex;
	return ret;
}

void creatTree(HFtree*root)
{
	int *ret;
	int min;
	int second;
	int length = root->length * 2 - 1;
	for (int i = root->length; i < length; i++)
	{
		ret = selectMin(root);
		min = ret[0];
		second = ret[1];
		root->data[i].weight = root->data[min].weight + root->data[second].weight;
		root->data[i].lchild = min;
		root->data[i].rchild = second;
		root->data[i].parent = 0;
		root->data[min].parent = i;
		root->data[second].parent = i;
		root->length++;
	}
}

void pre(HFtree*root, int index)
{
	if (index != -1)
	{
		printf("%d ", root->data[index].weight);
		pre(root,root->data[index].lchild);
		pre(root, root->data[index].rchild);
	}
}
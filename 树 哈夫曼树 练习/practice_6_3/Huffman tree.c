#define _CRT_SECURE_NO_WARNINGS 1
#include"Huffman tree.h"
HFtree*Init(int*arr, int length)
{
	HFtree*new = (HFtree*)malloc(sizeof(HFtree));
	new->data = (TNode*)malloc(sizeof(TNode)*(2 * length - 1));
	new->length = length;
	for (int i = 0; i < length; i++)
	{
		new->data[i].arr = arr[i];
		new->data[i].parent = 0;
		new->data[i].lchild = -1;
		new->data[i].rchild = -1;
	}
	return new;
}
int*Selectmin(HFtree*root)
{
	int prev = 100000;
	int tail = 100000;
	int index1, index2;
	for (int i = 0; i < root->length; i++)
	{
		if (root->data[i].parent == 0)
		{
			if (root->data[i].arr < prev)
			{
				prev = root->data[i].arr;
				index1 = i;
			}
		}
	}
	for (int i = 0; i < root->length; i++)
	{
		if (root->data[i].parent == 0 && i != index1)
		{
			if (root->data[i].arr < tail)
			{
				tail = root->data[i].arr;
				index2 = i;
			}
		}
	}
	tpye*ret = (tpye*)malloc(sizeof(tpye)* 2);
	ret[0] = index1;
	ret[1] = index2;
	return ret;
}
void Creat(HFtree*root)
{
	int*ret;
	int prev, tail;
	int length = root->length * 2 - 1;
	for (int i = root->length; i < length; i++)
	{
		ret = Selectmin(root);
		prev = ret[0];
		tail = ret[1];
		root->data[i].arr = root->data[prev].arr + root->data[tail].arr;
		root->data[i].lchild = prev;
		root->data[i].rchild = tail;
		root->data[i].parent = 0;
		root->data[prev].parent = i;
		root->data[tail].parent = i;
		root->length++;
	}
}
void Prev(HFtree*root, int length)
{
	if (length >=0)
	{
		printf("%d ", root->data[length].arr);
		Prev(root, root->data[length].lchild);
		Prev(root, root->data[length].rchild);
	}
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"Huffman tree.h"

int main()//¹ş·òÂüÊ÷
{
	int arr[4] = { 1, 2, 3, 4 };
	HFtree*new = Init(arr,4);
	int*ret = Selectmin(new);
	Creat(new);
	Prev(new,new->length-1);
	return 0;
}
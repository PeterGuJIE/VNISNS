#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

int main()
{
	int weight[4] = { 1, 2, 3, 4 };
	HFtree*new = init(weight, 4);
	int *ret = selectMin(new);
	creatTree(new);
	pre(new, new->length - 1);
	printf("\n");
	return 0;
}











//void Defree(TNode*root)
//{
//	if (root == NULL)
//		return;
//	Defree(root->left);
//	Defree(root->right);
//	free(root);
//	root == NULL;
//}

//
//
//typedef struct TreeNode
//{
//	struct TreeNode*left;
//	struct TreeNode*right;
//	char data;
//}TNode;
//
//TNode*creat(char*a,int*pi)
//{
//	if (a[*pi] == '#')
//	{
//		++(*pi);
//		return NULL;
//	}
//	TNode*tree = (TNode*)malloc(sizeof(TNode));
//	if (tree == NULL)
//	{
//		exit(-1);
//	}
//	tree->data = a[*pi];
//	++(*pi);
//	tree->left = creat(a, pi);
//	tree->right = creat(a, pi);
//	return tree;
//	
//}
//void Inoder(TNode*root)
//{
//	if (root == NULL)
//		return;
//	Inoder(root->left);
//	printf("%c ", root->data);
//	Inoder(root->right);
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	int i = 0;
//	TNode*root = creat(arr, &i);
//	Inoder(root);
//	return 0;
//}










//int Depth(TNode*root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int left = Depth(root->left);
//	int right = Depth(root->right);
//	return left > right ? left + 1 : right + 1;
//}
//bool isBalanced(TNode*root)
//{
//	if (root == NULL)
//		return true;
//
//	int leftD = Depth(root->left);
//	int rightD = Depth(root->right);
//	return abs(leftD - rightD) < 2 && isBalanced(root->left) && isBalanced(root->right);
//}
//
//int main()
//{
//	TNode root;
//	bool ret = isBalanced(&root);
//	return 0;
//}









//int Depth(TNode*root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int left = Depth(root->left);
//	int right = Depth(root->right);
//	return left > right ? left + 1 : right + 1;
//}
//int main()
//{
//	TNode  root;
//	int ret = Depth(&root);
//	return 0;
//}








//int TreeSize(struct TreeNode*root)
//{
//	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void _preorder(struct TreeNode*root, int *a, int *pi)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	a[*pi] = root->data;
//	++(*pi);
//	_preorder(root->left,a,pi);
//	_preorder(root->right,a,pi);
//
//}
//
//
//int *preorder(struct TreeNode*root, int *returnsize)
//{
//	int size = TreeSize(root);
//	int*a = (int*)malloc(size*sizeof(int));
//	int i = 0;
//	_preorder(root, a, &i);
//	*returnsize = size;
//	return a;
//}
//
//
//
//int main()
//{
//	struct TreeNode node1;
//	struct TreeNode node2;
//	struct TreeNode node3;
//	node1.data = 1;
//	node1.left = &node2;
//	node1.right = &node3;
//
//	node2.data = 2;
//	node2.left = NULL;
//	node2.right = NULL;
//
//	node3.data = 3;
//	node3.left = NULL;
//	node3.right = NULL;
//	int size = 0;
//
//	int* ret = preorder(&node1, &size);
//	return 0;
//}
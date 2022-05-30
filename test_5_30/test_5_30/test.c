#define _CRT_SECURE_NO_WARNINGS 1

#include"list.h"

//typedef struct Postion
//{
//	int row;
//	int col;
//}PT;

//void Print(int**maze, int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", maze[i][j]);
//		}
//		printf("\n");
//	}
//}
Node minpath;
Node path;
bool IsPass(int**maze, int n, int m, struct Postion pos)//�Թ�����
{
	if (pos.row >= 0 && pos.row < n&&pos.col >= 0 && pos.col < m&&maze[pos.row][pos.col] == 1)
	{
		return true;
	}
	return false;
}

void Copy(Node*ppath, Node*pcopy)
{
	pcopy->a = (Type*)malloc(sizeof(Type)*ppath->max_size);
	memcpy(pcopy->a, ppath->a, sizeof(Type)*ppath->top);
	pcopy->top = ppath->top;
	pcopy->max_size = ppath->max_size;
}

void GetMaze(int**maze, int n, int m, struct Postion cur,int p)
{
	Push(&path, cur);
	//������
	if (cur.row == 0 && cur.col == m - 1)
	{
		//�ҵ��˸��̵�·��������minpath
		if (p>=0&&Empty(&minpath) || Size(&path) < Size(&minpath))
		{
			//path = minpath;
			Defree(&minpath);
			Copy(&path, &minpath);
		}
	}


	//̽���ĸ�����
	struct Postion next;
	maze[cur.row][cur.col] = 2;

	//��
	next = cur;
	next.row -= 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p - 3);
	}
	//��
	next = cur;
	next.row += 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p);
	}
	//��
	next = cur;
	next.col -= 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p - 1);
	}
	//��
	next = cur;
	next.col += 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p - 1);
	}
	//�ָ�
	maze[cur.row][cur.col] = 1;
	Pop(&path);
}


void Printpath(Node*ps)
{
	Node rPath;
	Init(&rPath);
	while (!Empty(ps))
	{
		Push(&rPath, Top(ps));
		Pop(ps);
	}
	while (!Size(&rPath)>1)
	{
		struct Postion top = Top(&rPath);
		printf("[%d,%d],", top.row, top.col);
		Pop(&rPath);
	}
	struct Postion top = Top(&rPath);
	printf("[%d,%d]", top.row, top.col);
	Pop(&rPath);
	Defree(&rPath);
}



int main()
{
	int n, m,p;
	while (scanf("%d%d", &n, &m,&p) != EOF)
	{
		//��̬���ٶ�ά����
		int**maze = (int**)malloc(sizeof(int*)*n);
		for (int i = 0; i < n; i++)
		{
			maze[i] = (int*)malloc(sizeof(int)*m);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				scanf("%d", &maze[i][j]);
			}
		}
		Init(&path);
		Init(&minpath);

		//Print(maze, n, m);
		struct Postion entey = { 0, 0 };
		GetMaze(maze, n, m, entey, p);

		if (!Empty(&minpath))
		{
			Printpath(&minpath);
		}
		else
		{
			printf("Can not escape!");
		}
		Defree(&path);
		Defree(&minpath);
		for (int i = 0; i < n; i++)
		{
			free(maze[i]);
		}
		free(maze);
		maze = NULL;
	}
	return 0;
}






//bool IsPass(int**maze, int n, int m, struct Postion pos)//�Թ��е�
//{
//	if (pos.row >= 0 && pos.row < n&&pos.col >= 0 && pos.col < m&&maze[pos.row][pos.col]==0)
//	{
//		return true;
//	}
//	return false;
//}
//
//Node path;
//bool GetMaze(int**maze, int n, int m, struct Postion cur)
//{
//	Push(&path, cur);
//	//������
//	if (cur.row == n - 1 && cur.col == m - 1)
//		return true;
//
//
//	//̽���ĸ�����
//	struct Postion next;
//	maze[cur.row][cur.col] = 2;
//
//	//��
//	next = cur;
//	next.row -= 1;
//	if (IsPass(maze,n,m,next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//��
//	next = cur;
//	next.row += 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//��
//	next = cur;
//	next.col -= 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//��
//	next = cur;
//	next.col += 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	Pop(&path);
//	return false;
//}
//
//
//void Printend(Node*ps)
//{
//	Node rPath;
//	Init(&rPath);
//	while (!Empty(&path))
//	{
//		Push(&rPath, Top(&path));
//		Pop(&path);
//	}
//	while (!Empty(&rPath))
//	{
//		struct Postion top = Top(&rPath);
//		printf("(%d,%d)\n", top.row, top.col);
//		Pop(&rPath);
//	}
//
//	Defree(&rPath);
//}
//
//
//
//int main()
//{
//	int n, m;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		//��̬���ٶ�ά����
//		int**maze = (int**)malloc(sizeof(int*)*n);
//		for (int i = 0; i < n; i++)
//		{
//			maze[i] = (int*)malloc(sizeof(int)*m);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &maze[i][j]);
//			}
//		}
//		Init(&path);
//		//Print(maze, n, m);
//		struct Postion entey = { 0, 0 };
//		if (GetMaze(maze, n, m, entey))
//		{
//			//printf("�ҵ�ͨ·\n");
//			Printend(&path);
//		}
//		else
//		{
//			printf("û���ҵ�ͨ·\n");
//		}
//		Defree(&path);
//		for (int i = 0; i < n; i++)
//		{
//			free(maze[i]);
//		}
//		free(maze);
//		maze = NULL;
//	}
//	return 0;
//}
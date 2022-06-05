#define _CRT_SECURE_NO_WARNINGS 1
#include"LNode.h"






struct ListNode ps;//迷宫找到最短路径
struct ListNode minps;
bool IsPass(int**maze, int n, int m,  Maze cur)
{
	if (cur.row >= 0 && cur.row < n&&cur.col >= 0 && cur.col < m&&maze[cur.row][cur.col] == 1)
		return true;
	return false;
}
void Copy(LNode* ppath, LNode* pcopy)
{
	pcopy->a = (Maze*)malloc(sizeof(Maze)*ppath->max_size);
	memcpy(pcopy->a, ppath->a, sizeof(Maze)*ppath->size);
	pcopy->size = ppath->size;
	pcopy->max_size = ppath->max_size;
}
void GetMaze(int**maze, int n, int m, Maze cur, int p)
{
	Push(&ps, cur);
	if (cur.row == 0 && cur.col == m - 1)
	{
		if (p >= 0 && Empty(&minps) || Size(&ps) < Size(&minps))
		{
			Defree(&minps);
			Copy(&ps, &minps);
		}
	}
	struct maze next;
	maze[cur.row][cur.col] = 2;

	next = cur;
	next.row -= 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p - 3);
	}

	next = cur;
	next.row += 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p);
	}

	next = cur;
	next.col -= 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p - 1);
	}

	next = cur;
	next.col += 1;
	if (IsPass(maze, n, m, next))
	{
		GetMaze(maze, n, m, next, p - 1);
	}
	maze[cur.row][cur.col] = 1;
	Pop(&ps);
}
void Print(LNode* path)
{
	// ps数据倒到rPath
	LNode rPs;
	Init(&rPs);
	while (!Empty(&minps))
	{
		Push(&rPs, Top(&minps));
		Pop(&minps);
	}
	while (Size(&rPs) > 1)
	{
		Maze top = Top(&rPs);
		printf("[%d,%d],", top.row, top.col);
		Pop(&rPs);
	}
	Maze top = Top(&rPs);
	printf("[%d,%d]", top.row, top.col);
	Pop(&rPs);
	Defree(&rPs);
}
int main()
{
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	int **maze = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i< n; i++)
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
	Init(&ps);
	Init(&minps);
	struct maze empty = { 0, 0 };
	GetMaze(maze, n, m, empty, p);
	if (!Empty(&minps))
	{
		Print(&minps);
	}
	else
	{
		printf("Can not escape!");
	}
	Defree(&ps);
	Defree(&minps);
	for (int i = 0; i < n; i++)
	{
		free(maze[i]);
	}
	free(maze);
	maze = NULL;
	return 0;
}








//struct ListNode ps;//迷宫中等
//bool IsPass(int**maze, int n, int m, struct maze next)
//{
//	if (next.row >= 0 && next.row < n&&next.col >= 0 && next.col < m&&maze[next.row][next.col] == 0)
//		return true;
//	return false;
//}
//bool GetMaze(int**maze, int n, int m, struct maze cur)
//{
//	Push(&ps, cur);
//	//检测出口
//	if (cur.row == n - 1 && cur.col == m - 1)
//		return true;
//
//	//探测四个方向
//	struct maze next;
//	maze[cur.row][cur.col] = 2;
//
//	next = cur;
//	next.row -= 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;	
//	}
//
//	next = cur;
//	next.row += 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//
//	next = cur;
//	next.col -= 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//
//
//	next = cur;
//	next.col += 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	Pop(&ps);
//	return false;
//}
//void Print(LNode* path)
//{
//	// ps数据倒到rPath
//	LNode rPs;
//	Init(&rPs);
//	while (!Empty(&ps))
//	{
//		Push(&rPs, Top(&ps));
//		Pop(&ps);
//	}
//
//	while (!Empty(&rPs))
//	{
//		Maze top = Top(&rPs);
//		printf("(%d,%d)\n", top.row, top.col);
//		Pop(&rPs);
//	}
//	Defree(&rPs);
//}
//int main()
//{
//	int n, m;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
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
//		Init(&ps);
//		struct maze empty = { 0, 0 };
//		if (GetMaze(maze, n, m, empty))
//		{
//
//			Print(&ps);
//		}
//		else
//		{
//			printf("没有找到\n");
//		}
//		Defree(&ps);
//		for (int i = 0; i < n; i++)
//		{
//			free(maze[i]);
//		}
//		free(maze);
//		maze = NULL;
//	}
//	return 0;
//}
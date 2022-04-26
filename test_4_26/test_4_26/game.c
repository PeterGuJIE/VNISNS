#define _CRT_SECURE_NO_WARNINGS 1
//#include"game.h"
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ",i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;
//	while (count)
//	{
//		int i = rand() % row + 1;
//		int j = rand() % col + 1;
//		if (board[i][j] == '0')
//		{
//			board[i][j] = '1';
//			count--;
//		}
//	}
//}
//int get_mine_count(char mine[ROWS][COLS], int i, int j)
//{
//	return mine[i - 1][j] +
//		mine[i - i][j - 1] +
//		mine[i][j - 1] +
//		mine[i + 1][j - 1] +
//		mine[i + 1][j] +
//		mine[i + 1][j + 1] +
//		mine[i][j + 1] +
//		mine[i - 1][j + 1] - 8 * '0';
//}
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int win = 0;
//	while (win<row*col-EASY_COUNT)
//	{
//		printf("ÇëÊäÈëÅÅ²éÀ×µÄ×ø±ê:>");
//		scanf("%d%d", &i, &j);
//		if (i >= 1 && i <= row&&j >= 1 && j <= col)
//		{
//			if (mine[i][j] == '1')
//			{
//				printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÁË\n");
//				DisplayBoard(mine, row, col);
//				break;
//			}
//			else
//			{
//				int count=get_mine_count(mine, i, j);
//				show[i][j] = count + '0';
//				DisplayBoard(show, row, col);
//				win++;
//			}
//		}
//		else
//		{
//			printf("×ø±ê´íÎó£¬ÇëÖØÐÂÊäÈë!\n");
//		}
//	}
//	if (win == win < row*col - EASY_COUNT)
//	{
//		printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦\n");
//		DisplayBoard(mine, row, col);
//	}
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int a = 5;
	int b = a >> 1;
	int c = a << 1;
	printf("%d %d\n", b,c);
	return 0;
}

//void menu()
//{
//	printf("                            \n");
//	printf("      1.play    0.exit      \n");
//	printf("                            \n");
//}
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//	InitBoard(mine, ROWS, COLS,'0');
//	InitBoard(show, ROWS, COLS, '*');
//	/*DisplayBoard(mine, ROW, COL);*/
//	DisplayBoard(show, ROW, COL);
//	SetMine(mine, ROW, COL);
//	FindMine(mine, show, ROW, COL);
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//}
//int main()
//{
//	test();
//	return 0;
//}
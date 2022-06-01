//#define _CRT_SECURE_NO_WARNINGS 1
//#include"LNode.h"
//void menu()//顺序表
//{
//	printf("************************************************\n");
//	printf("         1.PushBack         2.PushFront         \n");
//	printf("         3.PopBack          4.PopFront          \n");
//	printf("         5.Insert           6.Delet             \n");
//	printf("         7.Modify           8.Print             \n");
//	printf("                   0.Exit                       \n");
//	printf("************************************************\n");
//}
//void test()
//{
//	int input = 0;
//	LNode ps;
//	Init(&ps);
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入你要插入的数据，以-1结束\n");
//			do
//			{
//				scanf("%d", &x);
//				if (x != -1)
//				{
//					PushBack(&ps, x);
//				}
//			} while (x!=-1);
//			break;
//		case 2:
//			printf("请输入你要插入的数据，以-1结束\n");
//			do
//			{
//				scanf("%d", &x);
//				if (x != -1)
//				{
//					PushFront(&ps, x);
//				}
//			} while (x != -1);
//			break;
//		case 3:
//			PopBack(&ps);
//			break;
//		case 4:
//			PopFront(&ps);
//			break;
//		case 5:
//			printf("请输入寻找的数据\n");
//			scanf("%d", &y);
//			if (Find(&ps, y))
//			{
//				printf("找到了，请输入要插入的数据\n");
//				scanf("%d", &x);
//				Insert(&ps, y, x);
//			}
//			else
//			{
//				printf("未找到\n");
//			}
//			break;
//		case 6:
//			printf("请输入删除的数据\n");
//			scanf("%d", &x);
//			if (Find(&ps, x))
//			{
//				Delet(&ps, x);
//				printf("删除成功\n");
//			}
//			else
//			{
//				printf("未找到\n");
//			}
//			break;
//		case 7:
//			printf("请输入寻找的数据\n");
//			scanf("%d", &y);
//			if (Find(&ps, y))
//			{
//				printf("找到了，请输入要修改的数据\n");
//				scanf("%d", &x);
//				Modify(&ps, y, x);
//			}
//			else
//			{
//				printf("未找到\n");
//			}
//			break;
//		case 8:
//			Print(&ps);
//			break;
//		case 0:
//			Defree(&ps);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
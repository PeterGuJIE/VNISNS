//#define _CRT_SECURE_NO_WARNINGS 1
//#include"LNode.h"
//void menu()//˳���
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������Ҫ��������ݣ���-1����\n");
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
//			printf("��������Ҫ��������ݣ���-1����\n");
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
//			printf("������Ѱ�ҵ�����\n");
//			scanf("%d", &y);
//			if (Find(&ps, y))
//			{
//				printf("�ҵ��ˣ�������Ҫ���������\n");
//				scanf("%d", &x);
//				Insert(&ps, y, x);
//			}
//			else
//			{
//				printf("δ�ҵ�\n");
//			}
//			break;
//		case 6:
//			printf("������ɾ��������\n");
//			scanf("%d", &x);
//			if (Find(&ps, x))
//			{
//				Delet(&ps, x);
//				printf("ɾ���ɹ�\n");
//			}
//			else
//			{
//				printf("δ�ҵ�\n");
//			}
//			break;
//		case 7:
//			printf("������Ѱ�ҵ�����\n");
//			scanf("%d", &y);
//			if (Find(&ps, y))
//			{
//				printf("�ҵ��ˣ�������Ҫ�޸ĵ�����\n");
//				scanf("%d", &x);
//				Modify(&ps, y, x);
//			}
//			else
//			{
//				printf("δ�ҵ�\n");
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
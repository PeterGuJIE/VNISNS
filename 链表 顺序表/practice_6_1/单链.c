//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Queue.h"
//void menu()//���ѭ������
//{
//	printf("************************************************\n");
//	printf("         1.PushBack         2.PushFront         \n");
//	printf("         3.PopBack          4.PopFront          \n");
//	printf("         5.Insert           6.Delet             \n");
//	printf("         7.Print            0.Exit              \n");
//	printf("************************************************\n");
//}
// void test()
//{
//	int input = 0;
//	Queue*ps = NULL;
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
//			} while (x != -1);
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
//			printf("������ҪѰ�ҵ�����\n");
//			scanf("%d", &x);
//			Queue*pos = Find(ps, x);
//			if (pos != NULL)
//			{
//				printf("�������֣�������Ҫ��������\n");
//				scanf("%d", &x);
//				Insert(&ps, pos, x);
//			}
//			else
//			{
//				printf("����������\n");
//			}
//			break;
//		case 6:
//			printf("������Ҫɾ��������\n");
//			scanf("%d", &x);
//			pos = Find(ps, x);
//			if (pos != NULL)
//			{
//				Delet(&ps, pos);
//			}
//			else
//			{
//				printf("����������\n");
//			}
//			break;
//		case 7:
//			Print(ps);
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
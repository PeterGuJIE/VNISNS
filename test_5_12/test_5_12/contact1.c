#define _CRT_SECURE_NO_WARNINGS 1
#include"contact1.h"
#include<stdlib.h>
void initcontact(struct contact* ps)
{
	ps->data = (struct peoinfo*)malloc(3 * sizeof(struct peoinfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = defaulf_sz;
}
void checkcapcity(struct contact*ps)//检测容量
{
	if (ps->size == ps->capacity)
	{
		struct peoinfo *ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");
	}
}
void addcontact(struct contact* ps)
{
	checkcapcity(ps);
	printf("请输入名字:");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
	/*if (ps->size == MAX)
	{
		printf("通讯录已满。无法增加\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}*/
}
void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
static int Findbyname(const struct contact*ps, char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入要删除人的名字:");
	scanf("%s", name);
	int ret = Findbyname(ps, name);//找到了返回下标，找不到返回-1
	if (ret == -1)//if (ret == ps->size)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j <ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void searchcontact(const struct contact* ps)
{
	char name[max_name];
	printf("请输入要查找人的名字:");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifyconst(struct contact* ps)
{
	char name[max_name];
	printf("请输入要修改人的名字:");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("要修改的名字不存在\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别:");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ret].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ret].addr);
		printf("修改完成\n");
	}
}
//int cmp_struct(const void*e1, const void*e2)
//{
//	return ((struct contact*)e1)->data->age - ((struct contact*)e2)->data->age;
//} 
void sortcontact(struct contact* ps)
{
	//int sz = sizeof(ps->data) / sizeof(ps->data[0]);
	//qsort(ps->data, sz, sizeof(ps->data[0]), cmp_struct);
	//printf("排序成功\n");
	if (ps->size == 0)
	{
		printf("通讯录没有联系人\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < ps->size - 1; i++)
		{
			for (j = 0; j < ps->size - 1 - i; j++)
			{
				if (strcmp(ps->data[j].name, ps->data[j + 1].name)>0)
				{
					struct peoinfo tmp;
					tmp = ps->data[j];
					ps->data[j] = ps->data[j + 1];
					ps->data[j + 1] = tmp;
				}
			}
		}
		printf("排序成功！\n");
	}
}
void destroycontact(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
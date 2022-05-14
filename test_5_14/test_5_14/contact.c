#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initcontact(struct contact*ps)
{
	//memset(ps->data, 0, sizeof(ps->data));
	//int sz = 0;
	ps->data = malloc(MAX * sizeof(struct people));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->max_time = MAX;
	//把文件中的信息加载进来
	loadcontact(ps);
}
void regulat(struct contact*ps);//声明函数
void loadcontact(struct contact*ps)
{
	struct people tmp = { 0 };
	FILE*pfread = fopen("contact.dat", "rb");
	if (pfread == NULL)
	{
		printf("loadcontact:%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(struct people), 1, pfread))
	{
		regulat(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfread);
	pfread = NULL;
}
void regulat(struct contact*ps)
{
	if (ps->max_time == ps->size)
	{
		struct people*str = realloc(ps->data, (ps->max_time + 2)*sizeof(struct people));
		if (str != NULL)
		{
			ps->data = str;
			ps->max_time += 2;
			printf("增容成功\n");
		}
		else
			printf("失败成功\n");
	}
}
void addcontact(struct contact*ps)
{
	regulat(ps);
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




	/*if (ps->size==1000)
	{
	printf("通讯录已满\n");
	return;
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
void showcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
int find(struct contact*ps, char name[max_name])
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
void delcontact(struct contact*ps)
{
	char name[max_name];
	printf("请输入要删除的名字:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("未找到要删除的名字\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void searchcontact(struct contact*ps)
{
	char name[max_name];

	printf("请输入要寻找的名字:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("未找到要寻找的名字\n");
	}
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifycontact(struct contact*ps)
{
	char name[max_name];

	printf("请输入要修改的名字:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("未找到要修改的名字\n");
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
		printf("修改成功\n");
	}
}
void sortcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
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
					struct people tmp;
					tmp = ps->data[j];
					ps->data[j] = ps->data[j + 1];
					ps->data[j + 1] = tmp;
				}
			}
		}
		printf("排序成功\n");
	}
}
void exitcontact(struct contact*ps)
{
	free(ps->data);
	ps->data = NULL;
}
void savecontact(struct contact*ps)
{
	FILE*pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("savecontact:%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct people), 1, pfwrite);
	}
	printf("保存成功\n");
	fclose(pfwrite);
	pfwrite = NULL;
}
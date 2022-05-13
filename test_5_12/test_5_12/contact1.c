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
void checkcapcity(struct contact*ps)//�������
{
	if (ps->size == ps->capacity)
	{
		struct peoinfo *ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");
	}
}
void addcontact(struct contact* ps)
{
	checkcapcity(ps);
	printf("����������:");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}*/
}
void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ���˵�����:");
	scanf("%s", name);
	int ret = Findbyname(ps, name);//�ҵ��˷����±꣬�Ҳ�������-1
	if (ret == -1)//if (ret == ps->size)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j <ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void searchcontact(const struct contact* ps)
{
	char name[max_name];
	printf("������Ҫ�����˵�����:");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifyconst(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫ�޸��˵�����:");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ����ֲ�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[ret].name);
		printf("����������:");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�:");
		scanf("%s", ps->data[ret].sex);
		printf("������绰:");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[ret].addr);
		printf("�޸����\n");
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
	//printf("����ɹ�\n");
	if (ps->size == 0)
	{
		printf("ͨѶ¼û����ϵ��\n");
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
		printf("����ɹ���\n");
	}
}
void destroycontact(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
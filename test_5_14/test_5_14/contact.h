#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>
#include<time.h>
#include<errno.h>
#define max_name 20
#define max_sex  5
#define max_tele 12
#define max_addr 30
#define MAX 3


enum option
{
	EXIT,
	add,
	del,
	search,
	modify,
	show,
	sort,
	save
};

struct people
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};

struct contact
{
	/*struct people data[1000];*/
	struct people *data;
	int size;
	int max_time;
};

void initcontact(struct contact*ps);
void addcontact(struct contact*ps);
void showcontact(struct contact*ps);
void delcontact(struct contact*ps);
void searchcontact(struct contact*ps);
void modifycontact(struct contact*ps);
void sortcontact(struct contact*ps);
void exitcontact(struct contact*ps);
void savecontact(struct contact*ps);
void loadcontact(struct contact*ps);
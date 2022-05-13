#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
struct s
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct s s = { 100, 3.14f, "bit" };
	struct s tmp = { 0 };
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(tmp.n), & (tmp.score),tmp.arr);
	printf("%d %f %s", tmp.n,tmp.score,tmp.arr);
	return 0;
}







//struct s
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct s s = { 0 };
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//struct s
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct s s = { 100, 3.14, "bit" };
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);
//	return 0;
//}




//int main()
//{
//	char buf[1024] = { 0 };
//	/*FILE*pf = fopen("test.txt", "r");*/
//	FILE*pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	//printf("%s",fgets(buf,1024,pf));
//	//printf("%s", fgets(buf, 1024, pf));
//
//	/*printf("%s", fgets(pf));*/
//	fclose(pf);
//	pf = NULL;
//}


//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c ",fgetc(pf));
//	printf("%c ", fgetc(pf));
//	printf("%c ", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//}




//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b',pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//}





//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//}








//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
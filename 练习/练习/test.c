#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	printf("������Ӣ��ֵ:");
	scanf("%d",&num);
	double ret = num * 2.54;
	printf("����ֵΪ: %f\n",ret);
	system("pause");
	return 0;
}

int main()
{
	printf("WeiXiLong\n");
	printf("Wei\n");
	printf("XiLong\n");
	printf("Wei");
	printf("XiLong\n");
	system("pause");
	return 0;
}


int main()
{
	printf("WeiXiLong ����ʡ������������ҵ��ѧ\n");
	system("pause");
	return 0;
}


#include<time.h>
int main()
{
	time_t t;
	struct tm* lt;
	time(&t);
	lt = localtime(&t);	
	int year;
	int month;
	int day;
	int num;
	printf("����������������-��-��:");
	scanf("%d-%d-%d",&year,&month,&day);
	printf("����ǰ��ʱ��Ϊ: ");
	printf("%d:%d:%d:\n",lt->tm_year+1900,lt->tm_mon+1,lt->tm_mday);
	num = (lt->tm_year + 1900 - year) * 365 + (lt->tm_mon - month) * 30 + lt->tm_mday - day;
	printf("����ǰ�Ѿ�����%d������\n",num);
	system("pause");
	return 0;
}

void Jolly()
{
	printf("For he's a jolly good fellow\n");
	printf("For he's a jolly good fellow\n");
	printf("For he's a jolly good fellow\n");
}
void Deny()
{
	printf("Which nobody can deny !\n");
}
int main()
{
	Jolly();
	Deny();
	system("pause");
	return 0;
}


void br()
{
	printf ("Brazil,Russia");
}
void ic()
{
	printf ("India,China");
}
int main()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");
	system("pause");
	return 0;
}


int main()
{
	int toes = 10;
	printf("%d %d %d\n",toes,toes*2,toes*toes);
	system("pause");
	return 0;
}

void Smile(int num)
{
	for(int i = num; i > 0; i--)
	printf("Smile!");
	printf("\n");
}

int main()
{
	Smile(3);
	Smile(2);
	Smile(1);
	system("pause");
	return 0;
}

void two()
{
	printf("two\nthree\n");
}
void one_three()
{
	printf("starting now:\n");
	printf("one\n");
	two();
	printf("done!\n");
}
int main()
{
	one_three();
	system("pause");
	return 0;
}




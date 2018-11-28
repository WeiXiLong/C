#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a)); //16
	printf("%d\n", sizeof(a + 0)); //4
	printf("%d\n", sizeof(*a));	 //4
	printf("%d\n", sizeof(a + 1)); //4
	printf("%d\n", sizeof(a[1]));	 //4
	printf("%d\n", sizeof(&a));	 //4
	printf("%d\n", sizeof(*&a));	 //16
	printf("%d\n", sizeof(&a + 1));//4
	printf("%d\n", sizeof(&a[0])); //4
	printf("%d\n", sizeof(&a[0] + 1));//4

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));			//6
	printf("%d\n", sizeof(arr + 0));		//4
	printf("%d\n", sizeof(*arr));			//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));			//4
	printf("%d\n", sizeof(&arr + 1));		//4
	printf("%d\n", sizeof(&arr[0] + 1));	//4

	printf("%d\n", strlen(arr));			//δ������Ϊ
	printf("%d\n", strlen(arr + 0));		//δ������Ϊ
	printf("%d\n", strlen(*arr));			//��������const char*��
	printf("%d\n", strlen(arr[1]));		//��������const char*��
	printf("%d\n", strlen(&arr));			//δ������Ϊ
	printf("%d\n", strlen(&arr + 1));		//δ������Ϊ
	printf("%d\n", strlen(&arr[0] + 1));	//δ������Ϊ

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));			//7
	printf("%d\n", sizeof(arr + 0));		//4
	printf("%d\n", sizeof(*arr));			//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));			//4
	printf("%d\n", sizeof(&arr + 1));		//4
	printf("%d\n", sizeof(&arr[0] + 1));	//4

	printf("%d\n", strlen(arr));			//6
	printf("%d\n", strlen(arr + 0));		//6
	printf("%d\n", strlen(*arr));			//*arr����const char*����
	printf("%d\n", strlen(arr[1]));		//arr[1]����char*����
	printf("%d\n", strlen(&arr));			//6
	printf("%d\n", strlen(&arr + 1));		//δ������Ϊ
	printf("%d\n", strlen(&arr[0] + 1));	//δ������Ϊ

	char *p = "abcdef";
	printf("%d\n", sizeof(p));			//4
	printf("%d\n", sizeof(p + 1));		//4
	printf("%d\n", sizeof(*p));			//1
	printf("%d\n", sizeof(p[0]));			//1
	printf("%d\n", sizeof(&p));			//4
	printf("%d\n", sizeof(&p + 1));		//4
	printf("%d\n", sizeof(&p[0] + 1));	//4

	printf("%d\n", strlen(p));			//6
	printf("%d\n", strlen(p + 1));		//5
	printf("%d\n", strlen(*p));			//*p ����char * ����
	printf("%d\n", strlen(p[0]));			//*p ����char * ����
	printf("%d\n", strlen(&p));			//δ������Ϊ�������p�ĵ�ַ
	printf("%d\n", strlen(&p + 1));		//δ������Ϊ
	printf("%d\n", strlen(&p[0] + 1));	//5

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));				//48
	printf("%d\n", sizeof(a[0][0]));			//4
	printf("%d\n", sizeof(a[0]));				//16
	printf("%d\n", sizeof(a[0] + 1));			//4
	printf("%d\n", sizeof(*(a[0] + 1)));		//4
	printf("%d\n", sizeof(a + 1));			//4
	printf("%d\n", sizeof(*(a + 1)));			//16 ȡ���ǵڶ���Ԫ��
	printf("%d\n", sizeof(&a[0] + 1));		//4	ȡ���ǵڶ��е�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));		//16
	printf("%d\n", sizeof(*a));				//16
	printf("%d\n", sizeof(a[3]));				//16
	system("pause");
	return 0;
}
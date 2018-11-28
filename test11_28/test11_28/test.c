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

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));			//6
	printf("%d\n", sizeof(arr + 0));		//4
	printf("%d\n", sizeof(*arr));			//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));			//4
	printf("%d\n", sizeof(&arr + 1));		//4
	printf("%d\n", sizeof(&arr[0] + 1));	//4

	printf("%d\n", strlen(arr));			//未定义行为
	printf("%d\n", strlen(arr + 0));		//未定义行为
	printf("%d\n", strlen(*arr));			//参数不是const char*型
	printf("%d\n", strlen(arr[1]));		//参数不是const char*型
	printf("%d\n", strlen(&arr));			//未定义行为
	printf("%d\n", strlen(&arr + 1));		//未定义行为
	printf("%d\n", strlen(&arr[0] + 1));	//未定义行为

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
	printf("%d\n", strlen(*arr));			//*arr不是const char*类型
	printf("%d\n", strlen(arr[1]));		//arr[1]不是char*类型
	printf("%d\n", strlen(&arr));			//6
	printf("%d\n", strlen(&arr + 1));		//未定义行为
	printf("%d\n", strlen(&arr[0] + 1));	//未定义行为

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
	printf("%d\n", strlen(*p));			//*p 不是char * 类型
	printf("%d\n", strlen(p[0]));			//*p 不是char * 类型
	printf("%d\n", strlen(&p));			//未定义行为，求得是p的地址
	printf("%d\n", strlen(&p + 1));		//未定义行为
	printf("%d\n", strlen(&p[0] + 1));	//5

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));				//48
	printf("%d\n", sizeof(a[0][0]));			//4
	printf("%d\n", sizeof(a[0]));				//16
	printf("%d\n", sizeof(a[0] + 1));			//4
	printf("%d\n", sizeof(*(a[0] + 1)));		//4
	printf("%d\n", sizeof(a + 1));			//4
	printf("%d\n", sizeof(*(a + 1)));			//16 取得是第二行元素
	printf("%d\n", sizeof(&a[0] + 1));		//4	取得是第二行地址
	printf("%d\n", sizeof(*(&a[0] + 1)));		//16
	printf("%d\n", sizeof(*a));				//16
	printf("%d\n", sizeof(a[3]));				//16
	system("pause");
	return 0;
}
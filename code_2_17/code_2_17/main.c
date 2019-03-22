//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));				//16
//	//printf("%d\n", sizeof(a + 0));			//4
//	//printf("%d\n", sizeof(*a));				//4
//	//printf("%d\n", sizeof(a + 1));			//4
//	//printf("%d\n", sizeof(a[1]));				//4
//	//printf("%d\n", sizeof(&a));				//4
//	//printf("%d\n", sizeof(*&a));				//16
//	//printf("%d\n", sizeof(&a + 1));			//4
//	//printf("%d\n", sizeof(&a[0]));			//4
//	//printf("%d\n", sizeof(&a[0] + 1));		//4
//
//	//字符数组									
//	//char arr[] = { 'a','b','c','d','e','f' };	
//	//printf("%d\n", sizeof(arr));				//6
//	//printf("%d\n", sizeof(arr + 0));			//4
//	//printf("%d\n", sizeof(*arr));				//1
//	//printf("%d\n", sizeof(arr[1]));				//1
//	//printf("%d\n", sizeof(&arr));				//4
//	//printf("%d\n", sizeof(&arr + 1));			//4
//	//printf("%d\n", sizeof(&arr[0] + 1));		//4
//	//printf("%d\n", strlen(arr));				//?
//	//printf("%d\n", strlen(arr + 0));			//?
//	//printf("%d\n", strlen(*arr));				//x
//	//printf("%d\n", strlen(arr[1]));			//x
//	//printf("%d\n", strlen(&arr));				//x
//	//printf("%d\n", strlen(&arr + 1));			//x
//	//printf("%d\n", strlen(&arr[0] + 1));		//x
//
//	//char arr[] = "abcdef";					
//	//printf("%d\n", sizeof(arr));				//7
//	//printf("%d\n", sizeof(arr + 0));			//4
//	//printf("%d\n", sizeof(*arr));				//1
//	//printf("%d\n", sizeof(arr[1]));			//1
//	//printf("%d\n", sizeof(&arr));				//4
//	//printf("%d\n", sizeof(&arr + 1));			//4
//	//printf("%d\n", sizeof(&arr[0] + 1));		//4
//	//printf("%d\n", strlen(arr));				//6
//	//printf("%d\n", strlen(arr + 0));			//6
//	//printf("%d\n", strlen(*arr));				//x
//	//printf("%d\n", strlen(arr[1]));			//x
//	//printf("%d\n", strlen(&arr));				//6
//	//printf("%d\n", strlen(&arr + 1));			//?
//	//printf("%d\n", strlen(&arr[0] + 1));		//5
//	//
//	//char *p = "abcdef";							
//	//printf("%d\n", sizeof(p));				//4
//	//printf("%d\n", sizeof(p + 1));			//4
//	//printf("%d\n", sizeof(*p));				//1
//	//printf("%d\n", sizeof(p[0]));				//1
//	//printf("%d\n", sizeof(&p));				//4
//	//printf("%d\n", sizeof(&p + 1));			//4
//	//printf("%d\n", sizeof(&p[0] + 1));		//4
//	//printf("%d\n", strlen(p));				//6
//	//printf("%d\n", strlen(p + 1));			//5
//	//printf("%d\n", strlen(*p));				//x
//	//printf("%d\n", strlen(p[0]));				//x
//	//printf("%d\n", strlen(&p));				//x
//	//printf("%d\n", strlen(&p + 1));			//x
//	//printf("%d\n", strlen(&p[0] + 1));		//x
//	//
//	//
//	//二维数组
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));				//48
//	//printf("%d\n", sizeof(a[0][0]));			//4
//	//printf("%d\n", sizeof(a[0]));				//16
//	//printf("%d\n", sizeof(a[0] + 1));			//4
//	//printf("%d\n", sizeof(*(a[0] + 1)));		//4
//	//printf("%d\n", sizeof(a + 1));			//4
//	//printf("%d\n", sizeof(*(a + 1)));			//16
//	//printf("%d\n", sizeof(&a[0] + 1));		//4
//	//printf("%d\n", sizeof(*(&a[0] + 1)));		//16
//	//printf("%d\n", sizeof(*a));				//16
//	//printf("%d\n", sizeof(a[3]));				//16
//
//	//int a[5] = { 1, 2, 3, 4, 5 };
//	//int *ptr = (int *)(&a + 1);
//	//printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	//int a[4] = { 1, 2, 3, 4 };
//	//int *ptr1 = (int *)(&a + 1);
//	//int *ptr2 = (int *)((int)a + 1);
//	//printf("%x,%x", ptr1[-1], *ptr2);
//
//	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//int *p;
//	//p = a[0];
//	//printf("%d", p[0]);
//
//	//int a[5][5];
//	//int(*p)[4];
//	//p = a;
//	//printf("a_ptr=%#p,p_ptr=%#p\n", &a[4][2], &p[4][2]);
//	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int *ptr1 = (int *)(&aa + 1);
//	//int *ptr2 = (int *)(*(aa + 1));
//	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	//char *a[] = { "work","at","alibaba" };
//	//char**pa = a;
//	//pa++;
//	//printf("%s\n", *pa);
//
//	//char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	//char**cp[] = { c + 3,c + 2,c + 1,c };
//	//char***cpp = cp;
//	//printf("%s\n", **++cpp);
//	//printf("%s\n", *--*++cpp + 3);
//	//printf("%s\n", *cpp[-2] + 3);
//	//printf("%s\n", cpp[-1][-1] + 1);
//
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%p\n", &a[1]);
//	printf("%p\n", (int)a + 1);
//	//printf("%d\n",(int)a + 1);
//	printf("%x,%d", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}
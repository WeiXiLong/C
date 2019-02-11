//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int arr[1024] = { 0 };
//	int n = 0;
//	int con = 0;
//	arr[0] = 1;
//	arr[1] = 1;
//	printf("请输入一个限制值n = ");
//	scanf("%d",&n);
//	for (int i = 2; i <= n; ++i) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//		con = arr[i];
//	}
//	printf("第n个斐波那契数列为 %d\n",con);
//	system("pause");
//	return 0;
//}
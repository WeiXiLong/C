//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void Reverse(char *arr,int size) {
//	int num;
//	char con;
//	printf("请输入你想要左旋转的字符数: ");
//	scanf("%d",&num);
//	int j = num * 2;
//	if (num == 1) {
//		con = arr[1];
//		arr[1] = arr[0];
//		arr[0] = con;
//	}else 
//	for (int i = 1; i <= num; ++i) {
//		con = arr[num - i];
//		arr[num - i] = arr[j - i];
//		arr[j - i] = con;
//	}
//}
//int main() {
//	char arr[] = "ABCDEFGH";
//	int size = sizeof(arr);
//	Reverse(arr,size);
//	for (int i = 0; i < size; ++i) {
//		printf("%c ",arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return  0;
//}
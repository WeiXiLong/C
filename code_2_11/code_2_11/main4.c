//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void Reverse(char *arr,int size) {
//	int num;
//	int j = 0;
//	char con[1024];
//	printf("请输入左旋转的数目 ");
//	scanf("%d",&num);
//	while (num <= size) {
//		if (num == 1) {
//			con[0] = arr[0];
//			for (int i = 0; i < size - 1; ++i) {
//				arr[i] = arr[i + 1];
//			}
//			arr[size - 1] = con[0];
//			//arr[size] = '\0';
//		}
//		else {
//			for (int i = 0; i < num; ++i) {
//				con[i] = arr[i];
//			}
//			for (int i = num; i < size; ++i) {
//				arr[i - num] = arr[i];
//			}
//			for (int i = size - num; j < num, i < size; ++j, ++i) {
//				arr[i] = con[j];
//			}
//		}
//	}
//	if (num >= size) {
//		printf("输入错误，请重新输入\n");
//	}
//}
//
//int Determin(char *arr, int size) {
//	char arr2[] = "aabcd";
//	int count = sizeof(arr2) - 1;
//	int arr3[sizeof(arr2) - 1] = { 0 };
//	int num = 0;
//	if (count != size  ) {
//		printf("不是旋转所得\n");
//	}
//	else {
//		for (int i = 0; i < size; ++i) {
//			int flag = 0;
//			for (int j = 0; j < count; ++j) {
//				if ((arr3[j] == 0) && (arr[i] == arr2[j])) {
//					arr3[j] = 1;
//					num++;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0) {
//				break;
//			}
//		}	
//	}
//	if (num == size) {
//		printf("是旋转所得\n");
//		return 1;
//	}
//	else {
//		printf("不是旋转所得\n");
//	}
//	for (int i = 0; i < size; ++i) {
//		if (arr2[i] = ( arr[i] + 32 )  || arr2[i] == (arr[i] - 32)) {
//			num++;
//		}
//	}
//	if (num == size) {
//		printf("是字母变换\n");
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "AABCD";
//	int size = sizeof(arr) - 1;
//	/*Reverse(arr,size);
//	for (int i = 0; i < size ; ++i) {
//		printf("%c ", arr[i]);
//	}
//	printf("\n");*/
//	printf("%d\n",Determin(arr, size));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//void Adjustment(int *arr,int size) {
//	int arr2[1024] = { 0 };
//	int j = 0;
//	for (int i = 1; i < size;++j, i = i + 2) {
//		arr2[j] = arr[i];
//	}
//	for (int i = 0; i < size; i = i + 2) {
//		arr2[j] = arr[i];
//		j++;
//	}
//	arr2[j] = 0;
//	for (int i = 0; i < size; ++i) {
//		arr[i] = arr2[i];
//	}
//}
//
//int main() {
//	int arr[] = {0,1,2,3,4,5,6,7,8};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Adjustment(arr,size);
//	for (int i = 0; i < size; ++i) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
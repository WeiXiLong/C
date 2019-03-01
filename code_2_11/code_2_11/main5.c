//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int arr[10] = {1,3,2,1,2,3,4,5,5,6};
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		int count = 0;
//		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); ++j) {
//			if (arr[i] - arr[j] != 0) {
//				count++;
//			}
//		}
//		if (count == (sizeof(arr) / sizeof(arr[0]) - 1)) {
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
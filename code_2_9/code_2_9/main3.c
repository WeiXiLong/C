//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int arr[10][10] = { 0 };
//	for (int i = 0; i <= 4; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			if (i >= 2 && j >= 1) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			else {
//				arr[i][j] = 1;
//			}
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
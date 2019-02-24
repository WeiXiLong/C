//#include<stdio.h>
//#include<stdlib.h>
//
//int Size(char  *arr) {
//	int count = 0;
//	for (int i = 0; arr[i] != '\0'; ) {
//		arr[i++];
//		count++;
//	}	
//	return count;
//}
//void Reverse(char  *arr, int size) {
//	char arr2[15];
//	int j = 0;
//	int count = 0;
//	for (int i = size - 2; i > 0, j < size - 1; ++j, --i) {
//		arr2[i] = arr[j];
//	}
//	for (int i = 0; i < size - 1; ++i) {
//		arr[i] = arr2[i];
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < size - 1;++i ) {
//		while (arr[i] != ' ' && arr[i] != '\0') {
//			++count;
//			++i;
//		}
//
//		if (count == 2) {
//			for (; count  - 1  > 0; count = count - 2) {
//				char con;
//				con = arr[i - count];
//				arr[i - count] = arr[i - count + 1];
//				arr[i - count + 1] = con;
//			}
//		}else if(count > 2) {
//				for (int j = 1; count - 1 > 0, j <= count; ++j,count--) {
//					char con;
//					con = arr[i - count];
//					arr[i - count] = arr[i - j];
//					arr[i - j] = con;
//				}
//			}
//		count = 0;
//	}
//	for (int i = 0; i < size - 1; ++i) {
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	char arr[] = "student a am i";
//	int size = Size(arr) + 1;
//	for (int i = 0; i < size - 1; ++i) {
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//	Reverse(arr,size);
//	system("pause");
//	return 0;
//}
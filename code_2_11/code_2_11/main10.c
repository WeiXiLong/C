#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strcmp(const char* arr1,const char* arr2) {
	assert(arr1 != NULL && arr2 != NULL);
	int size1 = strlen(arr1);
	int size2 = strlen(arr2);
	int i = 0;
	for( ; i < size1; ++i) {
		if ((arr1[i] == arr2[i]) ) {
			continue;
		}
		else if (arr1[i] > arr2[i]) {
			return 1;
		}
		else {
			return -1;
		}
	}
	if ((i == size1) && (size1 == size2)) {
		return 0;
	}else if ((i == size1) && (size1 < size2)) {
		return -1;
	}else if ((i == size1) && (size1 > size2)) {
		return 1;
	}
	return 0;
}
int main() {
	char arr1[] = "bcdef";
	char arr2[] = "bcdef";
	printf("%d\n",Strcmp(arr1,arr2));
	system("pause");
	return 0;
}
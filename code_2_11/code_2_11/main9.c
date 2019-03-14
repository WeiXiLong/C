#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>
char* Strchr(const char* str,int val) {
	assert(str != NULL);
	int con = 0;
	int k = 0;
	char arr[1024];
	int size = 0;
	int i = 0;
	while (str[i] != '\0') {
		++size;
		++i;
		}
	for (int i = 0; i < 8; ++i) {
		int tem = (	(val >> i) & 1);
		con = con + (int)pow(2, i) * tem ;
	}
	for (int i = 0; i < size; ++i) {
		if (str[i] == (char)con) {
			while (str[i] != '\0') {
				arr[k++] = str[i++];
			}
			arr[k] = '\0';
			return arr;
		}
	}
	return "null";
}

int main() {
	char str[] = "hahasdadad";
	printf("%s\n", Strchr(str, 'ddad'));
	//printf("%s\n", strchr(str, 'd'));
	system("pause");
	return 0;
}
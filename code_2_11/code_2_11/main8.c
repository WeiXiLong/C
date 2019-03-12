#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

char*  Strstr(const char *str1, const char *str2) {
	assert(str1 != NULL && str2 != NULL);
	unsigned int len1 = strlen(str1);
	unsigned int len2 = strlen(str2);
	while (*str1 != '\0') {
		int con = (int)len2;	
		const char* tem_str1 = str1;
		const char* tem_str2 = str2;
		while ((con--) && (*tem_str1 == *tem_str2)) {
			tem_str1++;
			tem_str2++;
		}
		if(con < 0) {
			return (char*)(tem_str1 - len2);
		}
		str1++;
	}
	return "null";
}

int main() {
	char str1[] = "i'm a student , a good boy";
	char str2[] = "des";
	printf("%s\n", Strstr(str1, str2));
	system("pause");
	return 0;
}
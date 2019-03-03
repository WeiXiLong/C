#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* Strcpy(char * dest, const char* src) {
	assert(dest != NULL && src != NULL);
	char* tem_dest = dest;
	while ((*dest++ = *src++) != '\0');
	return tem_dest;
}
int main() {
	char dest[1024];
	char src[] = "daadad";
	Strcpy(dest,src);
	printf("%s\n",dest);
	system("pause");
	return 0;
}
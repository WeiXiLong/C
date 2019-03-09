#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* Strcat(char *dest,const char* src) {
	assert(dest != NULL && src != NULL);
	char* tem_dest = dest;
	while (*dest != '\0') {
		dest++;
	}
	while ((*dest++ = *src++) != '\0');
	return tem_dest;
}
int main() {
	char dest[25] = "A test : ";
	char sour1[] = "this ";
	char sour2[] = "is ";
	char sour3[] = "a ";
	char sour4[] = "test "; 
	Strcat(dest, sour1);
	Strcat(dest, sour2);
	Strcat(dest, sour3);
	Strcat(dest, sour4);
	printf("%s\n",dest);
	system("pause");
	return 0;
}


//#define	SizeOf(dest) ((size_t)((char*)(&(dest)+ 1 )- (char *)&(dest)))
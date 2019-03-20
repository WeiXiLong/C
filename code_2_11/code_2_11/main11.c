#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

void *Memcpy(void* dest,const void* src , size_t count) {
	assert(dest != NULL && src != NULL);
	char* tem_dest = (char*)dest;
	const char* tem_src = (const char*)src;
	while (count--) {
		*tem_dest++ = *tem_src++;
	}
	return tem_dest;
}
int main() {
	char dest[20];
	char src[20] = "abcdef";
	Memcpy(dest, src, strlen(src)+1);
	printf("%s\n",dest);
	system("pause");
	return 0;
}
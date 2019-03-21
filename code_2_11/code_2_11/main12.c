#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void* Memmove(void* dest,const void* src,size_t count) {
	assert(dest != NULL && src != NULL);
	char* tem_dest = (char*)dest;
	const char* tem_src = (const char*)src;
	if (tem_src < tem_dest) {
		while (count--) {
			*tem_dest++ = *tem_src++;
		}
	}
	else if (tem_src > tem_dest) {
		tem_src = tem_src + count - 1;
		tem_dest = tem_dest + count - 1;
		while (count--) {
			*tem_dest-- = *tem_src--;
		}
	}
	return tem_dest;

}
int main() {
	char dest[20];
	char src[20] = "abcdef";
	Memmove(dest,src,strlen(src)+1);
	printf("%s\n",dest);
	system("pause");
	return 0;
}
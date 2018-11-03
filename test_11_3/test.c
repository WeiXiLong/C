1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Multiplication_Table(int* num) {
	int a = 1;
	int b = 1;
	for (; a <= *num; a++) {
		for (; b <= a; b++) {
			if (a*b > 9 && a*b < 100) {
			printf("%d*%d=%d  ", a, b, a*b);;
			}
			else if (a*b > 99) {
			printf("%d*%d=%d ", a, b, a*b);;
			}
			else {
				printf("%d*%d=%d   ", a, b, a*b);
			}
		}
		printf("\n");
		b = 1;
	}
}
int main()
{
	int num = 0;
	printf("请输入乘法表位数： ");
	scanf("%d",&num);
	Multiplication_Table(&num);
	system("pause");
	return 0;
}

2.使用函数实现两个数的交换。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Swap(int* a,int* b) {
	int c = 0;
	c =  *a;
	*a = *b;
	*b =  c;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个需要交换的数值:\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	Swap(&a,&b);
	printf("交换后的结果为：\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	system("pause");
	return 0;
}

3.实现一个函数判断year是不是润年。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Is_Leap_Year(int* year) {
	if (*year % 4 == 0 && *year % 100 != 0) {
		printf("该年是闰年\n");
	}
	else if (*year % 100 == 0 && *year % 400 == 0) {
		printf("该年是闰年\n");
	}else 
	printf("该年不是闰年\n");
}
int main()
{
	int year = 0;
	printf("请输入年份进行判断：");
	scanf("%d",&year);
	Is_Leap_Year(&year);
	system("pause");
	return 0;
}

4.
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Reverse(char* arr) {
	int num = strlen(arr) - 1;
	char tmp;
	int left = 0;
	int right = num;
	while(left <= right) {
		tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;
		left++;
		right--;
	}
}

int main()
{	
	char arr[MAX_SIZE];
	scanf("%s", arr);
	Reverse(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;
}

5.实现一个函数，判断一个数是不是素数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Is_PrimeNumber(int* num) { 
	int i = 2;
	for (; i < *num; i++) {
		if (*num % i == 0) {
			printf("该数字不是素数\n");
			break;
		}
	}
	if (i == *num) {
		printf("该数是素数\n");
	}
}
int main()
{
	int num = 0;
	printf("请输入一个数字：");
	scanf("%d",&num);
	Is_PrimeNumber(&num);
	system("pause");
	return 0;
}
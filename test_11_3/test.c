1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
	printf("������˷���λ���� ");
	scanf("%d",&num);
	Multiplication_Table(&num);
	system("pause");
	return 0;
}

2.ʹ�ú���ʵ���������Ľ�����
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
	printf("������������Ҫ��������ֵ:\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	Swap(&a,&b);
	printf("������Ľ��Ϊ��\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	system("pause");
	return 0;
}

3.ʵ��һ�������ж�year�ǲ������ꡣ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Is_Leap_Year(int* year) {
	if (*year % 4 == 0 && *year % 100 != 0) {
		printf("����������\n");
	}
	else if (*year % 100 == 0 && *year % 400 == 0) {
		printf("����������\n");
	}else 
	printf("���겻������\n");
}
int main()
{
	int year = 0;
	printf("��������ݽ����жϣ�");
	scanf("%d",&year);
	Is_Leap_Year(&year);
	system("pause");
	return 0;
}

4.
����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ��
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

5.ʵ��һ���������ж�һ�����ǲ���������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Is_PrimeNumber(int* num) { 
	int i = 2;
	for (; i < *num; i++) {
		if (*num % i == 0) {
			printf("�����ֲ�������\n");
			break;
		}
	}
	if (i == *num) {
		printf("����������\n");
	}
}
int main()
{
	int num = 0;
	printf("������һ�����֣�");
	scanf("%d",&num);
	Is_PrimeNumber(&num);
	system("pause");
	return 0;
}
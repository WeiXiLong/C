#define _CRT_SECURE_NO_WARNINGS 1
1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int FibonacciSequence(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return FibonacciSequence(n - 1) + FibonacciSequence(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d\n", FibonacciSequence(n));
	system("pause");
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int FibonacciSequence(int n) {
	int con1 = 1;
	int con2 = 1;
	int sum  = 0;
	for (int i = 1; i < n - 1; i++) { 
		sum = con1 + con2;
		con1 = con2;
		con2 = sum;
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", FibonacciSequence(n));
	system("pause");
	return 0;
}


2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int MyPow(int n ,int k) {
	if (k == 0) {
		return 1;
	} else if (k == 1) {
		return n;
	} else if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	return n * MyPow(n , k - 1);
}


int main() {
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	printf("%d ",MyPow(n,k));
	system("pause");
	return 0;
}














#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Coefficient(int k , coefficient[]){
	int con = 0;
	if (1) {
		for (int i = 1; i < k; i++) {
			con = coefficient[i] + coefficient[i - 1];
		}
	}
	Coefficient(k - 1);
	return coefficient[i];
}
int Tmp(int j,int num) {
	int con = j;
	int tmp = 1;
	while (con) {
		tmp *= num;
		con--;
	}
	return tmp;
}
int Power_Number(int n ,int k) {
	if (n == 1) {
		return 1;
	} else if(n == 0){
		return 0;
	} else if(n < 0){
		printf("��������迼��\n");
		return -1;
	}
	if (k == 1) {
		return n;
	} else if (k == 0) {
		return 1;
	} else if(k < 0){
		printf("��������迼��");
		return -1;
	}
	int num1 = 1; //��n^k ת��Ϊ(a+b)^n���ͣ�������num1 = 1 , num2 = n - 1;
	int num2 = n - 1;
	int coefficient[1024] = { 0 }; // ����ϵ������,��������ϵ�����飬�Է�������������ϵ�����
	//����ʽչ����һ������һ��ϵ����Ϊ1
	//k�ζ���ʽչ������k+1��
	//���迼��k=1�����
	coefficient[0] = 1;
	coefficient[k] = 1;

	int j = 0;
	int res = 0;
	for (int i = 0,j = k; j <= 0; j--,i++) {
		res += coefficient[i] * Tmp(j, num1) * Tmp(i,num2);
	}
	return res;
}

int main()
{
	int k = 0;
	int n = 1;
	scanf("%d %d",&n,&k);
	Coefficient(k);
	printf("%d \n",Power_Number(n,k));
	system("pause");
	return 0;
}






3. дһ���ݹ麯��digitsum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����digitsum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Digitsum(int num) {
	int con = 0;
	if (num > 0) {
		con = num % 10;
		con = con + Digitsum(num / 10);
	}
	return con;
	
}
int main()
{
	int num = 0;
	printf("������һ�����֣� ");
	scanf("%d",&num);
	printf("%d\n", Digitsum(num));
	system("pause");
	return 0;
}





4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��c�������е��ַ�������������

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_string(char *str) {
	if (strlen(str) > 0) {
		printf("%c ", str[strlen(str) - 1]);
		str[strlen(str )- 1] = '\0';
		reverse_string(str);
	}
}

int main() 
{
	char str[1024];
	gets(str);
	reverse_string(str);
	system("pause");
	return 0;
}


5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strlen(char* str)
{
	int i = 0;
	for (; str[i] != '\0'; i++);
	return i;
}

int main()
{
	char str[1024] = "0";
	gets(str);
	printf("%d\n",Strlen(str));
	system("pause");
	return 0;
}










int Strlen(char* str) {
	
	if (*str == '\0') {
		return 0;
	} 
	int i = Strlen(++str);
	i++;
}

int main()
{
	char str[1024];
	gets(str);
	printf("%d \n", Strlen(str));
	system("pause");
	return 0;
}



6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Factorial(int n) {
	if (n == 1) {
		return 1;;
	}
	return n * Factorial(n - 1);
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	printf("%d\n", Factorial(num));
	system("pause");
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Factorial(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", Factorial(num));
	system("pause");
	return 0;
}


7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Print(int num) {
	if (num > 10) {
	Print(num / 10);
	printf("%d ", num % 10);
	}
	else
		printf("%d ",num % 10);
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	Print(num);
	system("pause");
	return 0;
}
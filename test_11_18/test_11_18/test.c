#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
1.
写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}

int  Numers_one(int num) {
	int count = 0;
	int con = num;
	for (int i = 0; i < sizeof(int) * 8 ; con = num, ++i) {
		con = con >> i;
		if ( (con & 1) == 1) {
			count++;
		}
	}
	return count;
}

int main()
{
	int num = 0;
	printf("请输入数字进行移位：");
	scanf("%d",&num);
	printf("该数字中有 %d 位 1\n", Numers_one(num));
	system("pause");
	return 0;
}


2.获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。
int  main()
{
	int num = 0;
	printf("请输入一个数字:");
	scanf("%d",&num);
	int con = num;

	printf("偶数位的数字为: ");
	for (int i = 0; i < sizeof(num) * 8;con = num, i = i + 2) {
		con = con >> i;
		int tmp = (con & 1);
		printf("%d ",tmp);
	}	
	printf("\n");
	printf("奇数位的数字为: ");
	for (int i = 1; i < sizeof(num) * 8; con = num, i = i + 2) {
		con = con >> i;
		printf("%x ", (con & 1));
	}
	printf("\n");
	system("pause");
	return 0;
}




3. 输出一个整数的每一位。



int main() {
	int num = 0;
	printf("请输入一个数字:");
	scanf("%d",&num);
	int con = num;
	for (int i = 0; i < sizeof(int) * 8;con = num, ++i) {
		con = con >> i;
		printf("%d ",(con & 1) % 2);
	}
	printf("\n");
	system("pause");
	return 0;
}

4.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数字进行判断:");
	scanf("%d %d",&num1,&num2);
	int con1 = num1;
	int con2 = num2;
	int count = 0;
	for (int i = 0; i < sizeof(int) * 8;con1 = num1 ,con2 = num2 , ++i) {
		con1 = con1 >> i;
		con2 = con2 >> i;
		if (( (con1 & 1) ^ (con2 & 1) ) == 1) {
			count++;
		}
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}







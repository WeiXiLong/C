#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
1.
дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
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
	printf("���������ֽ�����λ��");
	scanf("%d",&num);
	printf("���������� %d λ 1\n", Numers_one(num));
	system("pause");
	return 0;
}


2.��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�
int  main()
{
	int num = 0;
	printf("������һ������:");
	scanf("%d",&num);
	int con = num;

	printf("ż��λ������Ϊ: ");
	for (int i = 0; i < sizeof(num) * 8;con = num, i = i + 2) {
		con = con >> i;
		int tmp = (con & 1);
		printf("%d ",tmp);
	}	
	printf("\n");
	printf("����λ������Ϊ: ");
	for (int i = 1; i < sizeof(num) * 8; con = num, i = i + 2) {
		con = con >> i;
		printf("%x ", (con & 1));
	}
	printf("\n");
	system("pause");
	return 0;
}




3. ���һ��������ÿһλ��



int main() {
	int num = 0;
	printf("������һ������:");
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

4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("�������������ֽ����ж�:");
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







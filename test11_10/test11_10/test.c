
#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<stdlib.h>

void move(char source, char dest) {
	printf("%c -> %c\n",source,dest);
}


void hanno_tower(int n ,char a,char b,char c){
	if (n == 1) {
		move(a,c);
	} else {
		hanno_tower(n - 1, a, c, b);
		move(a, c);
		hanno_tower(n - 1, b, a, c);
	}
}

int main()
{
	int num = 0;
	printf("��������Ҫ�ƶ�Բ�̲�����");
	scanf("%d",&num);
	hanno_tower(num,'a','b','c');
	system("pause");
	return 0;
}



#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<stdlib.h>

int frog_jump(int num) {
	if (num <= 0) {
		return 0;
	} else if (num == 1) {
		return 1;
	} else if (num == 2) {
		return 2;
	}
	return   frog_jump(num - 1) + frog_jump(num - 2);
}

int main()
{
	int num = 0;
	printf("������������Ҫ����̨������");
	scanf("%d", &num);
	printf("%d\n",frog_jump(num));
	system("pause");
	return 0;
}
��ŵ�������������׾���Ҫʹ�ô��»�С�ķ�ʽ�����ݹ�ķ�ʽ
���ݵݹ�Ķ�����Ҫ���ó������͵ݹ��ϵ���
������������ҵ����ڣ���β�������ɺ�ŵ�����������������������С��Բ���ƶ�����Ŀ����
��ô��a����ʼ�����ƶ���c(Ŀ����)�л��Ǵ�b�����������ƶ���c��ȥ��
�����ʣ���һ����С�����ӣ�˵��ǰn-1�����Ѿ��ƶ�����c�У�ʣ���������Ӷ��ǿ��Է����һ��Բ�̵�
Ϊ����ⷽ�����ǽ����һ��Բ������a��
���������������ǿ��ǹ�ϵ����
�����Եݹ�ΪԲ�̾�a��b���õ�c��
�ƶ���b�����Ǿ���Ҫ����c
�ƶ���c�����Ǿ���Ҫ����a���ݹ�������Ҫ˼�����巽��Ȼ�����ó�����伴�ɣ�
��Ƶ�c����������ʾ
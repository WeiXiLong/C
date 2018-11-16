#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
int g_arr[ROW][COL];
int Row;
int Col;
int count = 0;
//�����������Ҫ�ļ������裿
//1.����һ����ʼ��������
void  Init () {
	
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			g_arr[row][col] = ' ';
		}
	}
}

//2.�����úõ�������д�ӡ
void Print() {
	for (int row = 0; row < ROW; ++row) {
		printf(" --- --- ---\n");
		for (int col = 0; col < COL; ++col) {
			
			printf("| %c ", g_arr[row][col]);
		}
		printf("|");
		printf("\n");
	}
	printf(" --- --- ---\n");
}
//3.������ӣ��������ж�
void Player()
{
	int row = 0;
	int col = 0;
	while (1) {
	printf("������������꣺");	
		//fflush(stdin);
		//int a = gets();
		//printf("%d", a);
		//scanf("%d %d", &row, &col);	
		//while (getchar() != '\0');
		//fflush(stdin);
		//int key = scanf("%d %d", &row, &col);
		int key_input = scanf("%d %d", &row, &col);
		if (row < 0 || row >= ROW ||col < 0 || col >= COL) {
			printf("�����������������:\n");
			continue;
		} else if (key_input != 2) {
			//sizeof(row) != sizeof(int) || sizeof(col) != sizeof(int)
			//fflush(stdin);
			printf("�������ִ�������������:\n");	
			//while (sizeof(getchar()) != 4);
			//while (getchar() != '\0');
			//while (getchar() != '\0
			//while(getch()!='\0');
			continue;
		} else if (g_arr[row][col] != ' ') {
			printf("��λ���ѱ�ռ�ã�����������:\n");
			continue;
		} else if (g_arr[row][col] == ' '){
			g_arr[row][col] = 'x';
			Row = row;
			Col = col;
			count++;
			break;
		} 
	}
}

//4.�������ӣ��������ж�
void Computer()
{
	while (1) {
		printf("�������������: ");
		int row = rand() % ROW;
		int col = rand() % COL;
		printf("%d %d\n",row,col);
		if (g_arr[row][col] != ' ') {
			printf("��λ���ѱ�ռ�ã�����������\n");
			continue;
		}
		g_arr[row][col] = 'o';
		Row = row;
		Col = col;
		count++;
		break;
	}
}
int Winner()
{

	if (g_arr[Row][0] == 'x'&& g_arr[Row][1] == 'x'&& g_arr[Row][2] == 'x'
		|| g_arr[0][Col] == 'x' && g_arr[1][Col] == 'x' && g_arr[2][Col] == 'x'
		|| g_arr[0][0] == 'x'&& g_arr[1][1] == 'x' && g_arr[2][2] == 'x'
		|| g_arr[2][0] == 'x'&& g_arr[1][1] == 'x' && g_arr[0][2] == 'x'
		) {
		printf("���ʤ��\n");
		return 1;
	}else if (g_arr[Row][0] == 'o'&& g_arr[Row][1] == 'o' && g_arr[Row][2] == 'o'
		|| g_arr[0][Col] == 'o' && g_arr[1][Col] == 'o' && g_arr[2][Col] == 'o'
		|| g_arr[0][0] == 'o' && g_arr[1][1] == 'o' && g_arr[2][2] == 'o'
		|| g_arr[2][0] == 'o' && g_arr[1][1] == 'o' && g_arr[0][2] == 'o') {
		printf("����ʤ��\n");
		return 2;
	} else if (count >= ROW * COL) {
		printf("����Ϊ����\n");
		return -1;
	}
	 return 0;
}

//5.����ѭ�������˳�����
int main()
{
	int row = 0;
	int col = 0;
	char g_arr[ROW][COL] = {0};
	srand((unsigned int)time(0));
	Init();
	while (1) {
		Player();
		if (Winner() == 1) {
			break;
		}else if(Winner() == -1) {
			break;
		}
		Print();
		Computer();
		if (Winner() == 2) {
			break;
		} else if (Winner() == -1) {
			break;
		}
		Print();
	}
	system("pause");
	return 0;
}
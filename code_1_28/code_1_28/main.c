#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<time.h>
#define COL 3
#define ROW 3

char g_board[ROW][COL];
int  g_count = 0;
void Init() {
	srand((unsigned int)time(NULL));
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			g_board[row][col] = ' ';
		}
	}
}

void Print(){
	printf(" --- --- ---\n");
	for (int row = 0; row < ROW; ++row) {
		printf("| %c | %c | %c |\n",g_board[row][0],g_board[row][1],g_board[row][2]);
		printf(" --- --- ---\n");
	}
}

void PlayerMove() {
	printf("��������� ");
	while (1) {
		printf("�������������(row,col): ");
		int row, col;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
			printf("��������Ƿ�������������\n");
			continue;
		}else if (g_board[row][col] != ' ') {
			printf("��ǰλ�����������ӣ�����������\n");
			continue;
		}
		g_board[row][col] = 'x';
		g_count++;
		break;
	}
}

void ComputerMove() {
	printf("��������� ");
	while (1) {
		printf("�������������(row,col): ");
		int row = rand() % ROW;
		int col = rand() % COL;
		printf("%d %d\n",row,col);
		if (g_board[row][col] != ' ') {
			continue;
		}
		g_board[row][col] = 'o';
		g_count++;
		break;
	}
}
char CheckWinner() {
	//����С��С�б���Ƿ�����3��
	for (int row = 0; row < ROW; ++row) {
		if (g_board[row][0] == g_board[row][1] && g_board[row][0] == g_board[row][2]
		&& g_board[row][0] != ' ') {
			return g_board[row][0];
		}
	}
	for (int col = 0; col < COL; ++col) {
		if (g_board[0][col] == g_board[1][col] && g_board[0][col] == g_board[2][col]
			&& g_board[0][col] != ' ') {
			return g_board[0][col];
		}
	}
	if (g_board[0][0] == g_board[1][1] && g_board[0][0] == g_board[2][2]
		&& g_board[0][0] != ' ') {
		return g_board[0][0];
	} 
	if (g_board[2][0] == g_board[1][1] && g_board[2][0] == g_board[0][2]
		&& g_board[2][0] != ' '){
		return g_board[2][0];
	}
	if (g_count >= ROW * COL) {
		return 'q';
	}
	return ' ';
}
int main() {
	//1.���̵�ÿ��Ԫ�س�ʼ����Ϊ�ո�
	Init();
	char winner;
	while (1) {
		//2.��ӡ������(��һ���ǿհ�����)
		Print();
		//3.������ӣ��ж���Ϸ�Ƿ����
		PlayerMove();
		//���winnerΪx���ʤ�����winnerΪo����ʤ����Ϊ' 'ʤ��δ�֣�'q'��ʾ����
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		} 
		//4.�������ӣ��ж���Ϸ�Ƿ����
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("���ʤ��\n");
	}else if (winner == 'o') {
		printf("����ʤ��\n");
	}else {
		printf("����\n");
	}
	system("pause");
	return 0;
}
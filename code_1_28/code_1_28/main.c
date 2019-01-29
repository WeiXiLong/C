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
	printf("请玩家落子 ");
	while (1) {
		printf("请玩家输入坐标(row,col): ");
		int row, col;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
			printf("输入坐标非法，请重新输入\n");
			continue;
		}else if (g_board[row][col] != ' ') {
			printf("当前位置已有其他子，请重新输入\n");
			continue;
		}
		g_board[row][col] = 'x';
		g_count++;
		break;
	}
}

void ComputerMove() {
	printf("请电脑落子 ");
	while (1) {
		printf("请电脑输入坐标(row,col): ");
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
	//检查行、列、斜线是否连城3个
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
	//1.棋盘的每个元素初始化成为空格
	Init();
	char winner;
	while (1) {
		//2.打印出棋盘(第一次是空白棋盘)
		Print();
		//3.玩家落子，判定游戏是否结束
		PlayerMove();
		//如果winner为x玩家胜，如果winner为o电脑胜，若为' '胜负未分，'q'表示和棋
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		} 
		//4.电脑落子，判定游戏是否结束
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("玩家胜利\n");
	}else if (winner == 'o') {
		printf("电脑胜利\n");
	}else {
		printf("和棋\n");
	}
	system("pause");
	return 0;
}
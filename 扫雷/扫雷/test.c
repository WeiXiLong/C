#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW  9
#define COL  9
#define DEFAULT_MINE_COUNT 10

int Menu() {
	while (1) {
		printf("==============\n");
		printf("1.开始游戏\n");
		printf("0.结束游戏\n");
		printf("==============\n");
		int choice = 0;
		printf("请输入您的选择：");
		scanf("%d", &choice);
		if (choice != 1 && choice != 0) {
			printf("输入错误，请重新输入\n");
			continue;
		}
		return choice;
	}
}

void Init(char show_map[ROW + 2][COL + 2], char mine_map[ROW + 2][COL + 2]) {
	for (int row = 0; row < ROW + 2; ++row) {
		for (int col = 0; col < COL + 2; ++col) {
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < ROW + 2; ++row) {
		for (int col = 0; col < COL + 2; ++col) {
			mine_map[row][col] = '0';
		}
	}
	//对雷阵进行初始化，随机构成
	int mine_cnt = DEFAULT_MINE_COUNT;
	while (mine_cnt > 0) {
		int row = rand() % ROW + 1;
		int col = rand() % COL + 1;
		if (mine_map[row][col] == '1') {
			continue;
		}
		mine_map[row][col] = '1';
		--mine_cnt;
	}

}

void DisplayMap(char map[COL + 2][COL + 2]) {
	printf("    ");
	//打印第一行，纵坐标
	for (int i = 1; i <= COL; ++i) {
		printf("%d ", i);
	}
	printf("\n");
	printf("    ");
	for (int i = 1; i <= COL; ++i) {
		printf("--");
	}
	printf("\n");
	//按行打印具体的地图
	for (int row = 1; row <= ROW; ++row) {
		printf("%02d| ", row);
		for (int col = 1; col <= COL; ++col) {
			printf("%c ", map[row][col]);
		}
		printf("|");
		printf("\n");
	}
	printf("    ");
	for (int i = 1; i <= COL; ++i) {
		printf("--");
	}
	printf("\n");
}

void UpdateShowMap(char show_map[ROW + 2][COL + 2],char mine_map[ROW + 2][COL + 2],int row,int col){
	//这个函数要根据mine_map来计算row,col位置周围有几个雷
	//把这些结果更新到show_map中
	//此处8个位置不会越界，因为我们已经引入了边框[1,ROW]
	int mine_cnt = (mine_map[row - 1][col - 1] - '0') + (mine_map[row - 1][col ] - '0')
		+ (mine_map[row - 1][col + 1] - '0')+ (mine_map[row][col - 1] - '0')
		+ (mine_map[row][col + 1] - '0')+ (mine_map[row + 1][col - 1] - '0')
		+ (mine_map[row + 1][col] - '0') + (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_cnt;

	if (show_map[row][col] == '0') {
		for (int i = row - 1; i <= row + 1; ++i) {
			for (int j = col - 1; j <= col + 1; ++j) {
				if (show_map[i][j] == '*') {
					UpdateShowMap(show_map, mine_map, i, j);
				}
			}
		}
	}

}

void Game()
{
	//进行具体的游戏
	//使用两个二维数组表示地图，第一个地图表示给玩家展示的地图，第二个表示雷阵
	//加上边框
	//对于show_map可能存在以下几种情况
	//1.这个位置没有被占用，使用*表示
	//2.这个位置已经被占用，用具体的数字表示，字符类型的数字
	char show_map[ROW + 2][COL + 2];
	//里面的元素有以下集中情况
	//1.是地雷，使用字符1表示
	//2.不是地雷，用字符0表示
	char mine_map[ROW + 2][COL + 2];
	//对这两个数组进行初始化
	Init(show_map, mine_map);
	//打印初始地图
	DisplayMap(show_map);
	while (1) {
		//让玩家输入坐标，并判定坐标是否合法
		int row, col;
		printf("请玩家输入坐标：");
		scanf("%d %d",&row,&col);
		if (row <= 0 || row > ROW || col <= 0 || col > COL) {
			printf("输入不合法，请重新输入");
			continue;
		}
		//判定玩家是否踩雷，踩雷则结束
		if (mine_map[row][col] == '1') {
			printf("踩到雷了，请重新输入\n");
			DisplayMap(mine_map);
			break;
		}
		//统计该位置周围有几个雷，并将数字更新到地图上
		UpdateShowMap(show_map,mine_map,row,col);
		DisplayMap(show_map);
		
		//如果没踩雷，判定是否占了所有格子
		int blank_cnt_Up = 0;
		for (int i = 1; i <= ROW; ++i) {
			for (int j = 1; j <= COL; ++j) {
				if (show_map[i][j] != '*') {
					++blank_cnt_Up;
				}
			}
		}
		if (blank_cnt_Up == ROW * COL - DEFAULT_MINE_COUNT) {
			printf("恭喜您，游戏胜利\n");
			DisplayMap(mine_map);
			break;
		}
	}
}

void Start() {
	while (1) {
		int choice = Menu();
		if (choice == 0) {
			printf("游戏结束");
			break;
		}
		Game();
	}	

}

int main() {
	srand((unsigned)time(0));
	Start();
	system("pause");
	return 0;
}
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
		printf("1.��ʼ��Ϸ\n");
		printf("0.������Ϸ\n");
		printf("==============\n");
		int choice = 0;
		printf("����������ѡ��");
		scanf("%d", &choice);
		if (choice != 1 && choice != 0) {
			printf("�����������������\n");
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
	//��������г�ʼ�����������
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
	//��ӡ��һ�У�������
	for (int i = 1; i <= COL; ++i) {
		printf("%d ", i);
	}
	printf("\n");
	printf("    ");
	for (int i = 1; i <= COL; ++i) {
		printf("--");
	}
	printf("\n");
	//���д�ӡ����ĵ�ͼ
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
	//�������Ҫ����mine_map������row,colλ����Χ�м�����
	//����Щ������µ�show_map��
	//�˴�8��λ�ò���Խ�磬��Ϊ�����Ѿ������˱߿�[1,ROW]
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
	//���о������Ϸ
	//ʹ��������ά�����ʾ��ͼ����һ����ͼ��ʾ�����չʾ�ĵ�ͼ���ڶ�����ʾ����
	//���ϱ߿�
	//����show_map���ܴ������¼������
	//1.���λ��û�б�ռ�ã�ʹ��*��ʾ
	//2.���λ���Ѿ���ռ�ã��þ�������ֱ�ʾ���ַ����͵�����
	char show_map[ROW + 2][COL + 2];
	//�����Ԫ�������¼������
	//1.�ǵ��ף�ʹ���ַ�1��ʾ
	//2.���ǵ��ף����ַ�0��ʾ
	char mine_map[ROW + 2][COL + 2];
	//��������������г�ʼ��
	Init(show_map, mine_map);
	//��ӡ��ʼ��ͼ
	DisplayMap(show_map);
	while (1) {
		//������������꣬���ж������Ƿ�Ϸ�
		int row, col;
		printf("������������꣺");
		scanf("%d %d",&row,&col);
		if (row <= 0 || row > ROW || col <= 0 || col > COL) {
			printf("���벻�Ϸ�������������");
			continue;
		}
		//�ж�����Ƿ���ף����������
		if (mine_map[row][col] == '1') {
			printf("�ȵ����ˣ�����������\n");
			DisplayMap(mine_map);
			break;
		}
		//ͳ�Ƹ�λ����Χ�м����ף��������ָ��µ���ͼ��
		UpdateShowMap(show_map,mine_map,row,col);
		DisplayMap(show_map);
		
		//���û���ף��ж��Ƿ�ռ�����и���
		int blank_cnt_Up = 0;
		for (int i = 1; i <= ROW; ++i) {
			for (int j = 1; j <= COL; ++j) {
				if (show_map[i][j] != '*') {
					++blank_cnt_Up;
				}
			}
		}
		if (blank_cnt_Up == ROW * COL - DEFAULT_MINE_COUNT) {
			printf("��ϲ������Ϸʤ��\n");
			DisplayMap(mine_map);
			break;
		}
	}
}

void Start() {
	while (1) {
		int choice = Menu();
		if (choice == 0) {
			printf("��Ϸ����");
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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#define MAX_ROW 3 //һ��������,һ��������
#define MAX_COL 3

int isFull(char chessFlood[MAX_ROW][MAX_COL]) {
	// �ҿո�. ����Ҳ���, ��������
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessFlood[row][col] == ' ') {
				// ����ҵ� �ո� ˵��û��
				return 0;
			}
		}
	}
	return 1;
}

char isWin(char chessFlood[MAX_ROW][MAX_COL]) {
	// �ж����е���
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessFlood[row][0] != ' '&& chessFlood[row][0] == chessFlood[row][1]&& chessFlood[row][0] == chessFlood[row][2]) {
		return chessFlood[row][0];
		}
	}
	// �ж����е���
	for (int col = 0; col < MAX_COL; col++) {
		if (chessFlood[0][col] != ' '&& chessFlood[0][col] == chessFlood[1][col]&& chessFlood[0][col] == chessFlood[2][col]) {
			return chessFlood[0][col];
		}
	}

	// �ж������Խ���
	if (chessFlood[0][0] != ' '	&& chessFlood[0][0] == chessFlood[1][1]&& chessFlood[0][0] == chessFlood[2][2]) {
		return chessFlood[0][0];
	}
	if (chessFlood[2][0] != ' '&& chessFlood[2][0] == chessFlood[1][1]&& chessFlood[2][0] == chessFlood[0][2]) {
		return chessFlood[2][0];
	}

	// �ж��Ƿ����

	// ���������Ƿ���ʣ��ռ�
	if (isFull(chessFlood)) {
		return 'q';
	}
	return ' ';
}

void computerMove(char chessFlood[MAX_ROW][MAX_COL]) {//��������
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
     	if (chessFlood[row][col] != ' ') {
			continue;
		}
		chessFlood[row][col] = 'o';
		break;
	}
}

void playerMove(char chessFlood[MAX_ROW][MAX_COL]) {// ���������
	while (1) {
		printf(" �������������(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {//�����������ĸ�ʽ
			printf("�������겻�ںϷ���Χ��,�����������Ϊ[0, 2]\n");
			continue;

		}

		if (chessFlood[row][col] != ' ') {
			printf("��������λ���Ѿ�������!\n");
			continue;
		}
		chessFlood[row][col] = 'x';
		break;
	}
}

void printChess(char chessFlood[MAX_ROW][MAX_COL]) {
	int linenum = 0;
	int row = 0, col = 0;
	printf("  |  0       1       2");
	printf("\n--+-----------------------\n");
	for (row; row < MAX_ROW; row++,linenum++) {
		printf("%d", linenum);
		for (col; col < MAX_COL; col++) {
			printf(" |  %c  |", chessFlood[row][col]);
		}
		col = 0;
		printf("\n--------------------------\n");
	}
}
void init(char chessFlood[MAX_ROW][MAX_COL]) {//��ά����Ƚ�����,����ֱ�ӽ����޸Ĳ�����ֵ
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessFlood[row][col] = ' ';
		}
	}

}
char chessFlood[MAX_ROW][MAX_COL] = { 0 };
void game() {//�������Ϸ����
	//����һ�����麯��,���ҳ�ʼ��
	
	init(chessFlood);//������ʼ��
	char winner = ' ';
	while (1) {
		printChess(chessFlood);//��ӡ���̸����ǿ�
		playerMove(chessFlood);//�������

		//����Ҫ�ж���Ӯ
		 winner = isWin(chessFlood);
		if (winner != ' ') {
			break;
		}
		computerMove(chessFlood);//��������

		winner = isWin(chessFlood);
		if (winner != ' ') {
		break;
		}
	}
	printChess(chessFlood);
	if (winner == 'x') {
		printf("��ϲ��, ��Ӯ��!\n");
	}
	else if (winner == 'o') {
		printf("���ź�, ������!\n");
	}
	else {
		printf("���ź�, �����˺;�!\n");
	}
}
int menu() {//����һ������,�������н����ӡ
	int input = 0;
	printf("***************************************\n");
	printf("********      1.������Ϸ     **********\n");
	printf("********      0.�˳���Ϸ     **********\n");
	printf("***************************************\n");
	printf("����������ѡ��:\n");
	scanf("%d", &input);
	return input;
}
int main() {
	srand((unsigned int)time(NULL));
	//1.���һ������˵�����
	while (1) { 
		int choice = menu(); 
		if (choice == 1) {
			game();//������Ϸ
		}
		else if (choice == 0) {
			printf("���Ѿ��˳���Ϸ,�ټ�!");
			break;
		}
		else {
			printf("������������,����������!\n");
			continue;
		}
	}
	return 0;
  }
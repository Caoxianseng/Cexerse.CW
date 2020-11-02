#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#define MAX_ROW 3 //一个用于行,一个用于列
#define MAX_COL 3

int isFull(char chessFlood[MAX_ROW][MAX_COL]) {
	// 找空格. 如果找不到, 就是满了
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessFlood[row][col] == ' ') {
				// 如果找到 空格 说明没满
				return 0;
			}
		}
	}
	return 1;
}

char isWin(char chessFlood[MAX_ROW][MAX_COL]) {
	// 判定所有的行
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessFlood[row][0] != ' '&& chessFlood[row][0] == chessFlood[row][1]&& chessFlood[row][0] == chessFlood[row][2]) {
		return chessFlood[row][0];
		}
	}
	// 判定所有的列
	for (int col = 0; col < MAX_COL; col++) {
		if (chessFlood[0][col] != ' '&& chessFlood[0][col] == chessFlood[1][col]&& chessFlood[0][col] == chessFlood[2][col]) {
			return chessFlood[0][col];
		}
	}

	// 判定两个对角线
	if (chessFlood[0][0] != ' '	&& chessFlood[0][0] == chessFlood[1][1]&& chessFlood[0][0] == chessFlood[2][2]) {
		return chessFlood[0][0];
	}
	if (chessFlood[2][0] != ' '&& chessFlood[2][0] == chessFlood[1][1]&& chessFlood[2][0] == chessFlood[0][2]) {
		return chessFlood[2][0];
	}

	// 判定是否和棋

	// 看棋盘中是否有剩余空间
	if (isFull(chessFlood)) {
		return 'q';
	}
	return ' ';
}

void computerMove(char chessFlood[MAX_ROW][MAX_COL]) {//电脑落子
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

void playerMove(char chessFlood[MAX_ROW][MAX_COL]) {// 让玩家落子
	while (1) {
		printf(" 请玩家输入坐标(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {//检验玩家输入的格式
			printf("您的坐标不在合法范围内,所输入的区间为[0, 2]\n");
			continue;

		}

		if (chessFlood[row][col] != ' ') {
			printf("您的坐标位置已经有子了!\n");
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
void init(char chessFlood[MAX_ROW][MAX_COL]) {//二维数组比较特殊,可以直接进行修改参数的值
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessFlood[row][col] = ' ';
		}
	}

}
char chessFlood[MAX_ROW][MAX_COL] = { 0 };
void game() {//定义的游戏函数
	//定义一个数组函数,并且初始化
	
	init(chessFlood);//用来初始化
	char winner = ' ';
	while (1) {
		printChess(chessFlood);//打印棋盘给人们看
		playerMove(chessFlood);//玩家落子

		//接着要判断输赢
		 winner = isWin(chessFlood);
		if (winner != ' ') {
			break;
		}
		computerMove(chessFlood);//电脑落子

		winner = isWin(chessFlood);
		if (winner != ' ') {
		break;
		}
	}
	printChess(chessFlood);
	if (winner == 'x') {
		printf("恭喜您, 您赢了!\n");
	}
	else if (winner == 'o') {
		printf("很遗憾, 您输了!\n");
	}
	else {
		printf("很遗憾, 您下了和局!\n");
	}
}
int menu() {//定义一个函数,用来进行界面打印
	int input = 0;
	printf("***************************************\n");
	printf("********      1.进入游戏     **********\n");
	printf("********      0.退出游戏     **********\n");
	printf("***************************************\n");
	printf("请输入您的选择:\n");
	scanf("%d", &input);
	return input;
}
int main() {
	srand((unsigned int)time(NULL));
	//1.设计一个进入菜单界面
	while (1) { 
		int choice = menu(); 
		if (choice == 1) {
			game();//进入游戏
		}
		else if (choice == 0) {
			printf("您已经退出游戏,再见!");
			break;
		}
		else {
			printf("您的输入有误,请重新输入!\n");
			continue;
		}
	}
	return 0;
  }
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#define M 5
#define N 4
//定义一个函数,用来求得素数
int getResult(int n) {
	if (n == 0 && n == 1)
		return 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;//说明就是素数
}

//定义一个函数,用来求冒泡排序
void bubbleSort(int array[]) {
	int temp = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 1; i < 10 - j; i++) {
			if (array[i] < array[i - 1]) {
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
	}
}

//定义一个函数用来处理学生信息
void addGrade(int a[M][N]) {//定义一个函数,用来进行学生信息的输入
	while (1) {
		printf("请输入您想要改变的信息的学生姓名:\n");
		string input;
		cin >> input;
		if (!strcmp(input.c_str(), "caowen")) {
			printf("请您输入想要输入的成绩");
			for (int col = 0; col < N; col++) {
				cin >> a[0][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "zhaoyukun"))
		{
			printf("请您输入想要输入的成绩");
			for (int col = 0; col < N; col++) {
				cin >> a[1][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "chengjiale"))
		{
			printf("请您输入想要输入的成绩");
			for (int col = 0; col < N; col++) {
				cin >> a[2][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "yueleilei"))
		{
			printf("请您输入想要输入的成绩");
			for (int col = 0; col < N; col++) {
				cin >> a[3][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "xiaoming"))
		{
			printf("请您输入想要输入的成绩");
			for (int col = 0; col < N; col++) {
				cin >> a[4][col];
			}continue;
		}
		else {
			cout << "您输入有误退出" << endl;
			break;
		}
	}

	}

void lookFor(int a[M][N]) {//这个函数用来进行信息查询
	while (1) {
		printf("请您输入您想要查询的学生的信息");
		string input;
		cin >> input;
		if (!strcmp(input.c_str(), "caowen")) {
			for (int col = 0; col < N; col++) {
				cout << a[0][col]<<"    ";
			}cout << endl;
		}
		else if (!strcmp(input.c_str(), "zhaoyukun"))
		{
			for (int col = 0; col < N; col++) {
				cout << a[1][col] << "    ";
			}cout << endl;
		}
		else if (!strcmp(input.c_str(), "chengjiale"))
		{
			for (int col = 0; col < N; col++) {
				cout << a[2][col]<< "    ";
			}cout << endl;
		}
		else if (!strcmp(input.c_str(), "yueleilei"))
		{
			for (int col = 0; col < N; col++) {
				cout << a[3][col] << "    ";
			}cout << endl;
		}
		else if (!strcmp(input.c_str(), "xiaoming"))
		{
			for (int col = 0; col < N; col++) {
				cout << a[4][col] << "    ";
			}cout << endl;
		}
		else {
			cout << "您已退出" << endl;
			break;
		}
	}
}
void sort(int a[M][N]) {//定义一个函数,用来排序
	while(1){
		printf("输入您想要排序的成绩,请按(1 - 4)");
		int input = 0;
		cin >> input;
		if (input == 1) {
			int temp = 0;
			for (int j = 0; j < M; j++) {
				for (int i = 1; i < M - j; i++) {
					if (a[i][0] < a[i - 1][0]) {
						temp = a[i][0];
						a[i][0] = a[i-1][0];
						a[i - 1][0] = temp;
					}
				}
			}
			cout << "第一门成绩的排序如下" << endl;
			for (int i = 0; i < M; i++){
				cout  << a[i][0] << "   ";
		}
			cout << endl;
			continue;
		}else if (input == 2) {
			int temp = 0;
			for (int j = 0; j < M; j++) {
				for (int i = 1; i < M - j; i++) {
					if (a[i][1] < a[i - 1][1]) {
						temp = a[i][1];
						a[i][1] = a[i - 1][1];
						a[i - 1][1] = temp;
					}
				}
			}
			cout << "第二门成绩的排序如下" << endl;
			for (int i = 0; i < M; i++) {
				cout << a[i][1] << "   ";
			}
			cout << endl;
			continue;
		}else if (input == 3) {
			int temp = 0;
			for (int j = 0; j < M; j++) {
				for (int i = 1; i < M - j; i++) {
					if (a[i][2] < a[i - 1][2]) {
						temp = a[i][2];
						a[i][2] = a[i - 1][2];
						a[i - 1][2] = temp;
					}
				}
			}
			cout << "第一门成绩的排序如下" << endl;
			for (int i = 0; i < M; i++) {
				cout << a[i][2] << "   ";
			}
			cout << endl;
			continue;
		}else if (input == 4) {
			int temp = 0;
			for (int j = 0; j < M; j++) {
				for (int i = 1; i < M - j; i++) {
					if (a[i][3] < a[i - 1][3]) {
						temp = a[i][3];
						a[i][3] = a[i - 1][3];
						a[i - 1][3] = temp;
					}
				}
			}
			cout << "第一门成绩的排序如下" << endl;
			for (int i = 0; i < M; i++) {
				cout << a[i][3] << "   ";
			}
			cout << endl;
			continue;
		}
		else {
			cout << "您已经退出" << endl;
			break;
		}
	}

}

int main() {
	/*for (int n = 1; n <= 100; n++) {
		int z = getResult(n);
		if (z == 1)
		cout << n << "  ";
	}//以上用来测试素数
	cout << endl;

	int array[10] = {0,4,5,9,6,7,8,2,45,79};
	bubbleSort(array);
	for (int i = 0; i < 10; i++) {
		cout << array[i] << "  ";
	}//测试冒泡排序
	*/
	string  studentname[M] = { "caowen","zhaoyukun","chengjiale","yueleilei","xiaoming" };
	int grade[M][N] = { {80,80,80,80},{90,90,90,90},{95,95,95,95},{100,100,100,100},{75,75,75,75} };
	cout << "*************************" << endl;
	cout << "*** 欢迎进入成绩系统  ***" << endl;
	cout << "***     1.查询成绩    ***" << endl;
	cout << "***     2.录入成绩    ***" << endl;
	cout << "***     3.成绩排名    ***" << endl;
	cout << "*************************" << endl;
	printf("附:每次操作如果想退出,请按tuichu\n");
	while (1) {
		int input = 0;
		printf("请输入您的选择:\n");
		cin >> input;
		switch (input) {
			{
		case 1:lookFor(grade); break;
		case 2:addGrade(grade); break;
		case 3:sort(grade); break; 
		default:printf("已经退出"); break;
		}
	}
	cout << endl;
	printf("欢迎下次查询\n");
}
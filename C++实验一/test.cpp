#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#define M 5
#define N 4
//����һ������,�����������
int getResult(int n) {
	if (n == 0 && n == 1)
		return 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;//˵����������
}

//����һ������,������ð������
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

//����һ��������������ѧ����Ϣ
void addGrade(int a[M][N]) {//����һ������,��������ѧ����Ϣ������
	while (1) {
		printf("����������Ҫ�ı����Ϣ��ѧ������:\n");
		string input;
		cin >> input;
		if (!strcmp(input.c_str(), "caowen")) {
			printf("����������Ҫ����ĳɼ�");
			for (int col = 0; col < N; col++) {
				cin >> a[0][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "zhaoyukun"))
		{
			printf("����������Ҫ����ĳɼ�");
			for (int col = 0; col < N; col++) {
				cin >> a[1][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "chengjiale"))
		{
			printf("����������Ҫ����ĳɼ�");
			for (int col = 0; col < N; col++) {
				cin >> a[2][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "yueleilei"))
		{
			printf("����������Ҫ����ĳɼ�");
			for (int col = 0; col < N; col++) {
				cin >> a[3][col];
			}continue;
		}
		else if (!strcmp(input.c_str(), "xiaoming"))
		{
			printf("����������Ҫ����ĳɼ�");
			for (int col = 0; col < N; col++) {
				cin >> a[4][col];
			}continue;
		}
		else {
			cout << "�����������˳�" << endl;
			break;
		}
	}

	}

void lookFor(int a[M][N]) {//�����������������Ϣ��ѯ
	while (1) {
		printf("������������Ҫ��ѯ��ѧ������Ϣ");
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
			cout << "�����˳�" << endl;
			break;
		}
	}
}
void sort(int a[M][N]) {//����һ������,��������
	while(1){
		printf("��������Ҫ����ĳɼ�,�밴(1 - 4)");
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
			cout << "��һ�ųɼ�����������" << endl;
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
			cout << "�ڶ��ųɼ�����������" << endl;
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
			cout << "��һ�ųɼ�����������" << endl;
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
			cout << "��һ�ųɼ�����������" << endl;
			for (int i = 0; i < M; i++) {
				cout << a[i][3] << "   ";
			}
			cout << endl;
			continue;
		}
		else {
			cout << "���Ѿ��˳�" << endl;
			break;
		}
	}

}

int main() {
	/*for (int n = 1; n <= 100; n++) {
		int z = getResult(n);
		if (z == 1)
		cout << n << "  ";
	}//����������������
	cout << endl;

	int array[10] = {0,4,5,9,6,7,8,2,45,79};
	bubbleSort(array);
	for (int i = 0; i < 10; i++) {
		cout << array[i] << "  ";
	}//����ð������
	*/
	string  studentname[M] = { "caowen","zhaoyukun","chengjiale","yueleilei","xiaoming" };
	int grade[M][N] = { {80,80,80,80},{90,90,90,90},{95,95,95,95},{100,100,100,100},{75,75,75,75} };
	cout << "*************************" << endl;
	cout << "*** ��ӭ����ɼ�ϵͳ  ***" << endl;
	cout << "***     1.��ѯ�ɼ�    ***" << endl;
	cout << "***     2.¼��ɼ�    ***" << endl;
	cout << "***     3.�ɼ�����    ***" << endl;
	cout << "*************************" << endl;
	printf("��:ÿ�β���������˳�,�밴tuichu\n");
	while (1) {
		int input = 0;
		printf("����������ѡ��:\n");
		cin >> input;
		switch (input) {
			{
		case 1:lookFor(grade); break;
		case 2:addGrade(grade); break;
		case 3:sort(grade); break; 
		default:printf("�Ѿ��˳�"); break;
		}
	}
	cout << endl;
	printf("��ӭ�´β�ѯ\n");
}
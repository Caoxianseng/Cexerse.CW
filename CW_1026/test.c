#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
//����һ������������n�Ľ׳�
//һ����
int lMul(int n) {
	int result = 1;
	if (n == 0) {
		return result;
	}
	for (int i = 1; i <= n; i++) {
		result = i * result;
	}
	return result;
  }
//�ݹ����
int lMul1(int n) {
	int result = 1;
	if (n == 0) {
		return result;
	}
	else if (n == 1) {
		return result;
	}
	else
		return  n * lMul1(n - 1);
	
}

//����һ��������1!+2!+3!+......n!
int addMul(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int result = 1;
		for (int j = 1; j <= i; j++) {
			result = j * result;
		}
		sum = sum + result;
	}
	return sum;
}

//����һ��������������ĳ������,Ҳ���Ƕ��ֲ���
void findNum(int array[], int toFind, int num) {
	int left = 0;
	int right = num - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (array[mid] < toFind) {
			left = mid + 1;
		}
		else if (array[mid] > toFind) {
			right = mid - 1;
		}
		else if (array[mid] == toFind) {
			printf("������ĽǱ�Ϊ:%d", mid);
			break;
		}
	}
	if (left > right) {
		printf("�Ҳ��������");
	}
}

//����һ������,������ʾ�ַ��������ƶ�,���м���
void exchangeForm() {
	char array1[] = "LYP IS SO WELL!";
	char array2[] = "###############";
	int left = 0;
	int right = strlen(array1) - 1;
	printf("%s\n", array2);
	while (left <= right) {
		Sleep(300);
		system("cls");
		array2[left] = array1[left];
		array2[right] = array1[right];
		printf("%s\n", array2);
		left++;
		right--;
	}
}
//����һ������ʵ��������������,��ȷ,���½�ɹ�,�����������˳�����
void inPassword() {
	for (int i = 0; i < 3; i++) {
		char input[20] = " ";
		char password[20] = "cw61527";
		printf("***************��������������:****************\n");
		scanf_s("%s",input);
		if (strcmp(input,password) == 0) {
			printf("��ӭ�ɹ�����ϵͳ");
			break;
		}
		else {
			printf("������������");
		}
	}
}


int main() {
	printf("%d\n", lMul(0));//����һ����׳˷���
	printf("%d\n", lMul1(0));//���ݹ����

	printf("%d\n", addMul(6));//�����׳˵ĺ�

	int array[] = { 1,2,3,4,5,6,7,8,9 };
	int length = sizeof(array) / sizeof(array[0]);
	 findNum(array, 6, length);//�������Զ��ֲ��ҵ�

	 //exchangeForm();//���Զ���

	 inPassword();
	return 0;
}